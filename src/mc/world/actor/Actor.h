#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/world/actor/common/ClipDefaults.h"
#include "mc/world/phys/HitResult.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/entity/utilities/ActorStatusProvider.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/PaletteColor.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Actor : public ::ActorStatusProvider {
public:
    // Actor inner types define
    enum class InitializationMethod {
        Invalid     = 0x0,
        Loaded      = 0x1,
        Spawned     = 0x2,
        Born        = 0x3,
        Transformed = 0x4,
        Updated     = 0x5,
        Event       = 0x6,
        Legacy      = 0x7,
    };

    // vptr 8
    uchar filler[1176]; // IDA isAffectedByWaterBottle

public:
    LLNDAPI class EntityContext&       getEntityContext();
    LLNDAPI class EntityContext const& getEntityContext() const;

    LLAPI void refresh();

    LLNDAPI bool isInstanceOf(::ActorType type) const;

    LLNDAPI std::string const& getTypeName() const;

    LLNDAPI class Vec3 getFeetPos() const;

    LLNDAPI class Vec3 getHeadPos() const;

    LLNDAPI class BlockPos getFeetBlockPos() const;

    LLNDAPI bool isSimulatedPlayer() const;
    LLNDAPI bool isPlayer(bool allowSimulatedPlayer = true) const;
    LLNDAPI bool isItemActor() const;
    LLNDAPI bool isOnGround() const;

    LLAPI void setOnFire(int time, bool isEffect = true);
    LLAPI void stopFire();

    LLNDAPI float getPosDeltaPerSecLength() const;

    LLAPI bool hurt(
        float               damage,
        ActorDamageCause    cause    = ActorDamageCause::Override,
        optional_ref<Actor> attacker = std::nullopt
    );

    LLNDAPI class HitResult traceRay(
        float                                                                          tMax         = 5.5f,
        bool                                                                           includeActor = true,
        bool                                                                           includeBlock = true,
        std::function<bool(class BlockSource const&, class Block const&, bool)> const& blockCheckFunction =
            ClipDefaults::CHECK_ALL_PICKABLE_BLOCKS
    ) const;

    LLAPI void teleport(class Vec3 const& pos, int dimId, class Vec2 const& rotation);
    LLAPI void teleport(class Vec3 const& pos, int dimId);

    LLAPI void setName(std::string const& name);

    LLNDAPI float quickEvalMolangScript(std::string const& expression);

    LLNDAPI std::unique_ptr<class CompoundTag> saveToNBT() const;

    LLAPI bool loadFromNBT(class CompoundTag const& nbt);

    template <typename T>
    MCAPI T* tryGetComponent();

    // prevent constructor by default
    Actor& operator=(Actor const&);
    Actor(Actor const&);
    Actor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getStatusFlag@Actor@@UEBA_NW4ActorFlags@@@Z
    virtual bool getStatusFlag(::ActorFlags) const;

    // vIndex: 1, symbol: ?setStatusFlag@Actor@@UEAAXW4ActorFlags@@_N@Z
    virtual void setStatusFlag(::ActorFlags, bool);

    // vIndex: 2, symbol: ?hasComponent@Actor@@UEBA_NAEBVHashedString@@@Z
    virtual bool hasComponent(class HashedString const&) const;

    // vIndex: 3, symbol: ?outOfWorld@Actor@@UEAAXXZ
    virtual void outOfWorld();

    // vIndex: 4, symbol: ?reloadHardcoded@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 5, symbol: ?reloadHardcodedClient@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 6, symbol: ?initializeComponents@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 7, symbol: ?reloadComponents@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
    virtual void reloadComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 8, symbol: ?_serverInitItemStackIds@Actor@@MEAAXXZ
    virtual void _serverInitItemStackIds();

    // vIndex: 9, symbol: ?_doInitialMove@Actor@@MEAAXXZ
    virtual void _doInitialMove();

    // vIndex: 10, symbol: ??1Actor@@UEAA@XZ
    virtual ~Actor();

    // vIndex: 11, symbol: ?resetUserPos@Actor@@UEAAX_N@Z
    virtual void resetUserPos(bool);

    // vIndex: 12, symbol: ?getOwnerEntityType@Actor@@UEAA?AW4ActorType@@XZ
    virtual ::ActorType getOwnerEntityType();

    // vIndex: 13, symbol: ?remove@Actor@@UEAAXXZ
    virtual void remove();

    // vIndex: 14, symbol: ?isRuntimePredictedMovementEnabled@Actor@@UEBA_NXZ
    virtual bool isRuntimePredictedMovementEnabled() const;

    // vIndex: 15, symbol: ?getFiringPos@Actor@@UEBA?AVVec3@@XZ
    virtual class Vec3 getFiringPos() const;

    // vIndex: 16, symbol: ?getInterpolatedBodyRot@Actor@@UEBAMM@Z
    virtual float getInterpolatedBodyRot(float) const;

    // vIndex: 17, symbol: ?getInterpolatedHeadRot@Actor@@UEBAMM@Z
    virtual float getInterpolatedHeadRot(float lerpFactor = 0.0f) const;

    // vIndex: 18, symbol: ?getInterpolatedBodyYaw@Actor@@UEBAMM@Z
    virtual float getInterpolatedBodyYaw(float lerpFactor = 0.0f) const;

    // vIndex: 19, symbol: ?getYawSpeedInDegreesPerSecond@Actor@@UEBAMXZ
    virtual float getYawSpeedInDegreesPerSecond() const;

    // vIndex: 20, symbol: ?getInterpolatedRidingOffset@Actor@@UEBA?AVVec3@@MH@Z
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 21, symbol: ?resetInterpolated@Actor@@UEAAXXZ
    virtual void resetInterpolated();

    // vIndex: 22, symbol: ?isFireImmune@Actor@@UEBA_NXZ
    virtual bool isFireImmune() const;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 24, symbol: ?blockedByShield@Actor@@UEAAXAEBVActorDamageSource@@AEAV1@@Z
    virtual void blockedByShield(class ActorDamageSource const&, class Actor&);

    // vIndex: 25, symbol: ?canDisableShield@Actor@@UEAA_NXZ
    virtual bool canDisableShield();

    // vIndex: 26, symbol: ?teleportTo@Actor@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);

    // vIndex: 27, symbol: ?lerpMotion@Actor@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const&);

    // vIndex: 28, symbol:
    // ?tryCreateAddActorPacket@Actor@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 29, symbol: ?normalTick@Actor@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 30, symbol: ?baseTick@Actor@@UEAAXXZ
    virtual void baseTick();

    // vIndex: 31, symbol: ?passengerTick@Actor@@UEAAXXZ
    virtual void passengerTick();

    // vIndex: 32, symbol: ?startRiding@Actor@@UEAA_NAEAV1@@Z
    virtual bool startRiding(class Actor&);

    // vIndex: 33, symbol: ?addPassenger@Actor@@UEAAXAEAV1@@Z
    virtual void addPassenger(class Actor&);

    // vIndex: 34, symbol:
    // ?getExitTip@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@W4InputMode@@W4NewInteractionModel@@@Z
    virtual std::string getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;

    // vIndex: 35, symbol:
    // ?getEntityLocNameString@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getEntityLocNameString() const;

    // vIndex: 36, symbol: ?isInWall@Actor@@UEBA_NXZ
    virtual bool isInWall() const;

    // vIndex: 37, symbol: ?isInvisible@Actor@@UEBA_NXZ
    virtual bool isInvisible() const;

    // vIndex: 38, symbol: ?canShowNameTag@Actor@@UEBA_NXZ
    virtual bool canShowNameTag() const;

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol:
    // ?getFormattedNameTag@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getFormattedNameTag() const;

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: ?getShadowRadius@Actor@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 43, symbol: ?getHeadLookVector@Actor@@UEBA?AVVec3@@M@Z
    virtual class Vec3 getHeadLookVector(float lerpFactor = 0.0f) const;

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: ?canInteractWithOtherEntitiesInGame@Actor@@UEBA_NXZ
    virtual bool canInteractWithOtherEntitiesInGame() const;

    // vIndex: 46, symbol: ?getBrightness@Actor@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: ?playerTouch@Actor@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player&);

    // vIndex: 49, symbol: ?isImmobile@Actor@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 50, symbol: ?isSilentObserver@Actor@@UEBA_NXZ
    virtual bool isSilentObserver() const;

    // vIndex: 51, symbol: ?isPickable@Actor@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 53, symbol: ?isSleeping@Actor@@UEBA_NXZ
    virtual bool isSleeping() const;

    // vIndex: 54, symbol: ?setSleeping@Actor@@UEAAX_N@Z
    virtual void setSleeping(bool);

    // vIndex: 55, symbol: ?setSneaking@Actor@@UEAAX_N@Z
    virtual void setSneaking(bool);

    // vIndex: 56, symbol: ?isBlocking@Actor@@UEBA_NXZ
    virtual bool isBlocking() const;

    // vIndex: 57, symbol: ?isDamageBlocked@Actor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isDamageBlocked(class ActorDamageSource const&) const;

    // vIndex: 58, symbol: ?isAlive@Actor@@UEBA_NXZ
    virtual bool isAlive() const;

    // vIndex: 59, symbol: ?isOnFire@Actor@@UEBA_NXZ
    virtual bool isOnFire() const;

    // vIndex: 60, symbol: ?isSurfaceMob@Actor@@UEBA_NXZ
    virtual bool isSurfaceMob() const;

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 64, symbol: ?canAttack@Actor@@UEBA_NPEAV1@_N@Z
    virtual bool canAttack(class Actor*, bool) const;

    // vIndex: 65, symbol: ?setTarget@Actor@@UEAAXPEAV1@@Z
    virtual void setTarget(class Actor*);

    // vIndex: 66, symbol: ?isValidTarget@Actor@@UEBA_NPEAV1@@Z
    virtual bool isValidTarget(class Actor*) const;

    // vIndex: 67, symbol: ?attack@Actor@@UEAA_NAEAV1@AEBW4ActorDamageCause@@@Z
    virtual bool attack(class Actor&, ::ActorDamageCause const&);

    // vIndex: 68, symbol: ?performRangedAttack@Actor@@UEAAXAEAV1@M@Z
    virtual void performRangedAttack(class Actor&, float);

    // vIndex: 69, symbol: ?setOwner@Actor@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID);

    // vIndex: 70, symbol: ?setSitting@Actor@@UEAAX_N@Z
    virtual void setSitting(bool);

    // vIndex: 71, symbol: ?onTame@Actor@@UEAAXXZ
    virtual void onTame();

    // vIndex: 72, symbol: ?onFailedTame@Actor@@UEAAXXZ
    virtual void onFailedTame();

    // vIndex: 73, symbol: ?setStanding@Actor@@UEAAX_N@Z
    virtual void setStanding(bool);

    // vIndex: 74, symbol: ?canPowerJump@Actor@@UEBA_NXZ
    virtual bool canPowerJump() const;

    // vIndex: 75, symbol: ?isEnchanted@Actor@@UEBA_NXZ
    virtual bool isEnchanted() const;

    // vIndex: 76, symbol: ?shouldRender@Actor@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 77, symbol: ?playAmbientSound@Actor@@UEAAXXZ
    virtual void playAmbientSound();

    // vIndex: 78, symbol: ?getAmbientSound@Actor@@UEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getAmbientSound() const;

    // vIndex: 79, symbol: ?isInvulnerableTo@Actor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 80, symbol: ?getBlockDamageCause@Actor@@UEBA?AW4ActorDamageCause@@AEBVBlock@@@Z
    virtual ::ActorDamageCause getBlockDamageCause(class Block const&) const;

    // vIndex: 81, symbol: ?doFireHurt@Actor@@UEAA_NH@Z
    virtual bool doFireHurt(int);

    // vIndex: 82, symbol: ?onLightningHit@Actor@@UEAAXXZ
    virtual void onLightningHit();

    // vIndex: 83, symbol: ?feed@Actor@@UEAAXH@Z
    virtual void feed(int);

    // vIndex: 84, symbol: ?handleEntityEvent@Actor@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 85, symbol: ?getPickRadius@Actor@@UEAAMXZ
    virtual float getPickRadius();

    // vIndex: 86, symbol: ?getActorRendererId@Actor@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getActorRendererId() const;

    // vIndex: 87, symbol: ?despawn@Actor@@UEAAXXZ
    virtual void despawn();

    // vIndex: 88, symbol: ?setArmor@Actor@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setArmor(::ArmorSlot, class ItemStack const&);

    // vIndex: 89, symbol: ?getArmorMaterialTypeInSlot@Actor@@UEBA?AW4ArmorMaterialType@@W4ArmorSlot@@@Z
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::ArmorSlot) const;

    // vIndex: 90, symbol: ?getArmorMaterialTextureTypeInSlot@Actor@@UEBA?AW4ArmorTextureType@@W4ArmorSlot@@@Z
    virtual ::ArmorTextureType getArmorMaterialTextureTypeInSlot(::ArmorSlot) const;

    // vIndex: 91, symbol: ?getArmorColorInSlot@Actor@@UEBAMW4ArmorSlot@@H@Z
    virtual float getArmorColorInSlot(::ArmorSlot, int) const;

    // vIndex: 92, symbol: ?setEquippedSlot@Actor@@UEAAXW4EquipmentSlot@@AEBVItemStack@@@Z
    virtual void setEquippedSlot(::EquipmentSlot, class ItemStack const&);

    // vIndex: 93, symbol: ?setCarriedItem@Actor@@UEAAXAEBVItemStack@@@Z
    virtual void setCarriedItem(class ItemStack const&);

    // vIndex: 94, symbol: ?getCarriedItem@Actor@@UEBAAEBVItemStack@@XZ
    virtual class ItemStack const& getCarriedItem() const;

    // vIndex: 95, symbol: ?setOffhandSlot@Actor@@UEAAXAEBVItemStack@@@Z
    virtual void setOffhandSlot(class ItemStack const&);

    // vIndex: 96, symbol: ?getEquippedTotem@Actor@@UEBAAEBVItemStack@@XZ
    virtual class ItemStack const& getEquippedTotem() const;

    // vIndex: 97, symbol: ?consumeTotem@Actor@@UEAA_NXZ
    virtual bool consumeTotem();

    // vIndex: 98, symbol: ?save@Actor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 99, symbol: ?load@Actor@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 100, symbol: ?getEntityTypeId@Actor@@UEBA?AW4ActorType@@XZ
    virtual ::ActorType getEntityTypeId() const;

    // vIndex: 101, symbol: ?queryEntityRenderer@Actor@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& queryEntityRenderer() const;

    // vIndex: 102, symbol: ?getSourceUniqueID@Actor@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 103, symbol: ?canFreeze@Actor@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 104, symbol: ?getLiquidAABB@Actor@@UEBA?AVAABB@@W4MaterialType@@@Z
    virtual class AABB getLiquidAABB(::MaterialType) const;

    // vIndex: 105, symbol: ?handleInsidePortal@Actor@@UEAAXAEBVBlockPos@@@Z
    virtual void handleInsidePortal(class BlockPos const&);

    // vIndex: 106, symbol: ?getPortalCooldown@Actor@@UEBAHXZ
    virtual int getPortalCooldown() const;

    // vIndex: 107, symbol: ?getPortalWaitTime@Actor@@UEBAHXZ
    virtual int getPortalWaitTime() const;

    // vIndex: 108, symbol: ?canChangeDimensionsUsingPortal@Actor@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: ?changeDimension@Actor@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimension(DimensionType);

    // vIndex: 111, symbol: ?getControllingPlayer@Actor@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 112, symbol: ?checkFallDamage@Actor@@UEAAXM_N0@Z
    virtual void checkFallDamage(float, bool, bool);

    // vIndex: 113, symbol: ?causeFallDamageToActor@Actor@@UEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 114, symbol: ?onSynchedDataUpdate@Actor@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 115, symbol: ?canAddPassenger@Actor@@UEBA_NAEAV1@@Z
    virtual bool canAddPassenger(class Actor&) const;

    // vIndex: 116, symbol: ?canPickupItem@Actor@@UEBA_NAEBVItemStack@@@Z
    virtual bool canPickupItem(class ItemStack const&) const;

    // vIndex: 117, symbol: ?canBePulledIntoVehicle@Actor@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 118, symbol: ?inCaravan@Actor@@UEBA_NXZ
    virtual bool inCaravan() const;

    // vIndex: 119, symbol: ?sendMotionPacketIfNeeded@Actor@@UEAAXXZ
    virtual void sendMotionPacketIfNeeded();

    // vIndex: 120, symbol: ?canSynchronizeNewEntity@Actor@@UEBA_NXZ
    virtual bool canSynchronizeNewEntity() const;

    // vIndex: 121, symbol: ?startSwimming@Actor@@UEAAXXZ
    virtual void startSwimming();

    // vIndex: 122, symbol: ?stopSwimming@Actor@@UEAAXXZ
    virtual void stopSwimming();

    // vIndex: 123, symbol:
    // ?buildDebugInfo@Actor@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void buildDebugInfo(std::string&) const;

    // vIndex: 124, symbol: ?getCommandPermissionLevel@Actor@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    // vIndex: 125, symbol: ?getDeathTime@Actor@@UEBAHXZ
    virtual int getDeathTime() const;

    // vIndex: 126, symbol: ?canBeAffected@Actor@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 127, symbol: ?canBeAffectedByArrow@Actor@@UEBA_NAEBVMobEffectInstance@@@Z
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const;

    // vIndex: 128, symbol: ?onEffectAdded@Actor@@UEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectAdded(class MobEffectInstance&);

    // vIndex: 129, symbol: ?onEffectUpdated@Actor@@UEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectUpdated(class MobEffectInstance&);

    // vIndex: 130, symbol: ?onEffectRemoved@Actor@@UEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectRemoved(class MobEffectInstance&);

    // vIndex: 131, symbol: ?canObstructSpawningAndBlockPlacement@Actor@@UEBA_NXZ
    virtual bool canObstructSpawningAndBlockPlacement() const;

    // vIndex: 132, symbol: ?getAnimationComponent@Actor@@UEAAAEAVAnimationComponent@@XZ
    virtual class AnimationComponent& getAnimationComponent();

    // vIndex: 133, symbol: ?openContainerComponent@Actor@@UEAAXAEAVPlayer@@@Z
    virtual void openContainerComponent(class Player&);

    // vIndex: 134, symbol: ?swing@Actor@@UEAAXXZ
    virtual void swing();

    // vIndex: 135, symbol: ?useItem@Actor@@UEAAXAEAVItemStackBase@@W4ItemUseMethod@@_N@Z
    virtual void useItem(class ItemStackBase&, ::ItemUseMethod, bool);

    // vIndex: 136, symbol:
    // ?getDebugText@Actor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void getDebugText(std::vector<std::string>&);

    // vIndex: 137, symbol: ?getMapDecorationRotation@Actor@@UEBAMXZ
    virtual float getMapDecorationRotation() const;

    // vIndex: 138, symbol: ?getPassengerYRotation@Actor@@UEBAMAEBV1@@Z
    virtual float getPassengerYRotation(class Actor const&) const;

    // vIndex: 139, symbol: ?add@Actor@@UEAA_NAEAVItemStack@@@Z
    virtual bool add(class ItemStack&);

    // vIndex: 140, symbol: ?drop@Actor@@UEAA_NAEBVItemStack@@_N@Z
    virtual bool drop(class ItemStack const&, bool);

    // vIndex: 141, symbol: ?getInteraction@Actor@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
    virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&);

    // vIndex: 142, symbol: ?canDestroyBlock@Actor@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroyBlock(class Block const&) const;

    // vIndex: 143, symbol: ?setAuxValue@Actor@@UEAAXH@Z
    virtual void setAuxValue(int);

    // vIndex: 144, symbol: ?setSize@Actor@@UEAAXMM@Z
    virtual void setSize(float, float);

    // vIndex: 145, symbol: ?startSpinAttack@Actor@@UEAAXXZ
    virtual void startSpinAttack();

    // vIndex: 146, symbol: ?stopSpinAttack@Actor@@UEAAXXZ
    virtual void stopSpinAttack();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: ?getDeletionDelayTimeSeconds@Actor@@UEBAMXZ
    virtual float getDeletionDelayTimeSeconds() const;

    // vIndex: 149, symbol: ?kill@Actor@@UEAAXXZ
    virtual void kill();

    // vIndex: 150, symbol: ?die@Actor@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 151, symbol: ?shouldDropDeathLoot@Actor@@UEBA_NXZ
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 152, symbol: ?applySnapshot@Actor@@UEAAXAEBVEntityContext@@0@Z
    virtual void applySnapshot(class EntityContext const&, class EntityContext const&);

    // vIndex: 153, symbol: ?getNextStep@Actor@@UEAAMM@Z
    virtual float getNextStep(float);

    // vIndex: 154, symbol: ?onPush@Actor@@UEAAXAEAV1@@Z
    virtual void onPush(class Actor&);

    // vIndex: 155, symbol: ?getLastDeathPos@Actor@@UEBA?AV?$optional@VBlockPos@@@std@@XZ
    virtual std::optional<class BlockPos> getLastDeathPos() const;

    // vIndex: 156, symbol: ?getLastDeathDimension@Actor@@UEBA?AV?$optional@V?$AutomaticID@VDimension@@H@@@std@@XZ
    virtual std::optional<DimensionType> getLastDeathDimension() const;

    // vIndex: 157, symbol: ?hasDiedBefore@Actor@@UEBA_NXZ
    virtual bool hasDiedBefore() const;

    // vIndex: 158, symbol: ?doEnterWaterSplashEffect@Actor@@UEAAXXZ
    virtual void doEnterWaterSplashEffect();

    // vIndex: 159, symbol: ?doExitWaterSplashEffect@Actor@@UEAAXXZ
    virtual void doExitWaterSplashEffect();

    // vIndex: 160, symbol: ?doWaterSplashEffect@Actor@@UEAAXXZ
    virtual void doWaterSplashEffect();

    // vIndex: 161, symbol: ?_shouldProvideFeedbackOnHandContainerItemSet@Actor@@MEBA_NW4HandSlot@@AEBVItemStack@@@Z
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot, class ItemStack const&) const;

    // vIndex: 162, symbol: ?_shouldProvideFeedbackOnArmorSet@Actor@@MEBA_NW4ArmorSlot@@AEBVItemStack@@@Z
    virtual bool _shouldProvideFeedbackOnArmorSet(::ArmorSlot, class ItemStack const&) const;

    // vIndex: 163, symbol: ?updateEntitySpecificMolangVariables@Actor@@MEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 164, symbol: ?shouldTryMakeStepSound@Actor@@MEAA_NXZ
    virtual bool shouldTryMakeStepSound();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@Actor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: ?readAdditionalSaveData@Actor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@Actor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 169, symbol: ?_playStepSound@Actor@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const&, class Block const&);

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 171, symbol: ?_onSizeUpdated@Actor@@EEAAXXZ
    virtual void _onSizeUpdated();

    // symbol: ?_doAutoAttackOnTouch@Actor@@EEAAXAEAV1@@Z
    MCVAPI void _doAutoAttackOnTouch(class Actor&);

    // symbol: ?_makeFlySound@Actor@@MEBA_NXZ
    MCVAPI bool _makeFlySound() const;

    // symbol: ?breaksFallingBlocks@Actor@@UEBA_NXZ
    MCVAPI bool breaksFallingBlocks() const;

    // symbol: ?canExistInPeaceful@Actor@@UEBA_NXZ
    MCVAPI bool canExistInPeaceful() const;

    // symbol: ?canMakeStepSound@Actor@@MEBA_NXZ
    MCVAPI bool canMakeStepSound() const;

    // symbol: ?canSeeInvisible@Actor@@UEBA_NXZ
    MCVAPI bool canSeeInvisible() const;

    // symbol: ?changeDimension@Actor@@UEAAXAEBVChangeDimensionPacket@@@Z
    MCVAPI void changeDimension(class ChangeDimensionPacket const&);

    // symbol: ?getAlwaysShowNameTag@Actor@@UEBA_NXZ
    MCVAPI bool getAlwaysShowNameTag() const;

    // symbol: ?interactPreventDefault@Actor@@UEAA_NXZ
    MCVAPI bool interactPreventDefault();

    // symbol: ?isFishable@Actor@@UEBA_NXZ
    MCVAPI bool isFishable() const;

    // symbol: ?isLocalPlayer@Actor@@UEBA_NXZ
    MCVAPI bool isLocalPlayer() const;

    // symbol: ?isPlayer@Actor@@UEBA_NXZ
    // MCVAPI bool isPlayer() const;

    // symbol: ?isTargetable@Actor@@UEBA_NXZ
    MCVAPI bool isTargetable() const;

    // symbol: ?renderDebugServerState@Actor@@UEAAXAEBVOptions@@@Z
    MCVAPI void renderDebugServerState(class Options const&);

    // symbol: ??0Actor@@QEAA@AEAVILevel@@AEAVEntityContext@@@Z
    MCAPI Actor(class ILevel&, class EntityContext&);

    // symbol: ??0Actor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Actor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?_sendDirtyActorData@Actor@@QEAAXXZ
    MCAPI void _sendDirtyActorData();

    // symbol: ?_setActorTypeId@Actor@@QEAAXW4ActorType@@@Z
    MCAPI void _setActorTypeId(::ActorType);

    // symbol: ?_setLevelPtr@Actor@@QEAAXPEAVILevel@@@Z
    MCAPI void _setLevelPtr(class ILevel*);

    // symbol: ?addCategory@Actor@@QEAAXAEBW4ActorCategory@@@Z
    MCAPI void addCategory(::ActorCategory const&);

    // symbol: ?addDefinitionGroup@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addDefinitionGroup(std::string const&);

    // symbol: ?addEffect@Actor@@QEAAXAEBVMobEffectInstance@@@Z
    MCAPI void addEffect(class MobEffectInstance const&);

    // symbol: ?addTag@Actor@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool addTag(std::string const&);

    // symbol: ?applyImpulse@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void applyImpulse(class Vec3 const&);

    // symbol: ?buildDebugGroupInfo@Actor@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void buildDebugGroupInfo(std::string&) const;

    // symbol: ?buildForward@Actor@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 buildForward() const;

    // symbol: ?burn@Actor@@QEAAXH_N@Z
    MCAPI void burn(int, bool);

    // symbol: ?calcCenterPos@Actor@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 calcCenterPos() const;

    // symbol: ?calculateAttackDamage@Actor@@QEAAMAEAV1@@Z
    MCAPI float calculateAttackDamage(class Actor&);

    // symbol: ?canBeginOrContinueClimbingLadder@Actor@@QEBA_NXZ
    MCAPI bool canBeginOrContinueClimbingLadder() const;

    // symbol: ?canCurrentlySwim@Actor@@QEBA_NXZ
    MCAPI bool canCurrentlySwim() const;

    // symbol: ?canFly@Actor@@QEBA_NXZ
    MCAPI bool canFly() const;

    // symbol: ?canMate@Actor@@QEBA_NAEBV1@@Z
    MCAPI bool canMate(class Actor const&) const;

    // symbol: ?canReceiveMobEffectsFromGameplay@Actor@@QEBA_NXZ
    MCAPI bool canReceiveMobEffectsFromGameplay() const;

    // symbol: ?canSee@Actor@@QEBA_NAEBV1@@Z
    MCAPI bool canSee(class Actor const&) const;

    // symbol: ?canSee@Actor@@QEBA_NAEBVVec3@@@Z
    MCAPI bool canSee(class Vec3 const&) const;

    // symbol: ?canSeeDaylight@Actor@@QEBA_NXZ
    MCAPI bool canSeeDaylight() const;

    // symbol: ?celebrateHunt@Actor@@QEAAXH_N@Z
    MCAPI void celebrateHunt(int, bool);

    // symbol: ?chorusFruitTeleport@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void chorusFruitTeleport(class Vec3 const&);

    // symbol: ?clearFishingHookID@Actor@@QEAAXXZ
    MCAPI void clearFishingHookID();

    // symbol: ?closerThan@Actor@@QEBA_NAEBV1@M@Z
    MCAPI bool closerThan(class Actor const&, float) const;

    // symbol: ?closerThan@Actor@@QEBA_NAEBV1@MM@Z
    MCAPI bool closerThan(class Actor const&, float, float) const;

    // symbol: ?consumeItem@Actor@@QEAAXAEAVItemActor@@H@Z
    MCAPI void consumeItem(class ItemActor&, int);

    // symbol: ?createUpdateEquipPacket@Actor@@QEAA?AVUpdateEquipPacket@@H@Z
    MCAPI class UpdateEquipPacket createUpdateEquipPacket(int);

    // symbol: ?createUpdateTradePacket@Actor@@QEAA?AVUpdateTradePacket@@H@Z
    MCAPI class UpdateTradePacket createUpdateTradePacket(int);

    // symbol: ?damageSensorComponentHurt@Actor@@QEAA_NAEAMAEBVActorDamageSource@@_N@Z
    MCAPI bool damageSensorComponentHurt(float&, class ActorDamageSource const&, bool);

    // symbol: ?deregisterTagsFromLevelCache@Actor@@QEAAXXZ
    MCAPI void deregisterTagsFromLevelCache();

    // symbol: ?distanceSqrToBlockPosCenter@Actor@@QEBAMAEBVBlockPos@@@Z
    MCAPI float distanceSqrToBlockPosCenter(class BlockPos const&) const;

    // symbol: ?distanceTo@Actor@@QEBAMAEBV1@@Z
    MCAPI float distanceTo(class Actor const&) const;

    // symbol: ?distanceTo@Actor@@QEBAMAEBVVec3@@@Z
    MCAPI float distanceTo(class Vec3 const&) const;

    // symbol: ?distanceToSqr@Actor@@QEBAMAEBV1@@Z
    MCAPI float distanceToSqr(class Actor const&) const;

    // symbol: ?distanceToSqr@Actor@@QEBAMAEBVVec3@@@Z
    MCAPI float distanceToSqr(class Vec3 const&) const;

    // symbol: ?dropLeash@Actor@@QEAAX_N0@Z
    MCAPI void dropLeash(bool, bool);

    // symbol: ?dropTowards@Actor@@QEAAXAEBVItemStack@@VVec3@@@Z
    MCAPI void dropTowards(class ItemStack const&, class Vec3);

    // symbol: ?evaluateSeatRotation@Actor@@QEAAMAEBVRideableComponent@@_N@Z
    MCAPI float evaluateSeatRotation(class RideableComponent const&, bool);

    // symbol:
    // ?executeEvent@Actor@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVariantParameterList@@@Z
    MCAPI bool executeEvent(std::string const&, class VariantParameterList const&);

    // symbol: ?exitVehicle@Actor@@QEAAX_N00@Z
    MCAPI void exitVehicle(bool, bool, bool);

    // symbol: ?fetchFishingHook@Actor@@QEAAPEAVFishingHook@@XZ
    MCAPI class FishingHook* fetchFishingHook();

    // symbol:
    // ?fetchNearbyActorsSorted@Actor@@QEAA?AV?$vector@UDistanceSortedActor@@V?$allocator@UDistanceSortedActor@@@std@@@std@@AEBVVec3@@W4ActorType@@@Z
    MCAPI std::vector<struct DistanceSortedActor> fetchNearbyActorsSorted(class Vec3 const&, ::ActorType);

    // symbol: ?forEachLeashedActor@Actor@@QEAAXV?$function@$$A6AXV?$not_null@PEAVActor@@@gsl@@@Z@std@@@Z
    MCAPI void forEachLeashedActor(std::function<void(gsl::not_null<class Actor*>)>);

    // symbol: ?getAABB@Actor@@QEBAAEBVAABB@@XZ
    MCAPI class AABB const& getAABB() const;

    // symbol: ?getAABBDim@Actor@@QEBAAEBVVec2@@XZ
    MCAPI class Vec2 const& getAABBDim() const;

    // symbol: ?getActorIdentifier@Actor@@QEBAAEBUActorDefinitionIdentifier@@XZ
    MCAPI struct ActorDefinitionIdentifier const& getActorIdentifier() const;

    // symbol: ?getAllArmor@Actor@@QEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    MCAPI std::vector<class ItemStack const*> getAllArmor() const;

    // symbol:
    // ?getAllEffects@Actor@@QEBAAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@XZ
    MCAPI std::vector<class MobEffectInstance> const& getAllEffects() const;

    // symbol: ?getArmor@Actor@@QEBAAEBVItemStack@@W4ArmorSlot@@@Z
    MCAPI class ItemStack const& getArmor(::ArmorSlot) const;

    // symbol: ?getArmorContainer@Actor@@QEAAAEAVSimpleContainer@@XZ
    MCAPI class SimpleContainer& getArmorContainer();

    // symbol: ?getArmorContainer@Actor@@QEBAAEBVSimpleContainer@@XZ
    MCAPI class SimpleContainer const& getArmorContainer() const;

    // symbol: ?getAttachPos@Actor@@QEBA?AVVec3@@W4ActorLocation@@M@Z
    MCAPI class Vec3 getAttachPos(::ActorLocation, float lerpFactor = 0.0f) const;

    // symbol: ?getAttribute@Actor@@QEBAAEBVAttributeInstance@@AEBVAttribute@@@Z
    MCAPI class AttributeInstance const& getAttribute(class Attribute const&) const;

    // symbol: ?getAttributes@Actor@@QEAA?AV?$not_null@PEAVBaseAttributeMap@@@gsl@@XZ
    MCAPI gsl::not_null<class BaseAttributeMap*> getAttributes();

    // symbol: ?getAttributes@Actor@@QEBA?AV?$not_null@PEBVBaseAttributeMap@@@gsl@@XZ
    MCAPI gsl::not_null<class BaseAttributeMap const*> getAttributes() const;

    // symbol: ?getBlockPosCurrentlyStandingOn@Actor@@QEBA?AVBlockPos@@PEBV1@@Z
    MCAPI class BlockPos getBlockPosCurrentlyStandingOn(class Actor const*) const;

    // symbol: ?getBlockTarget@Actor@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getBlockTarget() const;

    // symbol: ?getBrightness@Actor@@QEBAMM@Z
    MCAPI float getBrightness(float) const;

    // symbol: ?getCanPickupItems@Actor@@QEBA_NXZ
    MCAPI bool getCanPickupItems() const;

    // symbol: ?getCarriedItemInSlotPreferredBy@Actor@@QEBAAEBVItemStack@@AEBV2@@Z
    MCAPI class ItemStack const& getCarriedItemInSlotPreferredBy(class ItemStack const&) const;

    // symbol: ?getCategories@Actor@@QEBA?AW4ActorCategory@@XZ
    MCAPI ::ActorCategory getCategories() const;

    // symbol: ?getChainedDamageEffects@Actor@@QEBA_NXZ
    MCAPI bool getChainedDamageEffects() const;

    // symbol: ?getChestSlots@Actor@@QEBAHXZ
    MCAPI int getChestSlots() const;

    // symbol: ?getCollidableMob@Actor@@QEBA_NXZ
    MCAPI bool getCollidableMob() const;

    // symbol: ?getColor@Actor@@QEBA?AW4PaletteColor@@XZ
    MCAPI ::PaletteColor getColor() const;

    // symbol: ?getColor2@Actor@@QEBA?AW4PaletteColor@@XZ
    MCAPI ::PaletteColor getColor2() const;

    // symbol: ?getControllingSeat@Actor@@QEBAHXZ
    MCAPI int getControllingSeat() const;

    // symbol: ?getCurrentSwimAmount@Actor@@QEBAMXZ
    MCAPI float getCurrentSwimAmount() const;

    // symbol: ?getDamageNearbyMobs@Actor@@QEBA_NXZ
    MCAPI bool getDamageNearbyMobs() const;

    // symbol: ?getDiffList@Actor@@QEBAPEBVActorDefinitionDiffList@@XZ
    MCAPI class ActorDefinitionDiffList const* getDiffList() const;

    // symbol: ?getDiffListNonConst@Actor@@QEAAPEAVActorDefinitionDiffList@@XZ
    MCAPI class ActorDefinitionDiffList* getDiffListNonConst();

    // symbol: ?getDimension@Actor@@QEBAAEAVDimension@@XZ
    MCAPI class Dimension& getDimension() const;

    // symbol: ?getDimensionBlockSource@Actor@@QEBAAEAVBlockSource@@XZ
    MCAPI class BlockSource& getDimensionBlockSource() const;

    // symbol: ?getDimensionBlockSourceConst@Actor@@QEBAAEBVBlockSource@@XZ
    MCAPI class BlockSource const& getDimensionBlockSourceConst() const;

    // symbol: ?getDimensionConst@Actor@@QEBAAEBVDimension@@XZ
    MCAPI class Dimension const& getDimensionConst() const;

    // symbol: ?getDimensionId@Actor@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
    MCAPI DimensionType getDimensionId() const;

    // symbol: ?getEffect@Actor@@QEBAPEBVMobEffectInstance@@AEBVMobEffect@@@Z
    MCAPI class MobEffectInstance const* getEffect(class MobEffect const&) const;

    // symbol: ?getEffect@Actor@@QEBAPEBVMobEffectInstance@@I@Z
    MCAPI class MobEffectInstance const* getEffect(uint) const;

    // symbol: ?getEntityData@Actor@@QEAAAEAVSynchedActorDataEntityWrapper@@XZ
    MCAPI class SynchedActorDataEntityWrapper& getEntityData();

    // symbol: ?getEntityData@Actor@@QEBAAEBVSynchedActorDataEntityWrapper@@XZ
    MCAPI class SynchedActorDataEntityWrapper const& getEntityData() const;

    // symbol: ?getEntityRegistry@Actor@@QEAA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
    MCAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();

    // symbol: ?getEntityTerrainInterlockData@Actor@@QEAAAEAVActorTerrainInterlockData@@XZ
    MCAPI class ActorTerrainInterlockData& getEntityTerrainInterlockData();

    // symbol: ?getEquipSlots@Actor@@QEBAHXZ
    MCAPI int getEquipSlots() const;

    // symbol: ?getEquipmentCount@Actor@@QEBAHXZ
    MCAPI int getEquipmentCount() const;

    // symbol: ?getEquipmentSlotForItem@Actor@@QEBA?AW4EquipmentSlot@@AEBVItemStack@@@Z
    MCAPI ::EquipmentSlot getEquipmentSlotForItem(class ItemStack const&) const;

    // symbol: ?getEquippedSlot@Actor@@QEBAAEBVItemStack@@W4EquipmentSlot@@@Z
    MCAPI class ItemStack const& getEquippedSlot(::EquipmentSlot) const;

    // symbol: ?getFallDistance@Actor@@QEBAMXZ
    MCAPI float getFallDistance() const;

    // symbol: ?getFirstAvailableSeatPos@Actor@@QEBA_NAEAV1@AEAVVec3@@@Z
    MCAPI bool getFirstAvailableSeatPos(class Actor&, class Vec3&) const;

    // symbol: ?getFirstPassenger@Actor@@QEBAPEAV1@XZ
    MCAPI class Actor* getFirstPassenger() const;

    // symbol: ?getHandContainer@Actor@@QEAAAEAVSimpleContainer@@XZ
    MCAPI class SimpleContainer& getHandContainer();

    // symbol: ?getHandContainer@Actor@@QEBAAEBVSimpleContainer@@XZ
    MCAPI class SimpleContainer const& getHandContainer() const;

    // symbol: ?getHealth@Actor@@QEBAHXZ
    MCAPI int getHealth() const;

    // symbol: ?getHurtDir@Actor@@QEBAHXZ
    MCAPI int getHurtDir() const;

    // symbol: ?getHurtTime@Actor@@QEBAHXZ
    MCAPI int getHurtTime() const;

    // symbol: ?getILevel@Actor@@QEAAAEAVILevel@@XZ
    MCAPI class ILevel& getILevel();

    // symbol: ?getInitializationMethod@Actor@@QEAA?AW4InitializationMethod@1@XZ
    MCAPI ::Actor::InitializationMethod getInitializationMethod();

    // symbol: ?getInterpolatedPosition@Actor@@QEBA?AVVec3@@M@Z
    MCAPI class Vec3 getInterpolatedPosition(float lerpFactor = 0.0f) const;

    // symbol: ?getInterpolatedRidingPosition@Actor@@QEBA?AVVec3@@M@Z
    MCAPI class Vec3 getInterpolatedRidingPosition(float) const;

    // symbol: ?getInterpolatedRotation@Actor@@QEBA?AVVec2@@M@Z
    MCAPI class Vec2 getInterpolatedRotation(float lerpFactor = 0.0f) const;

    // symbol: ?getInventorySize@Actor@@QEBAHXZ
    MCAPI int getInventorySize() const;

    // symbol: ?getIsExperienceDropEnabled@Actor@@QEBA_NXZ
    MCAPI bool getIsExperienceDropEnabled() const;

    // symbol: ?getJumpDuration@Actor@@QEBAHXZ
    MCAPI int getJumpDuration() const;

    // symbol: ?getLastHurtByMob@Actor@@QEAAPEAVMob@@XZ
    MCAPI class Mob* getLastHurtByMob();

    // symbol: ?getLastHurtByMobTime@Actor@@QEAAHXZ
    MCAPI int getLastHurtByMobTime();

    // symbol: ?getLastHurtByMobTimestamp@Actor@@QEAAHXZ
    MCAPI int getLastHurtByMobTimestamp();

    // symbol: ?getLastHurtByPlayer@Actor@@QEAAPEAVPlayer@@XZ
    MCAPI class Player* getLastHurtByPlayer();

    // symbol: ?getLastHurtCause@Actor@@QEBA?AW4ActorDamageCause@@XZ
    MCAPI ::ActorDamageCause getLastHurtCause() const;

    // symbol: ?getLastHurtDamage@Actor@@QEBAMXZ
    MCAPI float getLastHurtDamage() const;

    // symbol: ?getLastHurtMob@Actor@@QEAAPEAVMob@@XZ
    MCAPI class Mob* getLastHurtMob();

    // symbol: ?getLastHurtMobTimestamp@Actor@@QEAAHXZ
    MCAPI int getLastHurtMobTimestamp();

    // symbol: ?getLastHurtTimestamp@Actor@@QEBA_KXZ
    MCAPI uint64 getLastHurtTimestamp() const;

    // symbol: ?getLeashHolder@Actor@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getLeashHolder() const;

    // symbol: ?getLevel@Actor@@QEAAAEAVLevel@@XZ
    MCAPI class Level& getLevel();

    // symbol: ?getLevel@Actor@@QEBAAEBVLevel@@XZ
    MCAPI class Level const& getLevel() const;

    // symbol: ?getLevelTimeStamp@Actor@@QEBA_KXZ
    MCAPI uint64 getLevelTimeStamp() const;

    // symbol: ?getLimitedLifetimeTicks@Actor@@QEBAHXZ
    MCAPI int getLimitedLifetimeTicks() const;

    // symbol: ?getLinks@Actor@@QEBA?AV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@XZ
    MCAPI std::vector<struct ActorLink> getLinks() const;

    // symbol: ?getLootTable@Actor@@QEAAPEAVLootTable@@XZ
    MCAPI class LootTable* getLootTable();

    // symbol: ?getMarkVariant@Actor@@QEBAHXZ
    MCAPI int getMarkVariant() const;

    // symbol: ?getMaxAutoStep@Actor@@QEBAMXZ
    MCAPI float getMaxAutoStep() const;

    // symbol: ?getMaxHealth@Actor@@QEBAHXZ
    MCAPI int getMaxHealth() const;

    // symbol: ?getMolangVariables@Actor@@QEAAAEAVMolangVariableMap@@XZ
    MCAPI class MolangVariableMap& getMolangVariables();

    // symbol: ?getMutableAttribute@Actor@@QEAAPEAVAttributeInstance@@AEBVAttribute@@@Z
    MCAPI class AttributeInstance* getMutableAttribute(class Attribute const&);

    // symbol: ?getNameTag@Actor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getNameTag() const;

    // symbol: ?getNameTagAsHash@Actor@@QEBA_KXZ
    MCAPI uint64 getNameTagAsHash() const;

    // symbol: ?getOffhandSlot@Actor@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getOffhandSlot() const;

    // symbol: ?getOnDeathExperience@Actor@@QEAAHXZ
    MCAPI int getOnDeathExperience();

    // symbol: ?getOrAddDynamicProperties@Actor@@QEAAAEAVDynamicProperties@@XZ
    MCAPI class DynamicProperties& getOrAddDynamicProperties();

    // symbol: ?getOrCreateUniqueID@Actor@@QEBAAEBUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID const& getOrCreateUniqueID() const;

    // symbol: ?getOwner@Actor@@QEBAPEAVMob@@XZ
    MCAPI class Mob* getOwner() const;

    // symbol: ?getOwnerId@Actor@@QEBA?BUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID const getOwnerId() const;

    // symbol: ?getPassengerIndex@Actor@@QEBAHAEBV1@@Z
    MCAPI int getPassengerIndex(class Actor const&) const;

    // symbol:
    // ?getPersistingTradeOffers@Actor@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> getPersistingTradeOffers();

    // symbol: ?getPersistingTradeRiches@Actor@@QEAAHXZ
    MCAPI int getPersistingTradeRiches();

    // symbol: ?getPlayerOwner@Actor@@QEBAPEAVPlayer@@XZ
    MCAPI class Player* getPlayerOwner() const;

    // symbol: ?getPosDelta@Actor@@QEBAAEBVVec3@@XZ
    MCAPI class Vec3 const& getPosDelta() const;

    // symbol: ?getPosDeltaNonConst@Actor@@QEAAAEAVVec3@@XZ
    MCAPI class Vec3& getPosDeltaNonConst();

    // symbol: ?getPosPrev@Actor@@QEBAAEBVVec3@@XZ
    MCAPI class Vec3 const& getPosPrev() const;

    // symbol: ?getPosition@Actor@@QEBAAEBVVec3@@XZ
    MCAPI class Vec3 const& getPosition() const;

    // symbol: ?getPredictedMovementValues@Actor@@QEBAAEBUPredictedMovementValues@@XZ
    MCAPI struct PredictedMovementValues const& getPredictedMovementValues() const;

    // symbol: ?getRadius@Actor@@QEBAMXZ
    MCAPI float getRadius() const;

    // symbol: ?getRandom@Actor@@QEBAAEAVRandom@@XZ
    MCAPI class Random& getRandom() const;

    // symbol: ?getRenderParams@Actor@@QEAAAEAVRenderParams@@XZ
    MCAPI class RenderParams& getRenderParams();

    // symbol: ?getRidingHeight@Actor@@QEBAMXZ
    MCAPI float getRidingHeight() const;

    // symbol: ?getRotation@Actor@@QEBAAEBVVec2@@XZ
    MCAPI class Vec2 const& getRotation() const;

    // symbol: ?getRotationPrev@Actor@@QEBAAEBVVec2@@XZ
    MCAPI class Vec2 const& getRotationPrev() const;

    // symbol: ?getRuntimeID@Actor@@QEBA?AVActorRuntimeID@@XZ
    MCAPI class ActorRuntimeID getRuntimeID() const;

    // symbol: ?getShakeTime@Actor@@QEBAHXZ
    MCAPI int getShakeTime() const;

    // symbol: ?getSkinID@Actor@@QEBAHXZ
    MCAPI int getSkinID() const;

    // symbol: ?getSlideOffset@Actor@@QEBA?AVVec2@@XZ
    MCAPI class Vec2 getSlideOffset() const;

    // symbol: ?getSpatialNetworkData@Actor@@QEAAAEAVSpatialActorNetworkData@@XZ
    MCAPI class SpatialActorNetworkData& getSpatialNetworkData();

    // symbol: ?getSpeedInMetersPerSecond@Actor@@QEBAMXZ
    MCAPI float getSpeedInMetersPerSecond() const;

    // symbol: ?getStrength@Actor@@QEBAHXZ
    MCAPI int getStrength() const;

    // symbol: ?getStrengthMax@Actor@@QEBAHXZ
    MCAPI int getStrengthMax() const;

    // symbol: ?getStructuralIntegrity@Actor@@QEBAHXZ
    MCAPI int getStructuralIntegrity() const;

    // symbol: ?getSwimAmount@Actor@@QEBAMM@Z
    MCAPI float getSwimAmount(float) const;

    // symbol:
    // ?getTags@Actor@@QEBA?BV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const getTags() const;

    // symbol: ?getTarget@Actor@@QEBAPEAV1@XZ
    MCAPI class Actor* getTarget() const;

    // symbol: ?getTargetId@Actor@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getTargetId() const;

    // symbol: ?getTradeInterest@Actor@@QEBA_NXZ
    MCAPI bool getTradeInterest() const;

    // symbol: ?getTradeOffers@Actor@@QEAAPEAVMerchantRecipeList@@XZ
    MCAPI class MerchantRecipeList* getTradeOffers();

    // symbol: ?getTradingPlayer@Actor@@QEBAPEAVPlayer@@XZ
    MCAPI class Player* getTradingPlayer() const;

    // symbol: ?getVariant@Actor@@QEBAHXZ
    MCAPI int getVariant() const;

    // symbol: ?getVehicle@Actor@@QEBAPEAV1@XZ
    MCAPI class Actor* getVehicle() const;

    // symbol: ?getVehicleRoot@Actor@@QEBAPEAV1@XZ
    MCAPI class Actor* getVehicleRoot() const;

    // symbol: ?getVehicleRuntimeID@Actor@@QEBA?AVActorRuntimeID@@XZ
    MCAPI class ActorRuntimeID getVehicleRuntimeID() const;

    // symbol: ?getVerticalSpeedInMetersPerSecond@Actor@@QEBAMXZ
    MCAPI float getVerticalSpeedInMetersPerSecond() const;

    // symbol: ?getViewVector@Actor@@QEBA?AVVec3@@M@Z
    MCAPI class Vec3 getViewVector(float lerpFactor = 0.0f) const;

    // symbol: ?getWeakEntity@Actor@@QEBA?BV?$WeakRefT@UEntityRefTraits@@@@XZ
    MCAPI class WeakRefT<struct EntityRefTraits> const getWeakEntity() const;

    // symbol: ?getYHeadRot@Actor@@QEBAMXZ
    MCAPI float getYHeadRot() const;

    // symbol: ?getYHeadRotationsNewOld@Actor@@QEBA?AUInterpolationPair@@XZ
    MCAPI struct InterpolationPair getYHeadRotationsNewOld() const;

    // symbol: ?handleFallDamage@Actor@@QEAAXMMVActorDamageSource@@@Z
    MCAPI void handleFallDamage(float, float, class ActorDamageSource);

    // symbol: ?handleLeftoverFallDamage@Actor@@QEAAXMVActorDamageSource@@@Z
    MCAPI void handleLeftoverFallDamage(float, class ActorDamageSource);

    // symbol: ?hasAnyEffects@Actor@@QEBA_NXZ
    MCAPI bool hasAnyEffects() const;

    // symbol: ?hasAnyVisibleEffects@Actor@@QEBA_NXZ
    MCAPI bool hasAnyVisibleEffects() const;

    // symbol: ?hasBeenHurtByMobInLastTicks@Actor@@QEBA_NH@Z
    MCAPI bool hasBeenHurtByMobInLastTicks(int) const;

    // symbol: ?hasCategory@Actor@@QEBA_NW4ActorCategory@@@Z
    MCAPI bool hasCategory(::ActorCategory) const;

    // symbol: ?hasDefinitionGroup@Actor@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool hasDefinitionGroup(std::string const&) const;

    // symbol: ?hasDimension@Actor@@QEBA_NXZ
    MCAPI bool hasDimension() const;

    // symbol: ?hasEffect@Actor@@QEBA_NAEBVMobEffect@@@Z
    MCAPI bool hasEffect(class MobEffect const&) const;

    // symbol: ?hasFamily@Actor@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasFamily(class HashedString const&) const;

    // symbol: ?hasFishingHook@Actor@@QEBA_NXZ
    MCAPI bool hasFishingHook() const;

    // symbol: ?hasLevel@Actor@@QEBA_NXZ
    MCAPI bool hasLevel() const;

    // symbol: ?hasPassenger@Actor@@QEBA_NXZ
    MCAPI bool hasPassenger() const;

    // symbol: ?hasPersistingTrade@Actor@@QEBA_NXZ
    MCAPI bool hasPersistingTrade() const;

    // symbol: ?hasPlayerPassenger@Actor@@QEBA_NXZ
    MCAPI bool hasPlayerPassenger() const;

    // symbol: ?hasPriorityAmmunition@Actor@@QEBA_NXZ
    MCAPI bool hasPriorityAmmunition() const;

    // symbol: ?hasRuntimeID@Actor@@QEBA_NXZ
    MCAPI bool hasRuntimeID() const;

    // symbol: ?hasSaddle@Actor@@QEBA_NXZ
    MCAPI bool hasSaddle() const;

    // symbol: ?hasTag@Actor@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool hasTag(std::string const&) const;

    // symbol: ?hasTags@Actor@@QEBA_NXZ
    MCAPI bool hasTags() const;

    // symbol: ?hasTeleported@Actor@@QEBA_NXZ
    MCAPI bool hasTeleported() const;

    // symbol: ?hasTotemEquipped@Actor@@QEBA_NXZ
    MCAPI bool hasTotemEquipped() const;

    // symbol: ?hasType@Actor@@QEBA_NW4ActorType@@@Z
    MCAPI bool hasType(::ActorType) const;

    // symbol: ?hasUniqueID@Actor@@QEBA_NXZ
    MCAPI bool hasUniqueID() const;

    // symbol: ?heal@Actor@@QEAAXH@Z
    MCAPI void heal(int);

    // symbol: ?healEffects@Actor@@QEAAXH@Z
    MCAPI void healEffects(int);

    // symbol: ?hurt@Actor@@QEAA_NAEBVActorDamageSource@@M_N1@Z
    MCAPI bool hurt(class ActorDamageSource const&, float, bool, bool);

    // symbol: ?inDownwardFlowingLiquid@Actor@@QEBA_NXZ
    MCAPI bool inDownwardFlowingLiquid() const;

    // symbol: ?initActorProperties@Actor@@QEAAXXZ
    MCAPI void initActorProperties();

    // symbol: ?initParams@Actor@@QEAAXAEAVRenderParams@@@Z
    MCAPI void initParams(class RenderParams&);

    // symbol: ?initParams@Actor@@QEAAXAEAVVariantParameterList@@@Z
    MCAPI void initParams(class VariantParameterList&);

    // symbol: ?intersects@Actor@@QEBA_NAEBVVec3@@0@Z
    MCAPI bool intersects(class Vec3 const&, class Vec3 const&) const;

    // symbol: ?isActorLocationInMaterial@Actor@@QEBA_NW4ActorLocation@@W4MaterialType@@@Z
    MCAPI bool isActorLocationInMaterial(::ActorLocation, ::MaterialType) const;

    // symbol: ?isAdventure@Actor@@QEBA_NXZ
    MCAPI bool isAdventure() const;

    // symbol: ?isAffectedByWaterBottle@Actor@@QEBA_NXZ
    MCAPI bool isAffectedByWaterBottle() const;

    // symbol: ?isAngry@Actor@@QEBA_NXZ
    MCAPI bool isAngry() const;

    // symbol: ?isAttackableGamemode@Actor@@QEBA_NXZ
    MCAPI bool isAttackableGamemode() const;

    // symbol: ?isAutonomous@Actor@@QEBA_NXZ
    MCAPI bool isAutonomous() const;

    // symbol: ?isBaby@Actor@@QEBA_NXZ
    MCAPI bool isBaby() const;

    // symbol: ?isBreakingObstruction@Actor@@QEBA_NXZ
    MCAPI bool isBreakingObstruction() const;

    // symbol: ?isBribed@Actor@@QEBA_NXZ
    MCAPI bool isBribed() const;

    // symbol: ?isCharged@Actor@@QEBA_NXZ
    MCAPI bool isCharged() const;

    // symbol: ?isChested@Actor@@QEBA_NXZ
    MCAPI bool isChested() const;

    // symbol: ?isClientSide@Actor@@QEBA_NXZ
    MCAPI bool isClientSide() const;

    // symbol: ?isClimbing@Actor@@QEBA_NXZ
    MCAPI bool isClimbing() const;

    // symbol: ?isControlledByLocalInstance@Actor@@QEBA_NXZ
    MCAPI bool isControlledByLocalInstance() const;

    // symbol: ?isCreative@Actor@@QEBA_NXZ
    MCAPI bool isCreative() const;

    // symbol: ?isDancing@Actor@@QEBA_NXZ
    MCAPI bool isDancing() const;

    // symbol: ?isDead@Actor@@QEBA_NXZ
    MCAPI bool isDead() const;

    // symbol: ?isDoorBreaker@Actor@@QEBA_NXZ
    MCAPI bool isDoorBreaker() const;

    // symbol: ?isDoorOpener@Actor@@QEBA_NXZ
    MCAPI bool isDoorOpener() const;

    // symbol: ?isGlobal@Actor@@QEBA_NXZ
    MCAPI bool isGlobal() const;

    // symbol: ?isIgnited@Actor@@QEBA_NXZ
    MCAPI bool isIgnited() const;

    // symbol: ?isImmersedInWater@Actor@@QEBA_NXZ
    MCAPI bool isImmersedInWater() const;

    // symbol: ?isInClouds@Actor@@QEBA_NXZ
    MCAPI bool isInClouds() const;

    // symbol: ?isInContactWithWater@Actor@@QEBA_NXZ
    MCAPI bool isInContactWithWater() const;

    // symbol: ?isInLava@Actor@@QEBA_NXZ
    MCAPI bool isInLava() const;

    // symbol: ?isInLove@Actor@@QEBA_NXZ
    MCAPI bool isInLove() const;

    // symbol: ?isInPrecipitation@Actor@@QEBA_NXZ
    MCAPI bool isInPrecipitation() const;

    // symbol: ?isInRain@Actor@@QEBA_NXZ
    MCAPI bool isInRain() const;

    // symbol: ?isInScaffolding@Actor@@QEBA_NXZ
    MCAPI bool isInScaffolding() const;

    // symbol: ?isInSnow@Actor@@QEBA_NXZ
    MCAPI bool isInSnow() const;

    // symbol: ?isInThunderstorm@Actor@@QEBA_NXZ
    MCAPI bool isInThunderstorm() const;

    // symbol: ?isInWater@Actor@@QEBA_NXZ
    MCAPI bool isInWater() const;

    // symbol: ?isInWaterOrRain@Actor@@QEBA_NXZ
    MCAPI bool isInWaterOrRain() const;

    // symbol: ?isInWorld@Actor@@QEBA_NXZ
    MCAPI bool isInWorld() const;

    // symbol: ?isInsidePortal@Actor@@QEBA_NXZ
    MCAPI bool isInsidePortal() const;

    // symbol: ?isInvertedHealAndHarm@Actor@@QEBA_NXZ
    MCAPI bool isInvertedHealAndHarm() const;

    // symbol: ?isJumping@Actor@@QEBA_NXZ
    MCAPI bool isJumping() const;

    // symbol: ?isLayingDown@Actor@@QEBA_NXZ
    MCAPI bool isLayingDown() const;

    // symbol: ?isLeashed@Actor@@QEBA_NXZ
    MCAPI bool isLeashed() const;

    // symbol: ?isMovedToLimbo@Actor@@QEBA_NXZ
    MCAPI bool isMovedToLimbo() const;

    // symbol: ?isMovedToUnloadedChunk@Actor@@QEBA_NXZ
    MCAPI bool isMovedToUnloadedChunk() const;

    // symbol: ?isMoving@Actor@@QEBA_NXZ
    MCAPI bool isMoving() const;

    // symbol: ?isOnHotBlock@Actor@@QEBA_NXZ
    MCAPI bool isOnHotBlock() const;

    // symbol: ?isOrphan@Actor@@QEBA_NXZ
    MCAPI bool isOrphan() const;

    // symbol: ?isOutOfControl@Actor@@QEBA_NXZ
    MCAPI bool isOutOfControl() const;

    // symbol: ?isOverScaffolding@Actor@@QEBA_NXZ
    MCAPI bool isOverScaffolding() const;

    // symbol: ?isOverWater@Actor@@QEBA_NXZ
    MCAPI bool isOverWater() const;

    // symbol: ?isPacified@Actor@@QEBA_NXZ
    MCAPI bool isPacified() const;

    // symbol: ?isPassenger@Actor@@QEBA_NAEBV1@@Z
    MCAPI bool isPassenger(class Actor const&) const;

    // symbol: ?isPersistent@Actor@@QEBA_NXZ
    MCAPI bool isPersistent() const;

    // symbol: ?isPlayingDead@Actor@@QEBA_NXZ
    MCAPI bool isPlayingDead() const;

    // symbol: ?isPowered@Actor@@QEBA_NXZ
    MCAPI bool isPowered() const;

    // symbol: ?isRemotePlayer@Actor@@QEBA_NXZ
    MCAPI bool isRemotePlayer() const;

    // symbol: ?isRemoved@Actor@@QEBA_NXZ
    MCAPI bool isRemoved() const;

    // symbol: ?isResting@Actor@@QEBA_NXZ
    MCAPI bool isResting() const;

    // symbol: ?isRiding@Actor@@QEBA_NXZ
    MCAPI bool isRiding() const;

    // symbol: ?isRiding@Actor@@QEBA_NPEAV1@@Z
    MCAPI bool isRiding(class Actor*) const;

    // symbol: ?isSheared@Actor@@QEBA_NXZ
    MCAPI bool isSheared() const;

    // symbol: ?isSilent@Actor@@QEBA_NXZ
    MCAPI bool isSilent() const;

    // symbol: ?isSitting@Actor@@QEBA_NXZ
    MCAPI bool isSitting() const;

    // symbol: ?isSneaking@Actor@@QEBA_NXZ
    MCAPI bool isSneaking() const;

    // symbol: ?isSpectator@Actor@@QEBA_NXZ
    MCAPI bool isSpectator() const;

    // symbol: ?isStanding@Actor@@QEBA_NXZ
    MCAPI bool isStanding() const;

    // symbol: ?isSurvival@Actor@@QEBA_NXZ
    MCAPI bool isSurvival() const;

    // symbol: ?isSwimmer@Actor@@QEBA_NXZ
    MCAPI bool isSwimmer() const;

    // symbol: ?isSwimming@Actor@@QEBA_NXZ
    MCAPI bool isSwimming() const;

    // symbol: ?isTame@Actor@@QEBA_NXZ
    MCAPI bool isTame() const;

    // symbol: ?isTickingEntity@Actor@@QEBA_NXZ
    MCAPI bool isTickingEntity() const;

    // symbol: ?isTouchingDamageBlock@Actor@@QEBA_NXZ
    MCAPI bool isTouchingDamageBlock() const;

    // symbol: ?isTrading@Actor@@QEBA_NXZ
    MCAPI bool isTrading() const;

    // symbol: ?isTrusting@Actor@@QEBA_NXZ
    MCAPI bool isTrusting() const;

    // symbol: ?isType@Actor@@QEBA_NW4ActorType@@@Z
    MCAPI bool isType(::ActorType) const;

    // symbol: ?isUnderLiquid@Actor@@QEBA_NW4MaterialType@@@Z
    MCAPI bool isUnderLiquid(::MaterialType) const;

    // symbol: ?isUseNewTradeScreen@Actor@@QEBA_NXZ
    MCAPI bool isUseNewTradeScreen() const;

    // symbol: ?isWalker@Actor@@QEBA_NXZ
    MCAPI bool isWalker() const;

    // symbol: ?isWearingLeatherArmor@Actor@@QEBA?B_NXZ
    MCAPI bool const isWearingLeatherArmor() const;

    // symbol: ?isWorldBuilder@Actor@@QEBA_NXZ
    MCAPI bool isWorldBuilder() const;

    // symbol: ?killed@Actor@@QEAAXAEAV1@@Z
    MCAPI void killed(class Actor&);

    // symbol: ?lerpTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@H@Z
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, int);

    // symbol: ?lerpTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@MH@Z
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, float, int);

    // symbol: ?loadEntityFlags@Actor@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void loadEntityFlags(class CompoundTag const&, class DataLoadHelper&);

    // symbol:
    // ?loadLinks@Actor@@QEAAXAEBVCompoundTag@@AEAV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@AEAVDataLoadHelper@@@Z
    MCAPI void loadLinks(class CompoundTag const&, std::vector<struct ActorLink>&, class DataLoadHelper&);

    // symbol: ?lovePartnerId@Actor@@QEBAAEBUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID const& lovePartnerId() const;

    // symbol: ?migrateUniqueID@Actor@@QEAAXUActorUniqueID@@@Z
    MCAPI void migrateUniqueID(struct ActorUniqueID);

    // symbol: ?move@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void move(class Vec3 const&);

    // symbol: ?moveRelative@Actor@@QEAAXMMMM@Z
    MCAPI void moveRelative(float, float, float, float);

    // symbol: ?moveTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@@Z
    MCAPI void moveTo(class Vec3 const&, class Vec2 const&);

    // symbol: ?onAffectedByWaterBottle@Actor@@QEAAXXZ
    MCAPI void onAffectedByWaterBottle();

    // symbol: ?onClimbableBlock@Actor@@QEBA_NXZ
    MCAPI bool onClimbableBlock() const;

    // symbol: ?onOnewayCollision@Actor@@QEAAXAEBVAABB@@@Z
    MCAPI void onOnewayCollision(class AABB const&);

    // symbol: ?onOrphan@Actor@@QEAAXXZ
    MCAPI void onOrphan();

    // symbol: ??9Actor@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class Actor const&) const;

    // symbol: ??8Actor@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class Actor const&) const;

    // symbol: ?pickUpItem@Actor@@QEAAXAEAVItemActor@@H@Z
    MCAPI void pickUpItem(class ItemActor&, int);

    // symbol: ?playMovementSound@Actor@@QEAAXXZ
    MCAPI void playMovementSound();

    // symbol: ?playSound@Actor@@QEAAXW4LevelSoundEvent@@AEBVVec3@@AEBVBlock@@@Z
    MCAPI void playSound(::LevelSoundEvent, class Vec3 const&, class Block const&);

    // symbol: ?playSound@Actor@@QEAAXW4LevelSoundEvent@@AEBVVec3@@H@Z
    MCAPI void playSound(::LevelSoundEvent, class Vec3 const&, int);

    // symbol: ?playSynchronizedSound@Actor@@QEAAXW4LevelSoundEvent@@AEBVVec3@@AEBVBlock@@_N@Z
    MCAPI void playSynchronizedSound(::LevelSoundEvent, class Vec3 const&, class Block const&, bool);

    // symbol: ?playSynchronizedSound@Actor@@QEAAXW4LevelSoundEvent@@AEBVVec3@@H_N@Z
    MCAPI void playSynchronizedSound(::LevelSoundEvent, class Vec3 const&, int, bool);

    // symbol: ?positionAllPassengers@Actor@@QEAAXXZ
    MCAPI void positionAllPassengers();

    // symbol: ?postGameEvent@Actor@@QEAAXAEBVGameEvent@@AEBVVec3@@PEBVBlock@@@Z
    MCAPI void postGameEvent(class GameEvent const&, class Vec3 const&, class Block const*);

    // symbol: ?postSplashGameEvent@Actor@@QEAAXXZ
    MCAPI void postSplashGameEvent();

    // symbol: ?pullInEntity@Actor@@QEAA_NAEAV1@@Z
    MCAPI bool pullInEntity(class Actor&);

    // symbol: ?pushBackActionEventToActionQueue@Actor@@QEAAXVActionEvent@@@Z
    MCAPI void pushBackActionEventToActionQueue(class ActionEvent);

    // symbol: ?queueBBUpdateFromDefinition@Actor@@QEAAXXZ
    MCAPI void queueBBUpdateFromDefinition();

    // symbol: ?queueBBUpdateFromValue@Actor@@QEAAXAEBVVec2@@@Z
    MCAPI void queueBBUpdateFromValue(class Vec2 const&);

    // symbol: ?refreshComponents@Actor@@QEAAXXZ
    MCAPI void refreshComponents();

    // symbol: ?reload@Actor@@QEAAXXZ
    MCAPI void reload();

    // symbol: ?reloadLootTable@Actor@@QEAAXXZ
    MCAPI void reloadLootTable();

    // symbol: ?reloadLootTable@Actor@@QEAAXAEBUEquipmentTableDefinition@@@Z
    MCAPI void reloadLootTable(struct EquipmentTableDefinition const&);

    // symbol: ?removeAllEffects@Actor@@QEAAXXZ
    MCAPI void removeAllEffects();

    // symbol: ?removeAllPassengers@Actor@@QEAAX_N@Z
    MCAPI void removeAllPassengers(bool);

    // symbol: ?removeDefinitionGroup@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void removeDefinitionGroup(std::string const&);

    // symbol: ?removeEffect@Actor@@QEAAXH@Z
    MCAPI void removeEffect(int);

    // symbol: ?removePersistingTrade@Actor@@QEAAXXZ
    MCAPI void removePersistingTrade();

    // symbol: ?removeTag@Actor@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool removeTag(std::string const&);

    // symbol: ?resetSlideYOffset@Actor@@QEAAXXZ
    MCAPI void resetSlideYOffset();

    // symbol: ?saveEntityFlags@Actor@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void saveEntityFlags(class CompoundTag&) const;

    // symbol: ?saveLinks@Actor@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> saveLinks() const;

    // symbol:
    // ?savePersistingTrade@Actor@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@H@Z
    MCAPI void savePersistingTrade(std::unique_ptr<class CompoundTag>, int);

    // symbol: ?saveWithoutId@Actor@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void saveWithoutId(class CompoundTag&) const;

    // symbol:
    // ?sendActorDefinitionEventTriggered@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void sendActorDefinitionEventTriggered(std::string const&);

    // symbol: ?sendMotionToServer@Actor@@QEAAXXZ
    MCAPI void sendMotionToServer();

    // symbol: ?serializationSetHealth@Actor@@QEAAXH@Z
    MCAPI void serializationSetHealth(int);

    // symbol: ?setAABB@Actor@@QEAAXAEBVAABB@@@Z
    MCAPI void setAABB(class AABB const&);

    // symbol: ?setAABBDim@Actor@@QEAAXAEBVVec2@@@Z
    MCAPI void setAABBDim(class Vec2 const&);

    // symbol: ?setActorRendererId@Actor@@QEAAXVHashedString@@@Z
    MCAPI void setActorRendererId(class HashedString);

    // symbol: ?setAutonomous@Actor@@QEAAX_N@Z
    MCAPI void setAutonomous(bool);

    // symbol: ?setBaseDefinition@Actor@@QEAAXAEBUActorDefinitionIdentifier@@_N1@Z
    MCAPI void setBaseDefinition(struct ActorDefinitionIdentifier const&, bool, bool);

    // symbol: ?setBlockTarget@Actor@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setBlockTarget(class BlockPos const&);

    // symbol: ?setBreakingObstruction@Actor@@QEAAX_N@Z
    MCAPI void setBreakingObstruction(bool);

    // symbol: ?setCanClimb@Actor@@QEAAX_N@Z
    MCAPI void setCanClimb(bool);

    // symbol: ?setCanFly@Actor@@QEAAX_N@Z
    MCAPI void setCanFly(bool);

    // symbol: ?setCanPowerJump@Actor@@QEAAX_N@Z
    MCAPI void setCanPowerJump(bool);

    // symbol: ?setChainedDamageEffects@Actor@@QEAAX_N@Z
    MCAPI void setChainedDamageEffects(bool);

    // symbol: ?setCharged@Actor@@QEAAX_N@Z
    MCAPI void setCharged(bool);

    // symbol: ?setClimbing@Actor@@QEAAX_N@Z
    MCAPI void setClimbing(bool);

    // symbol: ?setColor@Actor@@QEAAXW4PaletteColor@@@Z
    MCAPI void setColor(::PaletteColor);

    // symbol: ?setColor2@Actor@@QEAAXW4PaletteColor@@@Z
    MCAPI void setColor2(::PaletteColor);

    // symbol: ?setControllingSeat@Actor@@QEAAXH@Z
    MCAPI void setControllingSeat(int);

    // symbol: ?setDamageNearbyMobs@Actor@@QEAAX_N@Z
    MCAPI void setDamageNearbyMobs(bool);

    // symbol: ?setDancing@Actor@@QEAAX_N@Z
    MCAPI void setDancing(bool);

    // symbol: ?setDead@Actor@@QEAAX_N@Z
    MCAPI void setDead(bool);

    // symbol: ?setDimension@Actor@@QEAAXV?$WeakRefT@U?$SharePtrRefTraits@VDimension@@@@@@@Z
    MCAPI void setDimension(class WeakRefT<struct SharePtrRefTraits<class Dimension>>);

    // symbol: ?setDoorBreaker@Actor@@QEAAX_N@Z
    MCAPI void setDoorBreaker(bool);

    // symbol: ?setDoorOpener@Actor@@QEAAX_N@Z
    MCAPI void setDoorOpener(bool);

    // symbol: ?setEnchanted@Actor@@QEAAX_N@Z
    MCAPI void setEnchanted(bool);

    // symbol: ?setFallDistance@Actor@@QEAAXM@Z
    MCAPI void setFallDistance(float);

    // symbol: ?setFishingHookID@Actor@@QEAAXUActorUniqueID@@@Z
    MCAPI void setFishingHookID(struct ActorUniqueID);

    // symbol: ?setGlobal@Actor@@QEAAX_N@Z
    MCAPI void setGlobal(bool);

    // symbol: ?setHurtDir@Actor@@QEAAXH@Z
    MCAPI void setHurtDir(int);

    // symbol: ?setHurtTime@Actor@@QEAAXH@Z
    MCAPI void setHurtTime(int);

    // symbol: ?setInLove@Actor@@QEAAXPEAV1@@Z
    MCAPI void setInLove(class Actor*);

    // symbol: ?setInterpolation@Actor@@QEAAX_N@Z
    MCAPI void setInterpolation(bool);

    // symbol: ?setInvisible@Actor@@QEAAX_N@Z
    MCAPI void setInvisible(bool);

    // symbol: ?setIsExperienceDropEnabled@Actor@@QEAAX_N@Z
    MCAPI void setIsExperienceDropEnabled(bool);

    // symbol: ?setJumpDuration@Actor@@QEAAXH@Z
    MCAPI void setJumpDuration(int);

    // symbol: ?setJumping@Actor@@QEAAX_N@Z
    MCAPI void setJumping(bool);

    // symbol: ?setLastHitBB@Actor@@QEAAXAEBVVec3@@0@Z
    MCAPI void setLastHitBB(class Vec3 const&, class Vec3 const&);

    // symbol: ?setLastHurtByMob@Actor@@QEAAXPEAVMob@@@Z
    MCAPI void setLastHurtByMob(class Mob*);

    // symbol: ?setLastHurtByPlayer@Actor@@QEAAXPEAVPlayer@@@Z
    MCAPI void setLastHurtByPlayer(class Player*);

    // symbol: ?setLastHurtMob@Actor@@QEAAXPEAV1@@Z
    MCAPI void setLastHurtMob(class Actor*);

    // symbol: ?setLayingDown@Actor@@QEAAX_N@Z
    MCAPI void setLayingDown(bool);

    // symbol: ?setLeashHolder@Actor@@QEAAXUActorUniqueID@@@Z
    MCAPI void setLeashHolder(struct ActorUniqueID);

    // symbol: ?setLimitedLifetimeTicks@Actor@@QEAAXH@Z
    MCAPI void setLimitedLifetimeTicks(int);

    // symbol: ?setMarkVariant@Actor@@QEAAXH@Z
    MCAPI void setMarkVariant(int);

    // symbol: ?setMovedToLimbo@Actor@@QEAAX_N@Z
    MCAPI void setMovedToLimbo(bool);

    // symbol: ?setMovedToUnloadedChunk@Actor@@QEAAX_N@Z
    MCAPI void setMovedToUnloadedChunk(bool);

    // symbol: ?setMoving@Actor@@QEAAX_N@Z
    MCAPI void setMoving(bool);

    // symbol: ?setNameTag@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setNameTag(std::string const&);

    // symbol: ?setNameTagVisible@Actor@@QEAAX_N@Z
    MCAPI void setNameTagVisible(bool);

    // symbol: ?setPersistent@Actor@@QEAAXXZ
    MCAPI void setPersistent();

    // symbol: ?setPos@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void setPos(class Vec3 const&);

    // symbol: ?setPosDirectLegacy@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void setPosDirectLegacy(class Vec3 const&);

    // symbol: ?setPosPrev@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void setPosPrev(class Vec3 const&);

    // symbol: ?setPrevPosRotSetThisTick@Actor@@QEAAX_N@Z
    MCAPI void setPrevPosRotSetThisTick(bool);

    // symbol: ?setPreviousPosRot@Actor@@QEAAXXZ
    MCAPI void setPreviousPosRot();

    // symbol: ?setResting@Actor@@QEAAX_N@Z
    MCAPI void setResting(bool);

    // symbol: ?setRotationDirectly@Actor@@QEAAXAEBVVec2@@@Z
    MCAPI void setRotationDirectly(class Vec2 const&);

    // symbol: ?setRotationPrev@Actor@@QEAAXAEBVVec2@@@Z
    MCAPI void setRotationPrev(class Vec2 const&);

    // symbol: ?setRotationPrevY@Actor@@QEAAXM@Z
    MCAPI void setRotationPrevY(float);

    // symbol: ?setRotationWrapped@Actor@@QEAAXAEBVVec2@@@Z
    MCAPI void setRotationWrapped(class Vec2 const&);

    // symbol: ?setRotationX@Actor@@QEAAXM@Z
    MCAPI void setRotationX(float);

    // symbol: ?setRotationY@Actor@@QEAAXM@Z
    MCAPI void setRotationY(float);

    // symbol: ?setRuntimeID@Actor@@QEAAXVActorRuntimeID@@@Z
    MCAPI void setRuntimeID(class ActorRuntimeID);

    // symbol: ?setSaddle@Actor@@QEAAX_N@Z
    MCAPI void setSaddle(bool);

    // symbol: ?setScared@Actor@@QEAAX_N@Z
    MCAPI void setScared(bool);

    // symbol: ?setScoreTag@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setScoreTag(std::string const&);

    // symbol: ?setShakeTime@Actor@@QEAAXH@Z
    MCAPI void setShakeTime(int);

    // symbol: ?setSkinID@Actor@@QEAAXH@Z
    MCAPI void setSkinID(int);

    // symbol: ?setStrength@Actor@@QEAAXH@Z
    MCAPI void setStrength(int);

    // symbol: ?setStrengthMax@Actor@@QEAAXH@Z
    MCAPI void setStrengthMax(int);

    // symbol: ?setStructuralIntegrity@Actor@@QEAAXH@Z
    MCAPI void setStructuralIntegrity(int);

    // symbol: ?setStunned@Actor@@QEAAX_N@Z
    MCAPI void setStunned(bool);

    // symbol: ?setSwimmer@Actor@@QEAAX_N@Z
    MCAPI void setSwimmer(bool);

    // symbol: ?setTempted@Actor@@QEAAX_N@Z
    MCAPI void setTempted(bool);

    // symbol: ?setTradeInterest@Actor@@QEAAX_N@Z
    MCAPI void setTradeInterest(bool);

    // symbol: ?setTradingPlayer@Actor@@QEAAXPEAVPlayer@@@Z
    MCAPI void setTradingPlayer(class Player*);

    // symbol: ?setUniqueID@Actor@@QEAAXUActorUniqueID@@@Z
    MCAPI void setUniqueID(struct ActorUniqueID);

    // symbol: ?setVariant@Actor@@QEAAXH@Z
    MCAPI void setVariant(int);

    // symbol: ?setVelocity@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void setVelocity(class Vec3 const&);

    // symbol: ?setWASDControlled@Actor@@QEAAX_N@Z
    MCAPI void setWASDControlled(bool);

    // symbol: ?setWalker@Actor@@QEAAX_N@Z
    MCAPI void setWalker(bool);

    // symbol: ?setYHeadRot@Actor@@QEAAXM@Z
    MCAPI void setYHeadRot(float);

    // symbol: ?setYHeadRotO@Actor@@QEAAXM@Z
    MCAPI void setYHeadRotO(float);

    // symbol: ?setYHeadRotations@Actor@@QEAAXMM@Z
    MCAPI void setYHeadRotations(float, float);

    // symbol: ?shouldOrphan@Actor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool shouldOrphan(class BlockSource&);

    // symbol: ?shouldTick@Actor@@QEBA_NXZ
    MCAPI bool shouldTick() const;

    // symbol: ?shouldUpdateEffects@Actor@@QEBA_NXZ
    MCAPI bool shouldUpdateEffects() const;

    // symbol: ?spawnAtLocation@Actor@@QEAAPEAVItemActor@@AEBVItemStack@@M@Z
    MCAPI class ItemActor* spawnAtLocation(class ItemStack const&, float);

    // symbol: ?spawnEatParticles@Actor@@QEAAXAEBVItemStack@@H@Z
    MCAPI void spawnEatParticles(class ItemStack const&, int);

    // symbol: ?spinAttack@Actor@@QEAAXXZ
    MCAPI void spinAttack();

    // symbol: ?stopRiding@Actor@@QEAAX_N00@Z
    MCAPI void stopRiding(bool, bool, bool);

    // symbol: ?teleportPassengersTo@Actor@@QEAAXAEBVVec3@@HH@Z
    MCAPI void teleportPassengersTo(class Vec3 const&, int, int);

    // symbol: ?thawFreezeEffect@Actor@@QEAAXXZ
    MCAPI void thawFreezeEffect();

    // symbol: ?tick@Actor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool tick(class BlockSource&);

    // symbol: ?transferTickingArea@Actor@@QEAAXAEAVDimension@@@Z
    MCAPI void transferTickingArea(class Dimension&);

    // symbol:
    // ?tryGetEquippableSlotAllowedItems@Actor@@QEBAPEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@H@Z
    MCAPI std::vector<class ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int) const;

    // symbol: ?tryGetEquippableSlotForItem@Actor@@QEBA?AV?$optional@H@std@@VItemDescriptor@@@Z
    MCAPI std::optional<int> tryGetEquippableSlotForItem(class ItemDescriptor) const;

    // symbol: ?tryTeleportTo@Actor@@QEAA_NAEBVVec3@@_N1HH@Z
    MCAPI bool tryTeleportTo(class Vec3 const&, bool, bool, int, int);

    // symbol:
    // ?tryTickPredictedMovementComponent@Actor@@QEAAXAEBV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void tryTickPredictedMovementComponent(std::chrono::steady_clock::time_point const&);

    // symbol: ?updateAnimationComponentOnServer@Actor@@QEAAXXZ
    MCAPI void updateAnimationComponentOnServer();

    // symbol: ?updateDescription@Actor@@QEAAXXZ
    MCAPI void updateDescription();

    // symbol: ?updateDimensionChunkMove@Actor@@QEAAXXZ
    MCAPI void updateDimensionChunkMove();

    // symbol: ?updateInvisibilityStatus@Actor@@QEAAXXZ
    MCAPI void updateInvisibilityStatus();

    // symbol: ?updateMolangVariables@Actor@@QEAAXAEAVRenderParams@@@Z
    MCAPI void updateMolangVariables(class RenderParams&);

    // symbol: ?updateTickingData@Actor@@QEAAXXZ
    MCAPI void updateTickingData();

    // symbol: ?useSaddle@Actor@@QEAA_NAEAVItemStackBase@@PEAVPlayer@@@Z
    MCAPI bool useSaddle(class ItemStackBase&, class Player*);

    // symbol: ?wasHurt@Actor@@QEAA_NXZ
    MCAPI bool wasHurt();

    // symbol: ?wasLastHitByPlayer@Actor@@QEAA_NXZ
    MCAPI bool wasLastHitByPlayer();

    // symbol: ?wasLoadedFromNBTThisFrame@Actor@@QEBA_NXZ
    MCAPI bool wasLoadedFromNBTThisFrame() const;

    // symbol: ?wobble@Actor@@QEAAXXZ
    MCAPI void wobble();

    // symbol: ?_moveRelative@Actor@@SAXAEAVVec3@@MMMMM@Z
    MCAPI static void _moveRelative(class Vec3&, float, float, float, float, float);

    // symbol: ?buildForward@Actor@@SA?AVVec3@@VVec2@@@Z
    MCAPI static class Vec3 buildForward(class Vec2);

    // symbol:
    // ?getBlockPosCurrentlyStandingOn@Actor@@SA?AVBlockPos@@AEBVVec3@@VAABB@@AEBVIConstBlockSource@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    MCAPI static class BlockPos
    getBlockPosCurrentlyStandingOn(class Vec3 const&, class AABB, class IConstBlockSource const&, class optional_ref<class GetCollisionShapeInterface const>);

    // symbol: ?getCenter@Actor@@SA?AVVec3@@MAEBUAABBShapeComponent@@AEBUStateVectorComponent@@M@Z
    MCAPI static class Vec3
    getCenter(float, struct AABBShapeComponent const&, struct StateVectorComponent const&, float);

    // symbol:
    // ?getEffect@Actor@@SAPEBVMobEffectInstance@@AEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@AEBVMobEffect@@@Z
    MCAPI static class MobEffectInstance const*
    getEffect(std::vector<class MobEffectInstance> const&, class MobEffect const&);

    // symbol: ?getInterpolatedPosition@Actor@@SA?AVVec3@@MAEBUStateVectorComponent@@@Z
    MCAPI static class Vec3 getInterpolatedPosition(float, struct StateVectorComponent const&);

    // symbol: ?getInterpolatedRotation@Actor@@SA?AVVec2@@AEBV2@0M@Z
    MCAPI static class Vec2 getInterpolatedRotation(class Vec2 const&, class Vec2 const&, float);

    // symbol: ?getLiquidAABB@Actor@@SA?AVAABB@@AEBV2@W4MaterialType@@@Z
    MCAPI static class AABB getLiquidAABB(class AABB const&, ::MaterialType);

    // symbol: ?getLiquidFlowStrength@Actor@@SAMW4MaterialType@@@Z
    MCAPI static float getLiquidFlowStrength(::MaterialType);

    // symbol: ?getStatusFlag@Actor@@SA_NAEBVSynchedActorData@@W4ActorFlags@@@Z
    MCAPI static bool getStatusFlag(class SynchedActorData const&, ::ActorFlags);

    // symbol: ?getViewVector@Actor@@SA?AVVec3@@AEBUActorRotationComponent@@M@Z
    MCAPI static class Vec3 getViewVector(struct ActorRotationComponent const&, float);

    // symbol: ?getViewVector@Actor@@SA?AVVec3@@AEBVVec2@@0M@Z
    MCAPI static class Vec3 getViewVector(class Vec2 const&, class Vec2 const&, float);

    // symbol: ?isImmobile@Actor@@SA_NAEBVEntityContext@@@Z
    MCAPI static bool isImmobile(class EntityContext const&);

    // symbol:
    // ?isInLiquid@Actor@@SA_NW4MaterialType@@AEBVIConstBlockSource@@AEBVAABB@@AEBV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    MCAPI static bool
    isInLiquid(::MaterialType, class IConstBlockSource const&, class AABB const&, std::vector<class AABB> const&);

    // symbol: ?isStanding@Actor@@SA_NAEBVEntityContext@@@Z
    MCAPI static bool isStanding(class EntityContext const&);

    // symbol: ?tryGetFromComponent@Actor@@SAPEAV1@AEAVActorOwnerComponent@@_N@Z
    MCAPI static class Actor* tryGetFromComponent(class ActorOwnerComponent&, bool);

    // symbol: ?tryGetFromComponent@Actor@@SAPEBV1@AEBVActorOwnerComponent@@_N@Z
    MCAPI static class Actor const* tryGetFromComponent(class ActorOwnerComponent const&, bool);

    // symbol: ?tryGetFromEntity@Actor@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class Actor* tryGetFromEntity(class EntityContext&, bool);

    // symbol: ?tryGetFromEntity@Actor@@SAPEAV1@V?$StackRefResultT@UEntityRefTraits@@@@_N@Z
    MCAPI static class Actor* tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool);

    // symbol: ?tryGetFromEntity@Actor@@SAPEAV1@AEBVStrictEntityContext@@AEAVEntityRegistry@@_N@Z
    MCAPI static class Actor* tryGetFromEntity(class StrictEntityContext const&, class EntityRegistry&, bool);

    // symbol: ?tryGetFromEntity@Actor@@SAPEBV1@AEBVEntityContext@@_N@Z
    MCAPI static class Actor const* tryGetFromEntity(class EntityContext const&, bool);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_drop@Actor@@IEAAPEBVItemActor@@AEBVItemStack@@_N@Z
    MCAPI class ItemActor const* _drop(class ItemStack const&, bool);

    // symbol:
    // ?_getAllEffectsNonConst@Actor@@IEAAAEAV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@XZ
    MCAPI std::vector<class MobEffectInstance>& _getAllEffectsNonConst();

    // symbol:
    // ?_getAnimationComponent@Actor@@IEAAAEAVAnimationComponent@@AEAV?$shared_ptr@VAnimationComponent@@@std@@W4AnimationComponentGroupType@@@Z
    MCAPI class AnimationComponent&
    _getAnimationComponent(std::shared_ptr<class AnimationComponent>&, ::AnimationComponentGroupType);

    // symbol: ?_initializeMaxAutoStep@Actor@@IEAAXM@Z
    MCAPI void _initializeMaxAutoStep(float);

    // symbol: ?_isDeathLootAllowed@Actor@@IEBA_NXZ
    MCAPI bool _isDeathLootAllowed() const;

    // symbol: ?_isHeadInWater@Actor@@IEBA_NXZ
    MCAPI bool _isHeadInWater() const;

    // symbol:
    // ?_setArmorContainer@Actor@@IEAAXV?$unique_ptr@VSimpleContainer@@U?$default_delete@VSimpleContainer@@@std@@@std@@@Z
    MCAPI void _setArmorContainer(std::unique_ptr<class SimpleContainer>);

    // symbol: ?_setDimensionTransitionComponent@Actor@@IEAAXV?$AutomaticID@VDimension@@H@@0H@Z
    MCAPI void _setDimensionTransitionComponent(DimensionType, DimensionType, int);

    // symbol:
    // ?_setHandContainer@Actor@@IEAAXV?$unique_ptr@VSimpleContainer@@U?$default_delete@VSimpleContainer@@@std@@@std@@@Z
    MCAPI void _setHandContainer(std::unique_ptr<class SimpleContainer>);

    // symbol: ?_setHandContainerItem@Actor@@IEAAXAEBVItemStack@@W4HandSlot@@@Z
    MCAPI void _setHandContainerItem(class ItemStack const&, ::HandSlot);

    // symbol: ?_setHeightOffset@Actor@@IEAAXM@Z
    MCAPI void _setHeightOffset(float);

    // symbol: ?_setPos@Actor@@IEAAXAEBVVec3@@@Z
    MCAPI void _setPos(class Vec3 const&);

    // symbol: ?_setPosPrev@Actor@@IEAAXAEBVVec3@@@Z
    MCAPI void _setPosPrev(class Vec3 const&);

    // symbol: ?enableAutoSendPosRot@Actor@@IEAAX_N@Z
    MCAPI void enableAutoSendPosRot(bool);

    // symbol: ?getBlockWhenClimbing@Actor@@IEAAAEBVBlock@@XZ
    MCAPI class Block const& getBlockWhenClimbing();

    // symbol: ?markHurt@Actor@@IEAAXXZ
    MCAPI void markHurt();

    // symbol: ?pushOutOfBlocks@Actor@@IEAAXAEBVVec3@@@Z
    MCAPI void pushOutOfBlocks(class Vec3 const&);

    // symbol: ?spawnTrailBubbles@Actor@@IEAAXXZ
    MCAPI void spawnTrailBubbles();

    // symbol: ?updateInsideBlock@Actor@@IEAAXXZ
    MCAPI void updateInsideBlock();

    // symbol: ?updateWaterState@Actor@@IEAAXXZ
    MCAPI void updateWaterState();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addActorBuiltInComponents@Actor@@AEAA?AUBuiltInActorComponents@@XZ
    MCAPI struct BuiltInActorComponents _addActorBuiltInComponents();

    // symbol: ?_addActorNonBuiltInComponents@Actor@@AEAAXXZ
    MCAPI void _addActorNonBuiltInComponents();

    // symbol: ?_damageNearbyMobs@Actor@@AEAAXXZ
    MCAPI void _damageNearbyMobs();

    // symbol: ?_defaultInitEquipmentDropChances@Actor@@AEAAXXZ
    MCAPI void _defaultInitEquipmentDropChances();

    // symbol: ?_initializeLeashRopeSystem@Actor@@AEAAXPEAV1@@Z
    MCAPI void _initializeLeashRopeSystem(class Actor*);

    // symbol: ?_isItemStackNetManagerEnabled@Actor@@AEBA_NXZ
    MCAPI bool _isItemStackNetManagerEnabled() const;

    // symbol: ?_serializeComponents@Actor@@AEBAXAEAVCompoundTag@@@Z
    MCAPI void _serializeComponents(class CompoundTag&) const;

    // symbol: ?_setupServerAnimationComponent@Actor@@AEAAXXZ
    MCAPI void _setupServerAnimationComponent();

    // symbol: ?_tryPlantWitherRose@Actor@@AEAAXXZ
    MCAPI void _tryPlantWitherRose();

    // symbol: ?_updateComposition@Actor@@AEAAX_N@Z
    MCAPI void _updateComposition(bool);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?DAMAGE_NEARBY_MOBS_DURATION@Actor@@0HB
    MCAPI static int const DAMAGE_NEARBY_MOBS_DURATION;

    // symbol: ?DEFAULT_MAX_DISTANCE_OPTIMIZATION@Actor@@0MB
    MCAPI static float const DEFAULT_MAX_DISTANCE_OPTIMIZATION;

    // symbol: ?DEFAULT_MAX_TICK_DELAY_OPTIMIZATION@Actor@@0_KB
    MCAPI static uint64 const DEFAULT_MAX_TICK_DELAY_OPTIMIZATION;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $DAMAGE_NEARBY_MOBS_DURATION() { return DAMAGE_NEARBY_MOBS_DURATION; }

    static auto& $DEFAULT_MAX_DISTANCE_OPTIMIZATION() { return DEFAULT_MAX_DISTANCE_OPTIMIZATION; }

    static auto& $DEFAULT_MAX_TICK_DELAY_OPTIMIZATION() { return DEFAULT_MAX_TICK_DELAY_OPTIMIZATION; }

    // NOLINTEND
};
