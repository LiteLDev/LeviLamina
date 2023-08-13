#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class GameModuleServer {

public:
    // prevent constructor by default
    GameModuleServer& operator=(GameModuleServer const&) = delete;
    GameModuleServer(GameModuleServer const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?init\@VanillaGameModuleServer\@\@UEAAXAEAVServerInstance\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VLevel\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual void
    init(class ServerInstance&, class gsl::not_null<class Bedrock::NonOwnerPointer<class Level>> const&) = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?initializeBehaviorStack\@VanillaGameModuleServer\@\@UEAAXAEBVExperiments\@\@AEAVIResourcePackRepository\@\@AEAVResourcePackStack\@\@AEBVBaseGameVersion\@\@\@Z
     */
    virtual void
    initializeBehaviorStack(class Experiments const&, class IResourcePackRepository&, class ResourcePackStack&, class BaseGameVersion const&) = 0;
    /**
     * @vftbl 3
     * @symbol
     * ?configureLevel\@VanillaGameModuleServer\@\@UEAAXAEBV?$not_null\@V?$NonOwnerPointer\@VLevel\@\@\@Bedrock\@\@\@gsl\@\@AEBVExperiments\@\@AEAVResourcePackManager\@\@AEBVBaseGameVersion\@\@\@Z
     */
    virtual void
    configureLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class Level>> const&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&) = 0;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4() = 0;
    /**
     * @vftbl 5
     * @symbol
     * ?configureDocumentation\@VanillaGameModuleServer\@\@UEAAXAEAVIGameModuleDocumentation\@\@VItemRegistryRef\@\@\@Z
     */
    virtual void configureDocumentation(class IGameModuleDocumentation&, class ItemRegistryRef) = 0;
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6() = 0;
    /**
     * @vftbl 7
     * @symbol ?setupCommands\@VanillaGameModuleServer\@\@UEAAXAEAVCommandRegistry\@\@\@Z
     */
    virtual void setupCommands(class CommandRegistry&) = 0;
    /**
     * @vftbl 8
     * @symbol
     * ?configureServerNetworkHandler\@VanillaGameModuleServer\@\@UEAAXAEAVServerInstance\@\@V?$not_null\@V?$NonOwnerPointer\@VServerNetworkHandler\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual void
    configureServerNetworkHandler(class ServerInstance&, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEMODULESERVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GameModuleServer();
#endif
    /**
     * @symbol ??0GameModuleServer\@\@QEAA\@XZ
     */
    MCAPI GameModuleServer();
    // NOLINTEND
};
