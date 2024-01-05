#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Automation { class AutomationClient; }
namespace Bedrock { class ActivationArguments; }
namespace Core { class FilePathManager; }
// clang-format on

class DedicatedServer {
public:
    // DedicatedServer inner types define
    enum class StartResult {};

public:
    // prevent constructor by default
    DedicatedServer& operator=(DedicatedServer const&);
    DedicatedServer(DedicatedServer const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ?getAutomationClient@DedicatedServer@@EEBA?AV?$not_null@V?$NonOwnerPointer@VAutomationClient@Automation@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class Automation::AutomationClient> getAutomationClient() const;

    // symbol: ?getFileArchiver@DedicatedServer@@UEBA?AV?$not_null@V?$NonOwnerPointer@VFileArchiver@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class FileArchiver> getFileArchiver() const;

    // symbol: ?getGameModuleShared@DedicatedServer@@EEAAAEAVIGameModuleShared@@XZ
    MCVAPI class IGameModuleShared& getGameModuleShared();

    // symbol: ?getPrimaryMinecraft@DedicatedServer@@EEAA?AV?$not_null@V?$NonOwnerPointer@VMinecraft@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class Minecraft> getPrimaryMinecraft();

    // symbol: ?isDedicatedServer@DedicatedServer@@EEBA_NXZ
    MCVAPI bool isDedicatedServer() const;

    // symbol: ?isEduMode@DedicatedServer@@EEBA_NXZ
    MCVAPI bool isEduMode() const;

    // symbol: ?onNetworkMaxPlayersChanged@DedicatedServer@@EEAAXI@Z
    MCVAPI void onNetworkMaxPlayersChanged(uint newMaxPlayerCount);

    // symbol:
    // ?requestServerShutdown@DedicatedServer@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void requestServerShutdown(std::string const&);

    // symbol: ?stop@DedicatedServer@@UEAA_NXZ
    MCVAPI bool stop();

    // symbol: ??1DedicatedServer@@UEAA@XZ
    MCVAPI ~DedicatedServer();

    // symbol: ??0DedicatedServer@@QEAA@XZ
    MCAPI DedicatedServer();

    // symbol:
    // ?runDedicatedServerLoop@DedicatedServer@@QEAA?AW4StartResult@1@AEAVFilePathManager@Core@@AEAVPropertiesSettings@@AEAVLevelSettings@@AEAVAllowListFile@@AEAV?$unique_ptr@VPermissionsFile@@U?$default_delete@VPermissionsFile@@@std@@@std@@@Z
    MCAPI ::DedicatedServer::StartResult runDedicatedServerLoop(
        class Core::FilePathManager& filePathManager,
        class PropertiesSettings&    properties,
        class LevelSettings&         settings,
        class AllowListFile&,
        std::unique_ptr<class PermissionsFile>& permissionsFile
    );

    // symbol:
    // ?start@DedicatedServer@@QEAA?AW4StartResult@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActivationArguments@Bedrock@@@Z
    MCAPI ::DedicatedServer::StartResult start(std::string const& sessionID, class Bedrock::ActivationArguments const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?initializeLogging@DedicatedServer@@AEAAXXZ
    MCAPI void initializeLogging();

    // NOLINTEND
};
