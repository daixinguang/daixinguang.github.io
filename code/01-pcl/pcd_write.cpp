#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/visualization/pcl_visualizer.h>

int main() {
    // 使用智能指针创建点云
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);

    // 填充随机数据
    cloud->width = 5;
    cloud->height = 1;
    cloud->is_dense = false;
    cloud->resize(cloud->width * cloud->height);

    for (auto& point : *cloud) {
        point.x = 1024 * rand() / (RAND_MAX + 1.0f);
        point.y = 1024 * rand() / (RAND_MAX + 1.0f);
        point.z = 1024 * rand() / (RAND_MAX + 1.0f);
    }

    // 保存点云
    pcl::io::savePCDFileASCII("test_pcd.pcd", *cloud);
    std::cerr << "Saved " << cloud->size() << " points to test_pcd.pcd." << std::endl;

    // 可视化
    pcl::visualization::PCLVisualizer viewer("PCL Viewer");
    viewer.addPointCloud<pcl::PointXYZ>(cloud, "sample cloud");  // 关键修复：传递智能指针
    viewer.setBackgroundColor(0, 0, 0);
    viewer.addCoordinateSystem(1.0);

    while (!viewer.wasStopped()) {
        viewer.spinOnce(100);
    }

    return 0;
}