cmake_minimum_required(VERSION 3.10)
project(Expr)

set(CMAKE_CXX_STANDARD 17)

# Find ANTLR runtime
find_package(Threads REQUIRED)

include_directories(/usr/local/include/antlr4-runtime)
link_directories(/usr/local/lib)

add_executable(prog
    Main.cpp
    ExprLexer.cpp
    ExprParser.cpp
    ExprBaseVisitor.cpp
    ExprVisitor.cpp
)

target_link_libraries(prog
    antlr4-runtime
    Threads::Threads
)
