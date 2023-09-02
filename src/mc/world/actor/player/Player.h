#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkPeer.h"
#include "mc/server/volume/UserEntityIdentifierComponent.h"

// auto generated inclusion list
#include "mc/common/wrapper/BedSleepingResult.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/BuildPlatform.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/GameType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/MobSpawnMethod.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/SubClientId.h"
#include "mc/enums/TravelMethod.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"
#include "mc/world/actor/player/PlayerUISlot.h"
#include "mc/world/components/FlagComponent.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/events/MovementEventType.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class IEditorPlayer; }
namespace mce { class UUID; }
// clang-format on

class NetworkIdentifier;
class Certificate;
class UserEntityIdentifierComponent;

class Player : public ::Mob {
public:
    // Player inner types declare
    // clang-format off
    class PlayerSpawnPoint;
    // clang-format on

    // Player inner types define
    class PlayerSpawnPoint {
    public:
        // prevent constructor by default
        PlayerSpawnPoint& operator=(PlayerSpawnPoint const&) = delete;
        PlayerSpawnPoint(PlayerSpawnPoint const&)            = delete;
        PlayerSpawnPoint()                                   = delete;

    public:
        // NOLINTBEGIN
        // symbol: ?hasSpawnBlock@PlayerSpawnPoint@Player@@QEBA_NXZ
        MCAPI bool hasSpawnBlock() const;

        // symbol: ?setSpawnPoint@PlayerSpawnPoint@Player@@QEAAXAEBVBlockPos@@V?$AutomaticID@VDimension@@H@@0@Z
        MCAPI void setSpawnPoint(class BlockPos const&, class AutomaticID<class Dimension, int>, class BlockPos const&);

        // NOLINTEND
    };

    union LevelSleepStatus {
        int32_t data; // this+0x0
        struct {
            char unknown;
        } object; // this+0x0
    };

public:
    LLNDAPI UserEntityIdentifierComponent& getUserEntityIdentifier() const;
    // clang-format off
    [[nodiscard]] inline NetworkIdentifier& getNetworkIdentifier() const { return getUserEntityIdentifier().mNetworkId; }
    [[nodiscard]] inline optional_ref<Certificate> getCertificate() const { return getUserEntityIdentifier().mCertificate.get(); }
    [[nodiscard]] inline mce::UUID& getUuid() const { return getUserEntityIdentifier().mClientUUID; }
    [[nodiscard]] inline SubClientId& getClientSubId() const { return getUserEntityIdentifier().mClientSubId; }
    [[nodiscard]] inline std::string getIPAndPort() const {return getNetworkIdentifier().getIPAndPort(); }
    // clang-format on

    LLNDAPI std::string getDeviceId() const;

    LLNDAPI std::optional<NetworkPeer::NetworkStatus> getNetworkStatus() const;

    LLNDAPI std::string getRealName() const;

    // prevent constructor by default
    Player& operator=(Player const&) = delete;
    Player(Player const&)            = delete;
    Player()                         = delete;

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@Player@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 12, symbol: ?initializeComponents@Player@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 14, symbol: ?_serverInitItemStackIds@Player@@MEAAXXZ
    virtual void _serverInitItemStackIds();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: ?resetUserPos@Player@@UEAAX_N@Z
    virtual void resetUserPos(bool);

    // vIndex: 19, symbol: ?remove@Player@@UEAAXXZ
    virtual void remove();

    // vIndex: 32, symbol: ?getInterpolatedRidingOffset@Player@@UEBA?AVVec3@@MH@Z
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 34, symbol: ?isFireImmune@Player@@UEBA_NXZ
    virtual bool isFireImmune() const;

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 38, symbol: ?teleportTo@Player@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);

    // vIndex: 42, symbol:
    // ?tryCreateAddActorPacket@Player@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 43, symbol: ?normalTick@Player@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 45, symbol: ?passengerTick@Player@@UEAAXXZ
    virtual void passengerTick();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 59, symbol:
    // ?getFormattedNameTag@Player@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getFormattedNameTag() const;

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 69, symbol: ?getShadowRadius@Player@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 74, symbol: ?canInteractWithOtherEntitiesInGame@Player@@UEBA_NXZ
    virtual bool canInteractWithOtherEntitiesInGame() const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 79, symbol: ?isImmobile@Player@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 81, symbol: ?isSilentObserver@Player@@UEBA_NXZ
    virtual bool isSilentObserver() const;

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 84, symbol: ?isSleeping@Player@@UEBA_NXZ
    virtual bool isSleeping() const;

    // vIndex: 85, symbol: ?setSleeping@Player@@UEAAX_N@Z
    virtual void setSleeping(bool);

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 88, symbol: ?isBlocking@Player@@UEBA_NXZ
    virtual bool isBlocking() const;

    // vIndex: 89, symbol: ?isDamageBlocked@Player@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isDamageBlocked(class ActorDamageSource const&) const;

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 103, symbol: ?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool attack(class Actor&, ::ActorDamageCause const&);

    // vIndex: 120, symbol: ?isInvulnerableTo@Player@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 125, symbol: ?onBounceStarted@Player@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void onBounceStarted(class BlockPos const&, class Block const&);

    // vIndex: 126, symbol: ?feed@Player@@UEAAXH@Z
    virtual void feed(int);

    // vIndex: 127, symbol: ?handleEntityEvent@Player@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 129, symbol: ?getActorRendererId@Player@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getActorRendererId() const;

    // vIndex: 135, symbol: ?awardKillScore@Player@@UEAAXAEAVActor@@H@Z
    virtual void awardKillScore(class Actor&, int);

    // vIndex: 136, symbol: ?setArmor@Player@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setArmor(::ArmorSlot, class ItemStack const&);

    // vIndex: 144, symbol: ?setCarriedItem@Player@@UEAAXAEBVItemStack@@@Z
    virtual void setCarriedItem(class ItemStack const&);

    // vIndex: 145, symbol: ?getCarriedItem@Player@@UEBAAEBVItemStack@@XZ
    virtual class ItemStack const& getCarriedItem() const;

    // vIndex: 146, symbol: ?setOffhandSlot@Player@@UEAAXAEBVItemStack@@@Z
    virtual void setOffhandSlot(class ItemStack const&);

    // vIndex: 147, symbol: ?getEquippedTotem@Player@@UEBAAEBVItemStack@@XZ
    virtual class ItemStack const& getEquippedTotem() const;

    // vIndex: 148, symbol: ?consumeTotem@Player@@UEAA_NXZ
    virtual bool consumeTotem();

    // vIndex: 153, symbol: ?getEntityTypeId@Player@@UEBA?AW4ActorType@@XZ
    virtual ::ActorType getEntityTypeId() const;

    // vIndex: 157, symbol: ?canFreeze@Player@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 161, symbol: ?getPortalCooldown@Player@@UEBAHXZ
    virtual int getPortalCooldown() const;

    // vIndex: 162, symbol: ?getPortalWaitTime@Player@@UEBAHXZ
    virtual int getPortalWaitTime() const;

    // vIndex: 163, symbol: ?canChangeDimensionsUsingPortal@Player@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 168, symbol: ?causeFallDamage@Player@@UEAAXMMVActorDamageSource@@@Z
    virtual void causeFallDamage(float, float, class ActorDamageSource);

    // vIndex: 173, symbol: ?onSynchedDataUpdate@Player@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 174, symbol: ?canAddPassenger@Player@@UEBA_NAEAVActor@@@Z
    virtual bool canAddPassenger(class Actor&) const;

    // vIndex: 176, symbol: ?canBePulledIntoVehicle@Player@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 180, symbol: ?sendMotionPacketIfNeeded@Player@@UEAAXXZ
    virtual void sendMotionPacketIfNeeded();

    // vIndex: 182, symbol: ?startSwimming@Player@@UEAAXXZ
    virtual void startSwimming();

    // vIndex: 183, symbol: ?stopSwimming@Player@@UEAAXXZ
    virtual void stopSwimming();

    // vIndex: 185, symbol: ?getCommandPermissionLevel@Player@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    // vIndex: 197, symbol: ?canObstructSpawningAndBlockPlacement@Player@@UEBA_NXZ
    virtual bool canObstructSpawningAndBlockPlacement() const;

    // vIndex: 198, symbol: ?getAnimationComponent@Player@@UEAAAEAVAnimationComponent@@XZ
    virtual class AnimationComponent& getAnimationComponent();

    // vIndex: 201, symbol: ?useItem@Player@@UEAAXAEAVItemStackBase@@W4ItemUseMethod@@_N@Z
    virtual void useItem(class ItemStackBase&, ::ItemUseMethod, bool);

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 205, symbol: ?getMapDecorationRotation@Player@@UEBAMXZ
    virtual float getMapDecorationRotation() const;

    // vIndex: 207, symbol: ?add@Player@@UEAA_NAEAVItemStack@@@Z
    virtual bool add(class ItemStack&);

    // vIndex: 208, symbol: ?drop@Player@@UEAA_NAEBVItemStack@@_N@Z
    virtual bool drop(class ItemStack const&, bool);

    // vIndex: 216, symbol: ?startSpinAttack@Player@@UEAAXXZ
    virtual void startSpinAttack();

    // vIndex: 217, symbol: ?stopSpinAttack@Player@@UEAAXXZ
    virtual void stopSpinAttack();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 224, symbol: ?die@Player@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 225, symbol: ?shouldDropDeathLoot@Player@@UEBA_NXZ
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 231, symbol: ?getLastDeathPos@Player@@UEBA?AV?$optional@VBlockPos@@@std@@XZ
    virtual std::optional<class BlockPos> getLastDeathPos() const;

    // vIndex: 232, symbol: ?getLastDeathDimension@Player@@UEBA?AV?$optional@V?$AutomaticID@VDimension@@H@@@std@@XZ
    virtual std::optional<class AutomaticID<class Dimension, int>> getLastDeathDimension() const;

    // vIndex: 233, symbol: ?hasDiedBefore@Player@@UEBA_NXZ
    virtual bool hasDiedBefore() const;

    // vIndex: 235, symbol: ?_shouldProvideFeedbackOnHandContainerItemSet@Player@@MEBA_NW4HandSlot@@AEBVItemStack@@@Z
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot, class ItemStack const&) const;

    // vIndex: 236, symbol: ?_shouldProvideFeedbackOnArmorSet@Player@@MEBA_NW4ArmorSlot@@AEBVItemStack@@@Z
    virtual bool _shouldProvideFeedbackOnArmorSet(::ArmorSlot, class ItemStack const&) const;

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@Player@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: ?readAdditionalSaveData@Player@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@Player@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 252, symbol: ?_onSizeUpdated@Player@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 259, symbol: ?getSpeed@Player@@UEBAMXZ
    virtual float getSpeed() const;

    // vIndex: 260, symbol: ?setSpeed@Player@@UEAAXM@Z
    virtual void setSpeed(float);

    // vIndex: 264, symbol: ?aiStep@Player@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 265, symbol: ?aiStep@Player@@UEBAXAEAUIMobMovementProxy@@@Z
    virtual void aiStep(struct IMobMovementProxy&) const;

    // vIndex: 271, symbol: ?getItemUseDuration@Player@@UEBAHXZ
    virtual int getItemUseDuration() const;

    // vIndex: 272, symbol: ?getItemUseStartupProgress@Player@@UEBAMXZ
    virtual float getItemUseStartupProgress() const;

    // vIndex: 273, symbol: ?getItemUseIntervalProgress@Player@@UEBAMXZ
    virtual float getItemUseIntervalProgress() const;

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 296, symbol:
    // ?getAllHand@Player@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack const*> getAllHand() const;

    // vIndex: 297, symbol:
    // ?getAllEquipment@Player@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack const*> getAllEquipment() const;

    // vIndex: 299, symbol: ?dropEquipmentOnDeath@Player@@UEAAXAEBVActorDamageSource@@H@Z
    virtual void dropEquipmentOnDeath(class ActorDamageSource const&, int);

    // vIndex: 300, symbol: ?dropEquipmentOnDeath@Player@@UEAAXXZ
    virtual void dropEquipmentOnDeath();

    // vIndex: 301, symbol: ?clearVanishEnchantedItemsOnDeath@Player@@UEAAXXZ
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 302, symbol: ?sendInventory@Player@@UEAAX_N@Z
    virtual void sendInventory(bool);

    // vIndex: 313, symbol: ?canExistWhenDisallowMob@Player@@UEBA_NXZ
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 317, symbol:
    // ?initBodyControl@Player@@EEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    // vIndex: 322, symbol: ?updateGliding@Player@@MEAAXXZ
    virtual void updateGliding();

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

    // vIndex: 325, symbol: ?prepareRegion@Player@@UEAAXAEAVChunkSource@@@Z
    virtual void prepareRegion(class ChunkSource&);

    // vIndex: 326, symbol: ?destroyRegion@Player@@UEAAXXZ
    virtual void destroyRegion();

    // vIndex: 327, symbol: ?suspendRegion@Player@@UEAAXXZ
    virtual void suspendRegion();

    // vIndex: 328, symbol: ?resendAllChunks@Player@@UEAAXXZ
    virtual void resendAllChunks();

    // vIndex: 329, symbol: ?_fireWillChangeDimension@Player@@UEAAXXZ
    virtual void _fireWillChangeDimension();

    // vIndex: 330, symbol: ?_fireDimensionChanged@Player@@UEAAXXZ
    virtual void _fireDimensionChanged();

    // vIndex: 331, symbol: ?changeDimensionWithCredits@Player@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);

    // vIndex: 332, symbol: ?tickWorld@Player@@UEAAXAEBUTick@@@Z
    virtual void tickWorld(struct Tick const&);

    // vIndex: 333, symbol: __unk_vfn_333
    virtual void __unk_vfn_333() = 0;

    // vIndex: 334, symbol:
    // ?getTickingOffsets@Player@@UEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@XZ
    virtual std::vector<class ChunkPos> const& getTickingOffsets() const;

    // vIndex: 335, symbol: ?moveView@Player@@UEAAXXZ
    virtual void moveView();

    // vIndex: 336, symbol: ?moveSpawnView@Player@@UEAAXAEBVVec3@@V?$AutomaticID@VDimension@@H@@@Z
    virtual void moveSpawnView(class Vec3 const&, class AutomaticID<class Dimension, int>);

    // vIndex: 337, symbol: ?setName@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void setName(std::string const&);

    // vIndex: 338, symbol: ?getTravelledMethod@Player@@UEBA?AW4TravelMethod@@XZ
    virtual ::TravelMethod getTravelledMethod() const;

    // vIndex: 339, symbol: ?checkMovementStats@Player@@UEAAXAEBVVec3@@@Z
    virtual void checkMovementStats(class Vec3 const&);

    // vIndex: 340, symbol: __unk_vfn_340
    virtual void __unk_vfn_340();

    // vIndex: 341, symbol: __unk_vfn_341
    virtual void __unk_vfn_341();

    // vIndex: 342, symbol: ?respawn@Player@@UEAAXXZ
    virtual void respawn();

    // vIndex: 343, symbol: __unk_vfn_343
    virtual void __unk_vfn_343();

    // vIndex: 344, symbol: __unk_vfn_344
    virtual void __unk_vfn_344();

    // vIndex: 345, symbol: ?hasResource@Player@@UEAA_NH@Z
    virtual bool hasResource(int);

    // vIndex: 346, symbol: ?completeUsingItem@Player@@UEAAXXZ
    virtual void completeUsingItem();

    // vIndex: 347, symbol: ?startDestroying@Player@@UEAAXXZ
    virtual void startDestroying();

    // vIndex: 348, symbol: ?stopDestroying@Player@@UEAAXXZ
    virtual void stopDestroying();

    // vIndex: 349, symbol: __unk_vfn_349
    virtual void __unk_vfn_349();

    // vIndex: 350, symbol: __unk_vfn_350
    virtual void __unk_vfn_350();

    // vIndex: 351, symbol: ?openTrading@Player@@UEAAXAEBUActorUniqueID@@_N@Z
    virtual void openTrading(struct ActorUniqueID const&, bool);

    // vIndex: 352, symbol: ?canOpenContainerScreen@Player@@UEAA_NXZ
    virtual bool canOpenContainerScreen();

    // vIndex: 353, symbol: __unk_vfn_353
    virtual void __unk_vfn_353();

    // vIndex: 354, symbol: ?openNpcInteractScreen@Player@@UEAAXV?$shared_ptr@UINpcDialogueData@@@std@@@Z
    virtual void openNpcInteractScreen(std::shared_ptr<struct INpcDialogueData>);

    // vIndex: 355, symbol: ?openInventory@Player@@UEAAXXZ
    virtual void openInventory();

    // vIndex: 356, symbol: __unk_vfn_356
    virtual void __unk_vfn_356();

    // vIndex: 357, symbol: __unk_vfn_357
    virtual void __unk_vfn_357();

    // vIndex: 358, symbol:
    // ?displayTextObjectMessage@Player@@UEAAXAEBVTextObjectRoot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&);

    // vIndex: 359, symbol:
    // ?displayTextObjectWhisperMessage@Player@@UEAAXAEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void
    displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&);

    // vIndex: 360, symbol:
    // ?displayTextObjectWhisperMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);

    // vIndex: 361, symbol:
    // ?displayWhisperMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);

    // vIndex: 362, symbol: ?startSleepInBed@Player@@UEAA?AW4BedSleepingResult@@AEBVBlockPos@@@Z
    virtual ::BedSleepingResult startSleepInBed(class BlockPos const&);

    // vIndex: 363, symbol: ?stopSleepInBed@Player@@UEAAX_N0@Z
    virtual void stopSleepInBed(bool, bool);

    // vIndex: 364, symbol: ?canStartSleepInBed@Player@@UEAA_NXZ
    virtual bool canStartSleepInBed();

    // vIndex: 365, symbol: ?getSleepTimer@Player@@UEBAHXZ
    virtual int getSleepTimer() const;

    // vIndex: 366, symbol: ?getPreviousTickSleepTimer@Player@@UEBAHXZ
    virtual int getPreviousTickSleepTimer() const;

    // vIndex: 367, symbol: ?openSign@Player@@UEAAXAEBVBlockPos@@_N@Z
    virtual void openSign(class BlockPos const&, bool);

    // vIndex: 368, symbol: __unk_vfn_368
    virtual void __unk_vfn_368();

    // vIndex: 369, symbol: ?isHostingPlayer@Player@@UEBA_NXZ
    virtual bool isHostingPlayer() const;

    // vIndex: 370, symbol: ?isLoading@Player@@UEBA_NXZ
    virtual bool isLoading() const;

    // vIndex: 371, symbol: ?isPlayerInitialized@Player@@UEBA_NXZ
    virtual bool isPlayerInitialized() const;

    // vIndex: 372, symbol: __unk_vfn_372
    virtual void __unk_vfn_372();

    // vIndex: 373, symbol: ?registerTrackedBoss@Player@@UEAAXUActorUniqueID@@@Z
    virtual void registerTrackedBoss(struct ActorUniqueID);

    // vIndex: 374, symbol: ?unRegisterTrackedBoss@Player@@UEAAXUActorUniqueID@@@Z
    virtual void unRegisterTrackedBoss(struct ActorUniqueID);

    // vIndex: 375, symbol: ?setPlayerGameType@Player@@UEAAXW4GameType@@@Z
    virtual void setPlayerGameType(::GameType);

    // vIndex: 376, symbol: ?initHUDContainerManager@Player@@UEAAXXZ
    virtual void initHUDContainerManager();

    // vIndex: 377, symbol: ?_crit@Player@@UEAAXAEAVActor@@@Z
    virtual void _crit(class Actor&);

    // vIndex: 378, symbol: ?getEventing@Player@@UEBAPEAVIMinecraftEventing@@XZ
    virtual class IMinecraftEventing* getEventing() const;

    // vIndex: 379, symbol: __unk_vfn_379
    virtual void __unk_vfn_379();

    // vIndex: 380, symbol: ?sendEventPacket@Player@@UEBAXAEAVLegacyTelemetryEventPacket@@@Z
    virtual void sendEventPacket(class LegacyTelemetryEventPacket&) const;

    // vIndex: 381, symbol: ?addExperience@Player@@UEAAXH@Z
    virtual void addExperience(int);

    // vIndex: 382, symbol: ?addLevels@Player@@UEAAXH@Z
    virtual void addLevels(int);

    // vIndex: 383, symbol: ?setContainerData@ServerPlayer@@UEAAXAEAVIContainerManager@@HH@Z
    virtual void setContainerData(class IContainerManager&, int, int) = 0;

    // vIndex: 384, symbol: ?slotChanged@ServerPlayer@@UEAAXAEAVIContainerManager@@AEAVContainer@@HAEBVItemStack@@2_N@Z
    virtual void slotChanged(
        class IContainerManager&,
        class Container&,
        int,
        class ItemStack const&,
        class ItemStack const&,
        bool
    ) = 0;

    // vIndex: 385, symbol: ?inventoryChanged@Player@@UEAAXAEAVContainer@@HAEBVItemStack@@1_N@Z
    virtual void inventoryChanged(class Container&, int, class ItemStack const&, class ItemStack const&, bool);

    // vIndex: 386, symbol: ?refreshContainer@ServerPlayer@@UEAAXAEAVIContainerManager@@@Z
    virtual void refreshContainer(class IContainerManager&) = 0;

    // vIndex: 387, symbol: ?deleteContainerManager@Player@@UEAAXXZ
    virtual void deleteContainerManager();

    // vIndex: 388, symbol: ?isActorRelevant@Player@@UEAA_NAEBVActor@@@Z
    virtual bool isActorRelevant(class Actor const&);

    // vIndex: 389, symbol: ?isTeacher@ServerPlayer@@UEBA_NXZ
    virtual bool isTeacher() const = 0;

    // vIndex: 390, symbol: ?onSuspension@Player@@UEAAXXZ
    virtual void onSuspension();

    // vIndex: 391, symbol: ?onLinkedSlotsChanged@Player@@UEAAXXZ
    virtual void onLinkedSlotsChanged();

    // vIndex: 392, symbol: ?startCooldown@Player@@UEAAXPEBVItem@@_N@Z
    virtual void startCooldown(class Item const*, bool);

    // vIndex: 393, symbol: ?getItemCooldownLeft@Player@@UEBAHAEBVHashedString@@@Z
    virtual int getItemCooldownLeft(class HashedString const&) const;

    // vIndex: 394, symbol: ?getItemCooldownLeft@Player@@UEBAH_K@Z
    virtual int getItemCooldownLeft(uint64) const;

    // vIndex: 395, symbol: ?getMaxItemCooldownLeft@Player@@UEBAHXZ
    virtual int getMaxItemCooldownLeft() const;

    // vIndex: 396, symbol: ?isItemOnCooldown@Player@@UEBA_NAEBVHashedString@@@Z
    virtual bool isItemOnCooldown(class HashedString const&) const;

    // vIndex: 397, symbol: ?sendInventoryTransaction@ServerPlayer@@UEBAXAEBVInventoryTransaction@@@Z
    virtual void sendInventoryTransaction(class InventoryTransaction const&) const = 0;

    // vIndex: 398, symbol:
    // ?sendComplexInventoryTransaction@ServerPlayer@@UEBAXV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@@Z
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const = 0;

    // vIndex: 399, symbol: ?sendNetworkPacket@Player@@UEBAXAEAVPacket@@@Z
    virtual void sendNetworkPacket(class Packet&) const;

    // vIndex: 400, symbol: ?getPlayerEventCoordinator@ServerPlayer@@UEAAAEAVPlayerEventCoordinator@@XZ
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator() = 0;

    // vIndex: 401, symbol: ?reportMovementTelemetry@Player@@UEAAXW4MovementEventType@@@Z
    virtual void reportMovementTelemetry(::MovementEventType);

    // vIndex: 402, symbol: __unk_vfn_402
    virtual void __unk_vfn_402();

    // vIndex: 403, symbol: ?getXuid@Player@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getXuid() const;

    // vIndex: 404, symbol: ?getMovementSettings@Player@@UEBAAEBUPlayerMovementSettings@@XZ
    virtual struct PlayerMovementSettings const& getMovementSettings() const;

    // vIndex: 405, symbol: __unk_vfn_405
    virtual void __unk_vfn_405();

    // vIndex: 406, symbol: ?getMaxChunkBuildRadius@Player@@UEBAEXZ
    virtual uchar getMaxChunkBuildRadius() const;

    // vIndex: 407, symbol: ?onMovePlayerPacketNormal@Player@@MEAAXAEBVVec3@@AEBVVec2@@M@Z
    virtual void onMovePlayerPacketNormal(class Vec3 const&, class Vec2 const&, float);

    // vIndex: 408, symbol: ?_createChunkSource@Player@@MEAA?AV?$shared_ptr@VChunkViewSource@@@std@@AEAVChunkSource@@@Z
    virtual std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource&);

    // vIndex: 409, symbol: ?setAbilities@Player@@UEAAXAEBVLayeredAbilities@@@Z
    virtual void setAbilities(class LayeredAbilities const&);

    // vIndex: 410, symbol: ?getEditorPlayer@ServerPlayer@@UEBA?AV?$NonOwnerPointer@VIEditorPlayer@Editor@@@Bedrock@@XZ
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const = 0;

    // vIndex: 411, symbol: ?destroyEditorPlayer@ServerPlayer@@UEAAXXZ
    virtual void destroyEditorPlayer() = 0;

    // symbol: ?addSavedChunk@Player@@UEAAXAEBVChunkPos@@@Z
    MCVAPI void addSavedChunk(class ChunkPos const&);

    // symbol: ?displayChatMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void displayChatMessage(std::string const&, std::string const&);

    // symbol: ?displayClientMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void displayClientMessage(std::string const&);

    // symbol: ?getAlwaysShowNameTag@Player@@UEBA_NXZ
    MCVAPI bool getAlwaysShowNameTag() const;

    // symbol: ?getCurrentStructureFeature@Player@@UEBA?AW4StructureFeatureType@@XZ
    MCVAPI ::StructureFeatureType getCurrentStructureFeature() const;

    // symbol: ?getUserId@Player@@UEBAIXZ
    MCVAPI uint getUserId() const;

    // symbol: ?isAutoJumpEnabled@Player@@UEBA_NXZ
    MCVAPI bool isAutoJumpEnabled() const;

    // symbol: ?isCreativeModeAllowed@Player@@UEAA_NXZ
    MCVAPI bool isCreativeModeAllowed();

    // symbol: ?isInTrialMode@Player@@UEAA_NXZ
    MCVAPI bool isInTrialMode();

    // symbol: ?isPlayer@Player@@UEBA_NXZ
    MCVAPI bool isPlayer() const;

    // symbol: ?isShootable@Player@@UEAA_NXZ
    MCVAPI bool isShootable();

    // symbol: ?isSimulated@Player@@UEBA_NXZ
    MCVAPI bool isSimulated() const;

    // symbol: ?openBook@Player@@UEAAXH_NHPEAVBlockActor@@@Z
    MCVAPI void openBook(int, bool, int, class BlockActor*);

    // symbol: ?openChalkboard@Player@@UEAAXAEAVChalkboardBlockActor@@_N@Z
    MCVAPI void openChalkboard(class ChalkboardBlockActor&, bool);

    // symbol: ?openPortfolio@Player@@UEAAXXZ
    MCVAPI void openPortfolio();

    // symbol: ?playEmote@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCVAPI void playEmote(std::string const&, bool);

    // symbol: ?resetRot@Player@@UEAAXXZ
    MCVAPI void resetRot();

    // symbol: ?stopLoading@Player@@UEAAXXZ
    MCVAPI void stopLoading();

    // symbol: ??1Player@@UEAA@XZ
    MCVAPI ~Player();

    // symbol:
    // ??0Player@@QEAA@AEAVLevel@@AEAVPacketSender@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@6V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@9@AEAVEntityContext@@66@Z
    MCAPI
    Player(class Level&, class PacketSender&, ::GameType, class NetworkIdentifier const&, ::SubClientId, class mce::UUID, std::string const&, std::string const&, std::unique_ptr<class Certificate>, class EntityContext&, std::string const&, std::string const&);

    // symbol: ?broadcastPlayerSpawnedMobEvent@Player@@QEAAXW4ActorType@@W4MobSpawnMethod@@@Z
    MCAPI void broadcastPlayerSpawnedMobEvent(::ActorType, ::MobSpawnMethod);

    // symbol: ?canBeSeenOnMap@Player@@QEBA_NXZ
    MCAPI bool canBeSeenOnMap() const;

    // symbol: ?canDestroy@Player@@QEBA_NAEBVBlock@@@Z
    MCAPI bool canDestroy(class Block const&) const;

    // symbol: ?canSleep@Player@@QEBA_NXZ
    MCAPI bool canSleep() const;

    // symbol: ?canStackInOffhand@Player@@QEBA_NAEBVItemStack@@@Z
    MCAPI bool canStackInOffhand(class ItemStack const&) const;

    // symbol: ?canUseAbility@Player@@QEBA_NW4AbilitiesIndex@@@Z
    MCAPI bool canUseAbility(::AbilitiesIndex) const;

    // symbol: ?canUseOperatorBlocks@Player@@QEBA_NXZ
    MCAPI bool canUseOperatorBlocks() const;

    // symbol: ?causeFoodExhaustion@Player@@QEAAXM@Z
    MCAPI void causeFoodExhaustion(float);

    // symbol: ?clearRespawnPosition@Player@@QEAAXXZ
    MCAPI void clearRespawnPosition();

    // symbol: ?dropCursorSelectedItemOnDeath@Player@@QEAAXXZ
    MCAPI void dropCursorSelectedItemOnDeath();

    // symbol: ?eat@Player@@QEAAXHM@Z
    MCAPI void eat(int, float);

    // symbol: ?eat@Player@@QEAAXAEBVItemStack@@@Z
    MCAPI void eat(class ItemStack const&);

    // symbol: ?equippedArmorItemCanBeMoved@Player@@QEBA_NAEBVItemStack@@@Z
    MCAPI bool equippedArmorItemCanBeMoved(class ItemStack const&) const;

    // symbol: ?fireDimensionChangedEvent@Player@@QEAAXV?$AutomaticID@VDimension@@H@@0@Z
    MCAPI void
        fireDimensionChangedEvent(class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);

    // symbol: ?forceAllowEating@Player@@QEBA_NXZ
    MCAPI bool forceAllowEating() const;

    // symbol: ?getAbilities@Player@@QEBAAEBVLayeredAbilities@@XZ
    MCAPI class LayeredAbilities const& getAbilities() const;

    // symbol: ?getAbilities@Player@@QEAAAEAVLayeredAbilities@@XZ
    MCAPI class LayeredAbilities& getAbilities();

    // symbol: ?getAgent@Player@@QEBAPEAVAgent@@XZ
    MCAPI class Agent* getAgent() const;

    // symbol: ?getAgentID@Player@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getAgentID() const;

    // symbol: ?getAgentIfAllowed@Player@@QEBAPEAVAgent@@_NUActorUniqueID@@@Z
    MCAPI class Agent* getAgentIfAllowed(bool, struct ActorUniqueID) const;

    // symbol: ?getBedPosition@Player@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getBedPosition() const;

    // symbol: ?getBlockedUsingDamagedShieldTimeStamp@Player@@QEBA_JXZ
    MCAPI int64 getBlockedUsingDamagedShieldTimeStamp() const;

    // symbol: ?getBlockedUsingShieldTimeStamp@Player@@QEBA_JXZ
    MCAPI int64 getBlockedUsingShieldTimeStamp() const;

    // symbol: ?getBlockingStartTimeStamp@Player@@QEBA_JXZ
    MCAPI int64 getBlockingStartTimeStamp() const;

    // symbol: ?getCapePos@Player@@QEAA?AVVec3@@M@Z
    MCAPI class Vec3 getCapePos(float);

    // symbol: ?getChunkRadius@Player@@QEBAIXZ
    MCAPI uint getChunkRadius() const;

    // symbol: ?getContainerManager@Player@@QEAA?AV?$weak_ptr@VIContainerManager@@@std@@XZ
    MCAPI std::weak_ptr<class IContainerManager> getContainerManager();

    // symbol: ?getCurrentActiveShield@Player@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getCurrentActiveShield() const;

    // symbol: ?getDestroyProgress@Player@@QEBAMAEBVBlock@@@Z
    MCAPI float getDestroyProgress(class Block const&) const;

    // symbol: ?getDestroySpeed@Player@@QEBAMAEBVBlock@@@Z
    MCAPI float getDestroySpeed(class Block const&) const;

    // symbol: ?getDirection@Player@@QEBAHXZ
    MCAPI int getDirection() const;

    // symbol: ?getEnchantmentSeed@Player@@QEBAHXZ
    MCAPI int getEnchantmentSeed() const;

    // symbol: ?getExpectedSpawnDimensionId@Player@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
    MCAPI class AutomaticID<class Dimension, int> getExpectedSpawnDimensionId() const;

    // symbol: ?getExpectedSpawnPosition@Player@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getExpectedSpawnPosition() const;

    // symbol: ?getInteractText@Player@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getInteractText() const;

    // symbol: ?getInventory@Player@@QEAAAEAVContainer@@XZ
    MCAPI class Container& getInventory();

    // symbol: ?getItemInUse@Player@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getItemInUse() const;

    // symbol:
    // ?getItemInteractText@Player@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItem@@@Z
    MCAPI std::string getItemInteractText(class Item const&) const;

    // symbol: ?getItemStackNetManager@Player@@QEBAPEBVItemStackNetManagerBase@@XZ
    MCAPI class ItemStackNetManagerBase const* getItemStackNetManager() const;

    // symbol: ?getItemStackNetManager@Player@@QEAAPEAVItemStackNetManagerBase@@XZ
    MCAPI class ItemStackNetManagerBase* getItemStackNetManager();

    // symbol: ?getLuck@Player@@QEAAMXZ
    MCAPI float getLuck();

    // symbol: ?getMapIndex@Player@@QEAAHXZ
    MCAPI int getMapIndex();

    // symbol: ?getName@Player@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getNewEnchantmentSeed@Player@@QEAAXXZ
    MCAPI void getNewEnchantmentSeed();

    // symbol: ?getPickupArea@Player@@QEBA?AVAABB@@XZ
    MCAPI class AABB getPickupArea() const;

    // symbol: ?getPlatform@Player@@QEBA?AW4BuildPlatform@@XZ
    MCAPI ::BuildPlatform getPlatform() const;

    // symbol: ?getPlatformOnlineId@Player@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getPlatformOnlineId() const;

    // symbol: ?getPlayerGameType@Player@@QEBA?AW4GameType@@XZ
    MCAPI ::GameType getPlayerGameType() const;

    // symbol: ?getPlayerIndex@Player@@QEBAHXZ
    MCAPI int getPlayerIndex() const;

    // symbol: ?getPlayerLevel@Player@@QEBAHXZ
    MCAPI int getPlayerLevel() const;

    // symbol: ?getPlayerPermissionLevel@Player@@QEBA?AW4PlayerPermissionLevel@@XZ
    MCAPI ::PlayerPermissionLevel getPlayerPermissionLevel() const;

    // symbol: ?getPlayerSessionId@Player@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getPlayerSessionId() const;

    // symbol: ?getPlayerUIItem@Player@@QEAAAEBVItemStack@@W4PlayerUISlot@@@Z
    MCAPI class ItemStack const& getPlayerUIItem(::PlayerUISlot);

    // symbol: ?getRespawnAnchorPosition@Player@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getRespawnAnchorPosition() const;

    // symbol: ?getSelectedItem@Player@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getSelectedItem() const;

    // symbol: ?getSelectedItemSlot@Player@@QEBAHXZ
    MCAPI int getSelectedItemSlot() const;

    // symbol: ?getServerId@Player@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getServerId() const;

    // symbol: ?getSkin@Player@@QEBAAEBVSerializedSkin@@XZ
    MCAPI class SerializedSkin const& getSkin() const;

    // symbol: ?getSkin@Player@@QEAAAEAVSerializedSkin@@XZ
    MCAPI class SerializedSkin& getSkin();

    // symbol: ?getSleepRotation@Player@@QEBAMXZ
    MCAPI float getSleepRotation() const;

    // symbol: ?getSpawnDimension@Player@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
    MCAPI class AutomaticID<class Dimension, int> getSpawnDimension() const;

    // symbol: ?getSpawnPosition@Player@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getSpawnPosition() const;

    // symbol: ?getSupplies@Player@@QEAAAEAVPlayerInventory@@XZ
    MCAPI class PlayerInventory& getSupplies();

    // symbol: ?getSupplies@Player@@QEBAAEBVPlayerInventory@@XZ
    MCAPI class PlayerInventory const& getSupplies() const;

    // symbol: ?getTrackedBosses@Player@@QEAAAEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@XZ
    MCAPI std::vector<struct ActorUniqueID> const& getTrackedBosses();

    // symbol: ?getUsedPotion@Player@@QEAA_NXZ
    MCAPI bool getUsedPotion();

    // symbol: ?getXpEarnedAtCurrentLevel@Player@@QEBAHXZ
    MCAPI int getXpEarnedAtCurrentLevel() const;

    // symbol: ?getXpNeededForLevelRange@Player@@QEBAIHH@Z
    MCAPI uint getXpNeededForLevelRange(int, int) const;

    // symbol: ?getXpNeededForNextLevel@Player@@QEBAHXZ
    MCAPI int getXpNeededForNextLevel() const;

    // symbol: ?hasBedPosition@Player@@QEBA_NXZ
    MCAPI bool hasBedPosition() const;

    // symbol: ?hasOpenContainer@Player@@QEBA_NXZ
    MCAPI bool hasOpenContainer() const;

    // symbol: ?hasOpenContainerOfContainerType@Player@@QEBA_NW4ContainerType@@@Z
    MCAPI bool hasOpenContainerOfContainerType(::ContainerType) const;

    // symbol: ?hasOwnedChunkSource@Player@@QEBA_NXZ
    MCAPI bool hasOwnedChunkSource() const;

    // symbol: ?hasResource@Player@@QEAA_NAEBVItemDescriptor@@@Z
    MCAPI bool hasResource(class ItemDescriptor const&);

    // symbol: ?hasRespawnAnchorPosition@Player@@QEBA_NXZ
    MCAPI bool hasRespawnAnchorPosition() const;

    // symbol: ?hasRespawnPosition@Player@@QEBA_NXZ
    MCAPI bool hasRespawnPosition() const;

    // symbol: ?interact@Player@@QEAA_NAEAVActor@@AEBVVec3@@@Z
    MCAPI bool interact(class Actor&, class Vec3 const&);

    // symbol: ?is2DPositionRelevant@Player@@QEAA_NV?$AutomaticID@VDimension@@H@@AEBVBlockPos@@@Z
    MCAPI bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const&);

    // symbol: ?isFlying@Player@@QEBA_NXZ
    MCAPI bool isFlying() const;

    // symbol: ?isForcedRespawn@Player@@QEBA_NXZ
    MCAPI bool isForcedRespawn() const;

    // symbol: ?isHiddenFrom@Player@@QEBA_NAEAVMob@@@Z
    MCAPI bool isHiddenFrom(class Mob&) const;

    // symbol: ?isHungry@Player@@QEBA_NXZ
    MCAPI bool isHungry() const;

    // symbol: ?isHurt@Player@@QEAA_NXZ
    MCAPI bool isHurt();

    // symbol: ?isInRaid@Player@@QEBA_NXZ
    MCAPI bool isInRaid() const;

    // symbol: ?isRespawningFromTheEnd@Player@@QEBA_NXZ
    MCAPI bool isRespawningFromTheEnd() const;

    // symbol: ?isSleepingLongEnough@Player@@QEBA_NXZ
    MCAPI bool isSleepingLongEnough() const;

    // symbol: ?isSpawned@Player@@QEBA_NXZ
    MCAPI bool isSpawned() const;

    // symbol: ?isUsingItem@Player@@QEBA_NXZ
    MCAPI bool isUsingItem() const;

    // symbol: ?isValidSpawn@Player@@QEBA_NXZ
    MCAPI bool isValidSpawn() const;

    // symbol: ?loadLastDeathLocation@Player@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void loadLastDeathLocation(class CompoundTag const&);

    // symbol: ?passengerCheckMovementStats@Player@@QEAAXXZ
    MCAPI void passengerCheckMovementStats();

    // symbol:
    // ?playPredictiveSynchronizedSound@Player@@QEAAXW4LevelSoundEvent@@AEBVVec3@@AEBVBlock@@AEBUActorDefinitionIdentifier@@_N@Z
    MCAPI void playPredictiveSynchronizedSound(
        ::LevelSoundEvent,
        class Vec3 const&,
        class Block const&,
        struct ActorDefinitionIdentifier const&,
        bool
    );

    // symbol:
    // ?playPredictiveSynchronizedSound@Player@@QEAAXW4LevelSoundEvent@@AEBVVec3@@AEBUActorDefinitionIdentifier@@H_N@Z
    MCAPI void playPredictiveSynchronizedSound(
        ::LevelSoundEvent,
        class Vec3 const&,
        struct ActorDefinitionIdentifier const&,
        int,
        bool
    );

    // symbol: ?recheckSpawnPosition@Player@@QEAAXXZ
    MCAPI void recheckSpawnPosition();

    // symbol: ?releaseUsingItem@Player@@QEAAXXZ
    MCAPI void releaseUsingItem();

    // symbol: ?resetPlayerLevel@Player@@QEAAXXZ
    MCAPI void resetPlayerLevel();

    // symbol: ?resetPublisherInitialSpawn@Player@@QEAAXXZ
    MCAPI void resetPublisherInitialSpawn();

    // symbol: ?resetToDefaultGameMode@Player@@QEAAXXZ
    MCAPI void resetToDefaultGameMode();

    // symbol: ?saveLastDeathLocation@Player@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void saveLastDeathLocation(class CompoundTag&) const;

    // symbol: ?sendPlayerTeleported@Player@@QEAAXXZ
    MCAPI void sendPlayerTeleported();

    // symbol: ?sendSpawnExperienceOrbPacketToServer@Player@@QEAAXAEBVVec3@@H@Z
    MCAPI void sendSpawnExperienceOrbPacketToServer(class Vec3 const&, int);

    // symbol: ?setAgent@Player@@QEAAXPEAVAgent@@@Z
    MCAPI void setAgent(class Agent*);

    // symbol: ?setBedRespawnPosition@Player@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setBedRespawnPosition(class BlockPos const&);

    // symbol: ?setBlockRespawnUntilClientMessage@Player@@QEAAX_N@Z
    MCAPI void setBlockRespawnUntilClientMessage(bool);

    // symbol: ?setChunkRadius@Player@@QEAAXI@Z
    MCAPI void setChunkRadius(uint);

    // symbol: ?setContainerManager@Player@@QEAAXV?$shared_ptr@VIContainerManager@@@std@@@Z
    MCAPI void setContainerManager(std::shared_ptr<class IContainerManager>);

    // symbol: ?setCursorSelectedItem@Player@@QEAAXAEBVItemStack@@@Z
    MCAPI void setCursorSelectedItem(class ItemStack const&);

    // symbol: ?setCursorSelectedItemGroup@Player@@QEAAXAEBVItemGroup@@@Z
    MCAPI void setCursorSelectedItemGroup(class ItemGroup const&);

    // symbol: ?setEnchantmentSeed@Player@@QEAAXH@Z
    MCAPI void setEnchantmentSeed(int);

    // symbol: ?setHasDied@Player@@QEAAX_N@Z
    MCAPI void setHasDied(bool);

    // symbol: ?setHasSeenCredits@Player@@QEAAX_N@Z
    MCAPI void setHasSeenCredits(bool);

    // symbol: ?setLastDeathDimension@Player@@QEAAXV?$AutomaticID@VDimension@@H@@@Z
    MCAPI void setLastDeathDimension(class AutomaticID<class Dimension, int>);

    // symbol: ?setLastDeathPos@Player@@QEAAXVBlockPos@@@Z
    MCAPI void setLastDeathPos(class BlockPos);

    // symbol: ?setLastHurtBy@Player@@QEAAXW4ActorType@@@Z
    MCAPI void setLastHurtBy(::ActorType);

    // symbol: ?setMapIndex@Player@@QEAAXH@Z
    MCAPI void setMapIndex(int);

    // symbol: ?setPermissions@Player@@QEAAXW4CommandPermissionLevel@@@Z
    MCAPI void setPermissions(::CommandPermissionLevel);

    // symbol: ?setPlatformOnlineId@Player@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setPlatformOnlineId(std::string const&);

    // symbol: ?setPlayerIndex@Player@@QEAAXH@Z
    MCAPI void setPlayerIndex(int);

    // symbol: ?setPlayerUIItem@Player@@QEAAXW4PlayerUISlot@@AEBVItemStack@@@Z
    MCAPI void setPlayerUIItem(::PlayerUISlot, class ItemStack const&);

    // symbol: ?setRespawnPosition@Player@@QEAAXAEBVBlockPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void setRespawnPosition(class BlockPos const&, class AutomaticID<class Dimension, int>);

    // symbol: ?setRespawnPositionCandidate@Player@@QEAAXXZ
    MCAPI void setRespawnPositionCandidate();

    // symbol: ?setRespawnReady@Player@@QEAAXAEBVVec3@@@Z
    MCAPI void setRespawnReady(class Vec3 const&);

    // symbol: ?setSelectedItem@Player@@QEAAXAEBVItemStack@@@Z
    MCAPI void setSelectedItem(class ItemStack const&);

    // symbol: ?setSelectedSlot@Player@@QEAAAEBVItemStack@@H@Z
    MCAPI class ItemStack const& setSelectedSlot(int);

    // symbol: ?setSpawnBlockRespawnPosition@Player@@QEAAXAEBVBlockPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const&, class AutomaticID<class Dimension, int>);

    // symbol: ?setUsedPotion@Player@@QEAAX_N@Z
    MCAPI void setUsedPotion(bool);

    // symbol: ?shouldShowCredits@Player@@QEBA_NXZ
    MCAPI bool shouldShowCredits() const;

    // symbol: ?startCooldown@Player@@QEAAXAEBVHashedString@@H_N@Z
    MCAPI void startCooldown(class HashedString const&, int, bool);

    // symbol: ?startGliding@Player@@QEAAXXZ
    MCAPI void startGliding();

    // symbol: ?startItemUseOn@Player@@QEAAXEAEBVBlockPos@@0AEBVItemStack@@@Z
    MCAPI void startItemUseOn(uchar, class BlockPos const&, class BlockPos const&, class ItemStack const&);

    // symbol: ?startUsingItem@Player@@QEAAXAEBVItemStack@@H@Z
    MCAPI void startUsingItem(class ItemStack const&, int);

    // symbol: ?stopGliding@Player@@QEAAXXZ
    MCAPI void stopGliding();

    // symbol: ?stopItemUseOn@Player@@QEAAXAEBVBlockPos@@AEBVItemStack@@@Z
    MCAPI void stopItemUseOn(class BlockPos const&, class ItemStack const&);

    // symbol: ?stopUsingItem@Player@@QEAAXXZ
    MCAPI void stopUsingItem();

    // symbol: ?take@Player@@QEAA_NAEAVActor@@HH@Z
    MCAPI bool take(class Actor&, int, int);

    // symbol: ?tryStartGliding@Player@@QEAA_NXZ
    MCAPI bool tryStartGliding();

    // symbol: ?updateBlockSourceTick@Player@@QEAAXXZ
    MCAPI void updateBlockSourceTick();

    // symbol: ?updateInventoryTransactions@Player@@QEAAXXZ
    MCAPI void updateInventoryTransactions();

    // symbol: ?updateSkin@Player@@QEAAXAEBVSerializedSkin@@H@Z
    MCAPI void updateSkin(class SerializedSkin const&, int);

    // symbol: ?updateSpawnChunkView@Player@@QEAAXXZ
    MCAPI void updateSpawnChunkView();

    // symbol: ?updateTrackedBosses@Player@@QEAAXXZ
    MCAPI void updateTrackedBosses();

    // symbol: ?useSelectedItem@Player@@QEAAXW4ItemUseMethod@@_N@Z
    MCAPI void useSelectedItem(::ItemUseMethod, bool);

    // symbol: ?_aiStep@Player@@SAXAEAUIPlayerMovementProxy@@@Z
    MCAPI static void _aiStep(struct IPlayerMovementProxy&);

    // symbol: ?_causeFoodExhaustion@Player@@SAXPEAVAttributeInstance@@_NM@Z
    MCAPI static void _causeFoodExhaustion(class AttributeInstance*, bool, float);

    // symbol: ?canJump@Player@@SA_NAEAUIPlayerMovementProxy@@@Z
    MCAPI static bool canJump(struct IPlayerMovementProxy&);

    // symbol:
    // ?checkAndFixSpawnPosition@Player@@SA_NAEAVVec3@@V?$vector@V?$not_null@PEAVBlockSource@@@gsl@@V?$allocator@V?$not_null@PEAVBlockSource@@@gsl@@@std@@@std@@VAABB@@_N33333F@Z
    MCAPI static bool checkAndFixSpawnPosition(
        class Vec3&,
        std::vector<gsl::not_null<class BlockSource*>>,
        class AABB,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        short
    );

    // symbol: ?checkNeedAutoJump@Player@@SA_NPEAUIPlayerMovementProxy@@MM@Z
    MCAPI static bool checkNeedAutoJump(struct IPlayerMovementProxy*, float, float);

    // symbol: ?handleJumpEffects@Player@@SAXAEAUIPlayerMovementProxy@@@Z
    MCAPI static void handleJumpEffects(struct IPlayerMovementProxy&);

    // symbol: ?isDangerousVolume@Player@@SA_NAEAVBlockSource@@AEBVAABB@@_N@Z
    MCAPI static bool isDangerousVolume(class BlockSource&, class AABB const&, bool);

    // symbol:
    // ?tryGetFromComponent@Player@@SAPEAV1@AEBV?$FlagComponent@UPlayerComponentFlag@@@@AEAVActorOwnerComponent@@_N@Z
    MCAPI static class Player*
    tryGetFromComponent(class FlagComponent<struct PlayerComponentFlag> const&, class ActorOwnerComponent&, bool);

    // symbol: ?tryGetFromEntity@Player@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class Player* tryGetFromEntity(class EntityContext&, bool);

    // symbol: ?tryGetFromEntity@Player@@SAPEAV1@V?$StackRefResultT@UEntityRefTraits@@@@_N@Z
    MCAPI static class Player* tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool);

    // symbol: ?tryGetFromEntity@Player@@SAPEBV1@AEBVEntityContext@@_N@Z
    MCAPI static class Player const* tryGetFromEntity(class EntityContext const&, bool);

    // symbol: ?DEFAULT_BB_HEIGHT@Player@@2MB
    MCAPI static float const DEFAULT_BB_HEIGHT;

    // symbol: ?DEFAULT_BB_WIDTH@Player@@2MB
    MCAPI static float const DEFAULT_BB_WIDTH;

    // symbol: ?DEFAULT_PLAYER_HEIGHT_OFFSET@Player@@2MB
    MCAPI static float const DEFAULT_PLAYER_HEIGHT_OFFSET;

    // symbol: ?DEFAULT_WALK_SPEED@Player@@2MB
    MCAPI static float const DEFAULT_WALK_SPEED;

    // symbol: ?DISTANCE_TO_TRANSFORM_EVENT@Player@@2MB
    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;

    // symbol: ?DISTANCE_TO_TRAVELLED_EVENT@Player@@2MB
    MCAPI static float const DISTANCE_TO_TRAVELLED_EVENT;

    // symbol: ?EXHAUSTION@Player@@2VAttribute@@B
    MCAPI static class Attribute const EXHAUSTION;

    // symbol: ?EXPERIENCE@Player@@2VAttribute@@B
    MCAPI static class Attribute const EXPERIENCE;

    // symbol: ?GLIDE_STOP_DELAY@Player@@2HB
    MCAPI static int const GLIDE_STOP_DELAY;

    // symbol: ?HUNGER@Player@@2VAttribute@@B
    MCAPI static class Attribute const HUNGER;

    // symbol: ?LEVEL@Player@@2VAttribute@@B
    MCAPI static class Attribute const LEVEL;

    // symbol: ?PLAYER_ALIVE_HEIGHT@Player@@2MB
    MCAPI static float const PLAYER_ALIVE_HEIGHT;

    // symbol: ?PLAYER_ALIVE_WIDTH@Player@@2MB
    MCAPI static float const PLAYER_ALIVE_WIDTH;

    // symbol: ?PLAYER_DEAD_HEIGHT@Player@@2MB
    MCAPI static float const PLAYER_DEAD_HEIGHT;

    // symbol: ?PLAYER_DEAD_WIDTH@Player@@2MB
    MCAPI static float const PLAYER_DEAD_WIDTH;

    // symbol: ?PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS@Player@@2HB
    MCAPI static int const PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS;

    // symbol: ?PLAYER_DOWN_SWIM_SPEED@Player@@2MB
    MCAPI static float const PLAYER_DOWN_SWIM_SPEED;

    // symbol: ?PLAYER_SLEEPING_HEIGHT@Player@@2MB
    MCAPI static float const PLAYER_SLEEPING_HEIGHT;

    // symbol: ?PLAYER_SLEEPING_WIDTH@Player@@2MB
    MCAPI static float const PLAYER_SLEEPING_WIDTH;

    // symbol: ?PLAYER_SWIMMING_CAMERA_OFFSET@Player@@2MB
    MCAPI static float const PLAYER_SWIMMING_CAMERA_OFFSET;

    // symbol: ?PLAYER_SWIM_BREACH_ANGLE@Player@@2MB
    MCAPI static float const PLAYER_SWIM_BREACH_ANGLE;

    // symbol: ?PLAYER_SWIM_ENTER_THRESHOLD@Player@@2MB
    MCAPI static float const PLAYER_SWIM_ENTER_THRESHOLD;

    // symbol: ?PLAYER_SWIM_FLY_MULTI@Player@@2MB
    MCAPI static float const PLAYER_SWIM_FLY_MULTI;

    // symbol: ?PLAYER_UP_SWIM_SPEED@Player@@2MB
    MCAPI static float const PLAYER_UP_SWIM_SPEED;

    // symbol: ?SATURATION@Player@@2VAttribute@@B
    MCAPI static class Attribute const SATURATION;

    // symbol: ?SPAWN_CHUNK_LARGE_JUMP@Player@@2IB
    MCAPI static uint const SPAWN_CHUNK_LARGE_JUMP;

    // symbol: ?SPAWN_CHUNK_RADIUS@Player@@2IB
    MCAPI static uint const SPAWN_CHUNK_RADIUS;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canChangeGameType@Player@@IEBA_NW4GameType@@@Z
    MCAPI bool _canChangeGameType(::GameType) const;

    // symbol:
    // ?_checkAndFixSpawnPosition@Player@@IEBA_NAEAVVec3@@V?$vector@V?$not_null@PEAVBlockSource@@@gsl@@V?$allocator@V?$not_null@PEAVBlockSource@@@gsl@@@std@@@std@@_N2222@Z
    MCAPI bool
    _checkAndFixSpawnPosition(class Vec3&, std::vector<gsl::not_null<class BlockSource*>>, bool, bool, bool, bool, bool)
        const;

    // symbol: ?_chooseSpawnArea@Player@@IEAAXXZ
    MCAPI void _chooseSpawnArea();

    // symbol: ?_chooseSpawnPositionWithinArea@Player@@IEAA_NXZ
    MCAPI bool _chooseSpawnPositionWithinArea();

    // symbol: ?_registerPlayerAttributes@Player@@IEAAXXZ
    MCAPI void _registerPlayerAttributes();

    // symbol: ?_setPreDimensionTransferSpawnPosition@Player@@IEAAXVVec3@@@Z
    MCAPI void _setPreDimensionTransferSpawnPosition(class Vec3);

    // symbol: ?_updateInteraction@Player@@IEAAXXZ
    MCAPI void _updateInteraction();

    // symbol: ?_validateSpawnPositionAvailability@Player@@IEBA_NAEBVVec3@@PEAVBlockSource@@QEBV2@@Z
    MCAPI bool _validateSpawnPositionAvailability(class Vec3 const&, class BlockSource*, class Vec3 const* const) const;

    // symbol: ?checkBed@Player@@IEAA_NPEAVBlockSource@@QEBVVec3@@@Z
    MCAPI bool checkBed(class BlockSource*, class Vec3 const* const);

    // symbol: ?checkSpawnBlock@Player@@IEBA_NAEBVBlockSource@@@Z
    MCAPI bool checkSpawnBlock(class BlockSource const&) const;

    // symbol: ?_isDangerousBlock@Player@@KA_NAEBVBlock@@_N@Z
    MCAPI static bool _isDangerousBlock(class Block const&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addLevels@Player@@AEAAXH@Z
    MCAPI void _addLevels(int);

    // symbol: ?_blockUsingShield@Player@@AEAA_NAEBVActorDamageSource@@M@Z
    MCAPI bool _blockUsingShield(class ActorDamageSource const&, float);

    // symbol: ?_ensureSafeSpawnPosition@Player@@AEAAXAEAVVec3@@@Z
    MCAPI void _ensureSafeSpawnPosition(class Vec3&);

    // symbol:
    // ?_findFallbackSpawnPosition@Player@@AEAA_NAEAVVec3@@V?$vector@V?$not_null@PEAVBlockSource@@@gsl@@V?$allocator@V?$not_null@PEAVBlockSource@@@gsl@@@std@@@std@@I@Z
    MCAPI bool _findFallbackSpawnPosition(class Vec3&, std::vector<gsl::not_null<class BlockSource*>>, uint);

    // symbol: ?_handleCarriedItemInteractText@Player@@AEAAXXZ
    MCAPI void _handleCarriedItemInteractText();

    // symbol: ?_isChunkSourceLoaded@Player@@AEBA_NAEBVVec3@@AEBVBlockSource@@@Z
    MCAPI bool _isChunkSourceLoaded(class Vec3 const&, class BlockSource const&) const;

    // symbol: ?_registerElytraLoopSound@Player@@AEAAXXZ
    MCAPI void _registerElytraLoopSound();

    // symbol: ?_sendShieldUpdatePacket@Player@@AEAAXAEBVShieldItem@@AEBVItemStack@@1W4ContainerID@@H@Z
    MCAPI void _sendShieldUpdatePacket(
        class ShieldItem const&,
        class ItemStack const&,
        class ItemStack const&,
        ::ContainerID,
        int
    );

    // symbol: ?_updateFroglightCountAndTestForAchievement@Player@@AEAA_NAEBVItemStack@@0@Z
    MCAPI bool _updateFroglightCountAndTestForAchievement(class ItemStack const&, class ItemStack const&);

    // NOLINTEND
};
