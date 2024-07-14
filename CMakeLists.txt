cmake_minimum_required(VERSION 3.10)
project(myhello)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Eigen3 REQUIRED)

include_directories(include)
add_library(myadd SHARED src/myadd.cc)
target_link_libraries(myadd Eigen3::Eigen)

add_executable(myhello src/main.cc)
target_link_libraries(myhello myadd)

install(DIRECTORY include/
  DESTINATION include
)

install(TARGETS myhello myadd
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
)

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "myhello")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_CONTACT "HuaTsai <huatsai.eed07g@nctu.edu.tw>")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "HuaTsai")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6, libstdc++6, libeigen3-dev")
set(CPACK_PACKAGE_DESCRIPTION "A simple Hello World program")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A simple Hello World program written in C++.")

include(CPack)

