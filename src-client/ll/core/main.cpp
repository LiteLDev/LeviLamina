#include "ll/core/LeviLamina.h"

#include "ll/api/Versions.h"
#include "ll/api/utils/ErrorUtils.h"

#include "ll/core/Config.h"
#include "ll/core/gui/ImGuiHooks.h"

#include "windows.h"

namespace ll {
void leviLaminaMain() {

    gui::init();

    // getLeviConfig();

    printWelcomeMsg();

    std::thread([]() {
        std::this_thread::sleep_for(std::chrono::seconds{5});
        getLogger().info("hello, client {}", getGameVersion().to_string());
        getLogger().info("");
        getLogger().info("levilamina {}", getLoaderVersion().to_string());
        getLogger().info("");
    }).detach();
}
} // namespace ll


BOOL APIENTRY DllMain(HMODULE /*hModule*/, DWORD ulReasonForCall, LPVOID /*lpReserved*/) {
    if (ulReasonForCall != DLL_PROCESS_ATTACH) return TRUE;

    try {
        ll::leviLaminaMain();
    } catch (...) {
        ll::error_utils::printCurrentException(ll::getLogger());
    }

    return TRUE;
}
