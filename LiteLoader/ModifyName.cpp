#include <HookAPI.h>
#include <string>
#include <LLAPI.h>
#include <ServerAPI.h>
//#include <MCApi/BedrockLog.hpp>
using namespace std;

THook(std::string, "?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ")
{
    return original() + "(ProtocolVersion " + to_string(LL::getServerProtocolVersion()) + ") with LiteLoaderBDS " + LL::getLoaderVersionString();
}
