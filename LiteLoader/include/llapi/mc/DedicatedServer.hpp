/**
 * @file  DedicatedServer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DedicatedServer.
 *
 */
class DedicatedServer {

#define AFTER_EXTRA
// Add Member There
public:
enum class StartResult;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDSERVER
public:
    class DedicatedServer& operator=(class DedicatedServer const &) = delete;
    DedicatedServer(class DedicatedServer const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEDICATEDSERVER
    /**
     * @symbol  ?getAutomationClient\@DedicatedServer\@\@EEBA?AV?$not_null\@V?$NonOwnerPointer\@VAutomationClient\@Automation\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Automation::AutomationClient>> getAutomationClient() const;
    /**
     * @symbol  ?getFileArchiver\@DedicatedServer\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@VFileArchiver\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class FileArchiver>> getFileArchiver() const;
    /**
     * @symbol  ?getGameModule\@DedicatedServer\@\@EEAAAEAVIGameModuleShared\@\@XZ
     */
    MCVAPI class IGameModuleShared & getGameModule();
    /**
     * @symbol  ?getPrimaryMinecraft\@DedicatedServer\@\@EEAA?AV?$not_null\@V?$NonOwnerPointer\@VMinecraft\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> getPrimaryMinecraft();
    /**
     * @symbol  ?isDedicatedServer\@DedicatedServer\@\@EEBA_NXZ
     */
    MCVAPI bool isDedicatedServer() const;
    /**
     * @symbol  ?isEduMode\@DedicatedServer\@\@EEBA_NXZ
     */
    MCVAPI bool isEduMode() const;
    /**
     * @symbol  ?onNetworkMaxPlayersChanged\@DedicatedServer\@\@EEAAXI\@Z
     */
    MCVAPI void onNetworkMaxPlayersChanged(unsigned int);
    /**
     * @symbol  ?requestServerShutdown\@DedicatedServer\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void requestServerShutdown(std::string const &);
    /**
     * @symbol  ?stop\@DedicatedServer\@\@UEAA_NXZ
     */
    MCVAPI bool stop();
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~DedicatedServer();
#endif
    /**
     * @symbol  ??0DedicatedServer\@\@QEAA\@XZ
     */
    MCAPI DedicatedServer();
    /**
     * @symbol  ?runDedicatedServerLoop\@DedicatedServer\@\@QEAA?AW4StartResult\@1\@AEAVFilePathManager\@Core\@\@AEAVPropertiesSettings\@\@AEAVLevelSettings\@\@AEAVAllowListFile\@\@AEAV?$unique_ptr\@VPermissionsFile\@\@U?$default_delete\@VPermissionsFile\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI enum class DedicatedServer::StartResult runDedicatedServerLoop(class Core::FilePathManager &, class PropertiesSettings &, class LevelSettings &, class AllowListFile &, std::unique_ptr<class PermissionsFile> &);
    /**
     * @symbol  ?start\@DedicatedServer\@\@QEAA?AW4StartResult\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActivationArguments\@Bedrock\@\@\@Z
     */
    MCAPI enum class DedicatedServer::StartResult start(std::string const &, class Bedrock::ActivationArguments const &);

//private:
    /**
     * @symbol  ?initializeHttp\@DedicatedServer\@\@AEAAXW4Implementation\@Http\@Bedrock\@\@\@Z
     */
    MCAPI void initializeHttp(enum class Bedrock::Http::Implementation);
    /**
     * @symbol  ?initializeLogging\@DedicatedServer\@\@AEAAXXZ
     */
    MCAPI void initializeLogging();

private:

};