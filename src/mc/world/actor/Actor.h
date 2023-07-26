#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/AutomaticID.h"

class Actor {
public:
    // Actor inner types declare
    // clang-format off

    // clang-format on

    // Actor inner types define
    enum class InitializationMethod {};

public:
    // prevent constructor by default
    Actor& operator=(Actor const&) = delete;
    Actor(Actor const&)            = delete;
    Actor()                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getStatusFlag\@Actor\@\@UEBA_NW4ActorFlags\@\@\@Z
     */
    virtual bool getStatusFlag(enum class ActorFlags) const; // NOLINT
    /**
     * @vftbl 1
     * @symbol ?setStatusFlag\@Actor\@\@UEAAXW4ActorFlags\@\@_N\@Z
     */
    virtual void setStatusFlag(enum class ActorFlags, bool); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?hasComponent\@Actor\@\@UEBA_NAEBVHashedString\@\@\@Z
     */
    virtual bool hasComponent(class HashedString const&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getLastHurtByMob\@Actor\@\@UEAAPEAVMob\@\@XZ
     */
    virtual class Mob* getLastHurtByMob(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?setLastHurtByMob\@Actor\@\@UEAAXPEAVMob\@\@\@Z
     */
    virtual void setLastHurtByMob(class Mob*); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getLastHurtByPlayer\@Actor\@\@UEAAPEAVPlayer\@\@XZ
     */
    virtual class Player* getLastHurtByPlayer(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?setLastHurtByPlayer\@Actor\@\@UEAAXPEAVPlayer\@\@\@Z
     */
    virtual void setLastHurtByPlayer(class Player*); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getLastHurtMob\@Actor\@\@UEAAPEAVMob\@\@XZ
     */
    virtual class Mob* getLastHurtMob(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?setLastHurtMob\@Actor\@\@UEAAXPEAV1\@\@Z
     */
    virtual void setLastHurtMob(class Actor*); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?outOfWorld\@Actor\@\@UEAAXXZ
     */
    virtual void outOfWorld(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?initializeComponents\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?reloadComponents\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadComponents(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?_serverInitItemStackIds\@Actor\@\@MEAAXXZ
     */
    virtual void _serverInitItemStackIds(); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?_doInitialMove\@Actor\@\@MEAAXXZ
     */
    virtual void _doInitialMove(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?resetUserPos\@Actor\@\@UEAAX_N\@Z
     */
    virtual void resetUserPos(bool); // NOLINT
    /**
     * @vftbl 18
     * @symbol ?getOwnerEntityType\@Actor\@\@UEAA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getOwnerEntityType(); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?remove\@Actor\@\@UEAAXXZ
     */
    virtual void remove(); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?isRuntimePredictedMovementEnabled\@Actor\@\@UEBA_NXZ
     */
    virtual bool isRuntimePredictedMovementEnabled() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol ?getPredictedMovementValues\@Actor\@\@UEBAAEBUPredictedMovementValues\@\@XZ
     */
    virtual struct PredictedMovementValues const& getPredictedMovementValues() const; // NOLINT
    /**
     * @vftbl 22
     * @symbol ?getPosition\@Actor\@\@UEBAAEBVVec3\@\@XZ
     */
    virtual class Vec3 const& getPosition() const; // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getPosPrev\@Actor\@\@UEBAAEBVVec3\@\@XZ
     */
    virtual class Vec3 const& getPosPrev() const; // NOLINT
    /**
     * @vftbl 24
     * @symbol ?getPosExtrapolated\@Actor\@\@UEBA?BVVec3\@\@M\@Z
     */
    virtual class Vec3 const getPosExtrapolated(float) const; // NOLINT
    /**
     * @vftbl 25
     * @symbol ?getFiringPos\@Actor\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getFiringPos() const; // NOLINT
    /**
     * @vftbl 26
     * @symbol ?getInterpolatedRidingPosition\@Actor\@\@UEBA?AVVec3\@\@M\@Z
     */
    virtual class Vec3 getInterpolatedRidingPosition(float) const; // NOLINT
    /**
     * @vftbl 27
     * @symbol ?getInterpolatedBodyRot\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyRot(float) const; // NOLINT
    /**
     * @vftbl 28
     * @symbol ?getInterpolatedHeadRot\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedHeadRot(float) const; // NOLINT
    /**
     * @vftbl 29
     * @symbol ?getInterpolatedBodyYaw\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyYaw(float) const; // NOLINT
    /**
     * @vftbl 30
     * @symbol ?getYawSpeedInDegreesPerSecond\@Actor\@\@UEBAMXZ
     */
    virtual float getYawSpeedInDegreesPerSecond() const; // NOLINT
    /**
     * @vftbl 31
     * @symbol ?getInterpolatedWalkAnimSpeed\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedWalkAnimSpeed(float) const; // NOLINT
    /**
     * @vftbl 32
     * @symbol ?getInterpolatedRidingOffset\@Actor\@\@UEBA?AVVec3\@\@MH\@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const; // NOLINT
    /**
     * @vftbl 33
     * @symbol ?resetInterpolated\@Actor\@\@UEAAXXZ
     */
    virtual void resetInterpolated(); // NOLINT
    /**
     * @vftbl 34
     * @symbol ?isFireImmune\@Actor\@\@UEBA_NXZ
     */
    virtual bool isFireImmune() const; // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol ?blockedByShield\@Actor\@\@UEAAXAEBVActorDamageSource\@\@AEAV1\@\@Z
     */
    virtual void blockedByShield(class ActorDamageSource const&, class Actor&); // NOLINT
    /**
     * @vftbl 37
     * @symbol ?canDisableShield\@Actor\@\@UEAA_NXZ
     */
    virtual bool canDisableShield(); // NOLINT
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@Actor\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool); // NOLINT
    /**
     * @vftbl 39
     * @symbol ?tryTeleportTo\@Actor\@\@UEAA_NAEBVVec3\@\@_N1HH\@Z
     */
    virtual bool tryTeleportTo(class Vec3 const&, bool, bool, int, int); // NOLINT
    /**
     * @vftbl 40
     * @symbol ?chorusFruitTeleport\@Actor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void chorusFruitTeleport(class Vec3 const&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?lerpMotion\@Actor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const&); // NOLINT
    /**
     * @vftbl 42
     * @symbol
     * ?tryCreateAddActorPacket\@Actor\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket(); // NOLINT
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Actor\@\@UEAAXXZ
     */
    virtual void normalTick(); // NOLINT
    /**
     * @vftbl 44
     * @symbol ?baseTick\@Actor\@\@UEAAXXZ
     */
    virtual void baseTick(); // NOLINT
    /**
     * @vftbl 45
     * @symbol ?passengerTick\@Actor\@\@UEAAXXZ
     */
    virtual void passengerTick(); // NOLINT
    /**
     * @vftbl 46
     * @symbol ?positionPassenger\@Actor\@\@UEAAXAEAV1\@M\@Z
     */
    virtual void positionPassenger(class Actor&, float); // NOLINT
    /**
     * @vftbl 47
     * @symbol ?startRiding\@Actor\@\@UEAA_NAEAV1\@\@Z
     */
    virtual bool startRiding(class Actor&); // NOLINT
    /**
     * @vftbl 48
     * @symbol ?addPassenger\@Actor\@\@UEAAXAEAV1\@\@Z
     */
    virtual void addPassenger(class Actor&); // NOLINT
    /**
     * @vftbl 49
     * @symbol
     * ?getExitTip\@Actor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@W4InputMode\@\@W4NewInteractionModel\@\@\@Z
     */
    virtual std::string
    getExitTip(std::string const&, enum class InputMode, enum class NewInteractionModel) const; // NOLINT
    /**
     * @vftbl 50
     * @symbol
     * ?getEntityLocNameString\@Actor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getEntityLocNameString() const; // NOLINT
    /**
     * @vftbl 51
     * @symbol ?intersects\@Actor\@\@UEBA_NAEBVVec3\@\@0\@Z
     */
    virtual bool intersects(class Vec3 const&, class Vec3 const&) const; // NOLINT
    /**
     * @vftbl 52
     * @symbol ?isInWall\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInWall() const; // NOLINT
    /**
     * @vftbl 53
     * @symbol ?isInvisible\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInvisible() const; // NOLINT
    /**
     * @vftbl 54
     * @symbol ?canShowNameTag\@Actor\@\@UEBA_NXZ
     */
    virtual bool canShowNameTag() const; // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 56
     * @symbol ?setNameTagVisible\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setNameTagVisible(bool); // NOLINT
    /**
     * @vftbl 57
     * @symbol ?getNameTag\@Actor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getNameTag() const; // NOLINT
    /**
     * @vftbl 58
     * @symbol ?getNameTagAsHash\@Actor\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getNameTagAsHash() const; // NOLINT
    /**
     * @vftbl 59
     * @symbol
     * ?getFormattedNameTag\@Actor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFormattedNameTag() const; // NOLINT
    /**
     * @vftbl 60
     * @symbol ?filterFormattedNameTag\@Actor\@\@UEAAXAEBVUIProfanityContext\@\@\@Z
     */
    virtual void filterFormattedNameTag(class UIProfanityContext const&); // NOLINT
    /**
     * @vftbl 61
     * @symbol
     * ?setNameTag\@Actor\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setNameTag(std::string const&); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 63
     * @symbol
     * ?setScoreTag\@Actor\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setScoreTag(std::string const&); // NOLINT
    /**
     * @vftbl 64
     * @symbol ?getScoreTag\@Actor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getScoreTag() const; // NOLINT
    /**
     * @vftbl 65
     * @symbol ?isInWater\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInWater() const; // NOLINT
    /**
     * @vftbl 66
     * @symbol ?isUnderLiquid\@Actor\@\@UEBA_NW4MaterialType\@\@\@Z
     */
    virtual bool isUnderLiquid(enum class MaterialType) const; // NOLINT
    /**
     * @vftbl 67
     * @symbol ?isOverWater\@Actor\@\@UEBA_NXZ
     */
    virtual bool isOverWater() const; // NOLINT
    /**
     * @vftbl 68
     * @symbol ?getShadowHeightOffs\@Actor\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs(); // NOLINT
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@Actor\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const; // NOLINT
    /**
     * @vftbl 70
     * @symbol ?getHeadLookVector\@Actor\@\@UEBA?AVVec3\@\@M\@Z
     */
    virtual class Vec3 getHeadLookVector(float) const; // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 72
     * @symbol ?canSee\@Actor\@\@UEBA_NAEBV1\@\@Z
     */
    virtual bool canSee(class Actor const&) const; // NOLINT
    /**
     * @vftbl 73
     * @symbol ?canSee\@Actor\@\@UEBA_NAEBVVec3\@\@\@Z
     */
    virtual bool canSee(class Vec3 const&) const; // NOLINT
    /**
     * @vftbl 74
     * @symbol ?canInteractWithOtherEntitiesInGame\@Actor\@\@UEBA_NXZ
     */
    virtual bool canInteractWithOtherEntitiesInGame() const; // NOLINT
    /**
     * @vftbl 75
     * @symbol ?isSkyLit\@Actor\@\@UEAA_NM\@Z
     */
    virtual bool isSkyLit(float); // NOLINT
    /**
     * @vftbl 76
     * @symbol ?getBrightness\@Actor\@\@UEBAMMAEBVIConstBlockSource\@\@\@Z
     */
    virtual float getBrightness(float, class IConstBlockSource const&) const; // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 78
     * @symbol ?playerTouch\@Actor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player&); // NOLINT
    /**
     * @vftbl 79
     * @symbol ?isImmobile\@Actor\@\@UEBA_NXZ
     */
    virtual bool isImmobile() const; // NOLINT
    /**
     * @vftbl 80
     * @symbol ?isSilent\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSilent() const; // NOLINT
    /**
     * @vftbl 81
     * @symbol ?isSilentObserver\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSilentObserver() const; // NOLINT
    /**
     * @vftbl 82
     * @symbol ?isPickable\@Actor\@\@UEAA_NXZ
     */
    virtual bool isPickable(); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 84
     * @symbol ?isSleeping\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSleeping() const; // NOLINT
    /**
     * @vftbl 85
     * @symbol ?setSleeping\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setSleeping(bool); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 87
     * @symbol ?setSneaking\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setSneaking(bool); // NOLINT
    /**
     * @vftbl 88
     * @symbol ?isBlocking\@Actor\@\@UEBA_NXZ
     */
    virtual bool isBlocking() const; // NOLINT
    /**
     * @vftbl 89
     * @symbol ?isDamageBlocked\@Actor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isDamageBlocked(class ActorDamageSource const&) const; // NOLINT
    /**
     * @vftbl 90
     * @symbol ?isAlive\@Actor\@\@UEBA_NXZ
     */
    virtual bool isAlive() const; // NOLINT
    /**
     * @vftbl 91
     * @symbol ?isOnFire\@Actor\@\@UEBA_NXZ
     */
    virtual bool isOnFire() const; // NOLINT
    /**
     * @vftbl 92
     * @symbol ?isOnHotBlock\@Actor\@\@UEBA_NXZ
     */
    virtual bool isOnHotBlock() const; // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 94
     * @symbol ?isSurfaceMob\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSurfaceMob() const; // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 97
     * @symbol ?isRemotePlayer\@Actor\@\@UEBA_NXZ
     */
    virtual bool isRemotePlayer() const; // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 99
     * @symbol ?isAffectedByWaterBottle\@Actor\@\@UEBA_NXZ
     */
    virtual bool isAffectedByWaterBottle() const; // NOLINT
    /**
     * @vftbl 100
     * @symbol ?canAttack\@Actor\@\@UEBA_NPEAV1\@_N\@Z
     */
    virtual bool canAttack(class Actor*, bool) const; // NOLINT
    /**
     * @vftbl 101
     * @symbol ?setTarget\@Actor\@\@UEAAXPEAV1\@\@Z
     */
    virtual void setTarget(class Actor*); // NOLINT
    /**
     * @vftbl 102
     * @symbol ?isValidTarget\@Actor\@\@UEBA_NPEAV1\@\@Z
     */
    virtual bool isValidTarget(class Actor*) const; // NOLINT
    /**
     * @vftbl 103
     * @symbol ?attack\@Actor\@\@UEAA_NAEAV1\@AEBW4ActorDamageCause\@\@\@Z
     */
    virtual bool attack(class Actor&, enum class ActorDamageCause const&); // NOLINT
    /**
     * @vftbl 104
     * @symbol ?performRangedAttack\@Actor\@\@UEAAXAEAV1\@M\@Z
     */
    virtual void performRangedAttack(class Actor&, float); // NOLINT
    /**
     * @vftbl 105
     * @symbol ?getEquipmentCount\@Actor\@\@UEBAHXZ
     */
    virtual int getEquipmentCount() const; // NOLINT
    /**
     * @vftbl 106
     * @symbol ?setOwner\@Actor\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID); // NOLINT
    /**
     * @vftbl 107
     * @symbol ?setSitting\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool); // NOLINT
    /**
     * @vftbl 108
     * @symbol ?onTame\@Actor\@\@UEAAXXZ
     */
    virtual void onTame(); // NOLINT
    /**
     * @vftbl 109
     * @symbol ?onFailedTame\@Actor\@\@UEAAXXZ
     */
    virtual void onFailedTame(); // NOLINT
    /**
     * @vftbl 110
     * @symbol ?getInventorySize\@Actor\@\@UEBAHXZ
     */
    virtual int getInventorySize() const; // NOLINT
    /**
     * @vftbl 111
     * @symbol ?getEquipSlots\@Actor\@\@UEBAHXZ
     */
    virtual int getEquipSlots() const; // NOLINT
    /**
     * @vftbl 112
     * @symbol ?getChestSlots\@Actor\@\@UEBAHXZ
     */
    virtual int getChestSlots() const; // NOLINT
    /**
     * @vftbl 113
     * @symbol ?setStanding\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setStanding(bool); // NOLINT
    /**
     * @vftbl 114
     * @symbol ?canPowerJump\@Actor\@\@UEBA_NXZ
     */
    virtual bool canPowerJump() const; // NOLINT
    /**
     * @vftbl 115
     * @symbol ?setCanPowerJump\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setCanPowerJump(bool); // NOLINT
    /**
     * @vftbl 116
     * @symbol ?isEnchanted\@Actor\@\@UEBA_NXZ
     */
    virtual bool isEnchanted() const; // NOLINT
    /**
     * @vftbl 117
     * @symbol ?shouldRender\@Actor\@\@UEBA_NXZ
     */
    virtual bool shouldRender() const; // NOLINT
    /**
     * @vftbl 118
     * @symbol ?playAmbientSound\@Actor\@\@UEAAXXZ
     */
    virtual void playAmbientSound(); // NOLINT
    /**
     * @vftbl 119
     * @symbol ?getAmbientSound\@Actor\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getAmbientSound() const; // NOLINT
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@Actor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const; // NOLINT
    /**
     * @vftbl 121
     * @symbol ?getBlockDamageCause\@Actor\@\@UEBA?AW4ActorDamageCause\@\@AEBVBlock\@\@\@Z
     */
    virtual enum class ActorDamageCause getBlockDamageCause(class Block const&) const; // NOLINT
    /**
     * @vftbl 122
     * @symbol ?animateHurt\@Actor\@\@UEAAXXZ
     */
    virtual void animateHurt(); // NOLINT
    /**
     * @vftbl 123
     * @symbol ?doFireHurt\@Actor\@\@UEAA_NH\@Z
     */
    virtual bool doFireHurt(int); // NOLINT
    /**
     * @vftbl 124
     * @symbol ?onLightningHit\@Actor\@\@UEAAXXZ
     */
    virtual void onLightningHit(); // NOLINT
    /**
     * @vftbl 125
     * @symbol ?onBounceStarted\@Actor\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @vftbl 126
     * @symbol ?feed\@Actor\@\@UEAAXH\@Z
     */
    virtual void feed(int); // NOLINT
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@Actor\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int); // NOLINT
    /**
     * @vftbl 128
     * @symbol ?getPickRadius\@Actor\@\@UEAAMXZ
     */
    virtual float getPickRadius(); // NOLINT
    /**
     * @vftbl 129
     * @symbol ?getActorRendererId\@Actor\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getActorRendererId() const; // NOLINT
    /**
     * @vftbl 130
     * @symbol ?spawnAtLocation\@Actor\@\@UEAAPEAVItemActor\@\@HH\@Z
     */
    virtual class ItemActor* spawnAtLocation(int, int); // NOLINT
    /**
     * @vftbl 131
     * @symbol ?spawnAtLocation\@Actor\@\@UEAAPEAVItemActor\@\@HHM\@Z
     */
    virtual class ItemActor* spawnAtLocation(int, int, float); // NOLINT
    /**
     * @vftbl 132
     * @symbol ?spawnAtLocation\@Actor\@\@UEAAPEAVItemActor\@\@AEBVItemStack\@\@M\@Z
     */
    virtual class ItemActor* spawnAtLocation(class ItemStack const&, float); // NOLINT
    /**
     * @vftbl 133
     * @symbol ?despawn\@Actor\@\@UEAAXXZ
     */
    virtual void despawn(); // NOLINT
    /**
     * @vftbl 134
     * @symbol ?killed\@Actor\@\@UEAAXAEAV1\@\@Z
     */
    virtual void killed(class Actor&); // NOLINT
    /**
     * @vftbl 135
     * @symbol ?awardKillScore\@Actor\@\@UEAAXAEAV1\@H\@Z
     */
    virtual void awardKillScore(class Actor&, int); // NOLINT
    /**
     * @vftbl 136
     * @symbol ?setArmor\@Actor\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const&); // NOLINT
    /**
     * @vftbl 137
     * @symbol ?getArmor\@Actor\@\@UEBAAEBVItemStack\@\@W4ArmorSlot\@\@\@Z
     */
    virtual class ItemStack const& getArmor(enum class ArmorSlot) const; // NOLINT
    /**
     * @vftbl 138
     * @symbol
     * ?getAllArmor\@Actor\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const*> getAllArmor() const; // NOLINT
    /**
     * @vftbl 139
     * @symbol ?getArmorMaterialTypeInSlot\@Actor\@\@UEBA?AW4ArmorMaterialType\@\@W4ArmorSlot\@\@\@Z
     */
    virtual enum class ArmorMaterialType getArmorMaterialTypeInSlot(enum class ArmorSlot) const; // NOLINT
    /**
     * @vftbl 140
     * @symbol ?getArmorMaterialTextureTypeInSlot\@Actor\@\@UEBA?AW4ArmorTextureType\@\@W4ArmorSlot\@\@\@Z
     */
    virtual enum class ArmorTextureType getArmorMaterialTextureTypeInSlot(enum class ArmorSlot) const; // NOLINT
    /**
     * @vftbl 141
     * @symbol ?getArmorColorInSlot\@Actor\@\@UEBAMW4ArmorSlot\@\@H\@Z
     */
    virtual float getArmorColorInSlot(enum class ArmorSlot, int) const; // NOLINT
    /**
     * @vftbl 142
     * @symbol ?getEquippedSlot\@Actor\@\@UEBAAEBVItemStack\@\@W4EquipmentSlot\@\@\@Z
     */
    virtual class ItemStack const& getEquippedSlot(enum class EquipmentSlot) const; // NOLINT
    /**
     * @vftbl 143
     * @symbol ?setEquippedSlot\@Actor\@\@UEAAXW4EquipmentSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setEquippedSlot(enum class EquipmentSlot, class ItemStack const&); // NOLINT
    /**
     * @vftbl 144
     * @symbol ?setCarriedItem\@Actor\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setCarriedItem(class ItemStack const&); // NOLINT
    /**
     * @vftbl 145
     * @symbol ?getCarriedItem\@Actor\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const& getCarriedItem() const; // NOLINT
    /**
     * @vftbl 146
     * @symbol ?setOffhandSlot\@Actor\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const&); // NOLINT
    /**
     * @vftbl 147
     * @symbol ?getEquippedTotem\@Actor\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const& getEquippedTotem() const; // NOLINT
    /**
     * @vftbl 148
     * @symbol ?consumeTotem\@Actor\@\@UEAA_NXZ
     */
    virtual bool consumeTotem(); // NOLINT
    /**
     * @vftbl 149
     * @symbol ?save\@Actor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 150
     * @symbol ?saveWithoutId\@Actor\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void saveWithoutId(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 151
     * @symbol ?load\@Actor\@\@UEAA_NAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual bool load(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 152
     * @symbol
     * ?loadLinks\@Actor\@\@UEAAXAEBVCompoundTag\@\@AEAV?$vector\@UActorLink\@\@V?$allocator\@UActorLink\@\@\@std\@\@\@std\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void loadLinks(class CompoundTag const&, std::vector<struct ActorLink>&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 153
     * @symbol ?getEntityTypeId\@Actor\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityTypeId() const; // NOLINT
    /**
     * @vftbl 154
     * @symbol ?queryEntityRenderer\@Actor\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& queryEntityRenderer() const; // NOLINT
    /**
     * @vftbl 155
     * @symbol ?getSourceUniqueID\@Actor\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const; // NOLINT
    /**
     * @vftbl 156
     * @symbol ?thawFreezeEffect\@Actor\@\@UEAAXXZ
     */
    virtual void thawFreezeEffect(); // NOLINT
    /**
     * @vftbl 157
     * @symbol ?canFreeze\@Actor\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const; // NOLINT
    /**
     * @vftbl 158
     * @symbol ?isWearingLeatherArmor\@Actor\@\@UEBA?B_NXZ
     */
    virtual bool const isWearingLeatherArmor() const; // NOLINT
    /**
     * @vftbl 159
     * @symbol ?getLiquidAABB\@Actor\@\@UEBA?AVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual class AABB getLiquidAABB(enum class MaterialType) const; // NOLINT
    /**
     * @vftbl 160
     * @symbol ?handleInsidePortal\@Actor\@\@UEAAXAEBVBlockPos\@\@\@Z
     */
    virtual void handleInsidePortal(class BlockPos const&); // NOLINT
    /**
     * @vftbl 161
     * @symbol ?getPortalCooldown\@Actor\@\@UEBAHXZ
     */
    virtual int getPortalCooldown() const; // NOLINT
    /**
     * @vftbl 162
     * @symbol ?getPortalWaitTime\@Actor\@\@UEBAHXZ
     */
    virtual int getPortalWaitTime() const; // NOLINT
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@Actor\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const; // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 165
     * @symbol ?changeDimension\@Actor\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimension(class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @vftbl 166
     * @symbol ?getControllingPlayer\@Actor\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const; // NOLINT
    /**
     * @vftbl 167
     * @symbol ?checkFallDamage\@Actor\@\@UEAAXM_N\@Z
     */
    virtual void checkFallDamage(float, bool); // NOLINT
    /**
     * @vftbl 168
     * @symbol ?causeFallDamage\@Actor\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource); // NOLINT
    /**
     * @vftbl 169
     * @symbol ?handleFallDistanceOnServer\@Actor\@\@UEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool); // NOLINT
    /**
     * @vftbl 170
     * @symbol ?playSynchronizedSound\@Actor\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@_N\@Z
     */
    virtual void
    playSynchronizedSound(enum class LevelSoundEvent, class Vec3 const&, class Block const&, bool); // NOLINT
    /**
     * @vftbl 171
     * @symbol ?playSynchronizedSound\@Actor\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@H_N\@Z
     */
    virtual void playSynchronizedSound(enum class LevelSoundEvent, class Vec3 const&, int, bool); // NOLINT
    /**
     * @vftbl 172
     * @symbol ?onSynchedFlagUpdate\@Actor\@\@UEAAXH_J0\@Z
     */
    virtual void onSynchedFlagUpdate(int, __int64, __int64); // NOLINT
    /**
     * @vftbl 173
     * @symbol ?onSynchedDataUpdate\@Actor\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int); // NOLINT
    /**
     * @vftbl 174
     * @symbol ?canAddPassenger\@Actor\@\@UEBA_NAEAV1\@\@Z
     */
    virtual bool canAddPassenger(class Actor&) const; // NOLINT
    /**
     * @vftbl 175
     * @symbol ?canPickupItem\@Actor\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool canPickupItem(class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 176
     * @symbol ?canBePulledIntoVehicle\@Actor\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const; // NOLINT
    /**
     * @vftbl 177
     * @symbol ?inCaravan\@Actor\@\@UEBA_NXZ
     */
    virtual bool inCaravan() const; // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 179
     * @symbol ?tickLeash\@Actor\@\@UEAAXXZ
     */
    virtual void tickLeash(); // NOLINT
    /**
     * @vftbl 180
     * @symbol ?sendMotionPacketIfNeeded\@Actor\@\@UEAAXXZ
     */
    virtual void sendMotionPacketIfNeeded(); // NOLINT
    /**
     * @vftbl 181
     * @symbol ?canSynchronizeNewEntity\@Actor\@\@UEBA_NXZ
     */
    virtual bool canSynchronizeNewEntity() const; // NOLINT
    /**
     * @vftbl 182
     * @symbol ?startSwimming\@Actor\@\@UEAAXXZ
     */
    virtual void startSwimming(); // NOLINT
    /**
     * @vftbl 183
     * @symbol ?stopSwimming\@Actor\@\@UEAAXXZ
     */
    virtual void stopSwimming(); // NOLINT
    /**
     * @vftbl 184
     * @symbol
     * ?buildDebugInfo\@Actor\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void buildDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 185
     * @symbol ?getCommandPermissionLevel\@Actor\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getCommandPermissionLevel() const; // NOLINT
    /**
     * @vftbl 186
     * @symbol ?isClientSide\@Actor\@\@UEBA_NXZ
     */
    virtual bool isClientSide() const; // NOLINT
    /**
     * @vftbl 187
     * @symbol ?getMutableAttribute\@Actor\@\@UEAAPEAVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    virtual class AttributeInstance* getMutableAttribute(class Attribute const&); // NOLINT
    /**
     * @vftbl 188
     * @symbol ?getAttribute\@Actor\@\@UEBAAEBVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    virtual class AttributeInstance const& getAttribute(class Attribute const&) const; // NOLINT
    /**
     * @vftbl 189
     * @symbol ?getDeathTime\@Actor\@\@UEBAHXZ
     */
    virtual int getDeathTime() const; // NOLINT
    /**
     * @vftbl 190
     * @symbol ?heal\@Actor\@\@UEAAXH\@Z
     */
    virtual void heal(int); // NOLINT
    /**
     * @vftbl 191
     * @symbol ?isInvertedHealAndHarm\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInvertedHealAndHarm() const; // NOLINT
    /**
     * @vftbl 192
     * @symbol ?canBeAffected\@Actor\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const; // NOLINT
    /**
     * @vftbl 193
     * @symbol ?canBeAffectedByArrow\@Actor\@\@UEBA_NAEBVMobEffectInstance\@\@\@Z
     */
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const; // NOLINT
    /**
     * @vftbl 194
     * @symbol ?onEffectAdded\@Actor\@\@UEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectAdded(class MobEffectInstance&); // NOLINT
    /**
     * @vftbl 195
     * @symbol ?onEffectUpdated\@Actor\@\@UEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectUpdated(class MobEffectInstance&); // NOLINT
    /**
     * @vftbl 196
     * @symbol ?onEffectRemoved\@Actor\@\@UEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectRemoved(class MobEffectInstance&); // NOLINT
    /**
     * @vftbl 197
     * @symbol ?canObstructSpawningAndBlockPlacement\@Actor\@\@UEBA_NXZ
     */
    virtual bool canObstructSpawningAndBlockPlacement() const; // NOLINT
    /**
     * @vftbl 198
     * @symbol ?getAnimationComponent\@Actor\@\@UEAAAEAVAnimationComponent\@\@XZ
     */
    virtual class AnimationComponent& getAnimationComponent(); // NOLINT
    /**
     * @vftbl 199
     * @symbol ?openContainerComponent\@Actor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void openContainerComponent(class Player&); // NOLINT
    /**
     * @vftbl 200
     * @symbol ?swing\@Actor\@\@UEAAXXZ
     */
    virtual void swing(); // NOLINT
    /**
     * @vftbl 201
     * @symbol ?useItem\@Actor\@\@UEAAXAEAVItemStackBase\@\@W4ItemUseMethod\@\@_N\@Z
     */
    virtual void useItem(class ItemStackBase&, enum class ItemUseMethod, bool); // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 204
     * @symbol
     * ?getDebugText\@Actor\@\@UEAAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void getDebugText(std::vector<std::string>&); // NOLINT
    /**
     * @vftbl 205
     * @symbol ?getMapDecorationRotation\@Actor\@\@UEBAMXZ
     */
    virtual float getMapDecorationRotation() const; // NOLINT
    /**
     * @vftbl 206
     * @symbol ?getPassengerYRotation\@Actor\@\@UEBAMAEBV1\@\@Z
     */
    virtual float getPassengerYRotation(class Actor const&) const; // NOLINT
    /**
     * @vftbl 207
     * @symbol ?add\@Actor\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack&); // NOLINT
    /**
     * @vftbl 208
     * @symbol ?drop\@Actor\@\@UEAA_NAEBVItemStack\@\@_N\@Z
     */
    virtual bool drop(class ItemStack const&, bool); // NOLINT
    /**
     * @vftbl 209
     * @symbol ?getInteraction\@Actor\@\@UEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@AEBVVec3\@\@\@Z
     */
    virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&); // NOLINT
    /**
     * @vftbl 210
     * @symbol ?canDestroyBlock\@Actor\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool canDestroyBlock(class Block const&) const; // NOLINT
    /**
     * @vftbl 211
     * @symbol ?setAuxValue\@Actor\@\@UEAAXH\@Z
     */
    virtual void setAuxValue(int); // NOLINT
    /**
     * @vftbl 212
     * @symbol ?setSize\@Actor\@\@UEAAXMM\@Z
     */
    virtual void setSize(float, float); // NOLINT
    /**
     * @vftbl 213
     * @symbol ?onOrphan\@Actor\@\@UEAAXXZ
     */
    virtual void onOrphan(); // NOLINT
    /**
     * @vftbl 214
     * @symbol ?wobble\@Actor\@\@UEAAXXZ
     */
    virtual void wobble(); // NOLINT
    /**
     * @vftbl 215
     * @symbol ?wasHurt\@Actor\@\@UEAA_NXZ
     */
    virtual bool wasHurt(); // NOLINT
    /**
     * @vftbl 216
     * @symbol ?startSpinAttack\@Actor\@\@UEAAXXZ
     */
    virtual void startSpinAttack(); // NOLINT
    /**
     * @vftbl 217
     * @symbol ?stopSpinAttack\@Actor\@\@UEAAXXZ
     */
    virtual void stopSpinAttack(); // NOLINT
    /**
     * @vftbl 218
     * @symbol ?setDamageNearbyMobs\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setDamageNearbyMobs(bool); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 220
     * @symbol ?reloadLootTable\@Actor\@\@UEAAXXZ
     */
    virtual void reloadLootTable(); // NOLINT
    /**
     * @vftbl 221
     * @symbol ?reloadLootTable\@Actor\@\@UEAAXAEBUEquipmentTableDefinition\@\@\@Z
     */
    virtual void reloadLootTable(struct EquipmentTableDefinition const&); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 223
     * @symbol ?kill\@Actor\@\@UEAAXXZ
     */
    virtual void kill(); // NOLINT
    /**
     * @vftbl 224
     * @symbol ?die\@Actor\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const&); // NOLINT
    /**
     * @vftbl 225
     * @symbol ?shouldDropDeathLoot\@Actor\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const; // NOLINT
    /**
     * @vftbl 226
     * @symbol ?shouldTick\@Actor\@\@UEBA_NXZ
     */
    virtual bool shouldTick() const; // NOLINT
    /**
     * @vftbl 227
     * @symbol ?applySnapshot\@Actor\@\@UEAAXAEBVEntityContext\@\@0\@Z
     */
    virtual void applySnapshot(class EntityContext const&, class EntityContext const&); // NOLINT
    /**
     * @vftbl 228
     * @symbol ?getNextStep\@Actor\@\@UEAAMM\@Z
     */
    virtual float getNextStep(float); // NOLINT
    /**
     * @vftbl 229
     * @symbol ?getLootTable\@Actor\@\@UEAAPEAVLootTable\@\@XZ
     */
    virtual class LootTable* getLootTable(); // NOLINT
    /**
     * @vftbl 230
     * @symbol ?onPush\@Actor\@\@UEAAXAEAV1\@\@Z
     */
    virtual void onPush(class Actor&); // NOLINT
    /**
     * @vftbl 231
     * @symbol ?getLastDeathPos\@Actor\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    virtual class std::optional<class BlockPos> getLastDeathPos() const; // NOLINT
    /**
     * @vftbl 232
     * @symbol ?getLastDeathDimension\@Actor\@\@UEBA?AV?$optional\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@XZ
     */
    virtual class std::optional<class AutomaticID<class Dimension, int>> getLastDeathDimension() const; // NOLINT
    /**
     * @vftbl 233
     * @symbol ?hasDiedBefore\@Actor\@\@UEBA_NXZ
     */
    virtual bool hasDiedBefore() const; // NOLINT
    /**
     * @vftbl 234
     * @symbol ?doWaterSplashEffect\@Actor\@\@UEAAXXZ
     */
    virtual void doWaterSplashEffect(); // NOLINT
    /**
     * @vftbl 235
     * @symbol ?_shouldProvideFeedbackOnHandContainerItemSet\@Actor\@\@MEBA_NW4HandSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool
    _shouldProvideFeedbackOnHandContainerItemSet(enum class HandSlot, class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 236
     * @symbol ?_shouldProvideFeedbackOnArmorSet\@Actor\@\@MEBA_NW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool _shouldProvideFeedbackOnArmorSet(enum class ArmorSlot, class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@Actor\@\@MEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams&); // NOLINT
    /**
     * @vftbl 238
     * @symbol ?shouldTryMakeStepSound\@Actor\@\@MEAA_NXZ
     */
    virtual bool shouldTryMakeStepSound(); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Actor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 241
     * @symbol ?markHurt\@Actor\@\@MEAAXXZ
     */
    virtual void markHurt(); // NOLINT
    /**
     * @vftbl 242
     * @symbol
     * ?_getAnimationComponent\@Actor\@\@MEAAAEAVAnimationComponent\@\@AEAV?$shared_ptr\@VAnimationComponent\@\@\@std\@\@W4AnimationComponentGroupType\@\@\@Z
     */
    virtual class AnimationComponent& _getAnimationComponent(
        class std::shared_ptr<class AnimationComponent>&,
        enum class AnimationComponentGroupType
    ); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Actor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Actor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 245
     * @symbol ?_playStepSound\@Actor\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @vftbl 246
     * @symbol ?_playFlySound\@Actor\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playFlySound(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 248
     * @symbol ?pushOutOfBlocks\@Actor\@\@MEAAXAEBVVec3\@\@\@Z
     */
    virtual void pushOutOfBlocks(class Vec3 const&); // NOLINT
    /**
     * @vftbl 249
     * @symbol ?spawnTrailBubbles\@Actor\@\@MEAAXXZ
     */
    virtual void spawnTrailBubbles(); // NOLINT
    /**
     * @vftbl 250
     * @symbol ?updateInsideBlock\@Actor\@\@MEAAXXZ
     */
    virtual void updateInsideBlock(); // NOLINT
    /**
     * @vftbl 251
     * @symbol ?_removePassenger\@Actor\@\@MEAAXAEBUActorUniqueID\@\@_N11\@Z
     */
    virtual void _removePassenger(struct ActorUniqueID const&, bool, bool, bool); // NOLINT
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@Actor\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOR
    /**
     * @symbol ?_doAutoAttackOnTouch\@Actor\@\@EEAAXAEAV1\@\@Z
     */
    MCVAPI void _doAutoAttackOnTouch(class Actor&); // NOLINT
    /**
     * @symbol ?_makeFlySound\@Actor\@\@MEBA_NXZ
     */
    MCVAPI bool _makeFlySound() const; // NOLINT
    /**
     * @symbol ?breaksFallingBlocks\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const; // NOLINT
    /**
     * @symbol ?canExistInPeaceful\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool canExistInPeaceful() const; // NOLINT
    /**
     * @symbol ?canMakeStepSound\@Actor\@\@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const; // NOLINT
    /**
     * @symbol ?canSeeInvisible\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool canSeeInvisible() const; // NOLINT
    /**
     * @symbol ?changeDimension\@Actor\@\@UEAAXAEBVChangeDimensionPacket\@\@\@Z
     */
    MCVAPI void changeDimension(class ChangeDimensionPacket const&); // NOLINT
    /**
     * @symbol ?getAlwaysShowNameTag\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const; // NOLINT
    /**
     * @symbol ?getDeletionDelayTimeSeconds\@Actor\@\@UEBAMXZ
     */
    MCVAPI float getDeletionDelayTimeSeconds() const; // NOLINT
    /**
     * @symbol ?getOutputSignal\@Actor\@\@UEBAHXZ
     */
    MCVAPI int getOutputSignal() const; // NOLINT
    /**
     * @symbol ?hasOutputSignal\@Actor\@\@UEBA_NE\@Z
     */
    MCVAPI bool hasOutputSignal(unsigned char) const; // NOLINT
    /**
     * @symbol ?interactPreventDefault\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault(); // NOLINT
    /**
     * @symbol ?isCreativeModeAllowed\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool isCreativeModeAllowed(); // NOLINT
    /**
     * @symbol ?isFishable\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isFishable() const; // NOLINT
    /**
     * @symbol ?isLeashableType\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool isLeashableType(); // NOLINT
    /**
     * @symbol ?isLocalPlayer\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isLocalPlayer() const; // NOLINT
    /**
     * @symbol ?isPlayer\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isPlayer() const; // NOLINT
    /**
     * @symbol ?isShootable\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool isShootable(); // NOLINT
    /**
     * @symbol ?isTargetable\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isTargetable() const; // NOLINT
    /**
     * @symbol ?renderDebugServerState\@Actor\@\@UEAAXAEBVOptions\@\@\@Z
     */
    MCVAPI void renderDebugServerState(class Options const&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Actor(); // NOLINT
#endif
    /**
     * @symbol ??0Actor\@\@QEAA\@AEAVILevel\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Actor(class ILevel&, class EntityContext&); // NOLINT
    /**
     * @symbol ??0Actor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Actor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?_sendDirtyActorData\@Actor\@\@QEAAXXZ
     */
    MCAPI void _sendDirtyActorData(); // NOLINT
    /**
     * @symbol ?_setActorTypeId\@Actor\@\@QEAAXW4ActorType\@\@\@Z
     */
    MCAPI void _setActorTypeId(enum class ActorType); // NOLINT
    /**
     * @symbol ?_setLevelPtr\@Actor\@\@QEAAXPEAVILevel\@\@\@Z
     */
    MCAPI void _setLevelPtr(class ILevel*); // NOLINT
    /**
     * @symbol ?addCategory\@Actor\@\@QEAAXAEBW4ActorCategory\@\@\@Z
     */
    MCAPI void addCategory(enum class ActorCategory const&); // NOLINT
    /**
     * @symbol
     * ?addDefinitionGroup\@Actor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addDefinitionGroup(std::string const&); // NOLINT
    /**
     * @symbol ?addEffect\@Actor\@\@QEAAXAEBVMobEffectInstance\@\@\@Z
     */
    MCAPI void addEffect(class MobEffectInstance const&); // NOLINT
    /**
     * @symbol ?addTag\@Actor\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool addTag(std::string const&); // NOLINT
    /**
     * @symbol ?applyImpulse\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void applyImpulse(class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?buildDebugGroupInfo\@Actor\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void buildDebugGroupInfo(std::string&) const; // NOLINT
    /**
     * @symbol ?buildForward\@Actor\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 buildForward() const; // NOLINT
    /**
     * @symbol ?burn\@Actor\@\@QEAAXH_N\@Z
     */
    MCAPI void burn(int, bool); // NOLINT
    /**
     * @symbol ?calcCenterPos\@Actor\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 calcCenterPos() const; // NOLINT
    /**
     * @symbol ?calculateAttackDamage\@Actor\@\@QEAAMAEAV1\@\@Z
     */
    MCAPI float calculateAttackDamage(class Actor&); // NOLINT
    /**
     * @symbol ?canAscendCurrentBlockByJumping\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canAscendCurrentBlockByJumping() const; // NOLINT
    /**
     * @symbol ?canBeginOrContinueClimbingLadder\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canBeginOrContinueClimbingLadder() const; // NOLINT
    /**
     * @symbol ?canCurrentlySwim\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canCurrentlySwim() const; // NOLINT
    /**
     * @symbol ?canDescendBlockBelowByCrouching\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canDescendBlockBelowByCrouching() const; // NOLINT
    /**
     * @symbol ?canFly\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canFly() const; // NOLINT
    /**
     * @symbol ?canMate\@Actor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool canMate(class Actor const&) const; // NOLINT
    /**
     * @symbol ?canReceiveMobEffectsFromGameplay\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canReceiveMobEffectsFromGameplay() const; // NOLINT
    /**
     * @symbol ?canSeeDaylight\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canSeeDaylight() const; // NOLINT
    /**
     * @symbol ?celebrateHunt\@Actor\@\@QEAAXH_N\@Z
     */
    MCAPI void celebrateHunt(int, bool); // NOLINT
    /**
     * @symbol ?clearFishingHookID\@Actor\@\@QEAAXXZ
     */
    MCAPI void clearFishingHookID(); // NOLINT
    /**
     * @symbol ?closerThan\@Actor\@\@QEBA_NAEBV1\@M\@Z
     */
    MCAPI bool closerThan(class Actor const&, float) const; // NOLINT
    /**
     * @symbol ?closerThan\@Actor\@\@QEBA_NAEBV1\@MM\@Z
     */
    MCAPI bool closerThan(class Actor const&, float, float) const; // NOLINT
    /**
     * @symbol ?consumeItem\@Actor\@\@QEAAXAEAVItemActor\@\@H\@Z
     */
    MCAPI void consumeItem(class ItemActor&, int); // NOLINT
    /**
     * @symbol ?createUpdateEquipPacket\@Actor\@\@QEAA?AVUpdateEquipPacket\@\@H\@Z
     */
    MCAPI class UpdateEquipPacket createUpdateEquipPacket(int); // NOLINT
    /**
     * @symbol ?createUpdateTradePacket\@Actor\@\@QEAA?AVUpdateTradePacket\@\@H\@Z
     */
    MCAPI class UpdateTradePacket createUpdateTradePacket(int); // NOLINT
    /**
     * @symbol ?damageSensorComponentHurt\@Actor\@\@QEAA_NAEAMAEBVActorDamageSource\@\@_N\@Z
     */
    MCAPI bool damageSensorComponentHurt(float&, class ActorDamageSource const&, bool); // NOLINT
    /**
     * @symbol ?deregisterTagsFromLevelCache\@Actor\@\@QEAAXXZ
     */
    MCAPI void deregisterTagsFromLevelCache(); // NOLINT
    /**
     * @symbol ?distanceSqrToBlockPosCenter\@Actor\@\@QEBAMAEBVBlockPos\@\@\@Z
     */
    MCAPI float distanceSqrToBlockPosCenter(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?distanceTo\@Actor\@\@QEBAMAEBV1\@\@Z
     */
    MCAPI float distanceTo(class Actor const&) const; // NOLINT
    /**
     * @symbol ?distanceTo\@Actor\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float distanceTo(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?distanceToSqr\@Actor\@\@QEBAMAEBV1\@\@Z
     */
    MCAPI float distanceToSqr(class Actor const&) const; // NOLINT
    /**
     * @symbol ?distanceToSqr\@Actor\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float distanceToSqr(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?dropLeash\@Actor\@\@QEAAX_N0\@Z
     */
    MCAPI void dropLeash(bool, bool); // NOLINT
    /**
     * @symbol ?dropTowards\@Actor\@\@QEAAXAEBVItemStack\@\@VVec3\@\@\@Z
     */
    MCAPI void dropTowards(class ItemStack const&, class Vec3); // NOLINT
    /**
     * @symbol ?evaluateSeatRotation\@Actor\@\@QEAAMAEBVRideableComponent\@\@_N\@Z
     */
    MCAPI float evaluateSeatRotation(class RideableComponent const&, bool); // NOLINT
    /**
     * @symbol
     * ?executeEvent\@Actor\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI bool executeEvent(std::string const&, class VariantParameterList const&); // NOLINT
    /**
     * @symbol ?exitVehicle\@Actor\@\@QEAAX_N00\@Z
     */
    MCAPI void exitVehicle(bool, bool, bool); // NOLINT
    /**
     * @symbol ?fetchFishingHook\@Actor\@\@QEAAPEAVFishingHook\@\@XZ
     */
    MCAPI class FishingHook* fetchFishingHook(); // NOLINT
    /**
     * @symbol
     * ?fetchNearbyActorsSorted\@Actor\@\@QEAA?AV?$vector\@UDistanceSortedActor\@\@V?$allocator\@UDistanceSortedActor\@\@\@std\@\@\@std\@\@AEBVVec3\@\@W4ActorType\@\@\@Z
     */
    MCAPI std::vector<struct DistanceSortedActor>
          fetchNearbyActorsSorted(class Vec3 const&, enum class ActorType); // NOLINT
    /**
     * @symbol ?forEachLeashedActor\@Actor\@\@QEAAXV?$function\@$$A6AXV?$not_null\@PEAVActor\@\@\@gsl\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachLeashedActor(class std::function<void(class gsl::not_null<class Actor*>)>); // NOLINT
    /**
     * @symbol ?getAABB\@Actor\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const& getAABB() const; // NOLINT
    /**
     * @symbol ?getAABBDim\@Actor\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const& getAABBDim() const; // NOLINT
    /**
     * @symbol ?getActiveEffectCount\@Actor\@\@QEBAHXZ
     */
    MCAPI int getActiveEffectCount() const; // NOLINT
    /**
     * @symbol ?getActorIdentifier\@Actor\@\@QEBAAEBUActorDefinitionIdentifier\@\@XZ
     */
    MCAPI struct ActorDefinitionIdentifier const& getActorIdentifier() const; // NOLINT
    /**
     * @symbol
     * ?getAllEffects\@Actor\@\@QEBAAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobEffectInstance> const& getAllEffects() const; // NOLINT
    /**
     * @symbol ?getArmorContainer\@Actor\@\@QEBAAEBVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer const& getArmorContainer() const; // NOLINT
    /**
     * @symbol ?getArmorContainer\@Actor\@\@QEAAAEAVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer& getArmorContainer(); // NOLINT
    /**
     * @symbol ?getAttachPos\@Actor\@\@QEBA?AVVec3\@\@W4ActorLocation\@\@M\@Z
     */
    MCAPI class Vec3 getAttachPos(enum class ActorLocation, float) const; // NOLINT
    /**
     * @symbol ?getAttributes\@Actor\@\@QEBA?AV?$not_null\@PEBVBaseAttributeMap\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class BaseAttributeMap const*> getAttributes() const; // NOLINT
    /**
     * @symbol ?getAttributes\@Actor\@\@QEAA?AV?$not_null\@PEAVBaseAttributeMap\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class BaseAttributeMap*> getAttributes(); // NOLINT
    /**
     * @symbol ?getBlockPosCurrentlyStandingOn\@Actor\@\@QEBA?AVBlockPos\@\@PEBV1\@\@Z
     */
    MCAPI class BlockPos getBlockPosCurrentlyStandingOn(class Actor const*) const; // NOLINT
    /**
     * @symbol ?getBlockTarget\@Actor\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getBlockTarget() const; // NOLINT
    /**
     * @symbol ?getBrightness\@Actor\@\@QEBAMM\@Z
     */
    MCAPI float getBrightness(float) const; // NOLINT
    /**
     * @symbol ?getCanPickupItems\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getCanPickupItems() const; // NOLINT
    /**
     * @symbol ?getCarriedItemInSlotPreferredBy\@Actor\@\@QEBAAEBVItemStack\@\@AEBV2\@\@Z
     */
    MCAPI class ItemStack const& getCarriedItemInSlotPreferredBy(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?getChainedDamageEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getChainedDamageEffects() const; // NOLINT
    /**
     * @symbol ?getCollidableMob\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getCollidableMob() const; // NOLINT
    /**
     * @symbol ?getColor\@Actor\@\@QEBA?AW4PaletteColor\@\@XZ
     */
    MCAPI enum class PaletteColor getColor() const; // NOLINT
    /**
     * @symbol ?getColor2\@Actor\@\@QEBA?AW4PaletteColor\@\@XZ
     */
    MCAPI enum class PaletteColor getColor2() const; // NOLINT
    /**
     * @symbol ?getControllingSeat\@Actor\@\@QEBAHXZ
     */
    MCAPI int getControllingSeat() const; // NOLINT
    /**
     * @symbol ?getCurrentSwimAmount\@Actor\@\@QEBAMXZ
     */
    MCAPI float getCurrentSwimAmount() const; // NOLINT
    /**
     * @symbol ?getDamageNearbyMobs\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getDamageNearbyMobs() const; // NOLINT
    /**
     * @symbol ?getDiffList\@Actor\@\@QEBAPEBVActorDefinitionDiffList\@\@XZ
     */
    MCAPI class ActorDefinitionDiffList const* getDiffList() const; // NOLINT
    /**
     * @symbol ?getDiffListNonConst\@Actor\@\@QEAAPEAVActorDefinitionDiffList\@\@XZ
     */
    MCAPI class ActorDefinitionDiffList* getDiffListNonConst(); // NOLINT
    /**
     * @symbol ?getDimension\@Actor\@\@QEBAAEAVDimension\@\@XZ
     */
    MCAPI class Dimension& getDimension() const; // NOLINT
    /**
     * @symbol ?getDimensionBlockSource\@Actor\@\@QEBAAEAVBlockSource\@\@XZ
     */
    MCAPI class BlockSource& getDimensionBlockSource() const; // NOLINT
    /**
     * @symbol ?getDimensionBlockSourceConst\@Actor\@\@QEBAAEBVBlockSource\@\@XZ
     */
    MCAPI class BlockSource const& getDimensionBlockSourceConst() const; // NOLINT
    /**
     * @symbol ?getDimensionConst\@Actor\@\@QEBAAEBVDimension\@\@XZ
     */
    MCAPI class Dimension const& getDimensionConst() const; // NOLINT
    /**
     * @symbol ?getDimensionId\@Actor\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getDimensionId() const; // NOLINT
    /**
     * @symbol ?getEffect\@Actor\@\@QEBAPEBVMobEffectInstance\@\@AEBVMobEffect\@\@\@Z
     */
    MCAPI class MobEffectInstance const* getEffect(class MobEffect const&) const; // NOLINT
    /**
     * @symbol ?getEffect\@Actor\@\@QEBAPEBVMobEffectInstance\@\@I\@Z
     */
    MCAPI class MobEffectInstance const* getEffect(unsigned int) const; // NOLINT
    /**
     * @symbol ?getEntityData\@Actor\@\@QEBAAEBVSynchedActorDataEntityWrapper\@\@XZ
     */
    MCAPI class SynchedActorDataEntityWrapper const& getEntityData() const; // NOLINT
    /**
     * @symbol ?getEntityData\@Actor\@\@QEAAAEAVSynchedActorDataEntityWrapper\@\@XZ
     */
    MCAPI class SynchedActorDataEntityWrapper& getEntityData(); // NOLINT
    /**
     * @symbol ?getEntityRegistry\@Actor\@\@QEAA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry(); // NOLINT
    /**
     * @symbol ?getEntityTerrainInterlockData\@Actor\@\@QEAAAEAVActorTerrainInterlockData\@\@XZ
     */
    MCAPI class ActorTerrainInterlockData& getEntityTerrainInterlockData(); // NOLINT
    /**
     * @symbol ?getEquipmentSlotForItem\@Actor\@\@QEBA?AW4EquipmentSlot\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI enum class EquipmentSlot getEquipmentSlotForItem(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?getFallDistance\@Actor\@\@QEBAMXZ
     */
    MCAPI float getFallDistance() const; // NOLINT
    /**
     * @symbol ?getFirstAvailableSeatPos\@Actor\@\@QEBA_NAEAV1\@AEAVVec3\@\@\@Z
     */
    MCAPI bool getFirstAvailableSeatPos(class Actor&, class Vec3&) const; // NOLINT
    /**
     * @symbol ?getFirstPassenger\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor* getFirstPassenger() const; // NOLINT
    /**
     * @symbol ?getHandContainer\@Actor\@\@QEBAAEBVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer const& getHandContainer() const; // NOLINT
    /**
     * @symbol ?getHandContainer\@Actor\@\@QEAAAEAVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer& getHandContainer(); // NOLINT
    /**
     * @symbol ?getHealth\@Actor\@\@QEBAHXZ
     */
    MCAPI int getHealth() const; // NOLINT
    /**
     * @symbol ?getHurtDir\@Actor\@\@QEBAHXZ
     */
    MCAPI int getHurtDir() const; // NOLINT
    /**
     * @symbol ?getHurtTime\@Actor\@\@QEBAHXZ
     */
    MCAPI int getHurtTime() const; // NOLINT
    /**
     * @symbol ?getInitializationMethod\@Actor\@\@QEAA?AW4InitializationMethod\@1\@XZ
     */
    MCAPI enum class Actor::InitializationMethod getInitializationMethod(); // NOLINT
    /**
     * @symbol ?getInterpolatedPosition\@Actor\@\@QEBA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 getInterpolatedPosition(float) const; // NOLINT
    /**
     * @symbol ?getInterpolatedRotation\@Actor\@\@QEBA?AVVec2\@\@M\@Z
     */
    MCAPI class Vec2 getInterpolatedRotation(float) const; // NOLINT
    /**
     * @symbol ?getIsExperienceDropEnabled\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getIsExperienceDropEnabled() const; // NOLINT
    /**
     * @symbol ?getJumpDuration\@Actor\@\@QEBAHXZ
     */
    MCAPI int getJumpDuration() const; // NOLINT
    /**
     * @symbol ?getLastHurtByMobTime\@Actor\@\@QEAAHXZ
     */
    MCAPI int getLastHurtByMobTime(); // NOLINT
    /**
     * @symbol ?getLastHurtByMobTimestamp\@Actor\@\@QEAAHXZ
     */
    MCAPI int getLastHurtByMobTimestamp(); // NOLINT
    /**
     * @symbol ?getLastHurtCause\@Actor\@\@QEBA?AW4ActorDamageCause\@\@XZ
     */
    MCAPI enum class ActorDamageCause getLastHurtCause() const; // NOLINT
    /**
     * @symbol ?getLastHurtDamage\@Actor\@\@QEBAMXZ
     */
    MCAPI float getLastHurtDamage() const; // NOLINT
    /**
     * @symbol ?getLastHurtMobTimestamp\@Actor\@\@QEAAHXZ
     */
    MCAPI int getLastHurtMobTimestamp(); // NOLINT
    /**
     * @symbol ?getLastHurtTimestamp\@Actor\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getLastHurtTimestamp() const; // NOLINT
    /**
     * @symbol ?getLeashHolder\@Actor\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getLeashHolder() const; // NOLINT
    /**
     * @symbol ?getLevel\@Actor\@\@QEBAAEBVLevel\@\@XZ
     */
    MCAPI class Level const& getLevel() const; // NOLINT
    /**
     * @symbol ?getLevel\@Actor\@\@QEAAAEAVLevel\@\@XZ
     */
    MCAPI class Level& getLevel(); // NOLINT
    /**
     * @symbol ?getLevelTimeStamp\@Actor\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getLevelTimeStamp() const; // NOLINT
    /**
     * @symbol ?getLimitedLifetimeTicks\@Actor\@\@QEBAHXZ
     */
    MCAPI int getLimitedLifetimeTicks() const; // NOLINT
    /**
     * @symbol ?getLinks\@Actor\@\@QEBA?AV?$vector\@UActorLink\@\@V?$allocator\@UActorLink\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorLink> getLinks() const; // NOLINT
    /**
     * @symbol ?getMarkVariant\@Actor\@\@QEBAHXZ
     */
    MCAPI int getMarkVariant() const; // NOLINT
    /**
     * @symbol ?getMaxAutoStep\@Actor\@\@QEBAMXZ
     */
    MCAPI float getMaxAutoStep() const; // NOLINT
    /**
     * @symbol ?getMaxHealth\@Actor\@\@QEBAHXZ
     */
    MCAPI int getMaxHealth() const; // NOLINT
    /**
     * @symbol ?getMolangVariables\@Actor\@\@QEAAAEAVMolangVariableMap\@\@XZ
     */
    MCAPI class MolangVariableMap& getMolangVariables(); // NOLINT
    /**
     * @symbol
     * ?getMovementProxy\@Actor\@\@QEBA?AV?$not_null\@V?$shared_ptr\@$$CBUIActorMovementProxy\@\@\@std\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy const>>
    getMovementProxy() const; // NOLINT
    /**
     * @symbol
     * ?getMovementProxy\@Actor\@\@QEAA?AV?$not_null\@V?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>> getMovementProxy(); // NOLINT
    /**
     * @symbol ?getOffhandSlot\@Actor\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getOffhandSlot() const; // NOLINT
    /**
     * @symbol ?getOnDeathExperience\@Actor\@\@QEAAHXZ
     */
    MCAPI int getOnDeathExperience(); // NOLINT
    /**
     * @symbol ?getOrAddDynamicProperties\@Actor\@\@QEAAAEAVDynamicProperties\@\@XZ
     */
    MCAPI class DynamicProperties& getOrAddDynamicProperties(); // NOLINT
    /**
     * @symbol ?getOrCreateUniqueID\@Actor\@\@QEBAAEBUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const& getOrCreateUniqueID() const; // NOLINT
    /**
     * @symbol ?getOwner\@Actor\@\@QEBAPEAVMob\@\@XZ
     */
    MCAPI class Mob* getOwner() const; // NOLINT
    /**
     * @symbol ?getOwnerId\@Actor\@\@QEBA?BUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const getOwnerId() const; // NOLINT
    /**
     * @symbol ?getPassengerIndex\@Actor\@\@QEBAHAEBV1\@\@Z
     */
    MCAPI int getPassengerIndex(class Actor const&) const; // NOLINT
    /**
     * @symbol
     * ?getPersistingTradeOffers\@Actor\@\@QEAA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> getPersistingTradeOffers(); // NOLINT
    /**
     * @symbol ?getPersistingTradeRiches\@Actor\@\@QEAAHXZ
     */
    MCAPI int getPersistingTradeRiches(); // NOLINT
    /**
     * @symbol ?getPlayerOwner\@Actor\@\@QEBAPEAVPlayer\@\@XZ
     */
    MCAPI class Player* getPlayerOwner() const; // NOLINT
    /**
     * @symbol ?getPosDelta\@Actor\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const& getPosDelta() const; // NOLINT
    /**
     * @symbol ?getPosDeltaNonConst\@Actor\@\@QEAAAEAVVec3\@\@XZ
     */
    MCAPI class Vec3& getPosDeltaNonConst(); // NOLINT
    /**
     * @symbol ?getRadius\@Actor\@\@QEBAMXZ
     */
    MCAPI float getRadius() const; // NOLINT
    /**
     * @symbol ?getRandom\@Actor\@\@QEBAAEAVRandom\@\@XZ
     */
    MCAPI class Random& getRandom() const; // NOLINT
    /**
     * @symbol ?getRenderParams\@Actor\@\@QEAAAEAVRenderParams\@\@XZ
     */
    MCAPI class RenderParams& getRenderParams(); // NOLINT
    /**
     * @symbol ?getRidingHeight\@Actor\@\@QEBAMXZ
     */
    MCAPI float getRidingHeight() const; // NOLINT
    /**
     * @symbol ?getRotation\@Actor\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const& getRotation() const; // NOLINT
    /**
     * @symbol ?getRotationPrev\@Actor\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const& getRotationPrev() const; // NOLINT
    /**
     * @symbol ?getRuntimeID\@Actor\@\@QEBA?AVActorRuntimeID\@\@XZ
     */
    MCAPI class ActorRuntimeID getRuntimeID() const; // NOLINT
    /**
     * @symbol ?getShakeTime\@Actor\@\@QEBAHXZ
     */
    MCAPI int getShakeTime() const; // NOLINT
    /**
     * @symbol ?getSkinID\@Actor\@\@QEBAHXZ
     */
    MCAPI int getSkinID() const; // NOLINT
    /**
     * @symbol ?getSlideOffset\@Actor\@\@QEBA?AVVec2\@\@XZ
     */
    MCAPI class Vec2 getSlideOffset() const; // NOLINT
    /**
     * @symbol ?getSpatialNetworkData\@Actor\@\@QEAAAEAVSpatialActorNetworkData\@\@XZ
     */
    MCAPI class SpatialActorNetworkData& getSpatialNetworkData(); // NOLINT
    /**
     * @symbol ?getSpatialNetworkData\@Actor\@\@QEBAAEBVSpatialActorNetworkData\@\@XZ
     */
    MCAPI class SpatialActorNetworkData const& getSpatialNetworkData() const; // NOLINT
    /**
     * @symbol ?getSpeedInMetersPerSecond\@Actor\@\@QEBAMXZ
     */
    MCAPI float getSpeedInMetersPerSecond() const; // NOLINT
    /**
     * @symbol ?getStrength\@Actor\@\@QEBAHXZ
     */
    MCAPI int getStrength() const; // NOLINT
    /**
     * @symbol ?getStrengthMax\@Actor\@\@QEBAHXZ
     */
    MCAPI int getStrengthMax() const; // NOLINT
    /**
     * @symbol ?getStructuralIntegrity\@Actor\@\@QEBAHXZ
     */
    MCAPI int getStructuralIntegrity() const; // NOLINT
    /**
     * @symbol ?getSwimAmount\@Actor\@\@QEBAMM\@Z
     */
    MCAPI float getSwimAmount(float) const; // NOLINT
    /**
     * @symbol
     * ?getTags\@Actor\@\@QEBA?BV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const getTags() const; // NOLINT
    /**
     * @symbol ?getTarget\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor* getTarget() const; // NOLINT
    /**
     * @symbol ?getTargetId\@Actor\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetId() const; // NOLINT
    /**
     * @symbol ?getTradeInterest\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getTradeInterest() const; // NOLINT
    /**
     * @symbol ?getTradeOffers\@Actor\@\@QEAAPEAVMerchantRecipeList\@\@XZ
     */
    MCAPI class MerchantRecipeList* getTradeOffers(); // NOLINT
    /**
     * @symbol ?getTradingPlayer\@Actor\@\@QEBAPEAVPlayer\@\@XZ
     */
    MCAPI class Player* getTradingPlayer() const; // NOLINT
    /**
     * @symbol ?getVariant\@Actor\@\@QEBAHXZ
     */
    MCAPI int getVariant() const; // NOLINT
    /**
     * @symbol ?getVehicle\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor* getVehicle() const; // NOLINT
    /**
     * @symbol ?getVehicleRoot\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor* getVehicleRoot() const; // NOLINT
    /**
     * @symbol ?getVehicleRuntimeID\@Actor\@\@QEBA?AVActorRuntimeID\@\@XZ
     */
    MCAPI class ActorRuntimeID getVehicleRuntimeID() const; // NOLINT
    /**
     * @symbol ?getVerticalSpeedInMetersPerSecond\@Actor\@\@QEBAMXZ
     */
    MCAPI float getVerticalSpeedInMetersPerSecond() const; // NOLINT
    /**
     * @symbol ?getViewVector\@Actor\@\@QEBA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 getViewVector(float) const; // NOLINT
    /**
     * @symbol ?getWeakEntity\@Actor\@\@QEBA?BV?$WeakRefT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct EntityRefTraits> const getWeakEntity() const; // NOLINT
    /**
     * @symbol ?getYHeadRot\@Actor\@\@QEBAMXZ
     */
    MCAPI float getYHeadRot() const; // NOLINT
    /**
     * @symbol ?getYHeadRotationsNewOld\@Actor\@\@QEBA?AUInterpolationPair\@\@XZ
     */
    MCAPI struct InterpolationPair getYHeadRotationsNewOld() const; // NOLINT
    /**
     * @symbol ?hasAnyEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyEffects() const; // NOLINT
    /**
     * @symbol ?hasAnyVisibleEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyVisibleEffects() const; // NOLINT
    /**
     * @symbol ?hasBeenHurtByMobInLastTicks\@Actor\@\@QEBA_NH\@Z
     */
    MCAPI bool hasBeenHurtByMobInLastTicks(int) const; // NOLINT
    /**
     * @symbol ?hasCategory\@Actor\@\@QEBA_NW4ActorCategory\@\@\@Z
     */
    MCAPI bool hasCategory(enum class ActorCategory) const; // NOLINT
    /**
     * @symbol
     * ?hasDefinitionGroup\@Actor\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasDefinitionGroup(std::string const&) const; // NOLINT
    /**
     * @symbol ?hasDimension\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasDimension() const; // NOLINT
    /**
     * @symbol ?hasEffect\@Actor\@\@QEBA_NAEBVMobEffect\@\@\@Z
     */
    MCAPI bool hasEffect(class MobEffect const&) const; // NOLINT
    /**
     * @symbol ?hasFamily\@Actor\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasFamily(class HashedString const&) const; // NOLINT
    /**
     * @symbol ?hasFishingHook\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasFishingHook() const; // NOLINT
    /**
     * @symbol ?hasLevel\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasLevel() const; // NOLINT
    /**
     * @symbol ?hasPassenger\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPassenger() const; // NOLINT
    /**
     * @symbol ?hasPersistingTrade\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPersistingTrade() const; // NOLINT
    /**
     * @symbol ?hasPlayerPassenger\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPlayerPassenger() const; // NOLINT
    /**
     * @symbol ?hasPriorityAmmunition\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPriorityAmmunition() const; // NOLINT
    /**
     * @symbol ?hasRuntimeID\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasRuntimeID() const; // NOLINT
    /**
     * @symbol ?hasSaddle\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasSaddle() const; // NOLINT
    /**
     * @symbol ?hasTag\@Actor\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasTag(std::string const&) const; // NOLINT
    /**
     * @symbol ?hasTags\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasTags() const; // NOLINT
    /**
     * @symbol ?hasTeleported\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasTeleported() const; // NOLINT
    /**
     * @symbol ?hasTotemEquipped\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasTotemEquipped() const; // NOLINT
    /**
     * @symbol ?hasType\@Actor\@\@QEBA_NW4ActorType\@\@\@Z
     */
    MCAPI bool hasType(enum class ActorType) const; // NOLINT
    /**
     * @symbol ?hasUniqueID\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasUniqueID() const; // NOLINT
    /**
     * @symbol ?healEffects\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void healEffects(int); // NOLINT
    /**
     * @symbol ?hurt\@Actor\@\@QEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    MCAPI bool hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @symbol ?inDownwardFlowingLiquid\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool inDownwardFlowingLiquid() const; // NOLINT
    /**
     * @symbol ?initActorProperties\@Actor\@\@QEAAXXZ
     */
    MCAPI void initActorProperties(); // NOLINT
    /**
     * @symbol ?initParams\@Actor\@\@QEAAXAEAVVariantParameterList\@\@\@Z
     */
    MCAPI void initParams(class VariantParameterList&); // NOLINT
    /**
     * @symbol ?initParams\@Actor\@\@QEAAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void initParams(class RenderParams&); // NOLINT
    /**
     * @symbol ?isActorLocationInMaterial\@Actor\@\@QEBA_NW4ActorLocation\@\@W4MaterialType\@\@\@Z
     */
    MCAPI bool isActorLocationInMaterial(enum class ActorLocation, enum class MaterialType) const; // NOLINT
    /**
     * @symbol ?isAdventure\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isAdventure() const; // NOLINT
    /**
     * @symbol ?isAngry\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isAngry() const; // NOLINT
    /**
     * @symbol ?isAttackableGamemode\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isAttackableGamemode() const; // NOLINT
    /**
     * @symbol ?isAutonomous\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isAutonomous() const; // NOLINT
    /**
     * @symbol ?isBaby\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isBaby() const; // NOLINT
    /**
     * @symbol ?isBreakingObstruction\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isBreakingObstruction() const; // NOLINT
    /**
     * @symbol ?isBribed\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isBribed() const; // NOLINT
    /**
     * @symbol ?isCharged\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isCharged() const; // NOLINT
    /**
     * @symbol ?isChested\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isChested() const; // NOLINT
    /**
     * @symbol ?isClimbing\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isClimbing() const; // NOLINT
    /**
     * @symbol ?isControlledByLocalInstance\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isControlledByLocalInstance() const; // NOLINT
    /**
     * @symbol ?isCreative\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isCreative() const; // NOLINT
    /**
     * @symbol ?isDancing\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDancing() const; // NOLINT
    /**
     * @symbol ?isDead\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDead() const; // NOLINT
    /**
     * @symbol ?isDoorBreaker\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDoorBreaker() const; // NOLINT
    /**
     * @symbol ?isDoorOpener\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDoorOpener() const; // NOLINT
    /**
     * @symbol ?isGlobal\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isGlobal() const; // NOLINT
    /**
     * @symbol ?isIgnited\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isIgnited() const; // NOLINT
    /**
     * @symbol ?isImmersedInWater\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isImmersedInWater() const; // NOLINT
    /**
     * @symbol ?isInClouds\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInClouds() const; // NOLINT
    /**
     * @symbol ?isInContactWithWater\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInContactWithWater() const; // NOLINT
    /**
     * @symbol ?isInLove\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInLove() const; // NOLINT
    /**
     * @symbol ?isInPrecipitation\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInPrecipitation() const; // NOLINT
    /**
     * @symbol ?isInRain\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInRain() const; // NOLINT
    /**
     * @symbol ?isInScaffolding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInScaffolding() const; // NOLINT
    /**
     * @symbol ?isInSnow\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInSnow() const; // NOLINT
    /**
     * @symbol ?isInThunderstorm\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInThunderstorm() const; // NOLINT
    /**
     * @symbol ?isInWaterOrRain\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInWaterOrRain() const; // NOLINT
    /**
     * @symbol ?isInWorld\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInWorld() const; // NOLINT
    /**
     * @symbol ?isInsideBorderBlock\@Actor\@\@QEBA_NM\@Z
     */
    MCAPI bool isInsideBorderBlock(float) const; // NOLINT
    /**
     * @symbol ?isInsidePortal\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInsidePortal() const; // NOLINT
    /**
     * @symbol ?isJumping\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isJumping() const; // NOLINT
    /**
     * @symbol ?isLayingDown\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isLayingDown() const; // NOLINT
    /**
     * @symbol ?isLeashed\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isLeashed() const; // NOLINT
    /**
     * @symbol ?isMovedToLimbo\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isMovedToLimbo() const; // NOLINT
    /**
     * @symbol ?isMovedToUnloadedChunk\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isMovedToUnloadedChunk() const; // NOLINT
    /**
     * @symbol ?isMoving\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isMoving() const; // NOLINT
    /**
     * @symbol ?isOrphan\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isOrphan() const; // NOLINT
    /**
     * @symbol ?isOutOfControl\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isOutOfControl() const; // NOLINT
    /**
     * @symbol ?isOverScaffolding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isOverScaffolding() const; // NOLINT
    /**
     * @symbol ?isPacified\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPacified() const; // NOLINT
    /**
     * @symbol ?isPassenger\@Actor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isPassenger(class Actor const&) const; // NOLINT
    /**
     * @symbol ?isPersistent\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPersistent() const; // NOLINT
    /**
     * @symbol ?isPlayingDead\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPlayingDead() const; // NOLINT
    /**
     * @symbol ?isPowered\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPowered() const; // NOLINT
    /**
     * @symbol ?isRemoved\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isRemoved() const; // NOLINT
    /**
     * @symbol ?isResting\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isResting() const; // NOLINT
    /**
     * @symbol ?isRiding\@Actor\@\@QEBA_NPEAV1\@\@Z
     */
    MCAPI bool isRiding(class Actor*) const; // NOLINT
    /**
     * @symbol ?isRiding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isRiding() const; // NOLINT
    /**
     * @symbol ?isSheared\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSheared() const; // NOLINT
    /**
     * @symbol ?isSitting\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSitting() const; // NOLINT
    /**
     * @symbol ?isSneaking\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSneaking() const; // NOLINT
    /**
     * @symbol ?isSpectator\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSpectator() const; // NOLINT
    /**
     * @symbol ?isStackable\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isStackable() const; // NOLINT
    /**
     * @symbol ?isStanding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isStanding() const; // NOLINT
    /**
     * @symbol ?isSurvival\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSurvival() const; // NOLINT
    /**
     * @symbol ?isSwimmer\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSwimmer() const; // NOLINT
    /**
     * @symbol ?isSwimming\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSwimming() const; // NOLINT
    /**
     * @symbol ?isTame\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTame() const; // NOLINT
    /**
     * @symbol ?isTickingEntity\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTickingEntity() const; // NOLINT
    /**
     * @symbol ?isTouchingDamageBlock\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTouchingDamageBlock() const; // NOLINT
    /**
     * @symbol ?isTrading\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTrading() const; // NOLINT
    /**
     * @symbol ?isTrusting\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTrusting() const; // NOLINT
    /**
     * @symbol ?isType\@Actor\@\@QEBA_NW4ActorType\@\@\@Z
     */
    MCAPI bool isType(enum class ActorType) const; // NOLINT
    /**
     * @symbol ?isUseNewTradeScreen\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isUseNewTradeScreen() const; // NOLINT
    /**
     * @symbol ?isWASDControlled\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isWASDControlled() const; // NOLINT
    /**
     * @symbol ?isWalker\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isWalker() const; // NOLINT
    /**
     * @symbol ?isWorldBuilder\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isWorldBuilder() const; // NOLINT
    /**
     * @symbol ?lerpTo\@Actor\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@MH\@Z
     */
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, float, int); // NOLINT
    /**
     * @symbol ?lerpTo\@Actor\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@H\@Z
     */
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, int); // NOLINT
    /**
     * @symbol ?loadEntityFlags\@Actor\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void loadEntityFlags(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?lovePartnerId\@Actor\@\@QEBAAEBUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const& lovePartnerId() const; // NOLINT
    /**
     * @symbol ?migrateUniqueID\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void migrateUniqueID(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?move\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void move(class Vec3 const&); // NOLINT
    /**
     * @symbol ?moveRelative\@Actor\@\@QEAAXMMMM\@Z
     */
    MCAPI void moveRelative(float, float, float, float); // NOLINT
    /**
     * @symbol ?moveTo\@Actor\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI void moveTo(class Vec3 const&, class Vec2 const&); // NOLINT
    /**
     * @symbol ?onAffectedByWaterBottle\@Actor\@\@QEAAXXZ
     */
    MCAPI void onAffectedByWaterBottle(); // NOLINT
    /**
     * @symbol ?onClimbableBlock\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool onClimbableBlock() const; // NOLINT
    /**
     * @symbol ?onOnewayCollision\@Actor\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void onOnewayCollision(class AABB const&); // NOLINT
    /**
     * @symbol ??9Actor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class Actor const&) const; // NOLINT
    /**
     * @symbol ??8Actor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Actor const&) const; // NOLINT
    /**
     * @symbol ?pickUpItem\@Actor\@\@QEAAXAEAVItemActor\@\@H\@Z
     */
    MCAPI void pickUpItem(class ItemActor&, int); // NOLINT
    /**
     * @symbol ?playMovementSound\@Actor\@\@QEAAXXZ
     */
    MCAPI void playMovementSound(); // NOLINT
    /**
     * @symbol ?playSound\@Actor\@\@QEAAXAEBVIConstBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI void playSound(class IConstBlockSource const&, enum class LevelSoundEvent, class Vec3 const&, int); // NOLINT
    /**
     * @symbol ?playSound\@Actor\@\@QEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI void playSound(enum class LevelSoundEvent, class Vec3 const&, int); // NOLINT
    /**
     * @symbol ?playSound\@Actor\@\@QEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void playSound(enum class LevelSoundEvent, class Vec3 const&, class Block const&); // NOLINT
    /**
     * @symbol ?positionAllPassengers\@Actor\@\@QEAAXXZ
     */
    MCAPI void positionAllPassengers(); // NOLINT
    /**
     * @symbol ?postSplashGameEvent\@Actor\@\@QEAAXXZ
     */
    MCAPI void postSplashGameEvent(); // NOLINT
    /**
     * @symbol ?pullInEntity\@Actor\@\@QEAA_NAEAV1\@\@Z
     */
    MCAPI bool pullInEntity(class Actor&); // NOLINT
    /**
     * @symbol ?pushBackActionEventToActionQueue\@Actor\@\@QEAAXVActionEvent\@\@\@Z
     */
    MCAPI void pushBackActionEventToActionQueue(class ActionEvent); // NOLINT
    /**
     * @symbol ?queueBBUpdateFromDefinition\@Actor\@\@QEAAXXZ
     */
    MCAPI void queueBBUpdateFromDefinition(); // NOLINT
    /**
     * @symbol ?queueBBUpdateFromValue\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void queueBBUpdateFromValue(class Vec2 const&); // NOLINT
    /**
     * @symbol ?refreshComponents\@Actor\@\@QEAAXXZ
     */
    MCAPI void refreshComponents(); // NOLINT
    /**
     * @symbol ?reload\@Actor\@\@QEAAXXZ
     */
    MCAPI void reload(); // NOLINT
    /**
     * @symbol ?removeAllEffects\@Actor\@\@QEAAXXZ
     */
    MCAPI void removeAllEffects(); // NOLINT
    /**
     * @symbol ?removeAllPassengers\@Actor\@\@QEAAX_N0\@Z
     */
    MCAPI void removeAllPassengers(bool, bool); // NOLINT
    /**
     * @symbol
     * ?removeDefinitionGroup\@Actor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeDefinitionGroup(std::string const&); // NOLINT
    /**
     * @symbol ?removeEffect\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void removeEffect(int); // NOLINT
    /**
     * @symbol ?removePersistingTrade\@Actor\@\@QEAAXXZ
     */
    MCAPI void removePersistingTrade(); // NOLINT
    /**
     * @symbol
     * ?removeTag\@Actor\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool removeTag(std::string const&); // NOLINT
    /**
     * @symbol ?resetSlideYOffset\@Actor\@\@QEAAXXZ
     */
    MCAPI void resetSlideYOffset(); // NOLINT
    /**
     * @symbol ?saveEntityFlags\@Actor\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void saveEntityFlags(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?saveLinks\@Actor\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> saveLinks() const; // NOLINT
    /**
     * @symbol
     * ?savePersistingTrade\@Actor\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI void savePersistingTrade(std::unique_ptr<class CompoundTag>, int); // NOLINT
    /**
     * @symbol
     * ?sendActorDefinitionEventTriggered\@Actor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void sendActorDefinitionEventTriggered(std::string const&); // NOLINT
    /**
     * @symbol ?sendMotionToServer\@Actor\@\@QEAAXXZ
     */
    MCAPI void sendMotionToServer(); // NOLINT
    /**
     * @symbol ?serializationSetHealth\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void serializationSetHealth(int); // NOLINT
    /**
     * @symbol ?setAABB\@Actor\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void setAABB(class AABB const&); // NOLINT
    /**
     * @symbol ?setAABBDim\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setAABBDim(class Vec2 const&); // NOLINT
    /**
     * @symbol ?setActorRendererId\@Actor\@\@QEAAXVHashedString\@\@\@Z
     */
    MCAPI void setActorRendererId(class HashedString); // NOLINT
    /**
     * @symbol ?setAutonomous\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setAutonomous(bool); // NOLINT
    /**
     * @symbol ?setBaseDefinition\@Actor\@\@QEAAXAEBUActorDefinitionIdentifier\@\@_N1\@Z
     */
    MCAPI void setBaseDefinition(struct ActorDefinitionIdentifier const&, bool, bool); // NOLINT
    /**
     * @symbol ?setBlockTarget\@Actor\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setBlockTarget(class BlockPos const&); // NOLINT
    /**
     * @symbol ?setBreakingObstruction\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setBreakingObstruction(bool); // NOLINT
    /**
     * @symbol ?setCanClimb\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setCanClimb(bool); // NOLINT
    /**
     * @symbol ?setCanFly\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setCanFly(bool); // NOLINT
    /**
     * @symbol ?setChainedDamageEffects\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setChainedDamageEffects(bool); // NOLINT
    /**
     * @symbol ?setCharged\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setCharged(bool); // NOLINT
    /**
     * @symbol ?setClimbing\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setClimbing(bool); // NOLINT
    /**
     * @symbol ?setColor\@Actor\@\@QEAAXW4PaletteColor\@\@\@Z
     */
    MCAPI void setColor(enum class PaletteColor); // NOLINT
    /**
     * @symbol ?setColor2\@Actor\@\@QEAAXW4PaletteColor\@\@\@Z
     */
    MCAPI void setColor2(enum class PaletteColor); // NOLINT
    /**
     * @symbol ?setControllingSeat\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setControllingSeat(int); // NOLINT
    /**
     * @symbol ?setDancing\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDancing(bool); // NOLINT
    /**
     * @symbol ?setDead\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDead(bool); // NOLINT
    /**
     * @symbol ?setDimension\@Actor\@\@QEAAXV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@\@Z
     */
    MCAPI void setDimension(class WeakRefT<struct SharePtrRefTraits<class Dimension>>); // NOLINT
    /**
     * @symbol ?setDoorBreaker\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDoorBreaker(bool); // NOLINT
    /**
     * @symbol ?setDoorOpener\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDoorOpener(bool); // NOLINT
    /**
     * @symbol ?setEnchanted\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setEnchanted(bool); // NOLINT
    /**
     * @symbol ?setFallDistance\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setFallDistance(float); // NOLINT
    /**
     * @symbol ?setFishingHookID\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setFishingHookID(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?setGlobal\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setGlobal(bool); // NOLINT
    /**
     * @symbol ?setHurtDir\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setHurtDir(int); // NOLINT
    /**
     * @symbol ?setHurtTime\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setHurtTime(int); // NOLINT
    /**
     * @symbol ?setInLove\@Actor\@\@QEAAXPEAV1\@\@Z
     */
    MCAPI void setInLove(class Actor*); // NOLINT
    /**
     * @symbol ?setInterpolation\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setInterpolation(bool); // NOLINT
    /**
     * @symbol ?setInvisible\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setInvisible(bool); // NOLINT
    /**
     * @symbol ?setIsExperienceDropEnabled\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setIsExperienceDropEnabled(bool); // NOLINT
    /**
     * @symbol ?setJumpDuration\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setJumpDuration(int); // NOLINT
    /**
     * @symbol ?setJumping\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setJumping(bool); // NOLINT
    /**
     * @symbol ?setLastHitBB\@Actor\@\@QEAAXAEBVVec3\@\@0\@Z
     */
    MCAPI void setLastHitBB(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?setLayingDown\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setLayingDown(bool); // NOLINT
    /**
     * @symbol ?setLeashHolder\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setLeashHolder(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?setLimitedLifetimeTicks\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setLimitedLifetimeTicks(int); // NOLINT
    /**
     * @symbol ?setMarkVariant\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setMarkVariant(int); // NOLINT
    /**
     * @symbol ?setMovedToLimbo\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setMovedToLimbo(bool); // NOLINT
    /**
     * @symbol ?setMovedToUnloadedChunk\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setMovedToUnloadedChunk(bool); // NOLINT
    /**
     * @symbol ?setMoving\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setMoving(bool); // NOLINT
    /**
     * @symbol ?setPersistent\@Actor\@\@QEAAXXZ
     */
    MCAPI void setPersistent(); // NOLINT
    /**
     * @symbol ?setPos\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPos(class Vec3 const&); // NOLINT
    /**
     * @symbol ?setPosDirectLegacy\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPosDirectLegacy(class Vec3 const&); // NOLINT
    /**
     * @symbol ?setPosPrev\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPosPrev(class Vec3 const&); // NOLINT
    /**
     * @symbol ?setPrevPosRotSetThisTick\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setPrevPosRotSetThisTick(bool); // NOLINT
    /**
     * @symbol ?setPreviousPosRot\@Actor\@\@QEAAXXZ
     */
    MCAPI void setPreviousPosRot(); // NOLINT
    /**
     * @symbol ?setResting\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setResting(bool); // NOLINT
    /**
     * @symbol ?setRotationDirectly\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRotationDirectly(class Vec2 const&); // NOLINT
    /**
     * @symbol ?setRotationPrev\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRotationPrev(class Vec2 const&); // NOLINT
    /**
     * @symbol ?setRotationPrevY\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setRotationPrevY(float); // NOLINT
    /**
     * @symbol ?setRotationWrapped\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRotationWrapped(class Vec2 const&); // NOLINT
    /**
     * @symbol ?setRotationX\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setRotationX(float); // NOLINT
    /**
     * @symbol ?setRotationY\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setRotationY(float); // NOLINT
    /**
     * @symbol ?setRuntimeID\@Actor\@\@QEAAXVActorRuntimeID\@\@\@Z
     */
    MCAPI void setRuntimeID(class ActorRuntimeID); // NOLINT
    /**
     * @symbol ?setSaddle\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setSaddle(bool); // NOLINT
    /**
     * @symbol ?setScared\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setScared(bool); // NOLINT
    /**
     * @symbol ?setShakeTime\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setShakeTime(int); // NOLINT
    /**
     * @symbol ?setSkinID\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setSkinID(int); // NOLINT
    /**
     * @symbol ?setStrength\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setStrength(int); // NOLINT
    /**
     * @symbol ?setStrengthMax\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setStrengthMax(int); // NOLINT
    /**
     * @symbol ?setStructuralIntegrity\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setStructuralIntegrity(int); // NOLINT
    /**
     * @symbol ?setStunned\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setStunned(bool); // NOLINT
    /**
     * @symbol ?setSwimmer\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setSwimmer(bool); // NOLINT
    /**
     * @symbol ?setTempted\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setTempted(bool); // NOLINT
    /**
     * @symbol ?setTradeInterest\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setTradeInterest(bool); // NOLINT
    /**
     * @symbol ?setTradingPlayer\@Actor\@\@QEAAXPEAVPlayer\@\@\@Z
     */
    MCAPI void setTradingPlayer(class Player*); // NOLINT
    /**
     * @symbol ?setUniqueID\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setUniqueID(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?setVariant\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setVariant(int); // NOLINT
    /**
     * @symbol ?setVelocity\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setVelocity(class Vec3 const&); // NOLINT
    /**
     * @symbol ?setWASDControlled\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setWASDControlled(bool); // NOLINT
    /**
     * @symbol ?setWalker\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setWalker(bool); // NOLINT
    /**
     * @symbol ?setYHeadRot\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setYHeadRot(float); // NOLINT
    /**
     * @symbol ?setYHeadRotO\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setYHeadRotO(float); // NOLINT
    /**
     * @symbol ?setYHeadRotations\@Actor\@\@QEAAXMM\@Z
     */
    MCAPI void setYHeadRotations(float, float); // NOLINT
    /**
     * @symbol ?shouldOrphan\@Actor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool shouldOrphan(class BlockSource&); // NOLINT
    /**
     * @symbol ?shouldUpdateEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool shouldUpdateEffects() const; // NOLINT
    /**
     * @symbol ?spawnEatParticles\@Actor\@\@QEAAXAEBVItemStack\@\@H\@Z
     */
    MCAPI void spawnEatParticles(class ItemStack const&, int); // NOLINT
    /**
     * @symbol ?spinAttack\@Actor\@\@QEAAXXZ
     */
    MCAPI void spinAttack(); // NOLINT
    /**
     * @symbol ?stopRiding\@Actor\@\@QEAAX_N00\@Z
     */
    MCAPI void stopRiding(bool, bool, bool); // NOLINT
    /**
     * @symbol ?teleportPassengersTo\@Actor\@\@QEAAXAEBVVec3\@\@HH\@Z
     */
    MCAPI void teleportPassengersTo(class Vec3 const&, int, int); // NOLINT
    /**
     * @symbol ?tick\@Actor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool tick(class BlockSource&); // NOLINT
    /**
     * @symbol ?transferTickingArea\@Actor\@\@QEAAXAEAVDimension\@\@\@Z
     */
    MCAPI void transferTickingArea(class Dimension&); // NOLINT
    /**
     * @symbol
     * ?tryGetEquippableSlotAllowedItems\@Actor\@\@QEBAPEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI std::vector<class ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int) const; // NOLINT
    /**
     * @symbol ?tryGetEquippableSlotForItem\@Actor\@\@QEBA?AV?$optional\@H\@std\@\@VItemDescriptor\@\@\@Z
     */
    MCAPI class std::optional<int> tryGetEquippableSlotForItem(class ItemDescriptor) const; // NOLINT
    /**
     * @symbol ?updateAnimationComponentOnServer\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateAnimationComponentOnServer(); // NOLINT
    /**
     * @symbol ?updateDescription\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateDescription(); // NOLINT
    /**
     * @symbol ?updateDimensionChunkMove\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateDimensionChunkMove(); // NOLINT
    /**
     * @symbol ?updateInvisibilityStatus\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateInvisibilityStatus(); // NOLINT
    /**
     * @symbol ?updateMolangVariables\@Actor\@\@QEAAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void updateMolangVariables(class RenderParams&); // NOLINT
    /**
     * @symbol ?updateTickingData\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateTickingData(); // NOLINT
    /**
     * @symbol ?useSaddle\@Actor\@\@QEAA_NAEAVItemStackBase\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI bool useSaddle(class ItemStackBase&, class Player*); // NOLINT
    /**
     * @symbol ?wasLastHitByPlayer\@Actor\@\@QEAA_NXZ
     */
    MCAPI bool wasLastHitByPlayer(); // NOLINT
    /**
     * @symbol ?wasLoadedFromNBTThisFrame\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool wasLoadedFromNBTThisFrame() const; // NOLINT
    /**
     * @symbol ?_moveRelative\@Actor\@\@SAXAEAVVec3\@\@MMMMM\@Z
     */
    MCAPI static void _moveRelative(class Vec3&, float, float, float, float, float); // NOLINT
    /**
     * @symbol ?buildForward\@Actor\@\@SA?AVVec3\@\@AEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static class Vec3 buildForward(struct IActorMovementProxy const&); // NOLINT
    /**
     * @symbol ?canBeginOrContinueClimbingLadder\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static bool
    canBeginOrContinueClimbingLadder(struct IActorMovementProxy const&, class IConstBlockSource const&); // NOLINT
    /**
     * @symbol
     * ?getBlockPosCurrentlyStandingOn\@Actor\@\@SA?AVBlockPos\@\@AEBVVec3\@\@VAABB\@\@AEBVIConstBlockSource\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    MCAPI static class BlockPos
    getBlockPosCurrentlyStandingOn(class Vec3 const&, class AABB, class IConstBlockSource const&, class optional_ref<class GetCollisionShapeInterface const>); // NOLINT
    /**
     * @symbol
     * ?getBlockPosCurrentlyStandingOn\@Actor\@\@SA?AVBlockPos\@\@AEBUIActorMovementProxy\@\@PEBU3\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static class BlockPos
    getBlockPosCurrentlyStandingOn(struct IActorMovementProxy const&, struct IActorMovementProxy const*, class IConstBlockSource const&); // NOLINT
    /**
     * @symbol ?getCenter\@Actor\@\@SA?AVVec3\@\@MAEBUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@M\@Z
     */
    MCAPI static class Vec3
    getCenter(float, struct AABBShapeComponent const&, struct StateVectorComponent const&, float); // NOLINT
    /**
     * @symbol
     * ?getEffect\@Actor\@\@SAPEBVMobEffectInstance\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@AEBVMobEffect\@\@\@Z
     */
    MCAPI static class MobEffectInstance const*
    getEffect(std::vector<class MobEffectInstance> const&, class MobEffect const&); // NOLINT
    /**
     * @symbol ?getInterpolatedRotation\@Actor\@\@SA?AVVec2\@\@AEBV2\@0M\@Z
     */
    MCAPI static class Vec2 getInterpolatedRotation(class Vec2 const&, class Vec2 const&, float); // NOLINT
    /**
     * @symbol ?getLiquidAABB\@Actor\@\@SA?AVAABB\@\@AEBV2\@W4MaterialType\@\@\@Z
     */
    MCAPI static class AABB getLiquidAABB(class AABB const&, enum class MaterialType); // NOLINT
    /**
     * @symbol ?getLiquidFlowStrength\@Actor\@\@SAMW4MaterialType\@\@\@Z
     */
    MCAPI static float getLiquidFlowStrength(enum class MaterialType); // NOLINT
    /**
     * @symbol ?getStatusFlag\@Actor\@\@SA_NAEBVSynchedActorData\@\@W4ActorFlags\@\@\@Z
     */
    MCAPI static bool getStatusFlag(class SynchedActorData const&, enum class ActorFlags); // NOLINT
    /**
     * @symbol ?getViewVector\@Actor\@\@SA?AVVec3\@\@AEBUIActorMovementProxy\@\@M\@Z
     */
    MCAPI static class Vec3 getViewVector(struct IActorMovementProxy const&, float); // NOLINT
    /**
     * @symbol ?getViewVector\@Actor\@\@SA?AVVec3\@\@AEBVVec2\@\@0M\@Z
     */
    MCAPI static class Vec3 getViewVector(class Vec2 const&, class Vec2 const&, float); // NOLINT
    /**
     * @symbol ?isImmersedInWater\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isImmersedInWater(struct IActorMovementProxy const&); // NOLINT
    /**
     * @symbol ?isImmobile\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isImmobile(struct IActorMovementProxy const&); // NOLINT
    /**
     * @symbol ?isInScaffolding\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isInScaffolding(struct IActorMovementProxy const&); // NOLINT
    /**
     * @symbol ?isSitting\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isSitting(struct IActorMovementProxy const&); // NOLINT
    /**
     * @symbol ?isStanding\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isStanding(struct IActorMovementProxy const&); // NOLINT
    /**
     * @symbol ?onClimbableBlock\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool onClimbableBlock(struct IActorMovementProxy const&); // NOLINT
    /**
     * @symbol ?onClimbableBlock\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static bool onClimbableBlock(struct IActorMovementProxy const&, class IConstBlockSource const&); // NOLINT
    /**
     * @symbol ?tryGetFromComponent\@Actor\@\@SAPEAV1\@AEAVActorOwnerComponent\@\@_N\@Z
     */
    MCAPI static class Actor* tryGetFromComponent(class ActorOwnerComponent&, bool); // NOLINT
    /**
     * @symbol ?tryGetFromComponent\@Actor\@\@SAPEBV1\@AEBVActorOwnerComponent\@\@_N\@Z
     */
    MCAPI static class Actor const* tryGetFromComponent(class ActorOwnerComponent const&, bool); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@Actor\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Actor* tryGetFromEntity(class EntityContext&, bool); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@Actor\@\@SAPEBV1\@AEBVEntityContext\@\@_N\@Z
     */
    MCAPI static class Actor const* tryGetFromEntity(class EntityContext const&, bool); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@Actor\@\@SAPEAV1\@V?$StackRefResultT\@UEntityRefTraits\@\@\@\@_N\@Z
     */
    MCAPI static class Actor* tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@Actor\@\@SAPEAV1\@AEBVStrictEntityContext\@\@AEAVEntityRegistry\@\@_N\@Z
     */
    MCAPI static class Actor* tryGetFromEntity(class StrictEntityContext const&, class EntityRegistry&, bool); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_assignActorMovementProxy\@Actor\@\@IEAAXV?$not_null\@V?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@\@gsl\@\@\@Z
     */
    MCAPI void
        _assignActorMovementProxy(class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>>); // NOLINT
    /**
     * @symbol ?_drop\@Actor\@\@IEAAPEBVItemActor\@\@AEBVItemStack\@\@_N\@Z
     */
    MCAPI class ItemActor const* _drop(class ItemStack const&, bool); // NOLINT
    /**
     * @symbol
     * ?_getAllEffectsNonConst\@Actor\@\@IEAAAEAV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobEffectInstance>& _getAllEffectsNonConst(); // NOLINT
    /**
     * @symbol ?_initializeMaxAutoStep\@Actor\@\@IEAAXM\@Z
     */
    MCAPI void _initializeMaxAutoStep(float); // NOLINT
    /**
     * @symbol ?_isDeathLootAllowed\@Actor\@\@IEBA_NXZ
     */
    MCAPI bool _isDeathLootAllowed() const; // NOLINT
    /**
     * @symbol ?_isHeadInWater\@Actor\@\@IEBA_NXZ
     */
    MCAPI bool _isHeadInWater() const; // NOLINT
    /**
     * @symbol
     * ?_setArmorContainer\@Actor\@\@IEAAXV?$unique_ptr\@VSimpleContainer\@\@U?$default_delete\@VSimpleContainer\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _setArmorContainer(std::unique_ptr<class SimpleContainer>); // NOLINT
    /**
     * @symbol ?_setDimensionTransitionComponent\@Actor\@\@IEAAXV?$AutomaticID\@VDimension\@\@H\@\@0H\@Z
     */
    MCAPI void _setDimensionTransitionComponent(
        class AutomaticID<class Dimension, int>,
        class AutomaticID<class Dimension, int>,
        int
    ); // NOLINT
    /**
     * @symbol
     * ?_setHandContainer\@Actor\@\@IEAAXV?$unique_ptr\@VSimpleContainer\@\@U?$default_delete\@VSimpleContainer\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _setHandContainer(std::unique_ptr<class SimpleContainer>); // NOLINT
    /**
     * @symbol ?_setHandContainerItem\@Actor\@\@IEAAXAEBVItemStack\@\@W4HandSlot\@\@\@Z
     */
    MCAPI void _setHandContainerItem(class ItemStack const&, enum class HandSlot); // NOLINT
    /**
     * @symbol ?_setHeightOffset\@Actor\@\@IEAAXM\@Z
     */
    MCAPI void _setHeightOffset(float); // NOLINT
    /**
     * @symbol ?_setPos\@Actor\@\@IEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _setPos(class Vec3 const&); // NOLINT
    /**
     * @symbol ?_setPosPrev\@Actor\@\@IEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _setPosPrev(class Vec3 const&); // NOLINT
    /**
     * @symbol ?enableAutoSendPosRot\@Actor\@\@IEAAX_N\@Z
     */
    MCAPI void enableAutoSendPosRot(bool); // NOLINT
    /**
     * @symbol ?updateWaterState\@Actor\@\@IEAAXXZ
     */
    MCAPI void updateWaterState(); // NOLINT
    /**
     * @symbol ?getBlockWhenClimbing\@Actor\@\@KAAEBVBlock\@\@AEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static class Block const& getBlockWhenClimbing(struct IActorMovementProxy const&); // NOLINT

    // private:
    /**
     * @symbol ?_addActorBuiltInComponents\@Actor\@\@AEAA?AUBuiltInActorComponents\@\@XZ
     */
    MCAPI struct BuiltInActorComponents _addActorBuiltInComponents(); // NOLINT
    /**
     * @symbol ?_addActorNonBuiltInComponents\@Actor\@\@AEAAXXZ
     */
    MCAPI void _addActorNonBuiltInComponents(); // NOLINT
    /**
     * @symbol ?_damageNearbyMobs\@Actor\@\@AEAAXXZ
     */
    MCAPI void _damageNearbyMobs(); // NOLINT
    /**
     * @symbol ?_defaultInitEquipmentDropChances\@Actor\@\@AEAAXXZ
     */
    MCAPI void _defaultInitEquipmentDropChances(); // NOLINT
    /**
     * @symbol ?_initAliasProperties\@Actor\@\@AEAAXXZ
     */
    MCAPI void _initAliasProperties(); // NOLINT
    /**
     * @symbol ?_initializeLeashRopeSystem\@Actor\@\@AEAAXPEAV1\@\@Z
     */
    MCAPI void _initializeLeashRopeSystem(class Actor*); // NOLINT
    /**
     * @symbol ?_isItemStackNetManagerEnabled\@Actor\@\@AEBA_NXZ
     */
    MCAPI bool _isItemStackNetManagerEnabled() const; // NOLINT
    /**
     * @symbol ?_moveHitboxTo\@Actor\@\@AEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _moveHitboxTo(class Vec3 const&); // NOLINT
    /**
     * @symbol ?_serializeComponents\@Actor\@\@AEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _serializeComponents(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?_setupServerAnimationComponent\@Actor\@\@AEAAXXZ
     */
    MCAPI void _setupServerAnimationComponent(); // NOLINT
    /**
     * @symbol ?_tryPlantWitherRose\@Actor\@\@AEAAXXZ
     */
    MCAPI void _tryPlantWitherRose(); // NOLINT
    /**
     * @symbol ?_updateComposition\@Actor\@\@AEAAX_N\@Z
     */
    MCAPI void _updateComposition(bool); // NOLINT

protected:
private:
    /**
     * @symbol ?DAMAGE_NEARBY_MOBS_DURATION\@Actor\@\@0HB
     */
    MCAPI static int const DAMAGE_NEARBY_MOBS_DURATION; // NOLINT
    /**
     * @symbol ?DEFAULT_MAX_DISTANCE_OPTIMIZATION\@Actor\@\@0MB
     */
    MCAPI static float const DEFAULT_MAX_DISTANCE_OPTIMIZATION; // NOLINT
    /**
     * @symbol ?DEFAULT_MAX_TICK_DELAY_OPTIMIZATION\@Actor\@\@0_KB
     */
    MCAPI static unsigned __int64 const DEFAULT_MAX_TICK_DELAY_OPTIMIZATION; // NOLINT
};
