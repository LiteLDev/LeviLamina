#include "ll/api/Versions.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/Version.h"
#include "ll/core/tweak/ModifyInfomation.h"

namespace ll {

extern std::chrono::steady_clock::time_point severStartBeginTime;
extern std::chrono::steady_clock::time_point severStartEndTime;

static bool serverStarted = false;

bool tryModifyBedrockLogInfo(uint32_t, std::string& line) {
    if (serverStarted) return true;

    if (line != "Server started.") {
        if (line.starts_with("Version: ")) {
            line += fmt::format(
                "(ProtocolVersion {}) with {}",
                ll::getNetworkProtocolVersion(),
                fmt::format(fg(fmt::color::light_sky_blue), "LeviLamina-{}", ll::getLoaderVersion())
            );
        }
        return true;
    }
    serverStarted = true;

    ll::severStartEndTime = std::chrono::steady_clock::now();

    line = fmt::format(
        R"(Server started in ({:.1f}line)! For help, type "help" or "?")",
        std::chrono::duration_cast<std::chrono::duration<double>>(ll::severStartEndTime - ll::severStartBeginTime)
            .count()
    );
    return true;
}
} // namespace ll
