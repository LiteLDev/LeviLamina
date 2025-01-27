#include "ll/core/LeviLamina.h"
#include "ll/api/Versions.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/core/Version.h"

#include "mc/platform/UUID.h"

#include "nlohmann/json.hpp"

namespace ll {
std::shared_ptr<mod::NativeMod> const& getSelfModIns() {
    static auto llSelf = std::make_shared<mod::NativeMod>(
        ::ll::reflection::deserialize_to<mod::Manifest>(
            nlohmann::json::parse(
                file_utils::readFile(mod::getModsRoot() / selfModName / u8"manifest.json").value(),
                nullptr,
                true,
                true
            )
        )
            .value(),
        sys_utils::getCurrentModuleHandle()
    );
    return llSelf;
}
io::Logger& getLogger() { return getSelfModIns()->getLogger(); }

std::string_view getServiceUuid() {
    static std::string serverUuid = [] {
        auto uuidPath = getSelfModIns()->getDataDir() / u8"statisticsUuid";
        return *file_utils::readFile(uuidPath).or_else([&] {
            std::string uuid = mce::UUID::random().asString();
            file_utils::writeFile(uuidPath, uuid);
            return std::optional{std::move(uuid)};
        });
    }();
    return serverUuid;
}

data::Version getLoaderVersion() { return getSelfModIns()->getManifest().version.value(); }


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
