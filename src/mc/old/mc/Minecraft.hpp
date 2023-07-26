/**
 * @file  Minecraft.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Minecraft.
 *
 */
class Minecraft {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFT
public:
    class Minecraft& operator=(class Minecraft const &) = delete;
    Minecraft(class Minecraft const &) = delete;
    Minecraft() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Minecraft();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?setSimTimePause\@Minecraft\@\@UEAAX_N\@Z
     */
    virtual void setSimTimePause(bool);
    /**
     * @vftbl  4
     * @symbol  ?setSimTimeScale\@Minecraft\@\@UEAAXM\@Z
     */
    virtual void setSimTimeScale(float);
    /**
     * @vftbl  5
     * @symbol  ?getSimPaused\@Minecraft\@\@UEBA_NXZ
     */
    virtual bool getSimPaused() const;
    /**
     * @vftbl  6
     * @symbol  ?isOnlineClient\@Minecraft\@\@UEBA_NXZ
     */
    virtual bool isOnlineClient() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECRAFT
    /**
     * @symbol  ?getEntityRegistry\@Minecraft\@\@UEBA?AV?$StackRefResultT\@UEntityRegistryConstRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const;
    /**
     * @symbol  ?getEntityRegistry\@Minecraft\@\@UEAA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
#endif
    /**
     * @symbol  ??0Minecraft\@\@QEAA\@AEAVIMinecraftApp\@\@AEAVGameCallbacks\@\@AEAVAllowList\@\@PEAVPermissionsFile\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VFilePathManager\@Core\@\@\@Bedrock\@\@\@gsl\@\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@AEAVIMinecraftEventing\@\@AEAVNetworkHandler\@\@AEAVPacketSender\@\@W4SubClientId\@\@AEAVTimer\@\@AEAVTimer\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentTierManager\@\@\@Bedrock\@\@\@6\@PEAVServerMetrics\@\@\@Z
     */
    MCAPI Minecraft(class IMinecraftApp &, class GameCallbacks &, class AllowList &, class PermissionsFile *, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class std::chrono::duration<__int64, struct std::ratio<1, 1>>, class IMinecraftEventing &, class NetworkHandler &, class PacketSender &, enum class SubClientId, class Timer &, class Timer &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const &, class ServerMetrics *);
    /**
     * @symbol  ?activateAllowList\@Minecraft\@\@QEAAXXZ
     */
    MCAPI void activateAllowList();
    /**
     * @symbol  ?configureGameTest\@Minecraft\@\@QEAAXAEAVLevel\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI void configureGameTest(class Level &, class Experiments const &);
    /**
     * @symbol  ?disconnectClient\@Minecraft\@\@QEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void disconnectClient(class NetworkIdentifier const &, std::string const &);
    /**
     * @symbol  ?getCommands\@Minecraft\@\@QEAAAEAVMinecraftCommands\@\@XZ
     */
    MCAPI class MinecraftCommands & getCommands();
    /**
     * @symbol  ?getGameModuleServer\@Minecraft\@\@QEAAAEAVGameModuleServer\@\@XZ
     */
    MCAPI class GameModuleServer & getGameModuleServer();
    /**
     * @symbol  ?getGameTest\@Minecraft\@\@QEAA?AV?$optional_ref\@VMinecraftGameTest\@\@\@\@XZ
     */
    MCAPI class optional_ref<class MinecraftGameTest> getGameTest();
    /**
     * @symbol  ?getLastTimestep\@Minecraft\@\@QEAANXZ
     */
    MCAPI double getLastTimestep();
    /**
     * @symbol  ?getLevel\@Minecraft\@\@QEBAPEAVLevel\@\@XZ
     */
    MCAPI class Level * getLevel() const;
    /**
     * @symbol  ?getNetworkHandler\@Minecraft\@\@QEAAAEAVNetworkHandler\@\@XZ
     */
    MCAPI class NetworkHandler & getNetworkHandler();
    /**
     * @symbol  ?getResourceLoader\@Minecraft\@\@QEAAAEAVResourcePackManager\@\@XZ
     */
    MCAPI class ResourcePackManager & getResourceLoader();
    /**
     * @symbol  ?getServerNetworkHandler\@Minecraft\@\@QEAA?AV?$NonOwnerPointer\@VServerNetworkHandler\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class ServerNetworkHandler> getServerNetworkHandler();
    /**
     * @symbol  ?getStructureManager\@Minecraft\@\@QEAA?AV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> getStructureManager();
    /**
     * @symbol  ?hostMultiplayer\@Minecraft\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$pair\@V?$unique_ptr\@VLevel\@\@U?$default_delete\@VLevel\@\@\@std\@\@\@std\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@3\@PEAVPlayer\@\@AEBVUUID\@mce\@\@V?$unique_ptr\@VNetEventCallback\@\@U?$default_delete\@VNetEventCallback\@\@\@std\@\@\@3\@H_N5AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@V23\@AEBUConnectionDefinition\@\@AEBV?$unordered_map\@UPackIdVersion\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@UPackIdVersion\@\@\@3\@U?$equal_to\@UPackIdVersion\@\@\@3\@V?$allocator\@U?$pair\@$$CBUPackIdVersion\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@3\@AEAVScheduler\@\@PEAVTextFilteringProcessor\@\@\@Z
     */
    MCAPI bool hostMultiplayer(std::string const &, struct std::pair<std::unique_ptr<class Level>, class OwnerPtrT<struct EntityRefTraits>>, class Player *, class mce::UUID const &, std::unique_ptr<class NetEventCallback>, int, bool, bool, std::vector<std::string> const &, std::string, struct ConnectionDefinition const &, class std::unordered_map<struct PackIdVersion, std::string, struct std::hash<struct PackIdVersion>, struct std::equal_to<struct PackIdVersion>, class std::allocator<struct std::pair<struct PackIdVersion const, std::string>>> const &, class Scheduler &, class TextFilteringProcessor *);
    /**
     * @symbol  ?init\@Minecraft\@\@QEAAXXZ
     */
    MCAPI void init();
    /**
     * @symbol  ?initAsDedicatedServer\@Minecraft\@\@QEAAXXZ
     */
    MCAPI void initAsDedicatedServer();
    /**
     * @symbol  ?isLeaveGameDone\@Minecraft\@\@QEBA_NXZ
     */
    MCAPI bool isLeaveGameDone() const;
    /**
     * @symbol  ?requestResourceReload\@Minecraft\@\@QEAAXXZ
     */
    MCAPI void requestResourceReload();
    /**
     * @symbol  ?requestServerShutdown\@Minecraft\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void requestServerShutdown(std::string const &);
    /**
     * @symbol  ?startLeaveGame\@Minecraft\@\@QEAAX_N\@Z
     */
    MCAPI void startLeaveGame(bool);
    /**
     * @symbol  ?update\@Minecraft\@\@QEAA_NXZ
     */
    MCAPI bool update();

//private:
    /**
     * @symbol  ?_tryCatchupMovementTicks\@Minecraft\@\@AEAAXXZ
     */
    MCAPI void _tryCatchupMovementTicks();

private:

};