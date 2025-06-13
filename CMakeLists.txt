cmake_minimum_required(VERSION 3.30.3)
project(flowerctlsys)
#设置库文件存放位置
set(LIBPATH ${PROJECT_SOURCE_DIR}/lib)
set(SQLLIBPATH ${PROJECT_SOURCE_DIR}/Mysql/SqlLib)
#设置可执行文件存放位置
set(EXEPATH ${PROJECT_SOURCE_DIR}/bin)
#设置头文件存放位置
set(HEADPATH ${PROJECT_SOURCE_DIR}/include)
#设置数据库头文件位置
set(SQLHEADPATH ${PROJECT_SOURCE_DIR}/Mysql/SqlInclude)

#定义库文件名称
set(TOOLS tools)
set(FlowerSys flowers)

#定义可执行文件的名称
set(MAIN main)

#给当前节点添加子目录
add_subdirectory(Tools)
add_subdirectory(FlowerSys)
add_subdirectory(Main)
