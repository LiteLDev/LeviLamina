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
    ServerPlayer& operator=(ServerPlayer const&) = delete;
    ServerPlayer(ServerPlayer const&)            = delete;
    ServerPlayer()                               = delete;

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

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 102, symbol: ?isValidTarget@ServerPlayer@@UEBA_NPEAVActor@@@Z
    virtual bool isValidTarget(class Actor*) const;

    // vIndex: 127, symbol: ?handleEntityEvent@ServerPlayer@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 136, symbol: ?setArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setArmor(::ArmorSlot, class ItemStack const&);

    // vIndex: 146, symbol: ?setOffhandSlot@ServerPlayer@@UEAAXAEBVItemStack@@@Z
    virtual void setOffhandSlot(class ItemStack const&);

    // vIndex: 151, symbol: ?load@ServerPlayer@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 163, symbol: ?canChangeDimensionsUsingPortal@ServerPlayer@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?changeDimension@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimension(class AutomaticID<class Dimension, int>);

    // vIndex: 166, symbol: ?getControllingPlayer@ServerPlayer@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 167, symbol: ?checkFallDamage@ServerPlayer@@UEAAXM_N@Z
    virtual void checkFallDamage(float, bool);

    // vIndex: 169, symbol: ?handleFallDistanceOnServer@ServerPlayer@@UEAAXMM_N@Z
    virtual void handleFallDistanceOnServer(float, float, bool);

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 194, symbol: ?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectAdded(class MobEffectInstance&);

    // vIndex: 195, symbol: ?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectUpdated(class MobEffectInstance&);

    // vIndex: 196, symbol: ?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectRemoved(class MobEffectInstance&);

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 224, symbol: ?die@ServerPlayer@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 254, symbol: ?knockback@ServerPlayer@@UEAAXPEAVActor@@HMMMMM@Z
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 264, symbol: ?aiStep@ServerPlayer@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 288, symbol: ?hurtArmorSlots@ServerPlayer@@UEAAXAEBVActorDamageSource@@HV?$bitset@$03@std@@@Z
    virtual void hurtArmorSlots(class ActorDamageSource const&, int, std::bitset<4>);

    // vIndex: 289, symbol: ?setDamagedArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setDamagedArmor(::ArmorSlot, class ItemStack const&);

    // vIndex: 290, symbol: ?sendArmorDamage@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
    virtual void sendArmorDamage(std::bitset<4>);

    // vIndex: 291, symbol: ?sendArmor@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
    virtual void sendArmor(std::bitset<4>);

    // vIndex: 301, symbol: ?clearVanishEnchantedItemsOnDeath@ServerPlayer@@UEAAXXZ
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 302, symbol: ?sendInventory@ServerPlayer@@UEAAX_N@Z
    virtual void sendInventory(bool);

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

    // vIndex: 325, symbol: ?prepareRegion@ServerPlayer@@UEAAXAEAVChunkSource@@@Z
    virtual void prepareRegion(class ChunkSource&);

    // vIndex: 326, symbol: ?destroyRegion@ServerPlayer@@UEAAXXZ
    virtual void destroyRegion();

    // vIndex: 331, symbol: ?changeDimensionWithCredits@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);

    // vIndex: 332, symbol: ?tickWorld@ServerPlayer@@UEAAXAEBUTick@@@Z
    virtual void tickWorld(struct Tick const&);

    // vIndex: 333, symbol: __unk_vfn_333
    virtual void __unk_vfn_333();

    // vIndex: 335, symbol: ?moveView@ServerPlayer@@UEAAXXZ
    virtual void moveView();

    // vIndex: 336, symbol: ?moveSpawnView@ServerPlayer@@UEAAXAEBVVec3@@V?$AutomaticID@VDimension@@H@@@Z
    virtual void moveSpawnView(class Vec3 const&, class AutomaticID<class Dimension, int>);

    // vIndex: 339, symbol: ?checkMovementStats@ServerPlayer@@UEAAXAEBVVec3@@@Z
    virtual void checkMovementStats(class Vec3 const&);

    // vIndex: 340, symbol: __unk_vfn_340
    virtual void __unk_vfn_340();

    // vIndex: 341, symbol: __unk_vfn_341
    virtual void __unk_vfn_341();

    // vIndex: 342, symbol: ?respawn@ServerPlayer@@UEAAXXZ
    virtual void respawn();

    // vIndex: 343, symbol: __unk_vfn_343
    virtual void __unk_vfn_343();

    // vIndex: 344, symbol: __unk_vfn_344
    virtual void __unk_vfn_344();

    // vIndex: 349, symbol: __unk_vfn_349
    virtual void __unk_vfn_349();

    // vIndex: 350, symbol: __unk_vfn_350
    virtual void __unk_vfn_350();

    // vIndex: 351, symbol: ?openTrading@ServerPlayer@@UEAAXAEBUActorUniqueID@@_N@Z
    virtual void openTrading(struct ActorUniqueID const&, bool);

    // vIndex: 353, symbol: __unk_vfn_353
    virtual void __unk_vfn_353();

    // vIndex: 354, symbol: ?openNpcInteractScreen@ServerPlayer@@UEAAXV?$shared_ptr@UINpcDialogueData@@@std@@@Z
    virtual void openNpcInteractScreen(std::shared_ptr<struct INpcDialogueData>);

    // vIndex: 355, symbol: ?openInventory@ServerPlayer@@UEAAXXZ
    virtual void openInventory();

    // vIndex: 356, symbol: __unk_vfn_356
    virtual void __unk_vfn_356();

    // vIndex: 357, symbol: __unk_vfn_357
    virtual void __unk_vfn_357();

    // vIndex: 358, symbol:
    // ?displayTextObjectMessage@ServerPlayer@@UEAAXAEBVTextObjectRoot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&);

    // vIndex: 359, symbol:
    // ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void
    displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&);

    // vIndex: 360, symbol:
    // ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);

    // vIndex: 361, symbol:
    // ?displayWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);

    // vIndex: 363, symbol: ?stopSleepInBed@ServerPlayer@@UEAAX_N0@Z
    virtual void stopSleepInBed(bool, bool);

    // vIndex: 367, symbol: ?openSign@ServerPlayer@@UEAAXAEBVBlockPos@@_N@Z
    virtual void openSign(class BlockPos const&, bool);

    // vIndex: 368, symbol: __unk_vfn_368
    virtual void __unk_vfn_368();

    // vIndex: 369, symbol: ?isHostingPlayer@ServerPlayer@@UEBA_NXZ
    virtual bool isHostingPlayer() const;

    // vIndex: 370, symbol: ?isLoading@ServerPlayer@@UEBA_NXZ
    virtual bool isLoading() const;

    // vIndex: 371, symbol: ?isPlayerInitialized@ServerPlayer@@UEBA_NXZ
    virtual bool isPlayerInitialized() const;

    // vIndex: 372, symbol: __unk_vfn_372
    virtual void __unk_vfn_372();

    // vIndex: 375, symbol: ?setPlayerGameType@ServerPlayer@@UEAAXW4GameType@@@Z
    virtual void setPlayerGameType(::GameType);

    // vIndex: 379, symbol: __unk_vfn_379
    virtual void __unk_vfn_379();

    // vIndex: 383, symbol: ?setContainerData@ServerPlayer@@UEAAXAEAVIContainerManager@@HH@Z
    virtual void setContainerData(class IContainerManager&, int, int);

    // vIndex: 384, symbol: ?slotChanged@ServerPlayer@@UEAAXAEAVIContainerManager@@AEAVContainer@@HAEBVItemStack@@2_N@Z
    virtual void
    slotChanged(class IContainerManager&, class Container&, int, class ItemStack const&, class ItemStack const&, bool);

    // vIndex: 386, symbol: ?refreshContainer@ServerPlayer@@UEAAXAEAVIContainerManager@@@Z
    virtual void refreshContainer(class IContainerManager&);

    // vIndex: 388, symbol: ?isActorRelevant@ServerPlayer@@UEAA_NAEBVActor@@@Z
    virtual bool isActorRelevant(class Actor const&);

    // vIndex: 389, symbol: ?isTeacher@ServerPlayer@@UEBA_NXZ
    virtual bool isTeacher() const;

    // vIndex: 390, symbol: ?onSuspension@ServerPlayer@@UEAAXXZ
    virtual void onSuspension();

    // vIndex: 391, symbol: ?onLinkedSlotsChanged@ServerPlayer@@UEAAXXZ
    virtual void onLinkedSlotsChanged();

    // vIndex: 397, symbol: ?sendInventoryTransaction@ServerPlayer@@UEBAXAEBVInventoryTransaction@@@Z
    virtual void sendInventoryTransaction(class InventoryTransaction const&) const;

    // vIndex: 398, symbol:
    // ?sendComplexInventoryTransaction@ServerPlayer@@UEBAXV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@@Z
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;

    // vIndex: 399, symbol: ?sendNetworkPacket@ServerPlayer@@UEBAXAEAVPacket@@@Z
    virtual void sendNetworkPacket(class Packet&) const;

    // vIndex: 400, symbol: ?getPlayerEventCoordinator@ServerPlayer@@UEAAAEAVPlayerEventCoordinator@@XZ
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator();

    // vIndex: 401, symbol: ?reportMovementTelemetry@ServerPlayer@@UEAAXW4MovementEventType@@@Z
    virtual void reportMovementTelemetry(::MovementEventType);

    // vIndex: 402, symbol: __unk_vfn_402
    virtual void __unk_vfn_402();

    // vIndex: 405, symbol: __unk_vfn_405
    virtual void __unk_vfn_405();

    // vIndex: 406, symbol: ?getMaxChunkBuildRadius@ServerPlayer@@UEBAEXZ
    virtual uchar getMaxChunkBuildRadius() const;

    // vIndex: 410, symbol: ?getEditorPlayer@ServerPlayer@@UEBA?AV?$NonOwnerPointer@VIEditorPlayer@Editor@@@Bedrock@@XZ
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const;

    // vIndex: 411, symbol: ?destroyEditorPlayer@ServerPlayer@@UEAAXXZ
    virtual void destroyEditorPlayer();

    // vIndex: 412, symbol: ?_getSpawnChunkLimit@ServerPlayer@@MEBAHXZ
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 413, symbol: ?_updateChunkPublisherView@ServerPlayer@@MEAAXAEBVVec3@@M@Z
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
