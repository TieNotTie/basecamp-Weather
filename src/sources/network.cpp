#include "network.hpp"

// networklayer.cpp

namespace NetworkLayer
{

NetworkLayer::Network::Network(const ContextPtr& context_ptr, IPAddress connectionIP)
{
}

bool NetworkLayer::Network::start()
{
    return false;
}

void NetworkLayer::Network::send(const std::string& city_name, const std::string& token)
{
}

void NetworkLayer::Network::send(const http::request<http::string_body>& request)
{
}

http::response<http::dynamic_body> NetworkLayer::Network::receive(bool)
{
    return http::response<http::dynamic_body>();
}

std::string NetworkLayer::Network::receive()
{
    return std::string();
}

}