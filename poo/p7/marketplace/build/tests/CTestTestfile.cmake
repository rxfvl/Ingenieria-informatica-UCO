# CMake generated Testfile for 
# Source directory: /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests
# Build directory: /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(person-gtests "person-test")
set_tests_properties(person-gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;18;add_test;/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;0;")
add_test(product_gtests "product-test")
set_tests_properties(product_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;24;add_test;/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;0;")
add_test(tv_gtests "tv-test")
set_tests_properties(tv_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;30;add_test;/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;0;")
add_test(computer_gtests "computer-test")
set_tests_properties(computer_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;36;add_test;/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;0;")
add_test(basket_gtests "basket-test")
set_tests_properties(basket_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;42;add_test;/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;0;")
add_test(client_gtests "client-test")
set_tests_properties(client_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;48;add_test;/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;0;")
add_test(seller_gtests "market-test")
set_tests_properties(seller_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;54;add_test;/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/tests/CMakeLists.txt;0;")
subdirs("../_deps/googletest-build")
