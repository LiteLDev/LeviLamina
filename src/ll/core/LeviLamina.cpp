#include "ll/core/LeviLamina.h"
#include "ll/api/Versions.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileUtils.h"
#include "ll/core/Version.h"


#include "mc/platform/UUID.h"

namespace ll {
std::shared_ptr<mod::NativeMod> const& getSelfModIns() {
    static auto llSelf = std::make_shared<mod::NativeMod>(
        mod::Manifest{
            "LeviLamina.dll",
            std::string{selfModName},
            std::string{mod::NativeModManagerName},
            {},
            getLoaderVersion()
        },
        sys_utils::getCurrentModuleHandle()
    );
    return llSelf;
}
io::Logger& getLogger() { return getSelfModIns()->getLogger(); }

std::string_view getServiceUuid() {
    namespace fs = std::filesystem;

    static bool        inited = false;
    static std::string serverUuid;

    if (!inited) {
        auto& dataDir  = getSelfModIns()->getDataDir();
        auto  uuidPath = dataDir / u8"statisticsUuid";
        if (!fs::exists(uuidPath)) {
            std::string uuid = mce::UUID::random().asString();
            file_utils::writeFile(uuidPath, uuid);
            serverUuid = std::move(uuid);
        } else {
            auto uuidFile = file_utils::readFile(uuidPath);
            if (uuidFile.has_value()) {
                serverUuid = uuidFile.value();
            } else {
                std::string uuid = mce::UUID::random().asString();
                file_utils::writeFile(uuidPath, uuid);
                serverUuid = std::move(uuid);
            }
        }
        inited = true;
    }
    return serverUuid;
}

data::Version getLoaderVersion() {
    static auto ver = [] {
        auto v = data::Version{
            LL_VERSION_MAJOR,
            LL_VERSION_MINOR,
            LL_VERSION_PATCH,
        };
        v.build = LL_VERSION_TO_STRING(LL_VERSION_COMMIT_SHA);
#ifdef LL_VERSION_PRERELEASE
        v.preRelease = ll::data::PreRelease{LL_VERSION_PRERELEASE};
#endif
        return v;
    }();
    return ver;
}


void printWelcomeMsg() {
    auto& logger = getLogger();
    logger.info(R"(                                                                      )");
    logger.info(R"(         _               _ _                    _                     )");
    logger.info(R"(        | |    _____   _(_) |    __ _ _ __ ___ (_)_ __   __ _         )");
    logger.info(R"(        | |   / _ \ \ / / | |   / _` | '_ ` _ \| | '_ \ / _` |        )");
    logger.info(R"(        | |__|  __/\ V /| | |__| (_| | | | | | | | | | | (_| |        )");
    logger.info(R"(        |_____\___| \_/ |_|_____\__,_|_| |_| |_|_|_| |_|\__,_|        )");
    logger.info(R"(                                                                      )");
    logger.info(R"(        ------------   Light-Weight Mod Loader   -------------        )");
    logger.info(R"(                                                                      )");
    logger.info(R"(                                                                      )");

    logger.info("LeviLamina is a free software licensed under {0}"_tr("LGPLv3"));
    logger.info("Help us translate & improve text -> {0}"_tr("https://translate.liteldev.com/"));
}

} // namespace ll
