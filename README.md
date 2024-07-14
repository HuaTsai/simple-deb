# simple-deb

Create a simple hello world debian file.

## Build deb file

```bash
mkdir build
cd build
cmake ..
make
cpack
```

## Install package

```bash
sudo dpkg -i myhello-1.0.0-Linux.deb
```

## Testing

1. Binary file: run `myhello`
2. Header and library in C++, pass link parameter via `-lmyadd`

   ```cpp
   #include <iostream>
   #include <myadd.h>

   int main() {
     auto res = myadd(Eigen::Vector3d(1, 1, 1), Eigen::Vector3d(2, 2, 2));
     std::cout << res.transpose() << std::endl;
   }
   ```
