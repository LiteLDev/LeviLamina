#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/BedSleepingResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/CrashDumpLogStringID.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/GameType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/SubClientId.h"
#include "mc/enums/TravelMethod.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/events/MovementEventType.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Editor { class IEditorPlayer; }
namespace mce { class UUID; }
// clang-format on

class ServerPlayer : public ::Player {
public:
    // prevent constructor by default
    ServerPlayer& operator=(ServerPlayer const&);
    ServerPlayer(ServerPlayer const&);
    ServerPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 12, symbol:
    // ?initializeComponents@ServerPlayer@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 14, symbol: ?_serverInitItemStackIds@ServerPlayer@@EEAAXXZ
    virtual void _serverInitItemStackIds();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 43, symbol: ?normalTick@ServerPlayer@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 101, symbol: ?isValidTarget@ServerPlayer@@UEBA_NPEAVActor@@@Z
    virtual bool isValidTarget(class Actor*) const;

    // vIndex: 125, symbol: ?handleEntityEvent@ServerPlayer@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 134, symbol: ?setArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setArmor(::ArmorSlot, class ItemStack const&);

    // vIndex: 144, symbol: ?setOffhandSlot@ServerPlayer@@UEAAXAEBVItemStack@@@Z
    virtual void setOffhandSlot(class ItemStack const&);

    // vIndex: 149, symbol: ?load@ServerPlayer@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 161, symbol: ?canChangeDimensionsUsingPortal@ServerPlayer@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?changeDimension@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimension(DimensionType);

    // vIndex: 164, symbol: ?getControllingPlayer@ServerPlayer@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 165, symbol: ?checkFallDamage@ServerPlayer@@UEAAXM_N@Z
    virtual void checkFallDamage(float, bool);

    // vIndex: 167, symbol: ?handleFallDistanceOnServer@ServerPlayer@@UEAAXMM_N@Z
    virtual void handleFallDistanceOnServer(float, float, bool);

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 190, symbol: ?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectAdded(class MobEffectInstance&);

    // vIndex: 191, symbol: ?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectUpdated(class MobEffectInstance&);

    // vIndex: 192, symbol: ?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectRemoved(class MobEffectInstance&);

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 220, symbol: ?die@ServerPlayer@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 249, symbol: ?knockback@ServerPlayer@@UEAAXPEAVActor@@HMMMMM@Z
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 259, symbol: ?aiStep@ServerPlayer@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 282, symbol: ?hurtArmorSlots@ServerPlayer@@UEAAXAEBVActorDamageSource@@HV?$bitset@$03@std@@@Z
    virtual void hurtArmorSlots(class ActorDamageSource const&, int, std::bitset<4>);

    // vIndex: 283, symbol: ?setDamagedArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setDamagedArmor(::ArmorSlot, class ItemStack const&);

    // vIndex: 284, symbol: ?sendArmorDamage@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
    virtual void sendArmorDamage(std::bitset<4>);

    // vIndex: 285, symbol: ?sendArmor@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
    virtual void sendArmor(std::bitset<4>);

    // vIndex: 295, symbol: ?clearVanishEnchantedItemsOnDeath@ServerPlayer@@UEAAXXZ
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 296, symbol: ?sendInventory@ServerPlayer@@UEAAX_N@Z
    virtual void sendInventory(bool);

    // vIndex: 318, symbol: ?prepareRegion@ServerPlayer@@UEAAXAEAVChunkSource@@@Z
    virtual void prepareRegion(class ChunkSource&);

    // vIndex: 319, symbol: ?destroyRegion@ServerPlayer@@UEAAXXZ
    virtual void destroyRegion();

    // vIndex: 324, symbol: ?changeDimensionWithCredits@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimensionWithCredits(DimensionType);

    // vIndex: 325, symbol: ?tickWorld@ServerPlayer@@UEAAXAEBUTick@@@Z
    virtual void tickWorld(struct Tick const&);

    // vIndex: 326, symbol: __unk_vfn_326
    virtual void __unk_vfn_326();

    // vIndex: 328, symbol: ?moveView@ServerPlayer@@UEAAXXZ
    virtual void moveView();

    // vIndex: 329, symbol: ?moveSpawnView@ServerPlayer@@UEAAXAEBVVec3@@V?$AutomaticID@VDimension@@H@@@Z
    virtual void moveSpawnView(class Vec3 const&, DimensionType);

    // vIndex: 332, symbol: ?checkMovementStats@ServerPlayer@@UEAAXAEBVVec3@@@Z
    virtual void checkMovementStats(class Vec3 const&);

    // vIndex: 333, symbol: __unk_vfn_333
    virtual void __unk_vfn_333();

    // vIndex: 334, symbol: __unk_vfn_334
    virtual void __unk_vfn_334();

    // vIndex: 335, symbol: ?respawn@ServerPlayer@@UEAAXXZ
    virtual void respawn();

    // vIndex: 336, symbol: __unk_vfn_336
    virtual void __unk_vfn_336();

    // vIndex: 337, symbol: __unk_vfn_337
    virtual void __unk_vfn_337();

    // vIndex: 342, symbol: __unk_vfn_342
    virtual void __unk_vfn_342();

    // vIndex: 343, symbol: __unk_vfn_343
    virtual void __unk_vfn_343();

    // vIndex: 344, symbol: ?openTrading@ServerPlayer@@UEAAXAEBUActorUniqueID@@_N@Z
    virtual void openTrading(struct ActorUniqueID const&, bool);

    // vIndex: 346, symbol: __unk_vfn_346
    virtual void __unk_vfn_346();

    // vIndex: 347, symbol: ?openNpcInteractScreen@ServerPlayer@@UEAAXV?$shared_ptr@UINpcDialogueData@@@std@@@Z
    virtual void openNpcInteractScreen(std::shared_ptr<struct INpcDialogueData>);

    // vIndex: 348, symbol: ?openInventory@ServerPlayer@@UEAAXXZ
    virtual void openInventory();

    // vIndex: 349, symbol: __unk_vfn_349
    virtual void __unk_vfn_349();

    // vIndex: 350, symbol: __unk_vfn_350
    virtual void __unk_vfn_350();

    // vIndex: 351, symbol:
    // ?displayTextObjectMessage@ServerPlayer@@UEAAXAEBVTextObjectRoot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&);

    // vIndex: 352, symbol:
    // ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void
    displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&);

    // vIndex: 353, symbol:
    // ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);

    // vIndex: 354, symbol:
    // ?displayWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);

    // vIndex: 356, symbol: ?stopSleepInBed@ServerPlayer@@UEAAX_N0@Z
    virtual void stopSleepInBed(bool, bool);

    // vIndex: 360, symbol: ?openSign@ServerPlayer@@UEAAXAEBVBlockPos@@_N@Z
    virtual void openSign(class BlockPos const&, bool);

    // vIndex: 361, symbol: __unk_vfn_361
    virtual void __unk_vfn_361();

    // vIndex: 362, symbol: ?isHostingPlayer@ServerPlayer@@UEBA_NXZ
    virtual bool isHostingPlayer() const;

    // vIndex: 363, symbol: ?isLoading@ServerPlayer@@UEBA_NXZ
    virtual bool isLoading() const;

    // vIndex: 364, symbol: ?isPlayerInitialized@ServerPlayer@@UEBA_NXZ
    virtual bool isPlayerInitialized() const;

    // vIndex: 365, symbol: __unk_vfn_365
    virtual void __unk_vfn_365();

    // vIndex: 368, symbol: ?setPlayerGameType@ServerPlayer@@UEAAXW4GameType@@@Z
    virtual void setPlayerGameType(::GameType);

    // vIndex: 372, symbol: __unk_vfn_372
    virtual void __unk_vfn_372();

    // vIndex: 376, symbol: ?setContainerData@ServerPlayer@@UEAAXAEAVIContainerManager@@HH@Z
    virtual void setContainerData(class IContainerManager&, int, int);

    // vIndex: 377, symbol: ?slotChanged@ServerPlayer@@UEAAXAEAVIContainerManager@@AEAVContainer@@HAEBVItemStack@@2_N@Z
    virtual void
    slotChanged(class IContainerManager&, class Container&, int, class ItemStack const&, class ItemStack const&, bool);

    // vIndex: 379, symbol: ?refreshContainer@ServerPlayer@@UEAAXAEAVIContainerManager@@@Z
    virtual void refreshContainer(class IContainerManager&);

    // vIndex: 381, symbol: ?isActorRelevant@ServerPlayer@@UEAA_NAEBVActor@@@Z
    virtual bool isActorRelevant(class Actor const&);

    // vIndex: 382, symbol: ?isTeacher@ServerPlayer@@UEBA_NXZ
    virtual bool isTeacher() const;

    // vIndex: 383, symbol: ?onSuspension@ServerPlayer@@UEAAXXZ
    virtual void onSuspension();

    // vIndex: 384, symbol: ?onLinkedSlotsChanged@ServerPlayer@@UEAAXXZ
    virtual void onLinkedSlotsChanged();

    // vIndex: 390, symbol: ?sendInventoryTransaction@ServerPlayer@@UEBAXAEBVInventoryTransaction@@@Z
    virtual void sendInventoryTransaction(class InventoryTransaction const&) const;

    // vIndex: 391, symbol:
    // ?sendComplexInventoryTransaction@ServerPlayer@@UEBAXV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@@Z
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;

    // vIndex: 392, symbol: ?sendNetworkPacket@ServerPlayer@@UEBAXAEAVPacket@@@Z
    virtual void sendNetworkPacket(class Packet&) const;

    // vIndex: 393, symbol: ?getPlayerEventCoordinator@ServerPlayer@@UEAAAEAVPlayerEventCoordinator@@XZ
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator();

    // vIndex: 394, symbol: ?reportMovementTelemetry@ServerPlayer@@UEAAXW4MovementEventType@@@Z
    virtual void reportMovementTelemetry(::MovementEventType);

    // vIndex: 395, symbol: __unk_vfn_395
    virtual void __unk_vfn_395();

    // vIndex: 398, symbol: __unk_vfn_398
    virtual void __unk_vfn_398();

    // vIndex: 399, symbol: ?getMaxChunkBuildRadius@ServerPlayer@@UEBAEXZ
    virtual uchar getMaxChunkBuildRadius() const;

    // vIndex: 403, symbol: ?getEditorPlayer@ServerPlayer@@UEBA?AV?$NonOwnerPointer@VIEditorPlayer@Editor@@@Bedrock@@XZ
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const;

    // vIndex: 404, symbol: ?destroyEditorPlayer@ServerPlayer@@UEAAXXZ
    virtual void destroyEditorPlayer();

    // vIndex: 405, symbol: ?_getSpawnChunkLimit@ServerPlayer@@MEBAHXZ
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 406, symbol: ?_updateChunkPublisherView@ServerPlayer@@MEAAXAEBVVec3@@M@Z
    virtual void _updateChunkPublisherView(class Vec3 const&, float);

    // symbol: ?frameUpdate@ServerPlayer@@UEAAXAEAVFrameUpdateContextBase@@@Z
    MCVAPI void frameUpdate(class FrameUpdateContextBase&);

    // symbol: ?openPortfolio@ServerPlayer@@UEAAXXZ
    MCVAPI void openPortfolio();

    // symbol: ??1ServerPlayer@@UEAA@XZ
    MCVAPI ~ServerPlayer();

    // symbol:
    // ??0ServerPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVNetworkSystem@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@V?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@9V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H_NAEAVEntityContext@@@Z
    MCAPI
    ServerPlayer(class Level&, class PacketSender&, class NetworkSystem&, class ClientBlobCache::Server::ActiveTransfersManager&, ::GameType, class NetworkIdentifier const&, ::SubClientId, std::function<void(class ServerPlayer&)>, class mce::UUID, std::string const&, std::string const&, std::unique_ptr<class Certificate>, int, bool, class EntityContext&);

    // symbol: ?acceptClientPosition@ServerPlayer@@QEAAXAEBVVec3@@@Z
    MCAPI void acceptClientPosition(class Vec3 const&);

    // symbol: ?addActorToReplicationList@ServerPlayer@@QEAAXV?$not_null@PEAVActor@@@gsl@@_N@Z
    MCAPI void addActorToReplicationList(gsl::not_null<class Actor*>, bool);

    // symbol: ?checkCheating@ServerPlayer@@QEAAXAEBVVec3@@@Z
    MCAPI void checkCheating(class Vec3 const&);

    // symbol: ?disconnect@ServerPlayer@@QEAAXXZ
    MCAPI void disconnect();

    // symbol: ?doDeleteContainerManager@ServerPlayer@@QEAAX_N@Z
    MCAPI void doDeleteContainerManager(bool);

    // symbol: ?doInitialSpawn@ServerPlayer@@QEAAXXZ
    MCAPI void doInitialSpawn();

    // symbol: ?getItemStackNetManagerServer@ServerPlayer@@QEAAAEAVItemStackNetManagerServer@@XZ
    MCAPI class ItemStackNetManagerServer& getItemStackNetManagerServer();

    // symbol: ?handleActorPickRequestOnServer@ServerPlayer@@QEAAXAEAVActor@@_N1@Z
    MCAPI void handleActorPickRequestOnServer(class Actor&, bool, bool);

    // symbol: ?handleBlockPickRequestOnServer@ServerPlayer@@QEAAXAEBVBlockPos@@_N@Z
    MCAPI void handleBlockPickRequestOnServer(class BlockPos const&, bool);

    // symbol: ?isCompatibleWithClientSideChunkGen@ServerPlayer@@QEBA_NXZ
    MCAPI bool isCompatibleWithClientSideChunkGen() const;

    // symbol: ?openUnmanagedContainer@ServerPlayer@@QEAA?AW4ContainerID@@XZ
    MCAPI ::ContainerID openUnmanagedContainer();

    // symbol: ?postLoad@ServerPlayer@@QEAAX_N@Z
    MCAPI void postLoad(bool);

    // symbol: ?postReplicationTick@ServerPlayer@@QEAAXAEBUTick@@@Z
    MCAPI void postReplicationTick(struct Tick const&);

    // symbol: ?preReplicationTick@ServerPlayer@@QEAAXAEBUTick@@@Z
    MCAPI void preReplicationTick(struct Tick const&);

    // symbol: ?selectItem@ServerPlayer@@QEAAXAEBVItemStack@@@Z
    MCAPI void selectItem(class ItemStack const&);

    // symbol: ?sendMobEffectPackets@ServerPlayer@@QEAAXXZ
    MCAPI void sendMobEffectPackets();

    // symbol: ?sendPlayerAuthInputReceivedEvent@ServerPlayer@@QEAAXXZ
    MCAPI void sendPlayerAuthInputReceivedEvent();

    // symbol: ?sendPlayerOnGround@ServerPlayer@@QEAAXXZ
    MCAPI void sendPlayerOnGround();

    // symbol: ?setClientChunkRadius@ServerPlayer@@QEAAXIE@Z
    MCAPI void setClientChunkRadius(uint, uchar);

    // symbol: ?setIsCompatibleWithClientSideChunkGen@ServerPlayer@@QEAAX_N@Z
    MCAPI void setIsCompatibleWithClientSideChunkGen(bool);

    // symbol: ?setLocalPlayerAsInitialized@ServerPlayer@@QEAAXXZ
    MCAPI void setLocalPlayerAsInitialized();

    // symbol: ?setPlayerInput@ServerPlayer@@QEAAXMM_N0@Z
    MCAPI void setPlayerInput(float, float, bool, bool);

    // symbol: ?triggerRespawnFromCompletingTheEnd@ServerPlayer@@QEAAXXZ
    MCAPI void triggerRespawnFromCompletingTheEnd();

    // symbol: ?initializePlayerTickComponents@ServerPlayer@@SAXAEAVEntityContext@@AEBUPlayerMovementSettings@@@Z
    MCAPI static void initializePlayerTickComponents(class EntityContext&, struct PlayerMovementSettings const&);

    // symbol: ?tryGetFromEntity@ServerPlayer@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class ServerPlayer* tryGetFromEntity(class EntityContext&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_logCDEvent@ServerPlayer@@AEAAXW4CrashDumpLogStringID@@000@Z
    MCAPI void
        _logCDEvent(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);

    // symbol: ?_nextContainerCounter@ServerPlayer@@AEAA?AW4ContainerID@@XZ
    MCAPI ::ContainerID _nextContainerCounter();

    // symbol: ?_removeNearbyEntities@ServerPlayer@@AEAAXXZ
    MCAPI void _removeNearbyEntities();

    // symbol: ?_scanForNearbyActors@ServerPlayer@@AEAAXXZ
    MCAPI void _scanForNearbyActors();

    // symbol: ?_setContainerManager@ServerPlayer@@AEAAXV?$shared_ptr@VIContainerManager@@@std@@@Z
    MCAPI void _setContainerManager(std::shared_ptr<class IContainerManager>);

    // symbol: ?_updateNearbyActors@ServerPlayer@@AEAAXXZ
    MCAPI void _updateNearbyActors();

    // NOLINTEND
};
