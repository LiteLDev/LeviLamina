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

    LLAPI void teleport(class Vec3 const& pos, int dimID, class Vec2 const& rotation);
    LLAPI void teleport(class Vec3 const& pos, int dimID);

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

    // vIndex: 3, symbol: ?getLastHurtByMob@Actor@@UEAAPEAVMob@@XZ
    virtual class Mob* getLastHurtByMob();

    // vIndex: 4, symbol: ?setLastHurtByMob@Actor@@UEAAXPEAVMob@@@Z
    virtual void setLastHurtByMob(class Mob*);

    // vIndex: 5, symbol: ?getLastHurtByPlayer@Actor@@UEAAPEAVPlayer@@XZ
    virtual class Player* getLastHurtByPlayer();

    // vIndex: 6, symbol: ?setLastHurtByPlayer@Actor@@UEAAXPEAVPlayer@@@Z
    virtual void setLastHurtByPlayer(class Player*);

    // vIndex: 7, symbol: ?getLastHurtMob@Actor@@UEAAPEAVMob@@XZ
    virtual class Mob* getLastHurtMob();

    // vIndex: 8, symbol: ?setLastHurtMob@Actor@@UEAAXPEAV1@@Z
    virtual void setLastHurtMob(class Actor*);

    // vIndex: 9, symbol: ?outOfWorld@Actor@@UEAAXXZ
    virtual void outOfWorld();

    // vIndex: 10, symbol: ?reloadHardcoded@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 11, symbol: ?reloadHardcodedClient@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 12, symbol: ?initializeComponents@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 13, symbol: ?reloadComponents@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
    virtual void reloadComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 14, symbol: ?_serverInitItemStackIds@Actor@@MEAAXXZ
    virtual void _serverInitItemStackIds();

    // vIndex: 15, symbol: ?_doInitialMove@Actor@@MEAAXXZ
    virtual void _doInitialMove();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: ?resetUserPos@Actor@@UEAAX_N@Z
    virtual void resetUserPos(bool);

    // vIndex: 18, symbol: ?getOwnerEntityType@Actor@@UEAA?AW4ActorType@@XZ
    virtual ::ActorType getOwnerEntityType();

    // vIndex: 19, symbol: ?remove@Actor@@UEAAXXZ
    virtual void remove();

    // vIndex: 20, symbol: ?isRuntimePredictedMovementEnabled@Actor@@UEBA_NXZ
    virtual bool isRuntimePredictedMovementEnabled() const;

    // vIndex: 21, symbol: ?getPredictedMovementValues@Actor@@UEBAAEBUPredictedMovementValues@@XZ
    virtual struct PredictedMovementValues const& getPredictedMovementValues() const;

    // vIndex: 22, symbol: ?getPosition@Actor@@UEBAAEBVVec3@@XZ
    virtual class Vec3 const& getPosition() const;

    // vIndex: 23, symbol: ?getPosPrev@Actor@@UEBAAEBVVec3@@XZ
    virtual class Vec3 const& getPosPrev() const;

    // vIndex: 24, symbol: ?getPosExtrapolated@Actor@@UEBA?BVVec3@@M@Z
    virtual class Vec3 const getPosExtrapolated(float lerpFactor = 0.0f) const;

    // vIndex: 25, symbol: ?getFiringPos@Actor@@UEBA?AVVec3@@XZ
    virtual class Vec3 getFiringPos() const;

    // vIndex: 26, symbol: ?getInterpolatedRidingPosition@Actor@@UEBA?AVVec3@@M@Z
    virtual class Vec3 getInterpolatedRidingPosition(float lerpFactor = 0.0f) const;

    // vIndex: 27, symbol: ?getInterpolatedBodyRot@Actor@@UEBAMM@Z
    virtual float getInterpolatedBodyRot(float lerpFactor = 0.0f) const;

    // vIndex: 28, symbol: ?getInterpolatedHeadRot@Actor@@UEBAMM@Z
    virtual float getInterpolatedHeadRot(float lerpFactor = 0.0f) const;

    // vIndex: 29, symbol: ?getInterpolatedBodyYaw@Actor@@UEBAMM@Z
    virtual float getInterpolatedBodyYaw(float lerpFactor = 0.0f) const;

    // vIndex: 30, symbol: ?getYawSpeedInDegreesPerSecond@Actor@@UEBAMXZ
    virtual float getYawSpeedInDegreesPerSecond() const;

    // vIndex: 31, symbol: ?getInterpolatedWalkAnimSpeed@Actor@@UEBAMM@Z
    virtual float getInterpolatedWalkAnimSpeed(float lerpFactor = 0.0f) const;

    // vIndex: 32, symbol: ?getInterpolatedRidingOffset@Actor@@UEBA?AVVec3@@MH@Z
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 33, symbol: ?resetInterpolated@Actor@@UEAAXXZ
    virtual void resetInterpolated();

    // vIndex: 34, symbol: ?isFireImmune@Actor@@UEBA_NXZ
    virtual bool isFireImmune() const;

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: ?blockedByShield@Actor@@UEAAXAEBVActorDamageSource@@AEAV1@@Z
    virtual void blockedByShield(class ActorDamageSource const&, class Actor&);

    // vIndex: 37, symbol: ?canDisableShield@Actor@@UEAA_NXZ
    virtual bool canDisableShield();

    // vIndex: 38, symbol: ?teleportTo@Actor@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);

    // vIndex: 39, symbol: ?tryTeleportTo@Actor@@UEAA_NAEBVVec3@@_N1HH@Z
    virtual bool tryTeleportTo(class Vec3 const&, bool, bool, int, int);

    // vIndex: 40, symbol: ?chorusFruitTeleport@Actor@@UEAAXAEBVVec3@@@Z
    virtual void chorusFruitTeleport(class Vec3 const&);

    // vIndex: 41, symbol: ?lerpMotion@Actor@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const&);

    // vIndex: 42, symbol:
    // ?tryCreateAddActorPacket@Actor@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 43, symbol: ?normalTick@Actor@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 44, symbol: ?baseTick@Actor@@UEAAXXZ
    virtual void baseTick();

    // vIndex: 45, symbol: ?passengerTick@Actor@@UEAAXXZ
    virtual void passengerTick();

    // vIndex: 46, symbol: ?startRiding@Actor@@UEAA_NAEAV1@@Z
    virtual bool startRiding(class Actor&);

    // vIndex: 47, symbol: ?addPassenger@Actor@@UEAAXAEAV1@@Z
    virtual void addPassenger(class Actor&);

    // vIndex: 48, symbol:
    // ?getExitTip@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@W4InputMode@@W4NewInteractionModel@@@Z
    virtual std::string getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;

    // vIndex: 49, symbol:
    // ?getEntityLocNameString@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getEntityLocNameString() const;

    // vIndex: 50, symbol: ?intersects@Actor@@UEBA_NAEBVVec3@@0@Z
    virtual bool intersects(class Vec3 const&, class Vec3 const&) const;

    // vIndex: 51, symbol: ?isInWall@Actor@@UEBA_NXZ
    virtual bool isInWall() const;

    // vIndex: 52, symbol: ?isInvisible@Actor@@UEBA_NXZ
    virtual bool isInvisible() const;

    // vIndex: 53, symbol: ?canShowNameTag@Actor@@UEBA_NXZ
    virtual bool canShowNameTag() const;

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: ?setNameTagVisible@Actor@@UEAAX_N@Z
    virtual void setNameTagVisible(bool);

    // vIndex: 56, symbol: ?getNameTag@Actor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getNameTag() const;

    // vIndex: 57, symbol: ?getNameTagAsHash@Actor@@UEBA_KXZ
    virtual uint64 getNameTagAsHash() const;

    // vIndex: 58, symbol:
    // ?getFormattedNameTag@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getFormattedNameTag() const;

    // vIndex: 59, symbol: ?filterFormattedNameTag@Actor@@UEAAXAEBVUIProfanityContext@@@Z
    virtual void filterFormattedNameTag(class UIProfanityContext const&);

    // vIndex: 60, symbol: ?setNameTag@Actor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void setNameTag(std::string const&);

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: ?setScoreTag@Actor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void setScoreTag(std::string const&);

    // vIndex: 63, symbol: ?getScoreTag@Actor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getScoreTag() const;

    // vIndex: 64, symbol: ?isInWater@Actor@@UEBA_NXZ
    virtual bool isInWater() const;

    // vIndex: 65, symbol: ?isUnderLiquid@Actor@@UEBA_NW4MaterialType@@@Z
    virtual bool isUnderLiquid(::MaterialType) const;

    // vIndex: 66, symbol: ?isOverWater@Actor@@UEBA_NXZ
    virtual bool isOverWater() const;

    // vIndex: 67, symbol: ?getShadowHeightOffs@Actor@@UEAAMXZ
    virtual float getShadowHeightOffs();

    // vIndex: 68, symbol: ?getShadowRadius@Actor@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 69, symbol: ?getHeadLookVector@Actor@@UEBA?AVVec3@@M@Z
    virtual class Vec3 getHeadLookVector(float lerpFactor = 0.0f) const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: ?canSee@Actor@@UEBA_NAEBV1@@Z
    virtual bool canSee(class Actor const&) const;

    // vIndex: 72, symbol: ?canSee@Actor@@UEBA_NAEBVVec3@@@Z
    virtual bool canSee(class Vec3 const&) const;

    // vIndex: 73, symbol: ?canInteractWithOtherEntitiesInGame@Actor@@UEBA_NXZ
    virtual bool canInteractWithOtherEntitiesInGame() const;

    // vIndex: 74, symbol: ?isSkyLit@Actor@@UEAA_NM@Z
    virtual bool isSkyLit(float);

    // vIndex: 75, symbol: ?getBrightness@Actor@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 77, symbol: ?playerTouch@Actor@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player&);

    // vIndex: 78, symbol: ?isImmobile@Actor@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 79, symbol: ?isSilent@Actor@@UEBA_NXZ
    virtual bool isSilent() const;

    // vIndex: 80, symbol: ?isSilentObserver@Actor@@UEBA_NXZ
    virtual bool isSilentObserver() const;

    // vIndex: 81, symbol: ?isPickable@Actor@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 83, symbol: ?isSleeping@Actor@@UEBA_NXZ
    virtual bool isSleeping() const;

    // vIndex: 84, symbol: ?setSleeping@Actor@@UEAAX_N@Z
    virtual void setSleeping(bool);

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 86, symbol: ?setSneaking@Actor@@UEAAX_N@Z
    virtual void setSneaking(bool);

    // vIndex: 87, symbol: ?isBlocking@Actor@@UEBA_NXZ
    virtual bool isBlocking() const;

    // vIndex: 88, symbol: ?isDamageBlocked@Actor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isDamageBlocked(class ActorDamageSource const&) const;

    // vIndex: 89, symbol: ?isAlive@Actor@@UEBA_NXZ
    virtual bool isAlive() const;

    // vIndex: 90, symbol: ?isOnFire@Actor@@UEBA_NXZ
    virtual bool isOnFire() const;

    // vIndex: 91, symbol: ?isOnHotBlock@Actor@@UEBA_NXZ
    virtual bool isOnHotBlock() const;

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 93, symbol: ?isSurfaceMob@Actor@@UEBA_NXZ
    virtual bool isSurfaceMob() const;

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: ?isRemotePlayer@Actor@@UEBA_NXZ
    virtual bool isRemotePlayer() const;

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 98, symbol: ?isAffectedByWaterBottle@Actor@@UEBA_NXZ
    virtual bool isAffectedByWaterBottle() const;

    // vIndex: 99, symbol: ?canAttack@Actor@@UEBA_NPEAV1@_N@Z
    virtual bool canAttack(class Actor*, bool) const;

    // vIndex: 100, symbol: ?setTarget@Actor@@UEAAXPEAV1@@Z
    virtual void setTarget(class Actor*);

    // vIndex: 101, symbol: ?isValidTarget@Actor@@UEBA_NPEAV1@@Z
    virtual bool isValidTarget(class Actor*) const;

    // vIndex: 102, symbol: ?attack@Actor@@UEAA_NAEAV1@AEBW4ActorDamageCause@@@Z
    virtual bool attack(class Actor&, ::ActorDamageCause const&);

    // vIndex: 103, symbol: ?performRangedAttack@Actor@@UEAAXAEAV1@M@Z
    virtual void performRangedAttack(class Actor&, float);

    // vIndex: 104, symbol: ?getEquipmentCount@Actor@@UEBAHXZ
    virtual int getEquipmentCount() const;

    // vIndex: 105, symbol: ?setOwner@Actor@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID);

    // vIndex: 106, symbol: ?setSitting@Actor@@UEAAX_N@Z
    virtual void setSitting(bool);

    // vIndex: 107, symbol: ?onTame@Actor@@UEAAXXZ
    virtual void onTame();

    // vIndex: 108, symbol: ?onFailedTame@Actor@@UEAAXXZ
    virtual void onFailedTame();

    // vIndex: 109, symbol: ?getInventorySize@Actor@@UEBAHXZ
    virtual int getInventorySize() const;

    // vIndex: 110, symbol: ?getEquipSlots@Actor@@UEBAHXZ
    virtual int getEquipSlots() const;

    // vIndex: 111, symbol: ?getChestSlots@Actor@@UEBAHXZ
    virtual int getChestSlots() const;

    // vIndex: 112, symbol: ?setStanding@Actor@@UEAAX_N@Z
    virtual void setStanding(bool);

    // vIndex: 113, symbol: ?canPowerJump@Actor@@UEBA_NXZ
    virtual bool canPowerJump() const;

    // vIndex: 114, symbol: ?setCanPowerJump@Actor@@UEAAX_N@Z
    virtual void setCanPowerJump(bool);

    // vIndex: 115, symbol: ?isEnchanted@Actor@@UEBA_NXZ
    virtual bool isEnchanted() const;

    // vIndex: 116, symbol: ?shouldRender@Actor@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 117, symbol: ?playAmbientSound@Actor@@UEAAXXZ
    virtual void playAmbientSound();

    // vIndex: 118, symbol: ?getAmbientSound@Actor@@UEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getAmbientSound() const;

    // vIndex: 119, symbol: ?isInvulnerableTo@Actor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 120, symbol: ?getBlockDamageCause@Actor@@UEBA?AW4ActorDamageCause@@AEBVBlock@@@Z
    virtual ::ActorDamageCause getBlockDamageCause(class Block const&) const;

    // vIndex: 121, symbol: ?doFireHurt@Actor@@UEAA_NH@Z
    virtual bool doFireHurt(int);

    // vIndex: 122, symbol: ?onLightningHit@Actor@@UEAAXXZ
    virtual void onLightningHit();

    // vIndex: 123, symbol: ?onBounceStarted@Actor@@UEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void onBounceStarted(class BlockPos const&, class Block const&);

    // vIndex: 124, symbol: ?feed@Actor@@UEAAXH@Z
    virtual void feed(int);

    // vIndex: 125, symbol: ?handleEntityEvent@Actor@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 126, symbol: ?getPickRadius@Actor@@UEAAMXZ
    virtual float getPickRadius();

    // vIndex: 127, symbol: ?getActorRendererId@Actor@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getActorRendererId() const;

    // vIndex: 128, symbol: ?spawnAtLocation@Actor@@UEAAPEAVItemActor@@HH@Z
    virtual class ItemActor* spawnAtLocation(int, int);

    // vIndex: 129, symbol: ?spawnAtLocation@Actor@@UEAAPEAVItemActor@@HHM@Z
    virtual class ItemActor* spawnAtLocation(int, int, float);

    // vIndex: 130, symbol: ?spawnAtLocation@Actor@@UEAAPEAVItemActor@@AEBVItemStack@@M@Z
    virtual class ItemActor* spawnAtLocation(class ItemStack const&, float);

    // vIndex: 131, symbol: ?despawn@Actor@@UEAAXXZ
    virtual void despawn();

    // vIndex: 132, symbol: ?killed@Actor@@UEAAXAEAV1@@Z
    virtual void killed(class Actor&);

    // vIndex: 133, symbol: ?awardKillScore@Actor@@UEAAXAEAV1@H@Z
    virtual void awardKillScore(class Actor&, int);

    // vIndex: 134, symbol: ?setArmor@Actor@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setArmor(::ArmorSlot, class ItemStack const&);

    // vIndex: 135, symbol: ?getArmor@Actor@@UEBAAEBVItemStack@@W4ArmorSlot@@@Z
    virtual class ItemStack const& getArmor(::ArmorSlot) const;

    // vIndex: 136, symbol:
    // ?getAllArmor@Actor@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack const*> getAllArmor() const;

    // vIndex: 137, symbol: ?getArmorMaterialTypeInSlot@Actor@@UEBA?AW4ArmorMaterialType@@W4ArmorSlot@@@Z
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::ArmorSlot) const;

    // vIndex: 138, symbol: ?getArmorMaterialTextureTypeInSlot@Actor@@UEBA?AW4ArmorTextureType@@W4ArmorSlot@@@Z
    virtual ::ArmorTextureType getArmorMaterialTextureTypeInSlot(::ArmorSlot) const;

    // vIndex: 139, symbol: ?getArmorColorInSlot@Actor@@UEBAMW4ArmorSlot@@H@Z
    virtual float getArmorColorInSlot(::ArmorSlot, int) const;

    // vIndex: 140, symbol: ?getEquippedSlot@Actor@@UEBAAEBVItemStack@@W4EquipmentSlot@@@Z
    virtual class ItemStack const& getEquippedSlot(::EquipmentSlot) const;

    // vIndex: 141, symbol: ?setEquippedSlot@Actor@@UEAAXW4EquipmentSlot@@AEBVItemStack@@@Z
    virtual void setEquippedSlot(::EquipmentSlot, class ItemStack const&);

    // vIndex: 142, symbol: ?setCarriedItem@Actor@@UEAAXAEBVItemStack@@@Z
    virtual void setCarriedItem(class ItemStack const&);

    // vIndex: 143, symbol: ?getCarriedItem@Actor@@UEBAAEBVItemStack@@XZ
    virtual class ItemStack const& getCarriedItem() const;

    // vIndex: 144, symbol: ?setOffhandSlot@Actor@@UEAAXAEBVItemStack@@@Z
    virtual void setOffhandSlot(class ItemStack const&);

    // vIndex: 145, symbol: ?getEquippedTotem@Actor@@UEBAAEBVItemStack@@XZ
    virtual class ItemStack const& getEquippedTotem() const;

    // vIndex: 146, symbol: ?consumeTotem@Actor@@UEAA_NXZ
    virtual bool consumeTotem();

    // vIndex: 147, symbol: ?save@Actor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 148, symbol: ?saveWithoutId@Actor@@UEBAXAEAVCompoundTag@@@Z
    virtual void saveWithoutId(class CompoundTag&) const;

    // vIndex: 149, symbol: ?load@Actor@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 150, symbol:
    // ?loadLinks@Actor@@UEAAXAEBVCompoundTag@@AEAV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@AEAVDataLoadHelper@@@Z
    virtual void loadLinks(class CompoundTag const&, std::vector<struct ActorLink>&, class DataLoadHelper&);

    // vIndex: 151, symbol: ?getEntityTypeId@Actor@@UEBA?AW4ActorType@@XZ
    virtual ::ActorType getEntityTypeId() const;

    // vIndex: 152, symbol: ?queryEntityRenderer@Actor@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& queryEntityRenderer() const;

    // vIndex: 153, symbol: ?getSourceUniqueID@Actor@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 154, symbol: ?thawFreezeEffect@Actor@@UEAAXXZ
    virtual void thawFreezeEffect();

    // vIndex: 155, symbol: ?canFreeze@Actor@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 156, symbol: ?isWearingLeatherArmor@Actor@@UEBA?B_NXZ
    virtual bool const isWearingLeatherArmor() const;

    // vIndex: 157, symbol: ?getLiquidAABB@Actor@@UEBA?AVAABB@@W4MaterialType@@@Z
    virtual class AABB getLiquidAABB(::MaterialType) const;

    // vIndex: 158, symbol: ?handleInsidePortal@Actor@@UEAAXAEBVBlockPos@@@Z
    virtual void handleInsidePortal(class BlockPos const&);

    // vIndex: 159, symbol: ?getPortalCooldown@Actor@@UEBAHXZ
    virtual int getPortalCooldown() const;

    // vIndex: 160, symbol: ?getPortalWaitTime@Actor@@UEBAHXZ
    virtual int getPortalWaitTime() const;

    // vIndex: 161, symbol: ?canChangeDimensionsUsingPortal@Actor@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?changeDimension@Actor@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimension(DimensionType);

    // vIndex: 164, symbol: ?getControllingPlayer@Actor@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 165, symbol: ?checkFallDamage@Actor@@UEAAXM_N@Z
    virtual void checkFallDamage(float, bool);

    // vIndex: 166, symbol: ?causeFallDamage@Actor@@UEAAXMMVActorDamageSource@@@Z
    virtual void causeFallDamage(float, float, class ActorDamageSource);

    // vIndex: 167, symbol: ?handleFallDistanceOnServer@Actor@@UEAAXMM_N@Z
    virtual void handleFallDistanceOnServer(float, float, bool);

    // vIndex: 168, symbol: ?onSynchedFlagUpdate@Actor@@UEAAXH_J0@Z
    virtual void onSynchedFlagUpdate(int, int64, int64);

    // vIndex: 169, symbol: ?onSynchedDataUpdate@Actor@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 170, symbol: ?canAddPassenger@Actor@@UEBA_NAEAV1@@Z
    virtual bool canAddPassenger(class Actor&) const;

    // vIndex: 171, symbol: ?canPickupItem@Actor@@UEBA_NAEBVItemStack@@@Z
    virtual bool canPickupItem(class ItemStack const&) const;

    // vIndex: 172, symbol: ?canBePulledIntoVehicle@Actor@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 173, symbol: ?inCaravan@Actor@@UEBA_NXZ
    virtual bool inCaravan() const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 175, symbol: ?tickLeash@Actor@@UEAAXXZ
    virtual void tickLeash();

    // vIndex: 176, symbol: ?sendMotionPacketIfNeeded@Actor@@UEAAXXZ
    virtual void sendMotionPacketIfNeeded();

    // vIndex: 177, symbol: ?canSynchronizeNewEntity@Actor@@UEBA_NXZ
    virtual bool canSynchronizeNewEntity() const;

    // vIndex: 178, symbol: ?startSwimming@Actor@@UEAAXXZ
    virtual void startSwimming();

    // vIndex: 179, symbol: ?stopSwimming@Actor@@UEAAXXZ
    virtual void stopSwimming();

    // vIndex: 180, symbol:
    // ?buildDebugInfo@Actor@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void buildDebugInfo(std::string&) const;

    // vIndex: 181, symbol: ?getCommandPermissionLevel@Actor@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    // vIndex: 182, symbol: ?isClientSide@Actor@@UEBA_NXZ
    virtual bool isClientSide() const;

    // vIndex: 183, symbol: ?getMutableAttribute@Actor@@UEAAPEAVAttributeInstance@@AEBVAttribute@@@Z
    virtual class AttributeInstance* getMutableAttribute(class Attribute const&);

    // vIndex: 184, symbol: ?getAttribute@Actor@@UEBAAEBVAttributeInstance@@AEBVAttribute@@@Z
    virtual class AttributeInstance const& getAttribute(class Attribute const&) const;

    // vIndex: 185, symbol: ?getDeathTime@Actor@@UEBAHXZ
    virtual int getDeathTime() const;

    // vIndex: 186, symbol: ?heal@Actor@@UEAAXH@Z
    virtual void heal(int);

    // vIndex: 187, symbol: ?isInvertedHealAndHarm@Actor@@UEBA_NXZ
    virtual bool isInvertedHealAndHarm() const;

    // vIndex: 188, symbol: ?canBeAffected@Actor@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 189, symbol: ?canBeAffectedByArrow@Actor@@UEBA_NAEBVMobEffectInstance@@@Z
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const;

    // vIndex: 190, symbol: ?onEffectAdded@Actor@@UEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectAdded(class MobEffectInstance&);

    // vIndex: 191, symbol: ?onEffectUpdated@Actor@@UEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectUpdated(class MobEffectInstance&);

    // vIndex: 192, symbol: ?onEffectRemoved@Actor@@UEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectRemoved(class MobEffectInstance&);

    // vIndex: 193, symbol: ?canObstructSpawningAndBlockPlacement@Actor@@UEBA_NXZ
    virtual bool canObstructSpawningAndBlockPlacement() const;

    // vIndex: 194, symbol: ?getAnimationComponent@Actor@@UEAAAEAVAnimationComponent@@XZ
    virtual class AnimationComponent& getAnimationComponent();

    // vIndex: 195, symbol: ?openContainerComponent@Actor@@UEAAXAEAVPlayer@@@Z
    virtual void openContainerComponent(class Player&);

    // vIndex: 196, symbol: ?swing@Actor@@UEAAXXZ
    virtual void swing();

    // vIndex: 197, symbol: ?useItem@Actor@@UEAAXAEAVItemStackBase@@W4ItemUseMethod@@_N@Z
    virtual void useItem(class ItemStackBase&, ::ItemUseMethod, bool);

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 200, symbol:
    // ?getDebugText@Actor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void getDebugText(std::vector<std::string>&);

    // vIndex: 201, symbol: ?getMapDecorationRotation@Actor@@UEBAMXZ
    virtual float getMapDecorationRotation() const;

    // vIndex: 202, symbol: ?getPassengerYRotation@Actor@@UEBAMAEBV1@@Z
    virtual float getPassengerYRotation(class Actor const&) const;

    // vIndex: 203, symbol: ?add@Actor@@UEAA_NAEAVItemStack@@@Z
    virtual bool add(class ItemStack&);

    // vIndex: 204, symbol: ?drop@Actor@@UEAA_NAEBVItemStack@@_N@Z
    virtual bool drop(class ItemStack const&, bool);

    // vIndex: 205, symbol: ?getInteraction@Actor@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
    virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&);

    // vIndex: 206, symbol: ?canDestroyBlock@Actor@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroyBlock(class Block const&) const;

    // vIndex: 207, symbol: ?setAuxValue@Actor@@UEAAXH@Z
    virtual void setAuxValue(int);

    // vIndex: 208, symbol: ?setSize@Actor@@UEAAXMM@Z
    virtual void setSize(float, float);

    // vIndex: 209, symbol: ?onOrphan@Actor@@UEAAXXZ
    virtual void onOrphan();

    // vIndex: 210, symbol: ?wobble@Actor@@UEAAXXZ
    virtual void wobble();

    // vIndex: 211, symbol: ?wasHurt@Actor@@UEAA_NXZ
    virtual bool wasHurt();

    // vIndex: 212, symbol: ?startSpinAttack@Actor@@UEAAXXZ
    virtual void startSpinAttack();

    // vIndex: 213, symbol: ?stopSpinAttack@Actor@@UEAAXXZ
    virtual void stopSpinAttack();

    // vIndex: 214, symbol: ?setDamageNearbyMobs@Actor@@UEAAX_N@Z
    virtual void setDamageNearbyMobs(bool);

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 216, symbol: ?reloadLootTable@Actor@@UEAAXXZ
    virtual void reloadLootTable();

    // vIndex: 217, symbol: ?reloadLootTable@Actor@@UEAAXAEBUEquipmentTableDefinition@@@Z
    virtual void reloadLootTable(struct EquipmentTableDefinition const&);

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 219, symbol: ?kill@Actor@@UEAAXXZ
    virtual void kill();

    // vIndex: 220, symbol: ?die@Actor@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 221, symbol: ?shouldDropDeathLoot@Actor@@UEBA_NXZ
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 222, symbol: ?shouldTick@Actor@@UEBA_NXZ
    virtual bool shouldTick() const;

    // vIndex: 223, symbol: ?applySnapshot@Actor@@UEAAXAEBVEntityContext@@0@Z
    virtual void applySnapshot(class EntityContext const&, class EntityContext const&);

    // vIndex: 224, symbol: ?getNextStep@Actor@@UEAAMM@Z
    virtual float getNextStep(float);

    // vIndex: 225, symbol: ?getLootTable@Actor@@UEAAPEAVLootTable@@XZ
    virtual class LootTable* getLootTable();

    // vIndex: 226, symbol: ?onPush@Actor@@UEAAXAEAV1@@Z
    virtual void onPush(class Actor&);

    // vIndex: 227, symbol: ?getLastDeathPos@Actor@@UEBA?AV?$optional@VBlockPos@@@std@@XZ
    virtual std::optional<class BlockPos> getLastDeathPos() const;

    // vIndex: 228, symbol: ?getLastDeathDimension@Actor@@UEBA?AV?$optional@V?$AutomaticID@VDimension@@H@@@std@@XZ
    virtual std::optional<DimensionType> getLastDeathDimension() const;

    // vIndex: 229, symbol: ?hasDiedBefore@Actor@@UEBA_NXZ
    virtual bool hasDiedBefore() const;

    // vIndex: 230, symbol: ?doWaterSplashEffect@Actor@@UEAAXXZ
    virtual void doWaterSplashEffect();

    // vIndex: 231, symbol: ?_shouldProvideFeedbackOnHandContainerItemSet@Actor@@MEBA_NW4HandSlot@@AEBVItemStack@@@Z
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot, class ItemStack const&) const;

    // vIndex: 232, symbol: ?_shouldProvideFeedbackOnArmorSet@Actor@@MEBA_NW4ArmorSlot@@AEBVItemStack@@@Z
    virtual bool _shouldProvideFeedbackOnArmorSet(::ArmorSlot, class ItemStack const&) const;

    // vIndex: 233, symbol: ?updateEntitySpecificMolangVariables@Actor@@MEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 234, symbol: ?shouldTryMakeStepSound@Actor@@MEAA_NXZ
    virtual bool shouldTryMakeStepSound();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@Actor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 237, symbol: ?markHurt@Actor@@MEAAXXZ
    virtual void markHurt();

    // vIndex: 238, symbol:
    // ?_getAnimationComponent@Actor@@MEAAAEAVAnimationComponent@@AEAV?$shared_ptr@VAnimationComponent@@@std@@W4AnimationComponentGroupType@@@Z
    virtual class AnimationComponent&
    _getAnimationComponent(std::shared_ptr<class AnimationComponent>&, ::AnimationComponentGroupType);

    // vIndex: 239, symbol: ?readAdditionalSaveData@Actor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@Actor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 241, symbol: ?_playStepSound@Actor@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const&, class Block const&);

    // vIndex: 242, symbol: ?_playFlySound@Actor@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playFlySound(class BlockPos const&, class Block const&);

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 244, symbol: ?pushOutOfBlocks@Actor@@MEAAXAEBVVec3@@@Z
    virtual void pushOutOfBlocks(class Vec3 const&);

    // vIndex: 245, symbol: ?spawnTrailBubbles@Actor@@MEAAXXZ
    virtual void spawnTrailBubbles();

    // vIndex: 246, symbol: ?updateInsideBlock@Actor@@MEAAXXZ
    virtual void updateInsideBlock();

    // vIndex: 247, symbol: ?_onSizeUpdated@Actor@@EEAAXXZ
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

    // symbol: ?getDeletionDelayTimeSeconds@Actor@@UEBAMXZ
    MCVAPI float getDeletionDelayTimeSeconds() const;

    // symbol: ?getOutputSignal@Actor@@UEBAHXZ
    MCVAPI int getOutputSignal() const;

    // symbol: ?hasOutputSignal@Actor@@UEBA_NE@Z
    MCVAPI bool hasOutputSignal(uchar) const;

    // symbol: ?interactPreventDefault@Actor@@UEAA_NXZ
    MCVAPI bool interactPreventDefault();

    // symbol: ?isCreativeModeAllowed@Actor@@UEAA_NXZ
    MCVAPI bool isCreativeModeAllowed();

    // symbol: ?isFishable@Actor@@UEBA_NXZ
    MCVAPI bool isFishable() const;

    // symbol: ?isLeashableType@Actor@@UEAA_NXZ
    MCVAPI bool isLeashableType();

    // symbol: ?isLocalPlayer@Actor@@UEBA_NXZ
    MCVAPI bool isLocalPlayer() const;

    // symbol: ?isPlayer@Actor@@UEBA_NXZ
    // MCVAPI bool isPlayer() const;

    // symbol: ?isShootable@Actor@@UEAA_NXZ
    MCVAPI bool isShootable();

    // symbol: ?isTargetable@Actor@@UEBA_NXZ
    MCVAPI bool isTargetable() const;

    // symbol: ?renderDebugServerState@Actor@@UEAAXAEBVOptions@@@Z
    MCVAPI void renderDebugServerState(class Options const&);

    // symbol: ??1Actor@@UEAA@XZ
    MCVAPI ~Actor();

    // symbol: ??0Actor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Actor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ??0Actor@@QEAA@AEAVILevel@@AEAVEntityContext@@@Z
    MCAPI Actor(class ILevel&, class EntityContext&);

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

    // symbol: ?canSeeDaylight@Actor@@QEBA_NXZ
    MCAPI bool canSeeDaylight() const;

    // symbol: ?celebrateHunt@Actor@@QEAAXH_N@Z
    MCAPI void celebrateHunt(int, bool);

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

    // symbol:
    // ?getAllEffects@Actor@@QEBAAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@XZ
    MCAPI std::vector<class MobEffectInstance> const& getAllEffects() const;

    // symbol: ?getArmorContainer@Actor@@QEAAAEAVSimpleContainer@@XZ
    MCAPI class SimpleContainer& getArmorContainer();

    // symbol: ?getArmorContainer@Actor@@QEBAAEBVSimpleContainer@@XZ
    MCAPI class SimpleContainer const& getArmorContainer() const;

    // symbol: ?getAttachPos@Actor@@QEBA?AVVec3@@W4ActorLocation@@M@Z
    MCAPI class Vec3 getAttachPos(::ActorLocation, float lerpFactor = 0.0f) const;

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

    // symbol: ?getEffect@Actor@@QEBAPEBVMobEffectInstance@@I@Z
    MCAPI class MobEffectInstance const* getEffect(uint) const;

    // symbol: ?getEffect@Actor@@QEBAPEBVMobEffectInstance@@AEBVMobEffect@@@Z
    MCAPI class MobEffectInstance const* getEffect(class MobEffect const&) const;

    // symbol: ?getEntityData@Actor@@QEAAAEAVSynchedActorDataEntityWrapper@@XZ
    MCAPI class SynchedActorDataEntityWrapper& getEntityData();

    // symbol: ?getEntityData@Actor@@QEBAAEBVSynchedActorDataEntityWrapper@@XZ
    MCAPI class SynchedActorDataEntityWrapper const& getEntityData() const;

    // symbol: ?getEntityRegistry@Actor@@QEAA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
    MCAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();

    // symbol: ?getEntityTerrainInterlockData@Actor@@QEAAAEAVActorTerrainInterlockData@@XZ
    MCAPI class ActorTerrainInterlockData& getEntityTerrainInterlockData();

    // symbol: ?getEquipmentSlotForItem@Actor@@QEBA?AW4EquipmentSlot@@AEBVItemStack@@@Z
    MCAPI ::EquipmentSlot getEquipmentSlotForItem(class ItemStack const&) const;

    // symbol: ?getFallDistance@Actor@@QEBAMXZ
    MCAPI float getFallDistance() const;

    // symbol: ?getFirstAvailableSeatPos@Actor@@QEBA_NAEAV1@AEAVVec3@@@Z
    MCAPI bool getFirstAvailableSeatPos(class Actor&, class Vec3&) const;

    // symbol: ?getFirstPassenger@Actor@@QEBAPEAV1@XZ
    MCAPI class Actor* getFirstPassenger() const;

    // symbol: ?getHandContainer@Actor@@QEBAAEBVSimpleContainer@@XZ
    MCAPI class SimpleContainer const& getHandContainer() const;

    // symbol: ?getHandContainer@Actor@@QEAAAEAVSimpleContainer@@XZ
    MCAPI class SimpleContainer& getHandContainer();

    // symbol: ?getHealth@Actor@@QEBAHXZ
    MCAPI int getHealth() const;

    // symbol: ?getHurtDir@Actor@@QEBAHXZ
    MCAPI int getHurtDir() const;

    // symbol: ?getHurtTime@Actor@@QEBAHXZ
    MCAPI int getHurtTime() const;

    // symbol: ?getInitializationMethod@Actor@@QEAA?AW4InitializationMethod@1@XZ
    MCAPI ::Actor::InitializationMethod getInitializationMethod();

    // symbol: ?getInterpolatedPosition@Actor@@QEBA?AVVec3@@M@Z
    MCAPI class Vec3 getInterpolatedPosition(float lerpFactor = 0.0f) const;

    // symbol: ?getInterpolatedRotation@Actor@@QEBA?AVVec2@@M@Z
    MCAPI class Vec2 getInterpolatedRotation(float lerpFactor = 0.0f) const;

    // symbol: ?getIsExperienceDropEnabled@Actor@@QEBA_NXZ
    MCAPI bool getIsExperienceDropEnabled() const;

    // symbol: ?getJumpDuration@Actor@@QEBAHXZ
    MCAPI int getJumpDuration() const;

    // symbol: ?getLastHurtByMobTime@Actor@@QEAAHXZ
    MCAPI int getLastHurtByMobTime();

    // symbol: ?getLastHurtByMobTimestamp@Actor@@QEAAHXZ
    MCAPI int getLastHurtByMobTimestamp();

    // symbol: ?getLastHurtCause@Actor@@QEBA?AW4ActorDamageCause@@XZ
    MCAPI ::ActorDamageCause getLastHurtCause() const;

    // symbol: ?getLastHurtDamage@Actor@@QEBAMXZ
    MCAPI float getLastHurtDamage() const;

    // symbol: ?getLastHurtMobTimestamp@Actor@@QEAAHXZ
    MCAPI int getLastHurtMobTimestamp();

    // symbol: ?getLastHurtTimestamp@Actor@@QEBA_KXZ
    MCAPI uint64 getLastHurtTimestamp() const;

    // symbol: ?getLeashHolder@Actor@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getLeashHolder() const;

    // symbol: ?getLevel@Actor@@QEBAAEBVLevel@@XZ
    MCAPI class Level const& getLevel() const;

    // symbol: ?getLevel@Actor@@QEAAAEAVLevel@@XZ
    MCAPI class Level& getLevel();

    // symbol: ?getLevelTimeStamp@Actor@@QEBA_KXZ
    MCAPI uint64 getLevelTimeStamp() const;

    // symbol: ?getLimitedLifetimeTicks@Actor@@QEBAHXZ
    MCAPI int getLimitedLifetimeTicks() const;

    // symbol: ?getLinks@Actor@@QEBA?AV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@XZ
    MCAPI std::vector<struct ActorLink> getLinks() const;

    // symbol: ?getMarkVariant@Actor@@QEBAHXZ
    MCAPI int getMarkVariant() const;

    // symbol: ?getMaxAutoStep@Actor@@QEBAMXZ
    MCAPI float getMaxAutoStep() const;

    // symbol: ?getMaxHealth@Actor@@QEBAHXZ
    MCAPI int getMaxHealth() const;

    // symbol: ?getMolangVariables@Actor@@QEAAAEAVMolangVariableMap@@XZ
    MCAPI class MolangVariableMap& getMolangVariables();

    // symbol: ?getMovementProxy@Actor@@QEAA?AV?$not_null@V?$shared_ptr@UIActorMovementProxy@@@std@@@gsl@@XZ
    MCAPI gsl::not_null<std::shared_ptr<struct IActorMovementProxy>> getMovementProxy();

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

    // symbol: ?getSpatialNetworkData@Actor@@QEBAAEBVSpatialActorNetworkData@@XZ
    MCAPI class SpatialActorNetworkData const& getSpatialNetworkData() const;

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

    // symbol: ?healEffects@Actor@@QEAAXH@Z
    MCAPI void healEffects(int);

    // symbol: ?hurt@Actor@@QEAA_NAEBVActorDamageSource@@M_N1@Z
    MCAPI bool hurt(class ActorDamageSource const&, float, bool, bool);

    // symbol: ?inDownwardFlowingLiquid@Actor@@QEBA_NXZ
    MCAPI bool inDownwardFlowingLiquid() const;

    // symbol: ?initActorProperties@Actor@@QEAAXXZ
    MCAPI void initActorProperties();

    // symbol: ?initParams@Actor@@QEAAXAEAVVariantParameterList@@@Z
    MCAPI void initParams(class VariantParameterList&);

    // symbol: ?initParams@Actor@@QEAAXAEAVRenderParams@@@Z
    MCAPI void initParams(class RenderParams&);

    // symbol: ?isActorLocationInMaterial@Actor@@QEBA_NW4ActorLocation@@W4MaterialType@@@Z
    MCAPI bool isActorLocationInMaterial(::ActorLocation, ::MaterialType) const;

    // symbol: ?isAdventure@Actor@@QEBA_NXZ
    MCAPI bool isAdventure() const;

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

    // symbol: ?isInWaterOrRain@Actor@@QEBA_NXZ
    MCAPI bool isInWaterOrRain() const;

    // symbol: ?isInWorld@Actor@@QEBA_NXZ
    MCAPI bool isInWorld() const;

    // symbol: ?isInsideBorderBlock@Actor@@QEBA_NM@Z
    MCAPI bool isInsideBorderBlock(float) const;

    // symbol: ?isInsidePortal@Actor@@QEBA_NXZ
    MCAPI bool isInsidePortal() const;

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

    // symbol: ?isOrphan@Actor@@QEBA_NXZ
    MCAPI bool isOrphan() const;

    // symbol: ?isOutOfControl@Actor@@QEBA_NXZ
    MCAPI bool isOutOfControl() const;

    // symbol: ?isOverScaffolding@Actor@@QEBA_NXZ
    MCAPI bool isOverScaffolding() const;

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

    // symbol: ?isSitting@Actor@@QEBA_NXZ
    MCAPI bool isSitting() const;

    // symbol: ?isSneaking@Actor@@QEBA_NXZ
    MCAPI bool isSneaking() const;

    // symbol: ?isSpectator@Actor@@QEBA_NXZ
    MCAPI bool isSpectator() const;

    // symbol: ?isStackable@Actor@@QEBA_NXZ
    MCAPI bool isStackable() const;

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

    // symbol: ?isUseNewTradeScreen@Actor@@QEBA_NXZ
    MCAPI bool isUseNewTradeScreen() const;

    // symbol: ?isWASDControlled@Actor@@QEBA_NXZ
    MCAPI bool isWASDControlled() const;

    // symbol: ?isWalker@Actor@@QEBA_NXZ
    MCAPI bool isWalker() const;

    // symbol: ?isWorldBuilder@Actor@@QEBA_NXZ
    MCAPI bool isWorldBuilder() const;

    // symbol: ?lerpTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@H@Z
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, int);

    // symbol: ?lerpTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@MH@Z
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, float, int);

    // symbol: ?loadEntityFlags@Actor@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void loadEntityFlags(class CompoundTag const&, class DataLoadHelper&);

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

    // symbol: ?shouldUpdateEffects@Actor@@QEBA_NXZ
    MCAPI bool shouldUpdateEffects() const;

    // symbol: ?spawnEatParticles@Actor@@QEAAXAEBVItemStack@@H@Z
    MCAPI void spawnEatParticles(class ItemStack const&, int);

    // symbol: ?spinAttack@Actor@@QEAAXXZ
    MCAPI void spinAttack();

    // symbol: ?stopRiding@Actor@@QEAAX_N00@Z
    MCAPI void stopRiding(bool, bool, bool);

    // symbol: ?teleportPassengersTo@Actor@@QEAAXAEBVVec3@@HH@Z
    MCAPI void teleportPassengersTo(class Vec3 const&, int, int);

    // symbol: ?tick@Actor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool tick(class BlockSource&);

    // symbol: ?transferTickingArea@Actor@@QEAAXAEAVDimension@@@Z
    MCAPI void transferTickingArea(class Dimension&);

    // symbol:
    // ?tryGetEquippableSlotAllowedItems@Actor@@QEBAPEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@H@Z
    MCAPI std::vector<class ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int) const;

    // symbol: ?tryGetEquippableSlotForItem@Actor@@QEBA?AV?$optional@H@std@@VItemDescriptor@@@Z
    MCAPI std::optional<int> tryGetEquippableSlotForItem(class ItemDescriptor) const;

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

    // symbol: ?wasLastHitByPlayer@Actor@@QEAA_NXZ
    MCAPI bool wasLastHitByPlayer();

    // symbol: ?wasLoadedFromNBTThisFrame@Actor@@QEBA_NXZ
    MCAPI bool wasLoadedFromNBTThisFrame() const;

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

    // symbol: ?tryGetFromEntity@Actor@@SAPEBV1@AEBVEntityContext@@_N@Z
    MCAPI static class Actor const* tryGetFromEntity(class EntityContext const&, bool);

    // symbol: ?tryGetFromEntity@Actor@@SAPEAV1@V?$StackRefResultT@UEntityRefTraits@@@@_N@Z
    MCAPI static class Actor* tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool);

    // symbol: ?tryGetFromEntity@Actor@@SAPEAV1@AEBVStrictEntityContext@@AEAVEntityRegistry@@_N@Z
    MCAPI static class Actor* tryGetFromEntity(class StrictEntityContext const&, class EntityRegistry&, bool);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_assignActorMovementProxy@Actor@@IEAAXV?$not_null@V?$shared_ptr@UIActorMovementProxy@@@std@@@gsl@@@Z
    MCAPI void _assignActorMovementProxy(gsl::not_null<std::shared_ptr<struct IActorMovementProxy>>);

    // symbol: ?_drop@Actor@@IEAAPEBVItemActor@@AEBVItemStack@@_N@Z
    MCAPI class ItemActor const* _drop(class ItemStack const&, bool);

    // symbol:
    // ?_getAllEffectsNonConst@Actor@@IEAAAEAV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@XZ
    MCAPI std::vector<class MobEffectInstance>& _getAllEffectsNonConst();

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
    auto& $DAMAGE_NEARBY_MOBS_DURATION() { return DAMAGE_NEARBY_MOBS_DURATION; }

    auto& $DEFAULT_MAX_DISTANCE_OPTIMIZATION() { return DEFAULT_MAX_DISTANCE_OPTIMIZATION; }

    auto& $DEFAULT_MAX_TICK_DELAY_OPTIMIZATION() { return DEFAULT_MAX_TICK_DELAY_OPTIMIZATION; }

    // NOLINTEND
};
