rm -r .coverage
rm -r build 

mkdir build && cd build 
cmake -DCPPTEST_COVERAGE=ON -DCPPTEST_HOME=/home/mhernandez/cpptest-coverage ..
make 
./goo_test

make cpptestcov-compute
make cpptestcov-report

