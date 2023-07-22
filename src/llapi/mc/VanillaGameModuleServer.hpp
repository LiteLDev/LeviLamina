/**
 * @file  VanillaGameModuleServer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaGameModuleServer.
 *
 */
class VanillaGameModuleServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAGAMEMODULESERVER
public:
    class VanillaGameModuleServer& operator=(class VanillaGameModuleServer const &) = delete;
    VanillaGameModuleServer(class VanillaGameModuleServer const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~VanillaGameModuleServer();
    /**
     * @vftbl  1
     * @symbol  ?init\@VanillaGameModuleServer\@\@UEAAXAEAVServerInstance\@\@AEAVLevel\@\@\@Z
     */
    virtual void init(class ServerInstance &, class Level &);
    /**
     * @vftbl  2
     * @symbol  ?initializeBehaviorStack\@VanillaGameModuleServer\@\@UEAAXAEBVExperiments\@\@AEAVIResourcePackRepository\@\@AEAVResourcePackStack\@\@AEBVBaseGameVersion\@\@\@Z
     */
    virtual void initializeBehaviorStack(class Experiments const &, class IResourcePackRepository &, class ResourcePackStack &, class BaseGameVersion const &);
    /**
     * @vftbl  3
     * @symbol  ?configureLevel\@VanillaGameModuleServer\@\@UEAAXAEAVLevel\@\@AEBVExperiments\@\@AEAVResourcePackManager\@\@AEBVBaseGameVersion\@\@\@Z
     */
    virtual void configureLevel(class Level &, class Experiments const &, class ResourcePackManager &, class BaseGameVersion const &);
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  ?configureDocumentation\@VanillaGameModuleServer\@\@UEAAXAEAVIGameModuleDocumentation\@\@VItemRegistryRef\@\@\@Z
     */
    virtual void configureDocumentation(class IGameModuleDocumentation &, class ItemRegistryRef);
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  ?setupCommands\@VanillaGameModuleServer\@\@UEAAXAEAVCommandRegistry\@\@\@Z
     */
    virtual void setupCommands(class CommandRegistry &);
    /**
     * @vftbl  8
     * @symbol  ?configureServerNetworkHandler\@VanillaGameModuleServer\@\@UEAAXAEAVServerInstance\@\@V?$not_null\@V?$NonOwnerPointer\@VServerNetworkHandler\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual void configureServerNetworkHandler(class ServerInstance &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLAGAMEMODULESERVER
    /**
     * @symbol  ?configureNewPlayer\@VanillaGameModuleServer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void configureNewPlayer(class Player &);
    /**
     * @symbol  ?tick\@VanillaGameModuleServer\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif
    /**
     * @symbol  ??0VanillaGameModuleServer\@\@QEAA\@XZ
     */
    MCAPI VanillaGameModuleServer();

//private:
    /**
     * @symbol  ?_configureWorldGen\@VanillaGameModuleServer\@\@AEAAXAEAVIWorldRegistriesProvider\@\@AEBUSpawnSettings\@\@AEBVExperiments\@\@AEAVResourcePackManager\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void _configureWorldGen(class IWorldRegistriesProvider &, struct SpawnSettings const &, class Experiments const &, class ResourcePackManager &, class BaseGameVersion const &);
    /**
     * @symbol  ?_registerListeners\@VanillaGameModuleServer\@\@AEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void _registerListeners(class Level &);

private:

};