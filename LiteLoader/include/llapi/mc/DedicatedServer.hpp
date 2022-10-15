/**
 * @file  DedicatedServer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   888776956
     * @symbol ?getAutomationClient@DedicatedServer@@EEBA?AV?$not_null@V?$NonOwnerPointer@VAutomationClient@Automation@@@Bedrock@@@gsl@@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Automation::AutomationClient>> getAutomationClient() const;
    /**
     * @hash   61797872
     * @symbol ?getEditorManager@DedicatedServer@@UEBA?AV?$NonOwnerPointer@VIEditorManager@Editor@@@Bedrock@@XZ
     */
    MCVAPI class Bedrock::NonOwnerPointer<class Editor::IEditorManager> getEditorManager() const;
    /**
     * @hash   -691657935
     * @symbol ?getGameModule@DedicatedServer@@EEAAAEAVIGameModuleShared@@XZ
     */
    MCVAPI class IGameModuleShared & getGameModule();
    /**
     * @hash   1641207398
     * @symbol ?getPrimaryMinecraft@DedicatedServer@@EEAA?AV?$not_null@V?$NonOwnerPointer@VMinecraft@@@Bedrock@@@gsl@@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> getPrimaryMinecraft();
    /**
     * @hash   816126240
     * @symbol ?isDedicatedServer@DedicatedServer@@EEBA_NXZ
     */
    MCVAPI bool isDedicatedServer() const;
    /**
     * @hash   -10845985
     * @symbol ?isEditorModeEnabled@DedicatedServer@@EEBA_NXZ
     */
    MCVAPI bool isEditorModeEnabled() const;
    /**
     * @hash   -1987532921
     * @symbol ?isEduMode@DedicatedServer@@EEBA_NXZ
     */
    MCVAPI bool isEduMode() const;
    /**
     * @hash   1540209244
     * @symbol ?onNetworkMaxPlayersChanged@DedicatedServer@@EEAAXI@Z
     */
    MCVAPI void onNetworkMaxPlayersChanged(unsigned int);
    /**
     * @symbol ?requestServerShutdown@DedicatedServer@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void requestServerShutdown(std::string const &);
    /**
     * @hash   2003313193
     * @symbol ?stop@DedicatedServer@@UEAA_NXZ
     */
    MCVAPI bool stop();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DedicatedServer();
#endif
    /**
     * @hash   1289771470
     * @symbol ??0DedicatedServer@@QEAA@XZ
     */
    MCAPI DedicatedServer();
    /**
     * @hash   188108284
     * @symbol ?runDedicatedServerLoop@DedicatedServer@@QEAA?AW4StartResult@1@AEAVFilePathManager@Core@@AEAVPropertiesSettings@@AEAVLevelSettings@@AEAVAllowListFile@@AEAV?$unique_ptr@VPermissionsFile@@U?$default_delete@VPermissionsFile@@@std@@@std@@@Z
     */
    MCAPI enum class DedicatedServer::StartResult runDedicatedServerLoop(class Core::FilePathManager &, class PropertiesSettings &, class LevelSettings &, class AllowListFile &, std::unique_ptr<class PermissionsFile> &);
    /**
     * @hash   1035794177
     * @symbol ?start@DedicatedServer@@QEAA?AW4StartResult@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActivationArguments@Bedrock@@@Z
     */
    MCAPI enum class DedicatedServer::StartResult start(std::string const &, class Bedrock::ActivationArguments const &);

//private:
    /**
     * @hash   -1726407490
     * @symbol ?_getLevelName@DedicatedServer@@AEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPropertiesSettings@@@Z
     */
    MCAPI std::string const & _getLevelName(class PropertiesSettings const &) const;
    /**
     * @hash   -176841080
     * @symbol ?initializeHttp@DedicatedServer@@AEAAXW4Implementation@Http@Bedrock@@@Z
     */
    MCAPI void initializeHttp(enum class Bedrock::Http::Implementation);
    /**
     * @hash   -631517863
     * @symbol ?initializeLogging@DedicatedServer@@AEAAXXZ
     */
    MCAPI void initializeLogging();

private:

};