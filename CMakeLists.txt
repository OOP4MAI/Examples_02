cmake_minimum_required(VERSION 3.5)

project(Examples_01)

add_executable(operator_increment operator_increment.cpp)
set_target_properties(operator_increment PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        )

add_executable(operator_plus operator_plus.cpp)
set_target_properties(operator_plus PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        )

add_executable(operator_copy operator_copy.cpp)
set_target_properties(operator_copy PROPERTIES
       CXX_STANDARD 14
       CXX_STANDARD_REQUIRED ON
)

add_executable(operator_functor operator_functor.cpp)
set_target_properties(operator_functor PROPERTIES
       CXX_STANDARD 14
       CXX_STANDARD_REQUIRED ON
)

add_executable(lvalue_reference lvalue_reference.cpp)
set_target_properties(lvalue_reference PROPERTIES
       CXX_STANDARD 14
       CXX_STANDARD_REQUIRED ON
)

add_executable(rvalue_reference rvalue_reference.cpp)
set_target_properties(rvalue_reference PROPERTIES
       CXX_STANDARD 14
       CXX_STANDARD_REQUIRED ON
)

add_executable(const const.cpp)
set_target_properties(const PROPERTIES
       CXX_STANDARD 14
       CXX_STANDARD_REQUIRED ON
)

add_executable(literal literal.cpp)
set_target_properties(literal PROPERTIES
       CXX_STANDARD 14
       CXX_STANDARD_REQUIRED ON
)

add_executable(constexpr constexpr.cpp)
set_target_properties(constexpr PROPERTIES
       CXX_STANDARD 14
       CXX_STANDARD_REQUIRED ON
)

add_executable(reference reference.cpp)
set_target_properties(reference PROPERTIES
       CXX_STANDARD 14
       CXX_STANDARD_REQUIRED ON
)


add_executable(incapsulation incapsulation.cpp)
set_target_properties(incapsulation PROPERTIES
       CXX_STANDARD 14
       CXX_STANDARD_REQUIRED ON
)