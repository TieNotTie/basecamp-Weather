#include "client.hpp"

// client.cpp

ClientLayer::Client::Client(const NetworkLayer::ContextPtr& context_ptr, const std::string& host, const std::string& port)
	: m_connection(context_ptr, { host, port })

{
}

void ClientLayer::Client::process()
{
}

void ClientLayer::Client::setCity(const std::string& city_name)
{
}

void ClientLayer::Client::setToken(const std::string& token)
{
}
