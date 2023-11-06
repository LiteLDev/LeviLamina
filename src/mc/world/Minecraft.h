#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/gamerefs_entity/IEntityRegistryOwner.h"
#include "mc/enums/SubClientId.h"
#include "mc/enums/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace mce { class UUID; }
// clang-format on

class Minecraft : public ::IEntityRegistryOwner {
public:
    // prevent constructor by default
    Minecraft& operator=(Minecraft const&);
    Minecraft(Minecraft const&);
    Minecraft();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Minecraft@@UEAA@XZ
    virtual ~Minecraft();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?setSimTimePause@Minecraft@@UEAAX_N@Z
    virtual void setSimTimePause(bool);

    // vIndex: 4, symbol: ?setSimTimeScale@Minecraft@@UEAAXM@Z
    virtual void setSimTimeScale(float);

    // vIndex: 5, symbol: ?getSimPaused@Minecraft@@UEBA_NXZ
    virtual bool getSimPaused() const;

    // vIndex: 6, symbol: ?isOnlineClient@Minecraft@@UEBA_NXZ
    virtual bool isOnlineClient() const;

    // symbol: ?getEntityRegistry@Minecraft@@UEBA?AV?$StackRefResultT@UEntityRegistryConstRefTraits@@@@XZ
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const;

    // symbol: ?getEntityRegistry@Minecraft@@UEAA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();

    // symbol:
    // ??0Minecraft@@QEAA@AEAVIMinecraftApp@@AEAVGameCallbacks@@AEAVAllowList@@PEAVPermissionsFile@@AEBV?$not_null@V?$NonOwnerPointer@VFilePathManager@Core@@@Bedrock@@@gsl@@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@AEAVIMinecraftEventing@@VClientOrServerNetworkSystemRef@@AEAVPacketSender@@W4SubClientId@@AEAVTimer@@AEAVTimer@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentTierManager@@@Bedrock@@@6@PEAVServerMetrics@@@Z
    MCAPI Minecraft(class IMinecraftApp&, class GameCallbacks&, class AllowList&, class PermissionsFile*, Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&, std::chrono::seconds, class IMinecraftEventing&, class ClientOrServerNetworkSystemRef, class PacketSender&, ::SubClientId, class Timer&, class Timer&, Bedrock::NotNullNonOwnerPtr<class IContentTierManager const> const&, class ServerMetrics*);

    // symbol: ?activateAllowList@Minecraft@@QEAAXXZ
    MCAPI void activateAllowList();

    // symbol: ?configureGameTest@Minecraft@@QEAAXAEAVLevel@@AEBVExperiments@@@Z
    MCAPI void configureGameTest(class Level&, class Experiments const&);

    // symbol:
    // ?disconnectClient@Minecraft@@QEAAXAEBVNetworkIdentifier@@W4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void disconnectClient(class NetworkIdentifier const&, ::Connection::DisconnectFailReason, std::string const&);

    // symbol: ?earlyShutdownMainthread@Minecraft@@QEAAXXZ
    MCAPI void earlyShutdownMainthread();

    // symbol: ?getClientNetworkSystem@Minecraft@@QEAAAEAVClientNetworkSystem@@XZ
    MCAPI class ClientNetworkSystem& getClientNetworkSystem();

    // symbol: ?getCommands@Minecraft@@QEAAAEAVMinecraftCommands@@XZ
    MCAPI class MinecraftCommands& getCommands();

    // symbol: ?getEventing@Minecraft@@QEBAAEAVIMinecraftEventing@@XZ
    MCAPI class IMinecraftEventing& getEventing() const;

    // symbol: ?getGameModuleServer@Minecraft@@QEAAAEAVGameModuleServer@@XZ
    MCAPI class GameModuleServer& getGameModuleServer();

    // symbol: ?getGameTest@Minecraft@@QEAA?AV?$optional_ref@VMinecraftGameTest@@@@XZ
    MCAPI class optional_ref<class MinecraftGameTest> getGameTest();

    // symbol: ?getLastTimestep@Minecraft@@QEAANXZ
    MCAPI double getLastTimestep();

    // symbol: ?getLevel@Minecraft@@QEBAPEAVLevel@@XZ
    MCAPI class Level* getLevel() const;

    // symbol: ?getResourceLoader@Minecraft@@QEAAAEAVResourcePackManager@@XZ
    MCAPI class ResourcePackManager& getResourceLoader();

    // symbol: ?getServerNetworkHandler@Minecraft@@QEAA?AV?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@XZ
    MCAPI class Bedrock::NonOwnerPointer<class ServerNetworkHandler> getServerNetworkHandler();

    // symbol: ?getServerNetworkSystem@Minecraft@@QEAAAEAVServerNetworkSystem@@XZ
    MCAPI class ServerNetworkSystem& getServerNetworkSystem();

    // symbol:
    // ?getStructureManager@Minecraft@@QEAA?AV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@XZ
    MCAPI Bedrock::NotNullNonOwnerPtr<class StructureManager> getStructureManager();

    // symbol: ?hasCommands@Minecraft@@QEAA_NXZ
    MCAPI bool hasCommands();

    // symbol:
    // ?hostMultiplayer@Minecraft@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$pair@V?$unique_ptr@VLevel@@U?$default_delete@VLevel@@@std@@@std@@V?$OwnerPtrT@UEntityRefTraits@@@@@3@PEAVPlayer@@AEBVUUID@mce@@V?$unique_ptr@VNetEventCallback@@U?$default_delete@VNetEventCallback@@@std@@@3@H_N5AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@V23@AEBUConnectionDefinition@@AEBV?$unordered_map@UPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@UPackIdVersion@@@3@U?$equal_to@UPackIdVersion@@@3@V?$allocator@U?$pair@$$CBUPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@3@AEAVScheduler@@PEAVTextFilteringProcessor@@AEBUNetworkPermissions@@@Z
    MCAPI bool
    hostMultiplayer(std::string const&, std::pair<std::unique_ptr<class Level>, class OwnerPtrT<struct EntityRefTraits>>, class Player*, class mce::UUID const&, std::unique_ptr<class NetEventCallback>, int, bool, bool, std::vector<std::string> const&, std::string, struct ConnectionDefinition const&, std::unordered_map<struct PackIdVersion, std::string> const&, class Scheduler&, class TextFilteringProcessor*, struct NetworkPermissions const&);

    // symbol: ?init@Minecraft@@QEAAXXZ
    MCAPI void init();

    // symbol: ?initAsDedicatedServer@Minecraft@@QEAAXXZ
    MCAPI void initAsDedicatedServer();

    // symbol: ?isLeaveGameDone@Minecraft@@QEBA_NXZ
    MCAPI bool isLeaveGameDone() const;

    // symbol: ?requestResourceReload@Minecraft@@QEAAXXZ
    MCAPI void requestResourceReload();

    // symbol:
    // ?requestServerShutdown@Minecraft@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void requestServerShutdown(std::string const&);

    // symbol: ?startLeaveGame@Minecraft@@QEAAX_N@Z
    MCAPI void startLeaveGame(bool);

    // symbol: ?update@Minecraft@@QEAA_NXZ
    MCAPI bool update();

    // symbol: ?_tryCatchupMovementTicks@Minecraft@@SAXAEAVEntitySystems@@AEAVEntityRegistry@@@Z
    MCAPI static void _tryCatchupMovementTicks(class EntitySystems&, class EntityRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryCatchupMovementTicks@Minecraft@@AEAAXXZ
    MCAPI void _tryCatchupMovementTicks();

    // NOLINTEND
};
