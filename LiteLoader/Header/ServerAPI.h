#pragma once
#include <string>
#include <Global.h>

namespace LL
{
	LIAPI std::string getBdsVersion();
	LIAPI int getServerProtocolVersion();
	LIAPI bool setServerMotd(const std::string& motd);
}
