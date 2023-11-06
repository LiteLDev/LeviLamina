#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/BedSleepingResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
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
    // vIndex: 6, symbol:
    // ?initializeComponents@ServerPlayer@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 8, symbol: ?_serverInitItemStackIds@ServerPlayer@@EEAAXXZ
    virtual void _serverInitItemStackIds();

    // vIndex: 10, symbol: ??1ServerPlayer@@UEAA@XZ
    virtual ~ServerPlayer();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@ServerPlayer@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 66, symbol: ?isValidTarget@ServerPlayer@@UEBA_NPEAVActor@@@Z
    virtual bool isValidTarget(class Actor*) const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 84, symbol: ?handleEntityEvent@ServerPlayer@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 88, symbol: ?setArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setArmor(::ArmorSlot, class ItemStack const&);

    // vIndex: 95, symbol: ?setOffhandSlot@ServerPlayer@@UEAAXAEBVItemStack@@@Z
    virtual void setOffhandSlot(class ItemStack const&);

    // vIndex: 99, symbol: ?load@ServerPlayer@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 108, symbol: ?canChangeDimensionsUsingPortal@ServerPlayer@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: ?changeDimension@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimension(DimensionType);

    // vIndex: 111, symbol: ?getControllingPlayer@ServerPlayer@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 112, symbol: ?checkFallDamage@ServerPlayer@@UEAAXM_N0@Z
    virtual void checkFallDamage(float, bool, bool);

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 120, symbol: __unk_vfn_120
    virtual void __unk_vfn_120();

    // vIndex: 128, symbol: ?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectAdded(class MobEffectInstance&);

    // vIndex: 129, symbol: ?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectUpdated(class MobEffectInstance&);

    // vIndex: 130, symbol: ?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectRemoved(class MobEffectInstance&);

    // vIndex: 142, symbol: __unk_vfn_142
    virtual void __unk_vfn_142();

    // vIndex: 143, symbol: __unk_vfn_143
    virtual void __unk_vfn_143();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 150, symbol: ?die@ServerPlayer@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 154, symbol: __unk_vfn_154
    virtual void __unk_vfn_154();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 173, symbol: ?knockback@ServerPlayer@@UEAAXPEAVActor@@HMMMMM@Z
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 181, symbol: ?aiStep@ServerPlayer@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 192, symbol: ?hurtArmorSlots@ServerPlayer@@UEAAXAEBVActorDamageSource@@HV?$bitset@$03@std@@@Z
    virtual void hurtArmorSlots(class ActorDamageSource const&, int, std::bitset<4>);

    // vIndex: 193, symbol: ?setDamagedArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setDamagedArmor(::ArmorSlot, class ItemStack const&);

    // vIndex: 194, symbol: ?sendArmorDamage@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
    virtual void sendArmorDamage(std::bitset<4>);

    // vIndex: 195, symbol: ?sendArmor@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
    virtual void sendArmor(std::bitset<4>);

    // vIndex: 200, symbol: ?clearVanishEnchantedItemsOnDeath@ServerPlayer@@UEAAXXZ
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 201, symbol: ?sendInventory@ServerPlayer@@UEAAX_N@Z
    virtual void sendInventory(bool);

    // vIndex: 204, symbol: __unk_vfn_204
    virtual void __unk_vfn_204();

    // vIndex: 212, symbol: __unk_vfn_212
    virtual void __unk_vfn_212();

    // vIndex: 216, symbol: ?prepareRegion@ServerPlayer@@UEAAXAEAVChunkSource@@@Z
    virtual void prepareRegion(class ChunkSource&);

    // vIndex: 217, symbol: ?destroyRegion@ServerPlayer@@UEAAXXZ
    virtual void destroyRegion();

    // vIndex: 220, symbol: ?changeDimensionWithCredits@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimensionWithCredits(DimensionType);

    // vIndex: 221, symbol: ?tickWorld@ServerPlayer@@UEAAXAEBUTick@@@Z
    virtual void tickWorld(struct Tick const&);

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 224, symbol: ?moveView@ServerPlayer@@UEAAXXZ
    virtual void moveView();

    // vIndex: 225, symbol: ?moveSpawnView@ServerPlayer@@UEAAXAEBVVec3@@V?$AutomaticID@VDimension@@H@@@Z
    virtual void moveSpawnView(class Vec3 const&, DimensionType);

    // vIndex: 226, symbol: ?checkMovementStats@ServerPlayer@@UEAAXAEBVVec3@@@Z
    virtual void checkMovementStats(class Vec3 const&);

    // vIndex: 227, symbol: __unk_vfn_227
    virtual void __unk_vfn_227();

    // vIndex: 228, symbol: __unk_vfn_228
    virtual void __unk_vfn_228();

    // vIndex: 229, symbol: ?respawn@ServerPlayer@@UEAAXXZ
    virtual void respawn();

    // vIndex: 230, symbol: __unk_vfn_230
    virtual void __unk_vfn_230();

    // vIndex: 231, symbol: __unk_vfn_231
    virtual void __unk_vfn_231();

    // vIndex: 232, symbol: __unk_vfn_232
    virtual void __unk_vfn_232();

    // vIndex: 233, symbol: __unk_vfn_233
    virtual void __unk_vfn_233();

    // vIndex: 234, symbol: ?openTrading@ServerPlayer@@UEAAXAEBUActorUniqueID@@_N@Z
    virtual void openTrading(struct ActorUniqueID const&, bool);

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?openNpcInteractScreen@ServerPlayer@@UEAAXV?$shared_ptr@UINpcDialogueData@@@std@@@Z
    virtual void openNpcInteractScreen(std::shared_ptr<struct INpcDialogueData>);

    // vIndex: 237, symbol: ?openInventory@ServerPlayer@@UEAAXXZ
    virtual void openInventory();

    // vIndex: 238, symbol: __unk_vfn_238
    virtual void __unk_vfn_238();

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol:
    // ?displayTextObjectMessage@ServerPlayer@@UEAAXAEBVTextObjectRoot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&);

    // vIndex: 241, symbol:
    // ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void
    displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&);

    // vIndex: 242, symbol:
    // ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);

    // vIndex: 243, symbol:
    // ?displayWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);

    // vIndex: 245, symbol: ?stopSleepInBed@ServerPlayer@@UEAAX_N0@Z
    virtual void stopSleepInBed(bool, bool);

    // vIndex: 247, symbol: ?openSign@ServerPlayer@@UEAAXAEBVBlockPos@@_N@Z
    virtual void openSign(class BlockPos const&, bool);

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 249, symbol: ?isHostingPlayer@ServerPlayer@@UEBA_NXZ
    virtual bool isHostingPlayer() const;

    // vIndex: 250, symbol: ?isLoading@ServerPlayer@@UEBA_NXZ
    virtual bool isLoading() const;

    // vIndex: 251, symbol: ?isPlayerInitialized@ServerPlayer@@UEBA_NXZ
    virtual bool isPlayerInitialized() const;

    // vIndex: 252, symbol: __unk_vfn_252
    virtual void __unk_vfn_252();

    // vIndex: 253, symbol: ?setPlayerGameType@ServerPlayer@@UEAAXW4GameType@@@Z
    virtual void setPlayerGameType(::GameType);

    // vIndex: 260, symbol: ?setContainerData@ServerPlayer@@UEAAXAEAVIContainerManager@@HH@Z
    virtual void setContainerData(class IContainerManager&, int, int);

    // vIndex: 261, symbol: ?slotChanged@ServerPlayer@@UEAAXAEAVIContainerManager@@AEAVContainer@@HAEBVItemStack@@2_N@Z
    virtual void
    slotChanged(class IContainerManager&, class Container&, int, class ItemStack const&, class ItemStack const&, bool);

    // vIndex: 262, symbol: ?refreshContainer@ServerPlayer@@UEAAXAEAVIContainerManager@@@Z
    virtual void refreshContainer(class IContainerManager&);

    // vIndex: 264, symbol: ?isActorRelevant@ServerPlayer@@UEAA_NAEBVActor@@@Z
    virtual bool isActorRelevant(class Actor const&);

    // vIndex: 265, symbol: ?isTeacher@ServerPlayer@@UEBA_NXZ
    virtual bool isTeacher() const;

    // vIndex: 266, symbol: ?onSuspension@ServerPlayer@@UEAAXXZ
    virtual void onSuspension();

    // vIndex: 267, symbol: ?onLinkedSlotsChanged@ServerPlayer@@UEAAXXZ
    virtual void onLinkedSlotsChanged();

    // vIndex: 268, symbol: ?sendInventoryTransaction@ServerPlayer@@UEBAXAEBVInventoryTransaction@@@Z
    virtual void sendInventoryTransaction(class InventoryTransaction const&) const;

    // vIndex: 269, symbol:
    // ?sendComplexInventoryTransaction@ServerPlayer@@UEBAXV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@@Z
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;

    // vIndex: 270, symbol: ?sendNetworkPacket@ServerPlayer@@UEBAXAEAVPacket@@@Z
    virtual void sendNetworkPacket(class Packet&) const;

    // vIndex: 271, symbol: ?getPlayerEventCoordinator@ServerPlayer@@UEAAAEAVPlayerEventCoordinator@@XZ
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator();

    // vIndex: 272, symbol: ?reportMovementTelemetry@ServerPlayer@@UEAAXW4MovementEventType@@@Z
    virtual void reportMovementTelemetry(::MovementEventType);

    // vIndex: 273, symbol: __unk_vfn_273
    virtual void __unk_vfn_273();

    // vIndex: 276, symbol: ?getMaxChunkBuildRadius@ServerPlayer@@UEBAEXZ
    virtual uchar getMaxChunkBuildRadius() const;

    // vIndex: 280, symbol: ?getEditorPlayer@ServerPlayer@@UEBA?AV?$NonOwnerPointer@VIEditorPlayer@Editor@@@Bedrock@@XZ
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const;

    // vIndex: 281, symbol: ?destroyEditorPlayer@ServerPlayer@@UEAAXXZ
    virtual void destroyEditorPlayer();

    // vIndex: 282, symbol: ?_getSpawnChunkLimit@ServerPlayer@@MEBAHXZ
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 283, symbol: ?_updateChunkPublisherView@ServerPlayer@@MEAAXAEBVVec3@@M@Z
    virtual void _updateChunkPublisherView(class Vec3 const&, float);

    // symbol: ?frameUpdate@ServerPlayer@@UEAAXAEAVFrameUpdateContextBase@@@Z
    MCVAPI void frameUpdate(class FrameUpdateContextBase&);

    // symbol: ?openPortfolio@ServerPlayer@@UEAAXXZ
    MCVAPI void openPortfolio();

    // symbol:
    // ??0ServerPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVServerNetworkSystem@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@V?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@9V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H_NAEAVEntityContext@@@Z
    MCAPI ServerPlayer(class Level&, class PacketSender&, class ServerNetworkSystem&, class ClientBlobCache::Server::ActiveTransfersManager&, ::GameType, class NetworkIdentifier const&, ::SubClientId, std::function<void(class ServerPlayer&)>, class mce::UUID, std::string const&, std::string const&, std::unique_ptr<class Certificate>, int, bool, class EntityContext&);

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
