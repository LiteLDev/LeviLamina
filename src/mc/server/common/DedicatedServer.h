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
    DedicatedServer& operator=(DedicatedServer const&) = delete;
    DedicatedServer(DedicatedServer const&)            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEDICATEDSERVER
    /**
     * @symbol
     * ?getAutomationClient\@DedicatedServer\@\@EEBA?AV?$not_null\@V?$NonOwnerPointer\@VAutomationClient\@Automation\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Automation::AutomationClient>>
    getAutomationClient() const;
    /**
     * @symbol
     * ?getFileArchiver\@DedicatedServer\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@VFileArchiver\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class FileArchiver>> getFileArchiver() const;
    /**
     * @symbol ?getGameModuleShared\@DedicatedServer\@\@EEAAAEAVIGameModuleShared\@\@XZ
     */
    MCVAPI class IGameModuleShared& getGameModuleShared();
    /**
     * @symbol
     * ?getPrimaryMinecraft\@DedicatedServer\@\@EEAA?AV?$not_null\@V?$NonOwnerPointer\@VMinecraft\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> getPrimaryMinecraft();
    /**
     * @symbol ?isDedicatedServer\@DedicatedServer\@\@EEBA_NXZ
     */
    MCVAPI bool isDedicatedServer() const;
    /**
     * @symbol ?isEduMode\@DedicatedServer\@\@EEBA_NXZ
     */
    MCVAPI bool isEduMode() const;
    /**
     * @symbol ?onNetworkMaxPlayersChanged\@DedicatedServer\@\@EEAAXI\@Z
     */
    MCVAPI void onNetworkMaxPlayersChanged(unsigned int);
    /**
     * @symbol
     * ?requestServerShutdown\@DedicatedServer\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void requestServerShutdown(std::string const&);
    /**
     * @symbol ?stop\@DedicatedServer\@\@UEAA_NXZ
     */
    MCVAPI bool stop();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DedicatedServer();
#endif
    /**
     * @symbol ??0DedicatedServer\@\@QEAA\@XZ
     */
    MCAPI DedicatedServer();
    /**
     * @symbol
     * ?runDedicatedServerLoop\@DedicatedServer\@\@QEAA?AW4StartResult\@1\@AEAVFilePathManager\@Core\@\@AEAVPropertiesSettings\@\@AEAVLevelSettings\@\@AEAVAllowListFile\@\@AEAV?$unique_ptr\@VPermissionsFile\@\@U?$default_delete\@VPermissionsFile\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI enum class DedicatedServer::StartResult
    runDedicatedServerLoop(class Core::FilePathManager&, class PropertiesSettings&, class LevelSettings&, class AllowListFile&, std::unique_ptr<class PermissionsFile>&);
    /**
     * @symbol
     * ?start\@DedicatedServer\@\@QEAA?AW4StartResult\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActivationArguments\@Bedrock\@\@\@Z
     */
    MCAPI enum class DedicatedServer::StartResult start(std::string const&, class Bedrock::ActivationArguments const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?initializeLogging\@DedicatedServer\@\@AEAAXXZ
     */
    MCAPI void initializeLogging();
    // NOLINTEND
};
