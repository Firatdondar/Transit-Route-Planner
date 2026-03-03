cmake_minimum_required(VERSION 3.10)

# Proje adi ve versiyonu
project(TransportationSystem VERSION 1.0)

# Modern C++ standardini zorunlu kil
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Calistirilabilir dosyayi olustur ve kaynak dosyalari bagla
add_executable(TransportApp 
    main.cpp 
    TransportationSystem.cpp
)