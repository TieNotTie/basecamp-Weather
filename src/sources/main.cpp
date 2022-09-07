
#include <boost/asio.hpp>
#include <iostream>
int main(int argc, char* argv[])
{
    boost::asio::io_service ioService;
    std::cout << "Hello main\n";
    return 0;
}