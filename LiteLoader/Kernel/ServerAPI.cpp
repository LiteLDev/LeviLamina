#include <ServerAPI.h>
#include <HookAPI.h>
#include <string>
using namespace std;


namespace LL {

    std::string getBdsVersion() {
        string ver;
        SymCall("?getGameVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ",
                string&, string&)(ver);
        return ver;
    }

} // namespace LL