cmake_minimum_required(VERSION 3.26)
set(CMAKE_CXX_STANDARD 20)

project(AddTwoNum)
add_executable(AddTwoNum ChapterOne/Section2/AddTwoNum/AddTowNum.cpp)

project(HelloWorld)
add_executable(HelloWorld ChapterOne/Section2/HelloWorld/HelloWorld.cpp)

project(MultiplyTwoNum)
add_executable(MultiplyTwoNum ChapterOne/Section2/MultiplyTwoNum/MultiplyTwoNum.cpp)

project(SumOfOneToTen)
add_executable(SumOfOneToTen ChapterOne/Section4/SumOfOneToTen/SumOfOneToTen.cpp)

project(AddNums)
add_executable(AddNums ChapterOne/Section4/AddNums/AddNums.cpp)

project(CountSameNums)
add_executable(CountSameNums ChapterOne/Section4/CountSameNums/CountSameNums.cpp)

project(RW_Sales_item)
add_executable(RW_Sales_item ChapterOne/Section5/RW_Sales_item/main.cpp
                            Utils/Sales_item.h)

project(AddTwoItem)
add_executable(AddTwoItem ChapterOne/Section5/AddTwoItem/main.cpp
                            Utils/Sales_item.h)

project(CheckTwoItems)
add_executable(CheckTwoItems ChapterOne/Section5/CheckTwoItems/main.cpp)

project(BookstoreApp)
add_executable(BookstoreApp ChapterOne/Section6/BookstoreApp/main.cpp)

project(InnerScope)
add_executable(InnerScope ChapterTwo/Section2/InnerScope/main.cpp)

project(CustomDataStruct)
add_executable(CustomDataStruct ChapterTwo/Section2/CustomDataStruct/main.cpp)

project(HowToUseStr)
add_executable(HowToUseStr ChapterThree/HowToUseStr/main.cpp)