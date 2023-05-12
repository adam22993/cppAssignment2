cmake_minimum_required(VERSION 3.25)
project(OOPAssignment2)

set(CMAKE_CXX_STANDARD 20)

add_executable(OOPAssignment2 main.cpp Person.cpp includes/Person.h includes/Florist.h includes/Wholesaler.h includes/Grower.h includes/Gardener.h includes/FlowerArranger.h includes/DeliveryPerson.h includes/FlowersBouquet.h Florist.cpp Wholesaler.cpp Grower.cpp Gardener.cpp FlowerArranger.cpp DeliveryPerson.cpp FlowersBouquet.cpp)
