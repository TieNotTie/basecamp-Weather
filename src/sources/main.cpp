
#include <boost/asio.hpp>
#include <iostream>

int main(int argc, char* argv[])
{
    boost::asio::io_service ioService;
    std::cout << "Hello main\n";
    for (int i = 0; i < argc; ++i)
    {
        std::cout << "argv[" << i << "] = " << argv[i] << std::endl;
    }
    return 0;
}