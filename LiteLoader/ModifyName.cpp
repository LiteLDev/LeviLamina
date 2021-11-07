#include <HookAPI.h>
#include <string>
#include <LLAPI.h>
using namespace std;

THook(std::string, "?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ")
{
    return original() + " with LiteLoaderBDS " + LL::getLoaderVersionString();
}