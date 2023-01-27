/**
 * @file  Actor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../VehicleUtils.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "MobEffectInstance.hpp"
#include "Tick.hpp"
#include "ActorDamageSource.hpp"
#include "VehicleUtils.hpp"
#include "Vec3.hpp"
class Actor;
class Player;
class NetworkIdentifier;
class CompoundTag;
class UserEntityIdentifierComponent;
class Vec2;
class BlockInstance;
class ItemStack;
class BlockSource;
class Biome;

enum class FaceID : char;

#undef BEFORE_EXTRA

/**
 * @brief MC class Actor.
 *
 */
class Actor {

#define AFTER_EXTRA
// Add new members to class
public:
    enum class InitializationMethod;

    LIAPI std::string getTypeName() const;
    LIAPI Vec3 getFeetPosition() const;
    LIAPI BlockSource* getBlockSource() const;
    LIAPI Vec2* getDirection() const;
    LIAPI ActorUniqueID getActorUniqueId() const;
    LIAPI Vec3 getCameraPos() const;
    LIAPI Tick* getLastTick() const;
    LIAPI std::vector<std::string> getAllTags();
    LIAPI BlockInstance getBlockFromViewVector(bool includeLiquid = false, bool solidOnly = false, float maxDistance = 5.25f, bool ignoreBorderBlocks = true, bool fullOnly = false) const;
    LIAPI BlockInstance getBlockFromViewVector(FaceID& face, bool includeLiquid = false, bool solidOnly = false, float maxDistance = 5.25f, bool ignoreBorderBlocks = true, bool fullOnly = false) const;
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent() const;
    LIAPI Actor* getActorFromViewVector(float maxDistance);
    LIAPI BlockPos getBlockPos();
    LIAPI BlockInstance getBlockStandingOn() const;

    LIAPI bool isSimulatedPlayer() const;
    LIAPI bool isPlayer(bool allowSimulatedPlayer = true) const;
    LIAPI bool isItemActor() const;
    LIAPI bool isOnGround() const;
    LIAPI bool setOnFire(int time, bool isEffect);
    LIAPI bool stopFire();
    LIAPI bool hasTag(const string& tag);
    LIAPI bool hurtEntity(float damage, ActorDamageCause damageCause = ActorDamageCause::Override);
    LIAPI bool teleport(Vec3 to, int dimID, float x, float y);
    LIAPI bool teleport(Vec3 pos,int dimid);
    LIAPI ItemStack* getHandSlot();
    LIAPI bool rename(const string& name);
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI bool refreshActorData();
    LIAPI bool addEffect(MobEffect::EffectType type, int tick, int level, bool ambient = false, bool showParticles = true, bool showAnimation = false);
    LIAPI float quickEvalMolangScript(const string& expression);
    LIAPI Biome* getBiome();
    //LIAPI Json::Value quickEvalMolangScriptAsJson(const string& expression);

    inline Vec3 getPos()
    {
        return getPosition();
    }
    inline Vec3 getPosOld()
    {
        return getPosPrev();
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOR
public:
    class Actor& operator=(class Actor const &) = delete;
    Actor(class Actor const &) = delete;
    Actor() = delete;
#endif

public:
    /**
     * @hash   658206921
     * @vftbl  0
     * @symbol  ?getStatusFlag\@Actor\@\@UEBA_NW4ActorFlags\@\@\@Z
     */
    virtual bool getStatusFlag(enum class ActorFlags) const;
    /**
     * @hash   -371271140
     * @vftbl  1
     * @symbol  ?setStatusFlag\@Actor\@\@UEAAXW4ActorFlags\@\@_N\@Z
     */
    virtual void setStatusFlag(enum class ActorFlags, bool);
    /**
     * @hash   -1329336549
     * @vftbl  2
     * @symbol  ?hasComponent\@Actor\@\@UEBA_NAEBVHashedString\@\@\@Z
     */
    virtual bool hasComponent(class HashedString const &) const;
    /**
     * @hash   -164718258
     * @vftbl  3
     * @symbol  ?getLastHurtByMob\@Actor\@\@UEAAPEAVMob\@\@XZ
     */
    virtual class Mob * getLastHurtByMob();
    /**
     * @hash   -1643714156
     * @vftbl  4
     * @symbol  ?setLastHurtByMob\@Actor\@\@UEAAXPEAVMob\@\@\@Z
     */
    virtual void setLastHurtByMob(class Mob *);
    /**
     * @hash   1670982202
     * @vftbl  5
     * @symbol  ?getLastHurtByPlayer\@Actor\@\@UEAAPEAVPlayer\@\@XZ
     */
    virtual class Player * getLastHurtByPlayer();
    /**
     * @hash   1715852494
     * @vftbl  6
     * @symbol  ?setLastHurtByPlayer\@Actor\@\@UEAAXPEAVPlayer\@\@\@Z
     */
    virtual void setLastHurtByPlayer(class Player *);
    /**
     * @hash   -1199915803
     * @vftbl  7
     * @symbol  ?getLastHurtMob\@Actor\@\@UEAAPEAVMob\@\@XZ
     */
    virtual class Mob * getLastHurtMob();
    /**
     * @hash   281246512
     * @vftbl  8
     * @symbol  ?setLastHurtMob\@Actor\@\@UEAAXPEAV1\@\@Z
     */
    virtual void setLastHurtMob(class Actor *);
    /**
     * @hash   979365551
     * @vftbl  9
     * @symbol  ?outOfWorld\@Actor\@\@UEAAXXZ
     */
    virtual void outOfWorld();
    /**
     * @hash   704330761
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   1416212484
     * @vftbl  11
     * @symbol  ?reloadHardcodedClient\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   131060796
     * @vftbl  12
     * @symbol  ?initializeComponents\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -691497531
     * @vftbl  13
     * @symbol  ?reloadComponents\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   264487440
     * @vftbl  14
     * @symbol  ?_serverInitItemStackIds\@Actor\@\@MEAAXXZ
     */
    virtual void _serverInitItemStackIds();
    /**
     * @hash   1099438822
     * @vftbl  15
     * @symbol  ?_doInitialMove\@Actor\@\@MEAAXXZ
     */
    virtual void _doInitialMove();
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Actor();
    /**
     * @hash   1989692192
     * @vftbl  17
     * @symbol  ?resetUserPos\@Actor\@\@UEAAX_N\@Z
     */
    virtual void resetUserPos(bool);
    /**
     * @hash   -1382794435
     * @vftbl  18
     * @symbol  ?getOwnerEntityType\@Actor\@\@UEAA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getOwnerEntityType();
    /**
     * @hash   330186502
     * @vftbl  19
     * @symbol  ?remove\@Actor\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @hash   1958181918
     * @vftbl  20
     * @symbol  ?setPos\@Actor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void setPos(class Vec3 const &);
    /**
     * @hash   1636790971
     * @vftbl  21
     * @symbol  ?isRuntimePredictedMovementEnabled\@Actor\@\@UEBA_NXZ
     */
    virtual bool isRuntimePredictedMovementEnabled() const;
    /**
     * @hash   327111485
     * @vftbl  22
     * @symbol  ?getPredictedMovementValues\@Actor\@\@UEBAAEBUPredictedMovementValues\@\@XZ
     */
    virtual struct PredictedMovementValues const & getPredictedMovementValues() const;
    /**
     * @hash   1187065832
     * @vftbl  23
     * @symbol  ?getPosition\@Actor\@\@UEBAAEBVVec3\@\@XZ
     */
    virtual class Vec3 const & getPosition() const;
    /**
     * @hash   -1781510054
     * @vftbl  24
     * @symbol  ?getPosPrev\@Actor\@\@UEBAAEBVVec3\@\@XZ
     */
    virtual class Vec3 const & getPosPrev() const;
    /**
     * @hash   1344423403
     * @vftbl  25
     * @symbol  ?getPosExtrapolated\@Actor\@\@UEBA?BVVec3\@\@M\@Z
     */
    virtual class Vec3 const getPosExtrapolated(float) const;
    /**
     * @hash   1038134454
     * @vftbl  26
     * @symbol  ?getAttachPos\@Actor\@\@UEBA?AVVec3\@\@W4ActorLocation\@\@M\@Z
     */
    virtual class Vec3 getAttachPos(enum class ActorLocation, float) const;
    /**
     * @hash   -233564298
     * @vftbl  27
     * @symbol  ?getFiringPos\@Actor\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getFiringPos() const;
    /**
     * @hash   -1144473633
     * @vftbl  28
     * @symbol  ?move\@Actor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void move(class Vec3 const &);
    /**
     * @hash   -1253079304
     * @vftbl  29
     * @symbol  ?move\@Actor\@\@UEBAXAEAUIActorMovementProxy\@\@AEBVVec3\@\@\@Z
     */
    virtual void move(struct IActorMovementProxy &, class Vec3 const &) const;
    /**
     * @hash   -740433634
     * @vftbl  30
     * @symbol  ?getInterpolatedRidingPosition\@Actor\@\@UEBA?AVVec3\@\@M\@Z
     */
    virtual class Vec3 getInterpolatedRidingPosition(float) const;
    /**
     * @hash   -660388997
     * @vftbl  31
     * @symbol  ?getInterpolatedBodyRot\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyRot(float) const;
    /**
     * @hash   807823513
     * @vftbl  32
     * @symbol  ?getInterpolatedHeadRot\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedHeadRot(float) const;
    /**
     * @hash   1253485443
     * @vftbl  33
     * @symbol  ?getInterpolatedBodyYaw\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyYaw(float) const;
    /**
     * @hash   1667040950
     * @vftbl  34
     * @symbol  ?getYawSpeedInDegreesPerSecond\@Actor\@\@UEBAMXZ
     */
    virtual float getYawSpeedInDegreesPerSecond() const;
    /**
     * @hash   -1648720189
     * @vftbl  35
     * @symbol  ?getInterpolatedWalkAnimSpeed\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedWalkAnimSpeed(float) const;
    /**
     * @hash   202309081
     * @vftbl  36
     * @symbol  ?getInterpolatedRidingOffset\@Actor\@\@UEBA?AVVec3\@\@MH\@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;
    /**
     * @hash   847395412
     * @vftbl  37
     * @symbol  ?resetInterpolated\@Actor\@\@UEAAXXZ
     */
    virtual void resetInterpolated();
    /**
     * @hash   226325911
     * @vftbl  38
     * @symbol  ?updateEntityInside\@Actor\@\@UEAAXAEBVAABB\@\@\@Z
     */
    virtual void updateEntityInside(class AABB const &);
    /**
     * @hash   -638339590
     * @vftbl  39
     * @symbol  ?updateEntityInside\@Actor\@\@UEAAXXZ
     */
    virtual void updateEntityInside();
    /**
     * @hash   1854605302
     * @vftbl  40
     * @symbol  ?isFireImmune\@Actor\@\@UEBA_NXZ
     */
    virtual bool isFireImmune() const;
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -1128363245
     * @vftbl  42
     * @symbol  ?blockedByShield\@Actor\@\@UEAAXAEBVActorDamageSource\@\@AEAV1\@\@Z
     */
    virtual void blockedByShield(class ActorDamageSource const &, class Actor &);
    /**
     * @hash   -582229211
     * @vftbl  43
     * @symbol  ?canDisableShield\@Actor\@\@UEAA_NXZ
     */
    virtual bool canDisableShield();
    /**
     * @hash   988834210
     * @vftbl  44
     * @symbol  ?teleportTo\@Actor\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @hash   1479071973
     * @vftbl  45
     * @symbol  ?tryTeleportTo\@Actor\@\@UEAA_NAEBVVec3\@\@_N1HH\@Z
     */
    virtual bool tryTeleportTo(class Vec3 const &, bool, bool, int, int);
    /**
     * @hash   -1496309769
     * @vftbl  46
     * @symbol  ?chorusFruitTeleport\@Actor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void chorusFruitTeleport(class Vec3 const &);
    /**
     * @hash   2119015939
     * @vftbl  47
     * @symbol  ?lerpMotion\@Actor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const &);
    /**
     * @hash   1154062104
     * @vftbl  48
     * @symbol  ?tryCreateAddActorPacket\@Actor\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @hash   -1858630058
     * @vftbl  49
     * @symbol  ?normalTick\@Actor\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   190561264
     * @vftbl  50
     * @symbol  ?baseTick\@Actor\@\@UEAAXXZ
     */
    virtual void baseTick();
    /**
     * @hash   -591101639
     * @vftbl  51
     * @symbol  ?passengerTick\@Actor\@\@UEAAXXZ
     */
    virtual void passengerTick();
    /**
     * @hash   -426922538
     * @vftbl  52
     * @symbol  ?positionPassenger\@Actor\@\@UEAAXAEAV1\@M\@Z
     */
    virtual void positionPassenger(class Actor &, float);
    /**
     * @hash   1310236628
     * @vftbl  53
     * @symbol  ?startRiding\@Actor\@\@UEAA_NAEAV1\@\@Z
     */
    virtual bool startRiding(class Actor &);
    /**
     * @hash   1108381844
     * @vftbl  54
     * @symbol  ?addPassenger\@Actor\@\@UEAAXAEAV1\@\@Z
     */
    virtual void addPassenger(class Actor &);
    /**
     * @hash   -41112704
     * @vftbl  55
     * @symbol  ?flagPassengerToRemove\@Actor\@\@UEAAXAEAV1\@\@Z
     */
    virtual void flagPassengerToRemove(class Actor &);
    /**
     * @vftbl  56
     * @symbol  ?getExitTip\@Actor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@W4InputMode\@\@W4NewInteractionModel\@\@\@Z
     */
    virtual std::string getExitTip(std::string const &, enum class InputMode, enum class NewInteractionModel) const;
    /**
     * @hash   -1979032488
     * @vftbl  57
     * @symbol  ?getEntityLocNameString\@Actor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getEntityLocNameString() const;
    /**
     * @hash   -44300417
     * @vftbl  58
     * @symbol  ?intersects\@Actor\@\@UEBA_NAEBVVec3\@\@0\@Z
     */
    virtual bool intersects(class Vec3 const &, class Vec3 const &) const;
    /**
     * @hash   1665338796
     * @vftbl  59
     * @symbol  ?isInWall\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInWall() const;
    /**
     * @hash   -1413795146
     * @vftbl  60
     * @symbol  ?isInvisible\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInvisible() const;
    /**
     * @hash   -1657989355
     * @vftbl  61
     * @symbol  ?canShowNameTag\@Actor\@\@UEBA_NXZ
     */
    virtual bool canShowNameTag() const;
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @hash   439974965
     * @vftbl  63
     * @symbol  ?setNameTagVisible\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setNameTagVisible(bool);
    /**
     * @hash   -2143403588
     * @vftbl  64
     * @symbol  ?getNameTag\@Actor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getNameTag() const;
    /**
     * @hash   -330891468
     * @vftbl  65
     * @symbol  ?getNameTagAsHash\@Actor\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getNameTagAsHash() const;
    /**
     * @hash   686101998
     * @vftbl  66
     * @symbol  ?getFormattedNameTag\@Actor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @hash   1524872329
     * @vftbl  67
     * @symbol  ?filterFormattedNameTag\@Actor\@\@UEAAXAEBVUIProfanityContext\@\@\@Z
     */
    virtual void filterFormattedNameTag(class UIProfanityContext const &);
    /**
     * @hash   -1920992323
     * @vftbl  68
     * @symbol  ?setNameTag\@Actor\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setNameTag(std::string const &);
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @hash   -1497554608
     * @vftbl  70
     * @symbol  ?setScoreTag\@Actor\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setScoreTag(std::string const &);
    /**
     * @hash   2070819089
     * @vftbl  71
     * @symbol  ?getScoreTag\@Actor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getScoreTag() const;
    /**
     * @hash   2133720363
     * @vftbl  72
     * @symbol  ?isInWater\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInWater() const;
    /**
     * @hash   742952701
     * @vftbl  73
     * @symbol  ?hasEnteredWater\@Actor\@\@UEBA_NXZ
     */
    virtual bool hasEnteredWater() const;
    /**
     * @hash   439564263
     * @vftbl  74
     * @symbol  ?isInLava\@Actor\@\@UEBA_NAEBVIConstBlockSource\@\@\@Z
     */
    virtual bool isInLava(class IConstBlockSource const &) const;
    /**
     * @hash   -165636300
     * @vftbl  75
     * @symbol  ?isUnderLiquid\@Actor\@\@UEBA_NW4MaterialType\@\@\@Z
     */
    virtual bool isUnderLiquid(enum class MaterialType) const;
    /**
     * @hash   1469869644
     * @vftbl  76
     * @symbol  ?isOverWater\@Actor\@\@UEBA_NXZ
     */
    virtual bool isOverWater() const;
    /**
     * @hash   -1578354017
     * @vftbl  77
     * @symbol  ?setBlockMovementSlowdownMultiplier\@Actor\@\@UEAAXAEBVBlockLegacy\@\@AEBVVec3\@\@\@Z
     */
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /**
     * @hash   -866761085
     * @vftbl  78
     * @symbol  ?resetBlockMovementSlowdownMultiplier\@Actor\@\@UEAAXXZ
     */
    virtual void resetBlockMovementSlowdownMultiplier();
    /**
     * @hash   317310359
     * @vftbl  79
     * @symbol  ?getCameraOffset\@Actor\@\@UEBAMXZ
     */
    virtual float getCameraOffset() const;
    /**
     * @hash   -132246325
     * @vftbl  80
     * @symbol  ?getShadowHeightOffs\@Actor\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @hash   1203729921
     * @vftbl  81
     * @symbol  ?getShadowRadius\@Actor\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @hash   -1446015603
     * @vftbl  82
     * @symbol  ?getHeadLookVector\@Actor\@\@UEBA?AVVec3\@\@M\@Z
     */
    virtual class Vec3 getHeadLookVector(float) const;
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @hash   -1354851868
     * @vftbl  84
     * @symbol  ?canSee\@Actor\@\@UEBA_NAEBV1\@\@Z
     */
    virtual bool canSee(class Actor const &) const;
    /**
     * @hash   -847249942
     * @vftbl  85
     * @symbol  ?canSee\@Actor\@\@UEBA_NAEBVVec3\@\@\@Z
     */
    virtual bool canSee(class Vec3 const &) const;
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @hash   303016814
     * @vftbl  87
     * @symbol  ?isSkyLit\@Actor\@\@UEAA_NM\@Z
     */
    virtual bool isSkyLit(float);
    /**
     * @vftbl  88
     * @symbol  ?getBrightness\@Actor\@\@UEBAMMAEBVIConstBlockSource\@\@\@Z
     */
    virtual float getBrightness(float, class IConstBlockSource const &) const;
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @hash   -2030883773
     * @vftbl  90
     * @symbol  ?playerTouch\@Actor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @hash   -2124635862
     * @vftbl  91
     * @symbol  ?onAboveBubbleColumn\@Actor\@\@UEAAX_N\@Z
     */
    virtual void onAboveBubbleColumn(bool);
    /**
     * @hash   -377194259
     * @vftbl  92
     * @symbol  ?onInsideBubbleColumn\@Actor\@\@UEAAX_N\@Z
     */
    virtual void onInsideBubbleColumn(bool);
    /**
     * @hash   1995864291
     * @vftbl  93
     * @symbol  ?isImmobile\@Actor\@\@UEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @hash   1507034258
     * @vftbl  94
     * @symbol  ?isSilent\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSilent() const;
    /**
     * @hash   1496972120
     * @vftbl  95
     * @symbol  ?isSilentObserver\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSilentObserver() const;
    /**
     * @hash   1801133897
     * @vftbl  96
     * @symbol  ?isPickable\@Actor\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @hash   -2012074440
     * @vftbl  98
     * @symbol  ?isSleeping\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSleeping() const;
    /**
     * @hash   666251885
     * @vftbl  99
     * @symbol  ?setSleeping\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setSleeping(bool);
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @hash   1922753978
     * @vftbl  101
     * @symbol  ?setSneaking\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setSneaking(bool);
    /**
     * @hash   413937922
     * @vftbl  102
     * @symbol  ?isBlocking\@Actor\@\@UEBA_NXZ
     */
    virtual bool isBlocking() const;
    /**
     * @hash   -1170305070
     * @vftbl  103
     * @symbol  ?isDamageBlocked\@Actor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /**
     * @hash   531317350
     * @vftbl  104
     * @symbol  ?isAlive\@Actor\@\@UEBA_NXZ
     */
    virtual bool isAlive() const;
    /**
     * @hash   398184082
     * @vftbl  105
     * @symbol  ?isOnFire\@Actor\@\@UEBA_NXZ
     */
    virtual bool isOnFire() const;
    /**
     * @hash   -1023214356
     * @vftbl  106
     * @symbol  ?isOnHotBlock\@Actor\@\@UEBA_NXZ
     */
    virtual bool isOnHotBlock() const;
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @hash   -168072240
     * @vftbl  108
     * @symbol  ?isSurfaceMob\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSurfaceMob() const;
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   747392708
     * @vftbl  111
     * @symbol  ?isRemotePlayer\@Actor\@\@UEBA_NXZ
     */
    virtual bool isRemotePlayer() const;
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   -428016005
     * @vftbl  113
     * @symbol  ?isAffectedByWaterBottle\@Actor\@\@UEBA_NXZ
     */
    virtual bool isAffectedByWaterBottle() const;
    /**
     * @hash   650110700
     * @vftbl  114
     * @symbol  ?canAttack\@Actor\@\@UEBA_NPEAV1\@_N\@Z
     */
    virtual bool canAttack(class Actor *, bool) const;
    /**
     * @hash   -1794240954
     * @vftbl  115
     * @symbol  ?setTarget\@Actor\@\@UEAAXPEAV1\@\@Z
     */
    virtual void setTarget(class Actor *);
    /**
     * @hash   73422723
     * @vftbl  116
     * @symbol  ?isValidTarget\@Actor\@\@UEBA_NPEAV1\@\@Z
     */
    virtual bool isValidTarget(class Actor *) const;
    /**
     * @hash   -264106950
     * @vftbl  117
     * @symbol  ?attack\@Actor\@\@UEAA_NAEAV1\@AEBW4ActorDamageCause\@\@\@Z
     */
    virtual bool attack(class Actor &, enum class ActorDamageCause const &);
    /**
     * @hash   1496874581
     * @vftbl  118
     * @symbol  ?performRangedAttack\@Actor\@\@UEAAXAEAV1\@M\@Z
     */
    virtual void performRangedAttack(class Actor &, float);
    /**
     * @hash   -2020860963
     * @vftbl  119
     * @symbol  ?getEquipmentCount\@Actor\@\@UEBAHXZ
     */
    virtual int getEquipmentCount() const;
    /**
     * @hash   -220478806
     * @vftbl  120
     * @symbol  ?setOwner\@Actor\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID);
    /**
     * @hash   497261936
     * @vftbl  121
     * @symbol  ?setSitting\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool);
    /**
     * @hash   -1422058602
     * @vftbl  122
     * @symbol  ?onTame\@Actor\@\@UEAAXXZ
     */
    virtual void onTame();
    /**
     * @hash   1697770515
     * @vftbl  123
     * @symbol  ?onFailedTame\@Actor\@\@UEAAXXZ
     */
    virtual void onFailedTame();
    /**
     * @hash   -623145075
     * @vftbl  124
     * @symbol  ?getInventorySize\@Actor\@\@UEBAHXZ
     */
    virtual int getInventorySize() const;
    /**
     * @hash   547189729
     * @vftbl  125
     * @symbol  ?getEquipSlots\@Actor\@\@UEBAHXZ
     */
    virtual int getEquipSlots() const;
    /**
     * @hash   -1552319648
     * @vftbl  126
     * @symbol  ?getChestSlots\@Actor\@\@UEBAHXZ
     */
    virtual int getChestSlots() const;
    /**
     * @hash   585533756
     * @vftbl  127
     * @symbol  ?setStanding\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setStanding(bool);
    /**
     * @hash   1145618902
     * @vftbl  128
     * @symbol  ?canPowerJump\@Actor\@\@UEBA_NXZ
     */
    virtual bool canPowerJump() const;
    /**
     * @hash   -198284635
     * @vftbl  129
     * @symbol  ?setCanPowerJump\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setCanPowerJump(bool);
    /**
     * @hash   801387905
     * @vftbl  130
     * @symbol  ?isEnchanted\@Actor\@\@UEBA_NXZ
     */
    virtual bool isEnchanted() const;
    /**
     * @hash   168024784
     * @vftbl  131
     * @symbol  ?vehicleLanded\@Actor\@\@UEAAXAEBVVec3\@\@0\@Z
     */
    virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /**
     * @hash   271438780
     * @vftbl  132
     * @symbol  ?shouldRender\@Actor\@\@UEBA_NXZ
     */
    virtual bool shouldRender() const;
    /**
     * @hash   1894947309
     * @vftbl  133
     * @symbol  ?playAmbientSound\@Actor\@\@UEAAXXZ
     */
    virtual void playAmbientSound();
    /**
     * @hash   -833728337
     * @vftbl  134
     * @symbol  ?getAmbientSound\@Actor\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
    /**
     * @hash   1015110051
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@Actor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   1774704113
     * @vftbl  136
     * @symbol  ?getBlockDamageCause\@Actor\@\@UEBA?AW4ActorDamageCause\@\@AEBVBlock\@\@\@Z
     */
    virtual enum class ActorDamageCause getBlockDamageCause(class Block const &) const;
    /**
     * @hash   1242034978
     * @vftbl  137
     * @symbol  ?animateHurt\@Actor\@\@UEAAXXZ
     */
    virtual void animateHurt();
    /**
     * @hash   -1885424757
     * @vftbl  138
     * @symbol  ?doFireHurt\@Actor\@\@UEAA_NH\@Z
     */
    virtual bool doFireHurt(int);
    /**
     * @hash   2047690202
     * @vftbl  139
     * @symbol  ?onLightningHit\@Actor\@\@UEAAXXZ
     */
    virtual void onLightningHit();
    /**
     * @hash   -68745378
     * @vftbl  140
     * @symbol  ?onBounceStarted\@Actor\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
     * @hash   1553874479
     * @vftbl  141
     * @symbol  ?feed\@Actor\@\@UEAAXH\@Z
     */
    virtual void feed(int);
    /**
     * @hash   1522131809
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@Actor\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @hash   991719523
     * @vftbl  143
     * @symbol  ?getPickRadius\@Actor\@\@UEAAMXZ
     */
    virtual float getPickRadius();
    /**
     * @hash   1213285143
     * @vftbl  144
     * @symbol  ?getActorRendererId\@Actor\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const & getActorRendererId() const;
    /**
     * @hash   495148641
     * @vftbl  145
     * @symbol  ?spawnAtLocation\@Actor\@\@UEAAPEAVItemActor\@\@HH\@Z
     */
    virtual class ItemActor * spawnAtLocation(int, int);
    /**
     * @hash   -190360895
     * @vftbl  146
     * @symbol  ?spawnAtLocation\@Actor\@\@UEAAPEAVItemActor\@\@HHM\@Z
     */
    virtual class ItemActor * spawnAtLocation(int, int, float);
    /**
     * @hash   756383375
     * @vftbl  147
     * @symbol  ?spawnAtLocation\@Actor\@\@UEAAPEAVItemActor\@\@AEBVItemStack\@\@M\@Z
     */
    virtual class ItemActor * spawnAtLocation(class ItemStack const &, float);
    /**
     * @hash   -1904452788
     * @vftbl  148
     * @symbol  ?despawn\@Actor\@\@UEAAXXZ
     */
    virtual void despawn();
    /**
     * @hash   -871419104
     * @vftbl  149
     * @symbol  ?killed\@Actor\@\@UEAAXAEAV1\@\@Z
     */
    virtual void killed(class Actor &);
    /**
     * @hash   224233417
     * @vftbl  150
     * @symbol  ?awardKillScore\@Actor\@\@UEAAXAEAV1\@H\@Z
     */
    virtual void awardKillScore(class Actor &, int);
    /**
     * @hash   -2002644058
     * @vftbl  151
     * @symbol  ?setArmor\@Actor\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @hash   -1720564073
     * @vftbl  152
     * @symbol  ?getArmor\@Actor\@\@UEBAAEBVItemStack\@\@W4ArmorSlot\@\@\@Z
     */
    virtual class ItemStack const & getArmor(enum class ArmorSlot) const;
    /**
     * @hash   -2068509208
     * @vftbl  153
     * @symbol  ?getAllArmor\@Actor\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const *> getAllArmor() const;
    /**
     * @hash   -1374966931
     * @vftbl  154
     * @symbol  ?getArmorMaterialTypeInSlot\@Actor\@\@UEBA?AW4ArmorMaterialType\@\@W4ArmorSlot\@\@\@Z
     */
    virtual enum class ArmorMaterialType getArmorMaterialTypeInSlot(enum class ArmorSlot) const;
    /**
     * @hash   116696126
     * @vftbl  155
     * @symbol  ?getArmorMaterialTextureTypeInSlot\@Actor\@\@UEBA?AW4ArmorTextureType\@\@W4ArmorSlot\@\@\@Z
     */
    virtual enum class ArmorTextureType getArmorMaterialTextureTypeInSlot(enum class ArmorSlot) const;
    /**
     * @hash   -1502118472
     * @vftbl  156
     * @symbol  ?getArmorColorInSlot\@Actor\@\@UEBAMW4ArmorSlot\@\@H\@Z
     */
    virtual float getArmorColorInSlot(enum class ArmorSlot, int) const;
    /**
     * @hash   -558027682
     * @vftbl  157
     * @symbol  ?getEquippedSlot\@Actor\@\@UEBAAEBVItemStack\@\@W4EquipmentSlot\@\@\@Z
     */
    virtual class ItemStack const & getEquippedSlot(enum class EquipmentSlot) const;
    /**
     * @hash   -1034039481
     * @vftbl  158
     * @symbol  ?setEquippedSlot\@Actor\@\@UEAAXW4EquipmentSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setEquippedSlot(enum class EquipmentSlot, class ItemStack const &);
    /**
     * @hash   1011438231
     * @vftbl  159
     * @symbol  ?setCarriedItem\@Actor\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setCarriedItem(class ItemStack const &);
    /**
     * @hash   -804850702
     * @vftbl  160
     * @symbol  ?getCarriedItem\@Actor\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const & getCarriedItem() const;
    /**
     * @hash   -1044901368
     * @vftbl  161
     * @symbol  ?setOffhandSlot\@Actor\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const &);
    /**
     * @hash   982456951
     * @vftbl  162
     * @symbol  ?getEquippedTotem\@Actor\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const & getEquippedTotem() const;
    /**
     * @hash   -1100635095
     * @vftbl  163
     * @symbol  ?consumeTotem\@Actor\@\@UEAA_NXZ
     */
    virtual bool consumeTotem();
    /**
     * @hash   1774496715
     * @vftbl  164
     * @symbol  ?save\@Actor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -1532028636
     * @vftbl  165
     * @symbol  ?saveWithoutId\@Actor\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void saveWithoutId(class CompoundTag &) const;
    /**
     * @hash   1641199814
     * @vftbl  166
     * @symbol  ?load\@Actor\@\@UEAA_NAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1773025367
     * @vftbl  167
     * @symbol  ?loadLinks\@Actor\@\@UEAAXAEBVCompoundTag\@\@AEAV?$vector\@UActorLink\@\@V?$allocator\@UActorLink\@\@\@std\@\@\@std\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void loadLinks(class CompoundTag const &, std::vector<struct ActorLink> &, class DataLoadHelper &);
    /**
     * @hash   -1538630896
     * @vftbl  168
     * @symbol  ?getEntityTypeId\@Actor\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityTypeId() const;
    /**
     * @hash   -698627352
     * @vftbl  169
     * @symbol  ?queryEntityRenderer\@Actor\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const & queryEntityRenderer() const;
    /**
     * @hash   -297860319
     * @vftbl  170
     * @symbol  ?getSourceUniqueID\@Actor\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @hash   -1974342780
     * @vftbl  171
     * @symbol  ?thawFreezeEffect\@Actor\@\@UEAAXXZ
     */
    virtual void thawFreezeEffect();
    /**
     * @hash   -129668790
     * @vftbl  172
     * @symbol  ?canFreeze\@Actor\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @hash   -1987400481
     * @vftbl  173
     * @symbol  ?isWearingLeatherArmor\@Actor\@\@UEBA?B_NXZ
     */
    virtual bool const isWearingLeatherArmor() const;
    /**
     * @hash   -200116139
     * @vftbl  174
     * @symbol  ?getLiquidAABB\@Actor\@\@UEBA?AVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual class AABB getLiquidAABB(enum class MaterialType) const;
    /**
     * @hash   358780264
     * @vftbl  175
     * @symbol  ?handleInsidePortal\@Actor\@\@UEAAXAEBVBlockPos\@\@\@Z
     */
    virtual void handleInsidePortal(class BlockPos const &);
    /**
     * @hash   -1426237469
     * @vftbl  176
     * @symbol  ?getPortalCooldown\@Actor\@\@UEBAHXZ
     */
    virtual int getPortalCooldown() const;
    /**
     * @hash   361658282
     * @vftbl  177
     * @symbol  ?getPortalWaitTime\@Actor\@\@UEBAHXZ
     */
    virtual int getPortalWaitTime() const;
    /**
     * @hash   -640664074
     * @vftbl  178
     * @symbol  ?canChangeDimensionsUsingPortal\@Actor\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   -461939208
     * @vftbl  180
     * @symbol  ?changeDimension\@Actor\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimension(class AutomaticID<class Dimension, int>);
    /**
     * @hash   -1592422782
     * @vftbl  181
     * @symbol  ?getControllingPlayer\@Actor\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @hash   939458382
     * @vftbl  182
     * @symbol  ?checkFallDamage\@Actor\@\@UEAAXM_N\@Z
     */
    virtual void checkFallDamage(float, bool);
    /**
     * @hash   1910957911
     * @vftbl  183
     * @symbol  ?causeFallDamage\@Actor\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @hash   314958176
     * @vftbl  184
     * @symbol  ?handleFallDistanceOnServer\@Actor\@\@UEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @hash   1284810896
     * @vftbl  185
     * @symbol  ?playSynchronizedSound\@Actor\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@_N\@Z
     */
    virtual void playSynchronizedSound(enum class LevelSoundEvent, class Vec3 const &, class Block const &, bool);
    /**
     * @hash   877580493
     * @vftbl  186
     * @symbol  ?playSynchronizedSound\@Actor\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@H_N\@Z
     */
    virtual void playSynchronizedSound(enum class LevelSoundEvent, class Vec3 const &, int, bool);
    /**
     * @hash   -1808330205
     * @vftbl  187
     * @symbol  ?onSynchedFlagUpdate\@Actor\@\@UEAAXH_J0\@Z
     */
    virtual void onSynchedFlagUpdate(int, __int64, __int64);
    /**
     * @hash   -1565922723
     * @vftbl  188
     * @symbol  ?onSynchedDataUpdate\@Actor\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @hash   1065326673
     * @vftbl  189
     * @symbol  ?canAddPassenger\@Actor\@\@UEBA_NAEAV1\@\@Z
     */
    virtual bool canAddPassenger(class Actor &) const;
    /**
     * @hash   1464891552
     * @vftbl  190
     * @symbol  ?canPickupItem\@Actor\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool canPickupItem(class ItemStack const &) const;
    /**
     * @hash   913443256
     * @vftbl  191
     * @symbol  ?canBePulledIntoVehicle\@Actor\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @hash   -30902508
     * @vftbl  192
     * @symbol  ?inCaravan\@Actor\@\@UEBA_NXZ
     */
    virtual bool inCaravan() const;
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @hash   -1719104798
     * @vftbl  194
     * @symbol  ?tickLeash\@Actor\@\@UEAAXXZ
     */
    virtual void tickLeash();
    /**
     * @hash   1679725338
     * @vftbl  195
     * @symbol  ?sendMotionPacketIfNeeded\@Actor\@\@UEAAXXZ
     */
    virtual void sendMotionPacketIfNeeded();
    /**
     * @hash   -957053930
     * @vftbl  196
     * @symbol  ?canSynchronizeNewEntity\@Actor\@\@UEBA_NXZ
     */
    virtual bool canSynchronizeNewEntity() const;
    /**
     * @hash   970907971
     * @vftbl  197
     * @symbol  ?stopRiding\@Actor\@\@UEAAX_N00\@Z
     */
    virtual void stopRiding(bool, bool, bool);
    /**
     * @hash   981240433
     * @vftbl  198
     * @symbol  ?startSwimming\@Actor\@\@UEAAXXZ
     */
    virtual void startSwimming();
    /**
     * @hash   1804716337
     * @vftbl  199
     * @symbol  ?stopSwimming\@Actor\@\@UEAAXXZ
     */
    virtual void stopSwimming();
    /**
     * @hash   -168161623
     * @vftbl  200
     * @symbol  ?buildDebugInfo\@Actor\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void buildDebugInfo(std::string &) const;
    /**
     * @hash   -1958516959
     * @vftbl  201
     * @symbol  ?getCommandPermissionLevel\@Actor\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getCommandPermissionLevel() const;
    /**
     * @hash   507492063
     * @vftbl  202
     * @symbol  ?isClientSide\@Actor\@\@UEBA_NXZ
     */
    virtual bool isClientSide() const;
    /**
     * @hash   -703740702
     * @vftbl  203
     * @symbol  ?getMutableAttribute\@Actor\@\@UEAAPEAVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    virtual class AttributeInstance * getMutableAttribute(class Attribute const &);
    /**
     * @hash   1851140902
     * @vftbl  204
     * @symbol  ?getAttribute\@Actor\@\@UEBAAEBVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    virtual class AttributeInstance const & getAttribute(class Attribute const &) const;
    /**
     * @hash   -1396455215
     * @vftbl  205
     * @symbol  ?getDeathTime\@Actor\@\@UEBAHXZ
     */
    virtual int getDeathTime() const;
    /**
     * @hash   175097653
     * @vftbl  206
     * @symbol  ?heal\@Actor\@\@UEAAXH\@Z
     */
    virtual void heal(int);
    /**
     * @hash   -1525436121
     * @vftbl  207
     * @symbol  ?isInvertedHealAndHarm\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInvertedHealAndHarm() const;
    /**
     * @hash   40853262
     * @vftbl  208
     * @symbol  ?canBeAffected\@Actor\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const;
    /**
     * @hash   7305619
     * @vftbl  209
     * @symbol  ?canBeAffectedByArrow\@Actor\@\@UEBA_NAEBVMobEffectInstance\@\@\@Z
     */
    virtual bool canBeAffectedByArrow(class MobEffectInstance const &) const;
    /**
     * @hash   -2034659708
     * @vftbl  210
     * @symbol  ?onEffectAdded\@Actor\@\@UEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectAdded(class MobEffectInstance &);
    /**
     * @hash   992618585
     * @vftbl  211
     * @symbol  ?onEffectUpdated\@Actor\@\@UEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectUpdated(class MobEffectInstance &);
    /**
     * @hash   1102380324
     * @vftbl  212
     * @symbol  ?onEffectRemoved\@Actor\@\@UEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectRemoved(class MobEffectInstance &);
    /**
     * @hash   -348020141
     * @vftbl  213
     * @symbol  ?canObstructSpawningAndBlockPlacement\@Actor\@\@UEBA_NXZ
     */
    virtual bool canObstructSpawningAndBlockPlacement() const;
    /**
     * @hash   1718957458
     * @vftbl  214
     * @symbol  ?getAnimationComponent\@Actor\@\@UEAAAEAVAnimationComponent\@\@XZ
     */
    virtual class AnimationComponent & getAnimationComponent();
    /**
     * @hash   524374731
     * @vftbl  215
     * @symbol  ?openContainerComponent\@Actor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void openContainerComponent(class Player &);
    /**
     * @hash   684692176
     * @vftbl  216
     * @symbol  ?swing\@Actor\@\@UEAAXXZ
     */
    virtual void swing();
    /**
     * @hash   1012682785
     * @vftbl  217
     * @symbol  ?useItem\@Actor\@\@UEAAXAEAVItemStackBase\@\@W4ItemUseMethod\@\@_N\@Z
     */
    virtual void useItem(class ItemStackBase &, enum class ItemUseMethod, bool);
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @hash   1931490830
     * @vftbl  220
     * @symbol  ?getDebugText\@Actor\@\@UEAAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void getDebugText(std::vector<std::string> &);
    /**
     * @hash   -1196688003
     * @vftbl  221
     * @symbol  ?getMapDecorationRotation\@Actor\@\@UEBAMXZ
     */
    virtual float getMapDecorationRotation() const;
    /**
     * @hash   18345614
     * @vftbl  222
     * @symbol  ?getPassengerYRotation\@Actor\@\@UEBAMAEBV1\@\@Z
     */
    virtual float getPassengerYRotation(class Actor const &) const;
    /**
     * @hash   -1259554826
     * @vftbl  223
     * @symbol  ?isWorldBuilder\@Actor\@\@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @hash   1950471868
     * @vftbl  224
     * @symbol  ?isCreative\@Actor\@\@UEBA_NXZ
     */
    virtual bool isCreative() const;
    /**
     * @hash   -1591719895
     * @vftbl  225
     * @symbol  ?isAdventure\@Actor\@\@UEBA_NXZ
     */
    virtual bool isAdventure() const;
    /**
     * @hash   555022939
     * @vftbl  226
     * @symbol  ?isSurvival\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSurvival() const;
    /**
     * @hash   -1609536920
     * @vftbl  227
     * @symbol  ?isSpectator\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSpectator() const;
    /**
     * @hash   -1961112972
     * @vftbl  228
     * @symbol  ?isAttackableGamemode\@Actor\@\@UEBA_NXZ
     */
    virtual bool isAttackableGamemode() const;
    /**
     * @hash   555403794
     * @vftbl  229
     * @symbol  ?add\@Actor\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @hash   -984908949
     * @vftbl  230
     * @symbol  ?drop\@Actor\@\@UEAA_NAEBVItemStack\@\@_N\@Z
     */
    virtual bool drop(class ItemStack const &, bool);
    /**
     * @hash   1574279710
     * @vftbl  231
     * @symbol  ?getInteraction\@Actor\@\@UEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@AEBVVec3\@\@\@Z
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /**
     * @hash   1401781316
     * @vftbl  232
     * @symbol  ?canDestroyBlock\@Actor\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool canDestroyBlock(class Block const &) const;
    /**
     * @hash   685228302
     * @vftbl  233
     * @symbol  ?setAuxValue\@Actor\@\@UEAAXH\@Z
     */
    virtual void setAuxValue(int);
    /**
     * @hash   1560932469
     * @vftbl  234
     * @symbol  ?setSize\@Actor\@\@UEAAXMM\@Z
     */
    virtual void setSize(float, float);
    /**
     * @hash   -455250151
     * @vftbl  235
     * @symbol  ?onOrphan\@Actor\@\@UEAAXXZ
     */
    virtual void onOrphan();
    /**
     * @hash   -854830333
     * @vftbl  236
     * @symbol  ?wobble\@Actor\@\@UEAAXXZ
     */
    virtual void wobble();
    /**
     * @hash   -1226015252
     * @vftbl  237
     * @symbol  ?wasHurt\@Actor\@\@UEAA_NXZ
     */
    virtual bool wasHurt();
    /**
     * @hash   -490734642
     * @vftbl  238
     * @symbol  ?startSpinAttack\@Actor\@\@UEAAXXZ
     */
    virtual void startSpinAttack();
    /**
     * @hash   -122807778
     * @vftbl  239
     * @symbol  ?stopSpinAttack\@Actor\@\@UEAAXXZ
     */
    virtual void stopSpinAttack();
    /**
     * @hash   959804231
     * @vftbl  240
     * @symbol  ?setDamageNearbyMobs\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setDamageNearbyMobs(bool);
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @hash   791363775
     * @vftbl  242
     * @symbol  ?reloadLootTable\@Actor\@\@UEAAXXZ
     */
    virtual void reloadLootTable();
    /**
     * @hash   512566652
     * @vftbl  243
     * @symbol  ?reloadLootTable\@Actor\@\@UEAAXAEBUEquipmentTableDefinition\@\@\@Z
     */
    virtual void reloadLootTable(struct EquipmentTableDefinition const &);
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @hash   1035103664
     * @vftbl  245
     * @symbol  ?kill\@Actor\@\@UEAAXXZ
     */
    virtual void kill();
    /**
     * @hash   -269653208
     * @vftbl  246
     * @symbol  ?die\@Actor\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @hash   -1191570851
     * @vftbl  247
     * @symbol  ?shouldDropDeathLoot\@Actor\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @hash   1816672771
     * @vftbl  248
     * @symbol  ?shouldTick\@Actor\@\@UEBA_NXZ
     */
    virtual bool shouldTick() const;
    /**
     * @hash   -860214108
     * @vftbl  249
     * @symbol  ?applySnapshot\@Actor\@\@UEAAXAEBVEntityContext\@\@0\@Z
     */
    virtual void applySnapshot(class EntityContext const &, class EntityContext const &);
    /**
     * @hash   1166097395
     * @vftbl  250
     * @symbol  ?getNextStep\@Actor\@\@UEAAMM\@Z
     */
    virtual float getNextStep(float);
    /**
     * @hash   -1386606838
     * @vftbl  251
     * @symbol  ?getLootTable\@Actor\@\@UEAAPEAVLootTable\@\@XZ
     */
    virtual class LootTable * getLootTable();
    /**
     * @hash   -2031346538
     * @vftbl  252
     * @symbol  ?interpolatorTick\@Actor\@\@UEAAXXZ
     */
    virtual void interpolatorTick();
    /**
     * @hash   -235915004
     * @vftbl  253
     * @symbol  ?onPush\@Actor\@\@UEAAXAEAV1\@\@Z
     */
    virtual void onPush(class Actor &);
    /**
     * @hash   2104221472
     * @vftbl  254
     * @symbol  ?getLastDeathPos\@Actor\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    virtual class std::optional<class BlockPos> getLastDeathPos() const;
    /**
     * @hash   2001242796
     * @vftbl  255
     * @symbol  ?getLastDeathDimension\@Actor\@\@UEBA?AV?$optional\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@XZ
     */
    virtual class std::optional<class AutomaticID<class Dimension, int>> getLastDeathDimension() const;
    /**
     * @hash   108166464
     * @vftbl  256
     * @symbol  ?hasDiedBefore\@Actor\@\@UEBA_NXZ
     */
    virtual bool hasDiedBefore() const;
    /**
     * @hash   -1071764522
     * @vftbl  257
     * @symbol  ?doWaterSplashEffect\@Actor\@\@UEAAXXZ
     */
    virtual void doWaterSplashEffect();
    /**
     * @hash   -2107668103
     * @vftbl  258
     * @symbol  ?_shouldProvideFeedbackOnHandContainerItemSet\@Actor\@\@MEBA_NW4HandSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(enum class HandSlot, class ItemStack const &) const;
    /**
     * @hash   -534517239
     * @vftbl  259
     * @symbol  ?_shouldProvideFeedbackOnArmorSet\@Actor\@\@MEBA_NW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool _shouldProvideFeedbackOnArmorSet(enum class ArmorSlot, class ItemStack const &) const;
    /**
     * @hash   -1941995164
     * @vftbl  260
     * @symbol  ?updateEntitySpecificMolangVariables\@Actor\@\@MEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @hash   -1344013702
     * @vftbl  261
     * @symbol  ?shouldTryMakeStepSound\@Actor\@\@MEAA_NXZ
     */
    virtual bool shouldTryMakeStepSound();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   1728802747
     * @vftbl  263
     * @symbol  ?_hurt\@Actor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   2115560231
     * @vftbl  264
     * @symbol  ?markHurt\@Actor\@\@MEAAXXZ
     */
    virtual void markHurt();
    /**
     * @hash   -1796301142
     * @vftbl  265
     * @symbol  ?_getAnimationComponent\@Actor\@\@MEAAAEAVAnimationComponent\@\@AEAV?$shared_ptr\@VAnimationComponent\@\@\@std\@\@W4AnimationComponentGroupType\@\@\@Z
     */
    virtual class AnimationComponent & _getAnimationComponent(class std::shared_ptr<class AnimationComponent> &, enum class AnimationComponentGroupType);
    /**
     * @hash   893401019
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@Actor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -761740174
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@Actor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   715730557
     * @vftbl  268
     * @symbol  ?_playStepSound\@Actor\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @hash   978502828
     * @vftbl  269
     * @symbol  ?_playFlySound\@Actor\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playFlySound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   989905629
     * @vftbl  271
     * @symbol  ?checkInsideBlocks\@Actor\@\@MEAAXM\@Z
     */
    virtual void checkInsideBlocks(float);
    /**
     * @hash   -958324698
     * @vftbl  272
     * @symbol  ?pushOutOfBlocks\@Actor\@\@MEAAXAEBVVec3\@\@\@Z
     */
    virtual void pushOutOfBlocks(class Vec3 const &);
    /**
     * @hash   210763271
     * @vftbl  273
     * @symbol  ?spawnTrailBubbles\@Actor\@\@MEAAXXZ
     */
    virtual void spawnTrailBubbles();
    /**
     * @hash   657831475
     * @vftbl  274
     * @symbol  ?updateInsideBlock\@Actor\@\@MEAAXXZ
     */
    virtual void updateInsideBlock();
    /**
     * @hash   879538883
     * @vftbl  275
     * @symbol  ?_removePassenger\@Actor\@\@MEAAXAEBUActorUniqueID\@\@_N11\@Z
     */
    virtual void _removePassenger(struct ActorUniqueID const &, bool, bool, bool);
    /**
     * @hash   -653470336
     * @vftbl  276
     * @symbol  ?_onSizeUpdated\@Actor\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOR
    /**
     * @hash   2107769388
     * @symbol  ?_doAutoAttackOnTouch\@Actor\@\@EEAAXAEAV1\@\@Z
     */
    MCVAPI void _doAutoAttackOnTouch(class Actor &);
    /**
     * @hash   248819525
     * @symbol  ?_makeFlySound\@Actor\@\@MEBA_NXZ
     */
    MCVAPI bool _makeFlySound() const;
    /**
     * @hash   870551548
     * @symbol  ?breaksFallingBlocks\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @hash   1503035822
     * @symbol  ?canExistInPeaceful\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool canExistInPeaceful() const;
    /**
     * @hash   -120979025
     * @symbol  ?canInteractWithOtherEntitiesInGame\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool canInteractWithOtherEntitiesInGame() const;
    /**
     * @hash   923972945
     * @symbol  ?canMakeStepSound\@Actor\@\@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @hash   1193998893
     * @symbol  ?canSeeInvisible\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool canSeeInvisible() const;
    /**
     * @hash   -105291389
     * @symbol  ?changeDimension\@Actor\@\@UEAAXAEBVChangeDimensionPacket\@\@\@Z
     */
    MCVAPI void changeDimension(class ChangeDimensionPacket const &);
    /**
     * @hash   64299344
     * @symbol  ?getAlwaysShowNameTag\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const;
    /**
     * @hash   1988887228
     * @symbol  ?getDeletionDelayTimeSeconds\@Actor\@\@UEBAMXZ
     */
    MCVAPI float getDeletionDelayTimeSeconds() const;
    /**
     * @hash   -286664475
     * @symbol  ?getOutputSignal\@Actor\@\@UEBAHXZ
     */
    MCVAPI int getOutputSignal() const;
    /**
     * @hash   -711083275
     * @symbol  ?hasOutputSignal\@Actor\@\@UEBA_NE\@Z
     */
    MCVAPI bool hasOutputSignal(unsigned char) const;
    /**
     * @hash   2106509923
     * @symbol  ?interactPreventDefault\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @hash   -1096637840
     * @symbol  ?isCreativeModeAllowed\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool isCreativeModeAllowed();
    /**
     * @hash   746898255
     * @symbol  ?isFishable\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isFishable() const;
    /**
     * @hash   -485391733
     * @symbol  ?isLeashableType\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool isLeashableType();
    /**
     * @hash   -1157655739
     * @symbol  ?isLocalPlayer\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isLocalPlayer() const;
    /**
     * @hash   1821561262
     * @symbol  ?isPlayer\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isPlayer() const;
    /**
     * @hash   -1389282445
     * @symbol  ?isShootable\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool isShootable();
    /**
     * @hash   -831235544
     * @symbol  ?isTargetable\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isTargetable() const;
    /**
     * @hash   1820968648
     * @symbol  ?renderDebugServerState\@Actor\@\@UEAAXAEBVOptions\@\@\@Z
     */
    MCVAPI void renderDebugServerState(class Options const &);
#endif
    /**
     * @hash   -2071856639
     * @symbol  ??0Actor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Actor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -1424770953
     * @symbol  ??0Actor\@\@QEAA\@AEAVILevel\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Actor(class ILevel &, class EntityContext &);
    /**
     * @hash   1711660109
     * @symbol  ?_sendDirtyActorData\@Actor\@\@QEAAXXZ
     */
    MCAPI void _sendDirtyActorData();
    /**
     * @hash   93146778
     * @symbol  ?_setActorTypeId\@Actor\@\@QEAAXW4ActorType\@\@\@Z
     */
    MCAPI void _setActorTypeId(enum class ActorType);
    /**
     * @hash   -301745295
     * @symbol  ?_setLevelPtr\@Actor\@\@QEAAXPEAVLevel\@\@\@Z
     */
    MCAPI void _setLevelPtr(class Level *);
    /**
     * @hash   1002315160
     * @symbol  ?addCategory\@Actor\@\@QEAAXAEBW4ActorCategory\@\@\@Z
     */
    MCAPI void addCategory(enum class ActorCategory const &);
    /**
     * @hash   -1204676472
     * @symbol  ?addDefinitionGroup\@Actor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addDefinitionGroup(std::string const &);
    /**
     * @hash   2106353840
     * @symbol  ?addEffect\@Actor\@\@QEAAXAEBVMobEffectInstance\@\@\@Z
     */
    MCAPI void addEffect(class MobEffectInstance const &);
    /**
     * @hash   -1085888101
     * @symbol  ?addTag\@Actor\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool addTag(std::string const &);
    /**
     * @hash   1010868896
     * @symbol  ?buildDebugGroupInfo\@Actor\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void buildDebugGroupInfo(std::string &) const;
    /**
     * @hash   248129374
     * @symbol  ?buildForward\@Actor\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 buildForward() const;
    /**
     * @hash   -1606759047
     * @symbol  ?burn\@Actor\@\@QEAAXH_N\@Z
     */
    MCAPI void burn(int, bool);
    /**
     * @hash   214201805
     * @symbol  ?cacheComponentData\@Actor\@\@QEAAXXZ
     */
    MCAPI void cacheComponentData();
    /**
     * @hash   -1360443882
     * @symbol  ?calcCenterPos\@Actor\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 calcCenterPos() const;
    /**
     * @hash   -148664651
     * @symbol  ?calculateAttackDamage\@Actor\@\@QEAAMAEAV1\@\@Z
     */
    MCAPI float calculateAttackDamage(class Actor &);
    /**
     * @hash   -1100024490
     * @symbol  ?canAscendCurrentBlockByJumping\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canAscendCurrentBlockByJumping() const;
    /**
     * @hash   -777007194
     * @symbol  ?canBeginOrContinueClimbingLadder\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canBeginOrContinueClimbingLadder() const;
    /**
     * @hash   -1539335114
     * @symbol  ?canCurrentlySwim\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canCurrentlySwim() const;
    /**
     * @hash   1959162180
     * @symbol  ?canDescendBlockBelowByCrouching\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canDescendBlockBelowByCrouching() const;
    /**
     * @hash   -233293258
     * @symbol  ?canFly\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canFly() const;
    /**
     * @hash   -330638655
     * @symbol  ?canMate\@Actor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool canMate(class Actor const &) const;
    /**
     * @hash   2040938230
     * @symbol  ?canReceiveMobEffectsFromGameplay\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canReceiveMobEffectsFromGameplay() const;
    /**
     * @hash   -1245489434
     * @symbol  ?canSeeDaylight\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canSeeDaylight() const;
    /**
     * @hash   42767639
     * @symbol  ?celebrateHunt\@Actor\@\@QEAAXH_N\@Z
     */
    MCAPI void celebrateHunt(int, bool);
    /**
     * @hash   -1029222431
     * @symbol  ?checkInsideCauldron\@Actor\@\@QEAAXXZ
     */
    MCAPI void checkInsideCauldron();
    /**
     * @hash   932995129
     * @symbol  ?clearFishingHookID\@Actor\@\@QEAAXXZ
     */
    MCAPI void clearFishingHookID();
    /**
     * @hash   108340471
     * @symbol  ?closerThan\@Actor\@\@QEBA_NAEBV1\@MM\@Z
     */
    MCAPI bool closerThan(class Actor const &, float, float) const;
    /**
     * @hash   1636668856
     * @symbol  ?closerThan\@Actor\@\@QEBA_NAEBV1\@M\@Z
     */
    MCAPI bool closerThan(class Actor const &, float) const;
    /**
     * @hash   646740097
     * @symbol  ?consumeItem\@Actor\@\@QEAAXAEAVItemActor\@\@H\@Z
     */
    MCAPI void consumeItem(class ItemActor &, int);
    /**
     * @hash   -820472781
     * @symbol  ?createUpdateEquipPacket\@Actor\@\@QEAA?AVUpdateEquipPacket\@\@H\@Z
     */
    MCAPI class UpdateEquipPacket createUpdateEquipPacket(int);
    /**
     * @hash   -1401215077
     * @symbol  ?createUpdateTradePacket\@Actor\@\@QEAA?AVUpdateTradePacket\@\@H\@Z
     */
    MCAPI class UpdateTradePacket createUpdateTradePacket(int);
    /**
     * @hash   -2144799572
     * @symbol  ?damageSensorComponentHurt\@Actor\@\@QEAA_NAEAMAEBVActorDamageSource\@\@_N\@Z
     */
    MCAPI bool damageSensorComponentHurt(float &, class ActorDamageSource const &, bool);
    /**
     * @hash   -145778931
     * @symbol  ?deregisterTagsFromLevelCache\@Actor\@\@QEAAXXZ
     */
    MCAPI void deregisterTagsFromLevelCache();
    /**
     * @hash   480499143
     * @symbol  ?distanceSqrToBlockPosCenter\@Actor\@\@QEBAMAEBVBlockPos\@\@\@Z
     */
    MCAPI float distanceSqrToBlockPosCenter(class BlockPos const &) const;
    /**
     * @hash   -1293620945
     * @symbol  ?distanceTo\@Actor\@\@QEBAMAEBV1\@\@Z
     */
    MCAPI float distanceTo(class Actor const &) const;
    /**
     * @hash   -1186829339
     * @symbol  ?distanceTo\@Actor\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float distanceTo(class Vec3 const &) const;
    /**
     * @hash   -272806313
     * @symbol  ?distanceToSqr\@Actor\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float distanceToSqr(class Vec3 const &) const;
    /**
     * @hash   552440497
     * @symbol  ?distanceToSqr\@Actor\@\@QEBAMAEBV1\@\@Z
     */
    MCAPI float distanceToSqr(class Actor const &) const;
    /**
     * @hash   -832159544
     * @symbol  ?dropLeash\@Actor\@\@QEAAX_N0\@Z
     */
    MCAPI void dropLeash(bool, bool);
    /**
     * @hash   1133076351
     * @symbol  ?dropTowards\@Actor\@\@QEAAXAEBVItemStack\@\@VVec3\@\@\@Z
     */
    MCAPI void dropTowards(class ItemStack const &, class Vec3);
    /**
     * @hash   -475156879
     * @symbol  ?evaluateSeatRotation\@Actor\@\@QEAAMAEBVRideableComponent\@\@\@Z
     */
    MCAPI float evaluateSeatRotation(class RideableComponent const &);
    /**
     * @hash   -1924830552
     * @symbol  ?executeEvent\@Actor\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI bool executeEvent(std::string const &, class VariantParameterList const &);
    /**
     * @hash   805459093
     * @symbol  ?exitVehicle\@Actor\@\@QEAAXAEBV1\@P6A?AV?$optional\@VVec3\@\@\@std\@\@AEBUVehicleDirections\@VehicleUtils\@\@V?$function\@$$A6A_NAEBVVec3\@\@0\@Z\@3\@\@Z\@Z
     */
    MCAPI void exitVehicle(class Actor const &, class std::optional<class Vec3> ( *)(struct VehicleUtils::VehicleDirections const &, class std::function<bool (class Vec3 const &, class Vec3 const &)>));
    /**
     * @hash   -773213489
     * @symbol  ?fetchFishingHook\@Actor\@\@QEAAPEAVFishingHook\@\@XZ
     */
    MCAPI class FishingHook * fetchFishingHook();
    /**
     * @hash   -1180074544
     * @symbol  ?fetchNearbyActorsSorted\@Actor\@\@QEAA?AV?$vector\@UDistanceSortedActor\@\@V?$allocator\@UDistanceSortedActor\@\@\@std\@\@\@std\@\@AEBVVec3\@\@W4ActorType\@\@\@Z
     */
    MCAPI std::vector<struct DistanceSortedActor> fetchNearbyActorsSorted(class Vec3 const &, enum class ActorType);
    /**
     * @hash   -524040251
     * @symbol  ?forEachLeashedActor\@Actor\@\@QEAAXV?$function\@$$A6AXV?$not_null\@PEAVActor\@\@\@gsl\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachLeashedActor(class std::function<void (class gsl::not_null<class Actor *>)>);
    /**
     * @hash   1912846992
     * @symbol  ?getAABB\@Actor\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const & getAABB() const;
    /**
     * @hash   -80874298
     * @symbol  ?getAABBDim\@Actor\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const & getAABBDim() const;
    /**
     * @hash   1266832058
     * @symbol  ?getActiveEffectCount\@Actor\@\@QEBAHXZ
     */
    MCAPI int getActiveEffectCount() const;
    /**
     * @hash   762368000
     * @symbol  ?getActorIdentifier\@Actor\@\@QEBAAEBUActorDefinitionIdentifier\@\@XZ
     */
    MCAPI struct ActorDefinitionIdentifier const & getActorIdentifier() const;
    /**
     * @hash   1329998804
     * @symbol  ?getAllEffects\@Actor\@\@QEBAAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobEffectInstance> const & getAllEffects() const;
    /**
     * @hash   1173077114
     * @symbol  ?getArmorContainer\@Actor\@\@QEAAAEAVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer & getArmorContainer();
    /**
     * @hash   -1781366796
     * @symbol  ?getArmorContainer\@Actor\@\@QEBAAEBVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer const & getArmorContainer() const;
    /**
     * @hash   275849601
     * @symbol  ?getAttributes\@Actor\@\@QEAA?AV?$not_null\@PEAVBaseAttributeMap\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class BaseAttributeMap *> getAttributes();
    /**
     * @hash   -2103506507
     * @symbol  ?getAttributes\@Actor\@\@QEBA?AV?$not_null\@PEBVBaseAttributeMap\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class BaseAttributeMap const *> getAttributes() const;
    /**
     * @hash   2054066500
     * @symbol  ?getBlockMovementSlowdownMultiplier\@Actor\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const & getBlockMovementSlowdownMultiplier() const;
    /**
     * @hash   -1493600574
     * @symbol  ?getBlockPosCurrentlyStandingOn\@Actor\@\@QEBA?AVBlockPos\@\@PEBV1\@\@Z
     */
    MCAPI class BlockPos getBlockPosCurrentlyStandingOn(class Actor const *) const;
    /**
     * @hash   -1415110496
     * @symbol  ?getBlockTarget\@Actor\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getBlockTarget() const;
    /**
     * @symbol  ?getBrightness\@Actor\@\@QEBAMM\@Z
     */
    MCAPI float getBrightness(float) const;
    /**
     * @hash   1850294564
     * @symbol  ?getCanPickupItems\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getCanPickupItems() const;
    /**
     * @hash   -1248621168
     * @symbol  ?getCarriedItemInSlotPreferredBy\@Actor\@\@QEBAAEBVItemStack\@\@AEBV2\@\@Z
     */
    MCAPI class ItemStack const & getCarriedItemInSlotPreferredBy(class ItemStack const &) const;
    /**
     * @hash   1218706968
     * @symbol  ?getCategories\@Actor\@\@QEBA?AW4ActorCategory\@\@XZ
     */
    MCAPI enum class ActorCategory getCategories() const;
    /**
     * @hash   -899040044
     * @symbol  ?getChainedDamageEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getChainedDamageEffects() const;
    /**
     * @symbol  ?getCollidableMob\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getCollidableMob() const;
    /**
     * @hash   -1694538434
     * @symbol  ?getColor\@Actor\@\@QEBA?AW4PaletteColor\@\@XZ
     */
    MCAPI enum class PaletteColor getColor() const;
    /**
     * @hash   1105466092
     * @symbol  ?getColor2\@Actor\@\@QEBA?AW4PaletteColor\@\@XZ
     */
    MCAPI enum class PaletteColor getColor2() const;
    /**
     * @hash   848201402
     * @symbol  ?getControllingSeat\@Actor\@\@QEBAHXZ
     */
    MCAPI int getControllingSeat() const;
    /**
     * @hash   907678314
     * @symbol  ?getCurrentSwimAmount\@Actor\@\@QEBAMXZ
     */
    MCAPI float getCurrentSwimAmount() const;
    /**
     * @hash   -241727004
     * @symbol  ?getDamageNearbyMobs\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getDamageNearbyMobs() const;
    /**
     * @hash   807696491
     * @symbol  ?getDiffList\@Actor\@\@QEBAPEBVActorDefinitionDiffList\@\@XZ
     */
    MCAPI class ActorDefinitionDiffList const * getDiffList() const;
    /**
     * @hash   797014109
     * @symbol  ?getDiffListNonConst\@Actor\@\@QEAAPEAVActorDefinitionDiffList\@\@XZ
     */
    MCAPI class ActorDefinitionDiffList * getDiffListNonConst();
    /**
     * @hash   1911710920
     * @symbol  ?getDimension\@Actor\@\@QEBAAEAVDimension\@\@XZ
     */
    MCAPI class Dimension & getDimension() const;
    /**
     * @symbol  ?getDimensionBlockSource\@Actor\@\@QEBAAEAVBlockSource\@\@XZ
     */
    MCAPI class BlockSource & getDimensionBlockSource() const;
    /**
     * @symbol  ?getDimensionBlockSourceConst\@Actor\@\@QEBAAEBVBlockSource\@\@XZ
     */
    MCAPI class BlockSource const & getDimensionBlockSourceConst() const;
    /**
     * @hash   -1141916500
     * @symbol  ?getDimensionConst\@Actor\@\@QEBAAEBVDimension\@\@XZ
     */
    MCAPI class Dimension const & getDimensionConst() const;
    /**
     * @symbol  ?getDimensionId\@Actor\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @hash   -651465067
     * @symbol  ?getEconomyTradeableComponent\@Actor\@\@QEBAPEAVEconomyTradeableComponent\@\@XZ
     */
    MCAPI class EconomyTradeableComponent * getEconomyTradeableComponent() const;
    /**
     * @hash   1012042240
     * @symbol  ?getEffect\@Actor\@\@QEBAPEBVMobEffectInstance\@\@AEBVMobEffect\@\@\@Z
     */
    MCAPI class MobEffectInstance const * getEffect(class MobEffect const &) const;
    /**
     * @symbol  ?getEffect\@Actor\@\@QEBAPEBVMobEffectInstance\@\@I\@Z
     */
    MCAPI class MobEffectInstance const * getEffect(unsigned int) const;
    /**
     * @hash   569577022
     * @symbol  ?getEntityData\@Actor\@\@QEBAAEBVSynchedActorDataEntityWrapper\@\@XZ
     */
    MCAPI class SynchedActorDataEntityWrapper const & getEntityData() const;
    /**
     * @hash   347182276
     * @symbol  ?getEntityData\@Actor\@\@QEAAAEAVSynchedActorDataEntityWrapper\@\@XZ
     */
    MCAPI class SynchedActorDataEntityWrapper & getEntityData();
    /**
     * @hash   -157605055
     * @symbol  ?getEntityRegistry\@Actor\@\@QEAA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
    /**
     * @hash   -657747184
     * @symbol  ?getEntityTerrainInterlockData\@Actor\@\@QEAAAEAVActorTerrainInterlockData\@\@XZ
     */
    MCAPI class ActorTerrainInterlockData & getEntityTerrainInterlockData();
    /**
     * @hash   -1192542293
     * @symbol  ?getEquipmentSlotForItem\@Actor\@\@QEBA?AW4EquipmentSlot\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI enum class EquipmentSlot getEquipmentSlotForItem(class ItemStack const &) const;
    /**
     * @hash   2120531794
     * @symbol  ?getFallDistance\@Actor\@\@QEBAMXZ
     */
    MCAPI float getFallDistance() const;
    /**
     * @hash   1750040004
     * @symbol  ?getFirstAvailableSeatPos\@Actor\@\@QEBA_NAEAV1\@AEAVVec3\@\@\@Z
     */
    MCAPI bool getFirstAvailableSeatPos(class Actor &, class Vec3 &) const;
    /**
     * @hash   -1657604039
     * @symbol  ?getFirstPassenger\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor * getFirstPassenger() const;
    /**
     * @hash   1863428080
     * @symbol  ?getHandContainer\@Actor\@\@QEAAAEAVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer & getHandContainer();
    /**
     * @hash   -1091015830
     * @symbol  ?getHandContainer\@Actor\@\@QEBAAEBVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer const & getHandContainer() const;
    /**
     * @hash   -1680899668
     * @symbol  ?getHealth\@Actor\@\@QEBAHXZ
     */
    MCAPI int getHealth() const;
    /**
     * @hash   -1087876410
     * @symbol  ?getHurtDir\@Actor\@\@QEBAHXZ
     */
    MCAPI int getHurtDir() const;
    /**
     * @hash   -480966372
     * @symbol  ?getHurtTime\@Actor\@\@QEBAHXZ
     */
    MCAPI int getHurtTime() const;
    /**
     * @hash   1832320966
     * @symbol  ?getInitializationMethod\@Actor\@\@QEAA?AW4InitializationMethod\@1\@XZ
     */
    MCAPI enum class Actor::InitializationMethod getInitializationMethod();
    /**
     * @hash   -1639008463
     * @symbol  ?getInterpolatedPosition\@Actor\@\@QEBA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 getInterpolatedPosition(float) const;
    /**
     * @hash   -1342161483
     * @symbol  ?getInterpolatedRotation\@Actor\@\@QEBA?AVVec2\@\@M\@Z
     */
    MCAPI class Vec2 getInterpolatedRotation(float) const;
    /**
     * @hash   -1951839594
     * @symbol  ?getIsExperienceDropEnabled\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getIsExperienceDropEnabled() const;
    /**
     * @hash   -401526376
     * @symbol  ?getJumpDuration\@Actor\@\@QEBAHXZ
     */
    MCAPI int getJumpDuration() const;
    /**
     * @hash   -1842891026
     * @symbol  ?getLastHurtByMobTime\@Actor\@\@QEAAHXZ
     */
    MCAPI int getLastHurtByMobTime();
    /**
     * @hash   -858751174
     * @symbol  ?getLastHurtByMobTimestamp\@Actor\@\@QEAAHXZ
     */
    MCAPI int getLastHurtByMobTimestamp();
    /**
     * @hash   830663732
     * @symbol  ?getLastHurtCause\@Actor\@\@QEBA?AW4ActorDamageCause\@\@XZ
     */
    MCAPI enum class ActorDamageCause getLastHurtCause() const;
    /**
     * @hash   1734893690
     * @symbol  ?getLastHurtDamage\@Actor\@\@QEBAMXZ
     */
    MCAPI float getLastHurtDamage() const;
    /**
     * @hash   -448533668
     * @symbol  ?getLastHurtMobTimestamp\@Actor\@\@QEAAHXZ
     */
    MCAPI int getLastHurtMobTimestamp();
    /**
     * @hash   -215230015
     * @symbol  ?getLastHurtTimestamp\@Actor\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getLastHurtTimestamp() const;
    /**
     * @hash   -1554621976
     * @symbol  ?getLeashHolder\@Actor\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getLeashHolder() const;
    /**
     * @hash   1205640810
     * @symbol  ?getLevel\@Actor\@\@QEAAAEAVLevel\@\@XZ
     */
    MCAPI class Level & getLevel();
    /**
     * @hash   -1067080924
     * @symbol  ?getLevel\@Actor\@\@QEBAAEBVLevel\@\@XZ
     */
    MCAPI class Level const & getLevel() const;
    /**
     * @hash   1274714271
     * @symbol  ?getLevelTimeStamp\@Actor\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getLevelTimeStamp() const;
    /**
     * @hash   2049485226
     * @symbol  ?getLimitedLifetimeTicks\@Actor\@\@QEBAHXZ
     */
    MCAPI int getLimitedLifetimeTicks() const;
    /**
     * @hash   1593873028
     * @symbol  ?getLinks\@Actor\@\@QEBA?AV?$vector\@UActorLink\@\@V?$allocator\@UActorLink\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorLink> getLinks() const;
    /**
     * @hash   901731930
     * @symbol  ?getMarkVariant\@Actor\@\@QEBAHXZ
     */
    MCAPI int getMarkVariant() const;
    /**
     * @hash   -1129646250
     * @symbol  ?getMaxAutoStep\@Actor\@\@QEBAMXZ
     */
    MCAPI float getMaxAutoStep() const;
    /**
     * @hash   -18676854
     * @symbol  ?getMaxHealth\@Actor\@\@QEBAHXZ
     */
    MCAPI int getMaxHealth() const;
    /**
     * @hash   1369523144
     * @symbol  ?getMolangVariables\@Actor\@\@QEAAAEAVMolangVariableMap\@\@XZ
     */
    MCAPI class MolangVariableMap & getMolangVariables();
    /**
     * @hash   -1788158976
     * @symbol  ?getMovementProxy\@Actor\@\@QEAA?AV?$not_null\@V?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>> getMovementProxy();
    /**
     * @hash   -1269876018
     * @symbol  ?getMovementProxy\@Actor\@\@QEBA?AV?$not_null\@V?$shared_ptr\@$$CBUIActorMovementProxy\@\@\@std\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy const>> getMovementProxy() const;
    /**
     * @hash   -206276510
     * @symbol  ?getOffhandSlot\@Actor\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getOffhandSlot() const;
    /**
     * @hash   -1491154470
     * @symbol  ?getOnDeathExperience\@Actor\@\@QEAAHXZ
     */
    MCAPI int getOnDeathExperience();
    /**
     * @hash   2062388438
     * @symbol  ?getOnewayPhysicsBlocks\@Actor\@\@QEBAAEBV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AABB> const & getOnewayPhysicsBlocks() const;
    /**
     * @hash   607620584
     * @symbol  ?getOrAddDynamicProperties\@Actor\@\@QEAAAEAVDynamicProperties\@\@XZ
     */
    MCAPI class DynamicProperties & getOrAddDynamicProperties();
    /**
     * @hash   -76071989
     * @symbol  ?getOwner\@Actor\@\@QEBAPEAVMob\@\@XZ
     */
    MCAPI class Mob * getOwner() const;
    /**
     * @hash   472916420
     * @symbol  ?getOwnerId\@Actor\@\@QEBA?BUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const getOwnerId() const;
    /**
     * @hash   963975513
     * @symbol  ?getPassengerIndex\@Actor\@\@QEBAHAEBV1\@\@Z
     */
    MCAPI int getPassengerIndex(class Actor const &) const;
    /**
     * @hash   386879466
     * @symbol  ?getPersistingTradeOffers\@Actor\@\@QEAA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> getPersistingTradeOffers();
    /**
     * @hash   1374096428
     * @symbol  ?getPersistingTradeRiches\@Actor\@\@QEAAHXZ
     */
    MCAPI int getPersistingTradeRiches();
    /**
     * @hash   1200519357
     * @symbol  ?getPlayerOwner\@Actor\@\@QEBAPEAVPlayer\@\@XZ
     */
    MCAPI class Player * getPlayerOwner() const;
    /**
     * @hash   -1659868158
     * @symbol  ?getPosDelta\@Actor\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const & getPosDelta() const;
    /**
     * @hash   -452040700
     * @symbol  ?getPosDeltaNonConst\@Actor\@\@QEAAAEAVVec3\@\@XZ
     */
    MCAPI class Vec3 & getPosDeltaNonConst();
    /**
     * @hash   492762198
     * @symbol  ?getRadius\@Actor\@\@QEBAMXZ
     */
    MCAPI float getRadius() const;
    /**
     * @hash   -1606023284
     * @symbol  ?getRandom\@Actor\@\@QEBAAEAVRandom\@\@XZ
     */
    MCAPI class Random & getRandom() const;
    /**
     * @hash   1187744922
     * @symbol  ?getRenderParams\@Actor\@\@QEAAAEAVRenderParams\@\@XZ
     */
    MCAPI class RenderParams & getRenderParams();
    /**
     * @hash   1388967034
     * @symbol  ?getRidingHeight\@Actor\@\@QEBAMXZ
     */
    MCAPI float getRidingHeight() const;
    /**
     * @hash   -1345401132
     * @symbol  ?getRotation\@Actor\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const & getRotation() const;
    /**
     * @hash   -547757740
     * @symbol  ?getRotationPrev\@Actor\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const & getRotationPrev() const;
    /**
     * @hash   -1505648532
     * @symbol  ?getRuntimeID\@Actor\@\@QEBA?AVActorRuntimeID\@\@XZ
     */
    MCAPI class ActorRuntimeID getRuntimeID() const;
    /**
     * @hash   420610464
     * @symbol  ?getShakeTime\@Actor\@\@QEBAHXZ
     */
    MCAPI int getShakeTime() const;
    /**
     * @hash   -2116884428
     * @symbol  ?getSkinID\@Actor\@\@QEBAHXZ
     */
    MCAPI int getSkinID() const;
    /**
     * @symbol  ?getSlideOffset\@Actor\@\@QEBA?AVVec2\@\@XZ
     */
    MCAPI class Vec2 getSlideOffset() const;
    /**
     * @hash   -1808594952
     * @symbol  ?getSpatialNetworkData\@Actor\@\@QEBAAEBVSpatialActorNetworkData\@\@XZ
     */
    MCAPI class SpatialActorNetworkData const & getSpatialNetworkData() const;
    /**
     * @hash   -417838978
     * @symbol  ?getSpatialNetworkData\@Actor\@\@QEAAAEAVSpatialActorNetworkData\@\@XZ
     */
    MCAPI class SpatialActorNetworkData & getSpatialNetworkData();
    /**
     * @hash   1723664984
     * @symbol  ?getSpeedInMetersPerSecond\@Actor\@\@QEBAMXZ
     */
    MCAPI float getSpeedInMetersPerSecond() const;
    /**
     * @hash   749879638
     * @symbol  ?getStrength\@Actor\@\@QEBAHXZ
     */
    MCAPI int getStrength() const;
    /**
     * @hash   881696512
     * @symbol  ?getStrengthMax\@Actor\@\@QEBAHXZ
     */
    MCAPI int getStrengthMax() const;
    /**
     * @hash   -719239494
     * @symbol  ?getStructuralIntegrity\@Actor\@\@QEBAHXZ
     */
    MCAPI int getStructuralIntegrity() const;
    /**
     * @hash   1457816293
     * @symbol  ?getSwimAmount\@Actor\@\@QEBAMM\@Z
     */
    MCAPI float getSwimAmount(float) const;
    /**
     * @symbol  ?getTags\@Actor\@\@QEBA?BV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const getTags() const;
    /**
     * @hash   -717145543
     * @symbol  ?getTarget\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor * getTarget() const;
    /**
     * @hash   -2116568954
     * @symbol  ?getTargetId\@Actor\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetId() const;
    /**
     * @hash   1395036150
     * @symbol  ?getTradeInterest\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getTradeInterest() const;
    /**
     * @hash   -515797193
     * @symbol  ?getTradeOffers\@Actor\@\@QEAAPEAVMerchantRecipeList\@\@XZ
     */
    MCAPI class MerchantRecipeList * getTradeOffers();
    /**
     * @hash   -209130803
     * @symbol  ?getTradingPlayer\@Actor\@\@QEBAPEAVPlayer\@\@XZ
     */
    MCAPI class Player * getTradingPlayer() const;
    /**
     * @hash   2002347734
     * @symbol  ?getUniqueID\@Actor\@\@QEBAAEBUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const & getUniqueID() const;
    /**
     * @hash   -1152581884
     * @symbol  ?getVariant\@Actor\@\@QEBAHXZ
     */
    MCAPI int getVariant() const;
    /**
     * @hash   363741467
     * @symbol  ?getVehicle\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor * getVehicle() const;
    /**
     * @hash   -1454702325
     * @symbol  ?getVehicleRoot\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor * getVehicleRoot() const;
    /**
     * @hash   2061221278
     * @symbol  ?getVehicleRuntimeID\@Actor\@\@QEBA?AVActorRuntimeID\@\@XZ
     */
    MCAPI class ActorRuntimeID getVehicleRuntimeID() const;
    /**
     * @hash   -677837468
     * @symbol  ?getVerticalSpeedInMetersPerSecond\@Actor\@\@QEBAMXZ
     */
    MCAPI float getVerticalSpeedInMetersPerSecond() const;
    /**
     * @hash   -1609821671
     * @symbol  ?getViewVector\@Actor\@\@QEBA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 getViewVector(float) const;
    /**
     * @symbol  ?getWeakEntity\@Actor\@\@QEBA?BV?$WeakRefT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct EntityRefTraits> const getWeakEntity() const;
    /**
     * @hash   -687402866
     * @symbol  ?getYHeadRot\@Actor\@\@QEBAMXZ
     */
    MCAPI float getYHeadRot() const;
    /**
     * @hash   -385982260
     * @symbol  ?getYHeadRotationsNewOld\@Actor\@\@QEBA?AUInterpolationPair\@\@XZ
     */
    MCAPI struct InterpolationPair getYHeadRotationsNewOld() const;
    /**
     * @hash   1776620868
     * @symbol  ?hasAnyEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyEffects() const;
    /**
     * @hash   835063302
     * @symbol  ?hasAnyVisibleEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyVisibleEffects() const;
    /**
     * @hash   384208405
     * @symbol  ?hasBeenHurtByMobInLastTicks\@Actor\@\@QEBA_NH\@Z
     */
    MCAPI bool hasBeenHurtByMobInLastTicks(int) const;
    /**
     * @hash   898677999
     * @symbol  ?hasCategory\@Actor\@\@QEBA_NW4ActorCategory\@\@\@Z
     */
    MCAPI bool hasCategory(enum class ActorCategory) const;
    /**
     * @hash   101633433
     * @symbol  ?hasDefinitionGroup\@Actor\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasDefinitionGroup(std::string const &) const;
    /**
     * @hash   -208194490
     * @symbol  ?hasDimension\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasDimension() const;
    /**
     * @hash   -848120451
     * @symbol  ?hasEffect\@Actor\@\@QEBA_NAEBVMobEffect\@\@\@Z
     */
    MCAPI bool hasEffect(class MobEffect const &) const;
    /**
     * @hash   844678039
     * @symbol  ?hasFamily\@Actor\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasFamily(class HashedString const &) const;
    /**
     * @hash   -1788524906
     * @symbol  ?hasFishingHook\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasFishingHook() const;
    /**
     * @hash   1853194438
     * @symbol  ?hasLevel\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasLevel() const;
    /**
     * @hash   826421302
     * @symbol  ?hasPassenger\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPassenger() const;
    /**
     * @hash   977068310
     * @symbol  ?hasPersistingTrade\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPersistingTrade() const;
    /**
     * @hash   -1012026874
     * @symbol  ?hasPlayerPassenger\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPlayerPassenger() const;
    /**
     * @hash   -1829161100
     * @symbol  ?hasPriorityAmmunition\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPriorityAmmunition() const;
    /**
     * @hash   605498886
     * @symbol  ?hasRuntimeID\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasRuntimeID() const;
    /**
     * @hash   1339914868
     * @symbol  ?hasSaddle\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasSaddle() const;
    /**
     * @hash   -1552153943
     * @symbol  ?hasTag\@Actor\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasTag(std::string const &) const;
    /**
     * @hash   1080433812
     * @symbol  ?hasTags\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasTags() const;
    /**
     * @hash   -2101466796
     * @symbol  ?hasTeleported\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasTeleported() const;
    /**
     * @hash   1825707078
     * @symbol  ?hasTotemEquipped\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasTotemEquipped() const;
    /**
     * @hash   -1580898249
     * @symbol  ?hasType\@Actor\@\@QEBA_NW4ActorType\@\@\@Z
     */
    MCAPI bool hasType(enum class ActorType) const;
    /**
     * @hash   612426964
     * @symbol  ?hasUniqueID\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasUniqueID() const;
    /**
     * @hash   -1732064846
     * @symbol  ?healEffects\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void healEffects(int);
    /**
     * @hash   -979040010
     * @symbol  ?hurt\@Actor\@\@QEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    MCAPI bool hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   991809252
     * @symbol  ?inDownwardFlowingLiquid\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool inDownwardFlowingLiquid() const;
    /**
     * @hash   1059223973
     * @symbol  ?initActorProperties\@Actor\@\@QEAAXXZ
     */
    MCAPI void initActorProperties();
    /**
     * @hash   -1120596048
     * @symbol  ?initParams\@Actor\@\@QEAAXAEAVVariantParameterList\@\@\@Z
     */
    MCAPI void initParams(class VariantParameterList &);
    /**
     * @hash   483054812
     * @symbol  ?initParams\@Actor\@\@QEAAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void initParams(class RenderParams &);
    /**
     * @hash   -10315948
     * @symbol  ?isActorLocationInMaterial\@Actor\@\@QEBA_NW4ActorLocation\@\@W4MaterialType\@\@\@Z
     */
    MCAPI bool isActorLocationInMaterial(enum class ActorLocation, enum class MaterialType) const;
    /**
     * @hash   -10070732
     * @symbol  ?isAngry\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isAngry() const;
    /**
     * @hash   117789542
     * @symbol  ?isAutonomous\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isAutonomous() const;
    /**
     * @hash   839008758
     * @symbol  ?isBaby\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isBaby() const;
    /**
     * @hash   -533213932
     * @symbol  ?isBreakingObstruction\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isBreakingObstruction() const;
    /**
     * @hash   -1580128458
     * @symbol  ?isBribed\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isBribed() const;
    /**
     * @hash   1335593652
     * @symbol  ?isCharged\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isCharged() const;
    /**
     * @hash   -1574457132
     * @symbol  ?isChested\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isChested() const;
    /**
     * @hash   101543878
     * @symbol  ?isClimbing\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isClimbing() const;
    /**
     * @hash   1864425492
     * @symbol  ?isControlledByLocalInstance\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isControlledByLocalInstance() const;
    /**
     * @hash   -2054079308
     * @symbol  ?isDancing\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDancing() const;
    /**
     * @hash   -1666908122
     * @symbol  ?isDead\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDead() const;
    /**
     * @hash   287418644
     * @symbol  ?isDoorBreaker\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDoorBreaker() const;
    /**
     * @hash   -1128936138
     * @symbol  ?isDoorOpener\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDoorOpener() const;
    /**
     * @hash   -605246522
     * @symbol  ?isGlobal\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isGlobal() const;
    /**
     * @hash   762933156
     * @symbol  ?isIgnited\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isIgnited() const;
    /**
     * @hash   587610708
     * @symbol  ?isImmersedInWater\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isImmersedInWater() const;
    /**
     * @hash   1821150742
     * @symbol  ?isInClouds\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInClouds() const;
    /**
     * @hash   -1325698762
     * @symbol  ?isInContactWithWater\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInContactWithWater() const;
    /**
     * @hash   356474902
     * @symbol  ?isInLava\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInLava() const;
    /**
     * @hash   -1221052554
     * @symbol  ?isInLove\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInLove() const;
    /**
     * @hash   933104212
     * @symbol  ?isInPrecipitation\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInPrecipitation() const;
    /**
     * @hash   1148174134
     * @symbol  ?isInRain\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInRain() const;
    /**
     * @hash   775102836
     * @symbol  ?isInScaffolding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInScaffolding() const;
    /**
     * @hash   -239983434
     * @symbol  ?isInSnow\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInSnow() const;
    /**
     * @hash   189501270
     * @symbol  ?isInThunderstorm\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInThunderstorm() const;
    /**
     * @hash   1214038836
     * @symbol  ?isInWaterOrRain\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInWaterOrRain() const;
    /**
     * @hash   -1472300604
     * @symbol  ?isInWorld\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInWorld() const;
    /**
     * @hash   -1816079453
     * @symbol  ?isInsideBorderBlock\@Actor\@\@QEBA_NM\@Z
     */
    MCAPI bool isInsideBorderBlock(float) const;
    /**
     * @hash   -557029018
     * @symbol  ?isInsidePortal\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInsidePortal() const;
    /**
     * @symbol  ?isJumping\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isJumping() const;
    /**
     * @hash   182662806
     * @symbol  ?isLayingDown\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isLayingDown() const;
    /**
     * @hash   1033063188
     * @symbol  ?isLeashed\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isLeashed() const;
    /**
     * @hash   1784082166
     * @symbol  ?isMovedToLimbo\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isMovedToLimbo() const;
    /**
     * @hash   -395546810
     * @symbol  ?isMovedToUnloadedChunk\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isMovedToUnloadedChunk() const;
    /**
     * @hash   1261508150
     * @symbol  ?isMoving\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isMoving() const;
    /**
     * @hash   430798134
     * @symbol  ?isOrphan\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isOrphan() const;
    /**
     * @hash   856449686
     * @symbol  ?isOutOfControl\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isOutOfControl() const;
    /**
     * @hash   1026670324
     * @symbol  ?isOverScaffolding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isOverScaffolding() const;
    /**
     * @hash   1050456630
     * @symbol  ?isPacified\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPacified() const;
    /**
     * @hash   -491596901
     * @symbol  ?isPassenger\@Actor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isPassenger(class Actor const &) const;
    /**
     * @hash   587109318
     * @symbol  ?isPersistent\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPersistent() const;
    /**
     * @hash   1637195572
     * @symbol  ?isPlayingDead\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPlayingDead() const;
    /**
     * @hash   -32759788
     * @symbol  ?isPowered\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPowered() const;
    /**
     * @hash   -1576080684
     * @symbol  ?isRemoved\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isRemoved() const;
    /**
     * @hash   -1367416412
     * @symbol  ?isResting\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isResting() const;
    /**
     * @hash   -1302631530
     * @symbol  ?isRiding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isRiding() const;
    /**
     * @hash   2039178044
     * @symbol  ?isRiding\@Actor\@\@QEBA_NPEAV1\@\@Z
     */
    MCAPI bool isRiding(class Actor *) const;
    /**
     * @hash   343632516
     * @symbol  ?isSafeToSleepNear\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSafeToSleepNear() const;
    /**
     * @hash   1196163124
     * @symbol  ?isSheared\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSheared() const;
    /**
     * @hash   1411470324
     * @symbol  ?isSitting\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSitting() const;
    /**
     * @hash   -1018506666
     * @symbol  ?isSneaking\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSneaking() const;
    /**
     * @hash   241849844
     * @symbol  ?isStackable\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isStackable() const;
    /**
     * @hash   1538443126
     * @symbol  ?isStanding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isStanding() const;
    /**
     * @hash   59234516
     * @symbol  ?isSwimmer\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSwimmer() const;
    /**
     * @hash   -3957674
     * @symbol  ?isSwimming\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSwimming() const;
    /**
     * @hash   -274242058
     * @symbol  ?isTame\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTame() const;
    /**
     * @hash   1516298708
     * @symbol  ?isTickingEntity\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTickingEntity() const;
    /**
     * @hash   -129003020
     * @symbol  ?isTouchingDamageBlock\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTouchingDamageBlock() const;
    /**
     * @hash   -758020876
     * @symbol  ?isTrading\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTrading() const;
    /**
     * @hash   1963800918
     * @symbol  ?isTrusting\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTrusting() const;
    /**
     * @hash   -1299594875
     * @symbol  ?isType\@Actor\@\@QEBA_NW4ActorType\@\@\@Z
     */
    MCAPI bool isType(enum class ActorType) const;
    /**
     * @hash   -781149356
     * @symbol  ?isUseNewTradeScreen\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isUseNewTradeScreen() const;
    /**
     * @hash   -662820714
     * @symbol  ?isWASDControlled\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isWASDControlled() const;
    /**
     * @hash   436033238
     * @symbol  ?isWalker\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isWalker() const;
    /**
     * @hash   557132805
     * @symbol  ?lerpTo\@Actor\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@MH\@Z
     */
    MCAPI void lerpTo(class Vec3 const &, class Vec2 const &, float, int);
    /**
     * @hash   1297657456
     * @symbol  ?lerpTo\@Actor\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@H\@Z
     */
    MCAPI void lerpTo(class Vec3 const &, class Vec2 const &, int);
    /**
     * @hash   -621515747
     * @symbol  ?lerpToRotation\@Actor\@\@QEAAXAEBVVec2\@\@H\@Z
     */
    MCAPI void lerpToRotation(class Vec2 const &, int);
    /**
     * @hash   -107289697
     * @symbol  ?loadEntityFlags\@Actor\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void loadEntityFlags(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1012020076
     * @symbol  ?lovePartnerId\@Actor\@\@QEBAAEBUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const & lovePartnerId() const;
    /**
     * @hash   1773887724
     * @symbol  ?migrateUniqueID\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void migrateUniqueID(struct ActorUniqueID);
    /**
     * @hash   1200238326
     * @symbol  ?moveBBs\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void moveBBs(class Vec3 const &);
    /**
     * @hash   1885968997
     * @symbol  ?moveRelative\@Actor\@\@QEAAXMMMM\@Z
     */
    MCAPI void moveRelative(float, float, float, float);
    /**
     * @hash   -1116426825
     * @symbol  ?moveTo\@Actor\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI void moveTo(class Vec3 const &, class Vec2 const &);
    /**
     * @hash   1508525899
     * @symbol  ?onAffectedByWaterBottle\@Actor\@\@QEAAXXZ
     */
    MCAPI void onAffectedByWaterBottle();
    /**
     * @hash   1669314870
     * @symbol  ?onClimbableBlock\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool onClimbableBlock() const;
    /**
     * @hash   -2113011834
     * @symbol  ?onHoverableBlock\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool onHoverableBlock() const;
    /**
     * @hash   1387728244
     * @symbol  ?onOnewayCollision\@Actor\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void onOnewayCollision(class AABB const &);
    /**
     * @hash   -1725866873
     * @symbol  ??9Actor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class Actor const &) const;
    /**
     * @hash   404604482
     * @symbol  ??8Actor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Actor const &) const;
    /**
     * @hash   -675753473
     * @symbol  ?pickUpItem\@Actor\@\@QEAAXAEAVItemActor\@\@H\@Z
     */
    MCAPI void pickUpItem(class ItemActor &, int);
    /**
     * @hash   1815887556
     * @symbol  ?playSound\@Actor\@\@QEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void playSound(enum class LevelSoundEvent, class Vec3 const &, class Block const &);
    /**
     * @hash   1434119172
     * @symbol  ?playSound\@Actor\@\@QEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI void playSound(enum class LevelSoundEvent, class Vec3 const &, int);
    /**
     * @symbol  ?positionAllPassengers\@Actor\@\@QEAAXXZ
     */
    MCAPI void positionAllPassengers();
    /**
     * @hash   1422935287
     * @symbol  ?postSplashGameEvent\@Actor\@\@QEAAXXZ
     */
    MCAPI void postSplashGameEvent();
    /**
     * @hash   1005058357
     * @symbol  ?pullInEntity\@Actor\@\@QEAA_NAEAV1\@\@Z
     */
    MCAPI bool pullInEntity(class Actor &);
    /**
     * @hash   -1092436862
     * @symbol  ?pushBackActionEventToActionQueue\@Actor\@\@QEAAXVActionEvent\@\@\@Z
     */
    MCAPI void pushBackActionEventToActionQueue(class ActionEvent);
    /**
     * @hash   -192817901
     * @symbol  ?queueBBUpdateFromDefinition\@Actor\@\@QEAAXXZ
     */
    MCAPI void queueBBUpdateFromDefinition();
    /**
     * @hash   2134076198
     * @symbol  ?queueBBUpdateFromValue\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void queueBBUpdateFromValue(class Vec2 const &);
    /**
     * @hash   1626749815
     * @symbol  ?refreshComponents\@Actor\@\@QEAAXXZ
     */
    MCAPI void refreshComponents();
    /**
     * @hash   1338910437
     * @symbol  ?reload\@Actor\@\@QEAAXXZ
     */
    MCAPI void reload();
    /**
     * @hash   171176957
     * @symbol  ?removeAllEffects\@Actor\@\@QEAAXXZ
     */
    MCAPI void removeAllEffects();
    /**
     * @hash   -1311171624
     * @symbol  ?removeAllPassengers\@Actor\@\@QEAAX_N0\@Z
     */
    MCAPI void removeAllPassengers(bool, bool);
    /**
     * @hash   -1876018852
     * @symbol  ?removeDefinitionGroup\@Actor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeDefinitionGroup(std::string const &);
    /**
     * @hash   -1658045650
     * @symbol  ?removeEffect\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void removeEffect(int);
    /**
     * @hash   -380875463
     * @symbol  ?removePersistingTrade\@Actor\@\@QEAAXXZ
     */
    MCAPI void removePersistingTrade();
    /**
     * @hash   131736685
     * @symbol  ?removeTag\@Actor\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool removeTag(std::string const &);
    /**
     * @symbol  ?resetSlideYOffset\@Actor\@\@QEAAXXZ
     */
    MCAPI void resetSlideYOffset();
    /**
     * @hash   906908600
     * @symbol  ?saveEntityFlags\@Actor\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void saveEntityFlags(class CompoundTag &) const;
    /**
     * @hash   -1735257356
     * @symbol  ?saveLinks\@Actor\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> saveLinks() const;
    /**
     * @hash   -1434352267
     * @symbol  ?savePersistingTrade\@Actor\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI void savePersistingTrade(std::unique_ptr<class CompoundTag>, int);
    /**
     * @hash   281186066
     * @symbol  ?sendActorDefinitionEventTriggered\@Actor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void sendActorDefinitionEventTriggered(std::string const &);
    /**
     * @hash   -529073989
     * @symbol  ?sendMotionToServer\@Actor\@\@QEAAXXZ
     */
    MCAPI void sendMotionToServer();
    /**
     * @hash   -527723460
     * @symbol  ?serializationSetHealth\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void serializationSetHealth(int);
    /**
     * @hash   957906580
     * @symbol  ?setAABB\@Actor\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void setAABB(class AABB const &);
    /**
     * @hash   1404164934
     * @symbol  ?setAABBDim\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setAABBDim(class Vec2 const &);
    /**
     * @hash   -68490992
     * @symbol  ?setActorRendererId\@Actor\@\@QEAAXVHashedString\@\@\@Z
     */
    MCAPI void setActorRendererId(class HashedString);
    /**
     * @hash   397517128
     * @symbol  ?setAutonomous\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setAutonomous(bool);
    /**
     * @hash   -373959002
     * @symbol  ?setBaseDefinition\@Actor\@\@QEAAXAEBUActorDefinitionIdentifier\@\@_N1\@Z
     */
    MCAPI void setBaseDefinition(struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -1320483164
     * @symbol  ?setBlockTarget\@Actor\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setBlockTarget(class BlockPos const &);
    /**
     * @hash   1436373718
     * @symbol  ?setBreakingObstruction\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setBreakingObstruction(bool);
    /**
     * @hash   1794253400
     * @symbol  ?setCanClimb\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setCanClimb(bool);
    /**
     * @hash   653398520
     * @symbol  ?setCanFly\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setCanFly(bool);
    /**
     * @hash   135536264
     * @symbol  ?setChainedDamageEffects\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setChainedDamageEffects(bool);
    /**
     * @hash   31663894
     * @symbol  ?setCharged\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setCharged(bool);
    /**
     * @hash   -153557512
     * @symbol  ?setClimbing\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setClimbing(bool);
    /**
     * @hash   -904247536
     * @symbol  ?setColor\@Actor\@\@QEAAXW4PaletteColor\@\@\@Z
     */
    MCAPI void setColor(enum class PaletteColor);
    /**
     * @hash   -1235147716
     * @symbol  ?setControllingSeat\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setControllingSeat(int);
    /**
     * @hash   -1983974362
     * @symbol  ?setDancing\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDancing(bool);
    /**
     * @hash   475165224
     * @symbol  ?setDead\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDead(bool);
    /**
     * @hash   1086952996
     * @symbol  ?setDimension\@Actor\@\@QEAAXV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@\@Z
     */
    MCAPI void setDimension(class WeakRefT<struct SharePtrRefTraits<class Dimension>>);
    /**
     * @hash   1783100230
     * @symbol  ?setDoorBreaker\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDoorBreaker(bool);
    /**
     * @hash   378064168
     * @symbol  ?setDoorOpener\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDoorOpener(bool);
    /**
     * @hash   258948358
     * @symbol  ?setEnchanted\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setEnchanted(bool);
    /**
     * @hash   208846208
     * @symbol  ?setFallDistance\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setFallDistance(float);
    /**
     * @hash   -1170152534
     * @symbol  ?setFishingHookID\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setFishingHookID(struct ActorUniqueID);
    /**
     * @hash   811285016
     * @symbol  ?setGlobal\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setGlobal(bool);
    /**
     * @hash   1186972800
     * @symbol  ?setHurtDir\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setHurtDir(int);
    /**
     * @hash   -1633092598
     * @symbol  ?setHurtTime\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setHurtTime(int);
    /**
     * @hash   -840785075
     * @symbol  ?setInLove\@Actor\@\@QEAAXPEAV1\@\@Z
     */
    MCAPI void setInLove(class Actor *);
    /**
     * @hash   1218472134
     * @symbol  ?setInterpolation\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setInterpolation(bool);
    /**
     * @hash   -1273602586
     * @symbol  ?setInvisible\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setInvisible(bool);
    /**
     * @hash   -1769440058
     * @symbol  ?setIsExperienceDropEnabled\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setIsExperienceDropEnabled(bool);
    /**
     * @hash   -1904032690
     * @symbol  ?setJumpDuration\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setJumpDuration(int);
    /**
     * @symbol  ?setJumping\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setJumping(bool);
    /**
     * @hash   -920322510
     * @symbol  ?setLastHitBB\@Actor\@\@QEAAXAEBVVec3\@\@0\@Z
     */
    MCAPI void setLastHitBB(class Vec3 const &, class Vec3 const &);
    /**
     * @hash   -2042922040
     * @symbol  ?setLayingDown\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setLayingDown(bool);
    /**
     * @hash   730066314
     * @symbol  ?setLeashHolder\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setLeashHolder(struct ActorUniqueID);
    /**
     * @hash   1609367868
     * @symbol  ?setLimitedLifetimeTicks\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setLimitedLifetimeTicks(int);
    /**
     * @hash   1420564988
     * @symbol  ?setMarkVariant\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setMarkVariant(int);
    /**
     * @hash   1767359800
     * @symbol  ?setMovedToLimbo\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setMovedToLimbo(bool);
    /**
     * @hash   -1661353208
     * @symbol  ?setMovedToUnloadedChunk\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setMovedToUnloadedChunk(bool);
    /**
     * @hash   -1572346952
     * @symbol  ?setMoving\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setMoving(bool);
    /**
     * @hash   -153900809
     * @symbol  ?setPersistent\@Actor\@\@QEAAXXZ
     */
    MCAPI void setPersistent();
    /**
     * @hash   -533643660
     * @symbol  ?setPosDirectLegacy\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPosDirectLegacy(class Vec3 const &);
    /**
     * @hash   -1213083868
     * @symbol  ?setPosPrev\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPosPrev(class Vec3 const &);
    /**
     * @hash   1726266838
     * @symbol  ?setPrevPosRotSetThisTick\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setPrevPosRotSetThisTick(bool);
    /**
     * @hash   571500857
     * @symbol  ?setPreviousPosRot\@Actor\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI void setPreviousPosRot(class Vec3 const &, class Vec2 const &);
    /**
     * @hash   1943176054
     * @symbol  ?setResting\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setResting(bool);
    /**
     * @hash   -1538053432
     * @symbol  ?setRotationDirectly\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRotationDirectly(class Vec2 const &);
    /**
     * @hash   -1722206360
     * @symbol  ?setRotationPrev\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRotationPrev(class Vec2 const &);
    /**
     * @hash   169669098
     * @symbol  ?setRotationPrevY\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setRotationPrevY(float);
    /**
     * @hash   -471952474
     * @symbol  ?setRotationWrapped\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRotationWrapped(class Vec2 const &);
    /**
     * @hash   -1864021930
     * @symbol  ?setRotationX\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setRotationX(float);
    /**
     * @hash   1462532916
     * @symbol  ?setRotationY\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setRotationY(float);
    /**
     * @hash   739235328
     * @symbol  ?setRuntimeID\@Actor\@\@QEAAXVActorRuntimeID\@\@\@Z
     */
    MCAPI void setRuntimeID(class ActorRuntimeID);
    /**
     * @hash   -1666834840
     * @symbol  ?setSaddle\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setSaddle(bool);
    /**
     * @hash   -1865131544
     * @symbol  ?setScared\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setScared(bool);
    /**
     * @hash   688544093
     * @symbol  ?setSeatDescription\@Actor\@\@QEAAXAEBVVec3\@\@AEBUSeatDescription\@\@\@Z
     */
    MCAPI void setSeatDescription(class Vec3 const &, struct SeatDescription const &);
    /**
     * @hash   -298241546
     * @symbol  ?setShakeTime\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setShakeTime(int);
    /**
     * @hash   -1837803342
     * @symbol  ?setSkinID\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setSkinID(int);
    /**
     * @symbol  ?setSlideOffset\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setSlideOffset(class Vec2 const &);
    /**
     * @hash   1930925600
     * @symbol  ?setStrength\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setStrength(int);
    /**
     * @hash   685623126
     * @symbol  ?setStrengthMax\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setStrengthMax(int);
    /**
     * @hash   396601132
     * @symbol  ?setStructuralIntegrity\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setStructuralIntegrity(int);
    /**
     * @hash   822018438
     * @symbol  ?setStunned\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setStunned(bool);
    /**
     * @hash   -1109327898
     * @symbol  ?setSwimmer\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setSwimmer(bool);
    /**
     * @hash   1008041174
     * @symbol  ?setTempted\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setTempted(bool);
    /**
     * @hash   166114662
     * @symbol  ?setTradeInterest\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setTradeInterest(bool);
    /**
     * @hash   -1450199091
     * @symbol  ?setTradingPlayer\@Actor\@\@QEAAXPEAVPlayer\@\@\@Z
     */
    MCAPI void setTradingPlayer(class Player *);
    /**
     * @hash   -765650996
     * @symbol  ?setUniqueID\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setUniqueID(struct ActorUniqueID);
    /**
     * @hash   -1091205854
     * @symbol  ?setVariant\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setVariant(int);
    /**
     * @hash   882106422
     * @symbol  ?setVelocity\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setVelocity(class Vec3 const &);
    /**
     * @hash   -1155452216
     * @symbol  ?setWASDControlled\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setWASDControlled(bool);
    /**
     * @hash   -1506478376
     * @symbol  ?setWalker\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setWalker(bool);
    /**
     * @hash   1393868996
     * @symbol  ?setYHeadRot\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setYHeadRot(float);
    /**
     * @hash   274269336
     * @symbol  ?setYHeadRotO\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setYHeadRotO(float);
    /**
     * @hash   -368363143
     * @symbol  ?setYHeadRotations\@Actor\@\@QEAAXMM\@Z
     */
    MCAPI void setYHeadRotations(float, float);
    /**
     * @hash   160252931
     * @symbol  ?shouldOrphan\@Actor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool shouldOrphan(class BlockSource &);
    /**
     * @hash   -223982332
     * @symbol  ?shouldUpdateEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool shouldUpdateEffects() const;
    /**
     * @hash   266069789
     * @symbol  ?spawnEatParticles\@Actor\@\@QEAAXAEBVItemStack\@\@H\@Z
     */
    MCAPI void spawnEatParticles(class ItemStack const &, int);
    /**
     * @hash   154913527
     * @symbol  ?spinAttack\@Actor\@\@QEAAXXZ
     */
    MCAPI void spinAttack();
    /**
     * @hash   -140270924
     * @symbol  ?teleportPassengersTo\@Actor\@\@QEAAXAEBVVec3\@\@HH\@Z
     */
    MCAPI void teleportPassengersTo(class Vec3 const &, int, int);
    /**
     * @hash   118660418
     * @symbol  ?testForEntityStacking\@Actor\@\@QEAAXAEAVBlockSource\@\@AEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void testForEntityStacking(class BlockSource &, class AABB const &, std::vector<class AABB> &);
    /**
     * @hash   -1218124157
     * @symbol  ?tick\@Actor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool tick(class BlockSource &);
    /**
     * @hash   -1634425542
     * @symbol  ?transferTickingArea\@Actor\@\@QEAAXAEAVDimension\@\@\@Z
     */
    MCAPI void transferTickingArea(class Dimension &);
    /**
     * @hash   939037452
     * @symbol  ?tryGetEquippableSlotAllowedItems\@Actor\@\@QEBAPEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI std::vector<class ItemDescriptor> const * tryGetEquippableSlotAllowedItems(int) const;
    /**
     * @symbol  ?tryGetEquippableSlotForItem\@Actor\@\@QEBA?AV?$optional\@H\@std\@\@VItemDescriptor\@\@\@Z
     */
    MCAPI class std::optional<int> tryGetEquippableSlotForItem(class ItemDescriptor) const;
    /**
     * @hash   1765570667
     * @symbol  ?updateAnimationComponentOnServer\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateAnimationComponentOnServer();
    /**
     * @hash   -1733762897
     * @symbol  ?updateBBFromDefinition\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateBBFromDefinition();
    /**
     * @hash   275495979
     * @symbol  ?updateDescription\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateDescription();
    /**
     * @hash   2038173751
     * @symbol  ?updateInvisibilityStatus\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateInvisibilityStatus();
    /**
     * @hash   -957431458
     * @symbol  ?updateMolangVariables\@Actor\@\@QEAAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void updateMolangVariables(class RenderParams &);
    /**
     * @hash   1946740609
     * @symbol  ?updateTickingData\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateTickingData();
    /**
     * @hash   -708983021
     * @symbol  ?useSaddle\@Actor\@\@QEAA_NAEAVItemStackBase\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI bool useSaddle(class ItemStackBase &, class Player *);
    /**
     * @hash   1862397606
     * @symbol  ?wasLastHitByPlayer\@Actor\@\@QEAA_NXZ
     */
    MCAPI bool wasLastHitByPlayer();
    /**
     * @hash   -759582636
     * @symbol  ?wasLoadedFromNBTThisFrame\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool wasLoadedFromNBTThisFrame() const;
    /**
     * @hash   -1346251985
     * @symbol  ?_move\@Actor\@\@SAXAEAUIActorMovementProxy\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static void _move(struct IActorMovementProxy &, class Vec3 const &);
    /**
     * @hash   -1073565161
     * @symbol  ?buildForward\@Actor\@\@SA?AVVec3\@\@AEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static class Vec3 buildForward(struct IActorMovementProxy const &);
    /**
     * @hash   1469289653
     * @symbol  ?canBeginOrContinueClimbingLadder\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool canBeginOrContinueClimbingLadder(struct IActorMovementProxy const &);
    /**
     * @hash   -1014542880
     * @symbol  ?canBeginOrContinueClimbingLadder\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static bool canBeginOrContinueClimbingLadder(struct IActorMovementProxy const &, class IConstBlockSource const &);
    /**
     * @hash   2009398533
     * @symbol  ?getBlockPosCurrentlyStandingOn\@Actor\@\@SA?AVBlockPos\@\@AEBUIActorMovementProxy\@\@PEBU3\@\@Z
     */
    MCAPI static class BlockPos getBlockPosCurrentlyStandingOn(struct IActorMovementProxy const &, struct IActorMovementProxy const *);
    /**
     * @hash   -411317743
     * @symbol  ?getBlockPosCurrentlyStandingOn\@Actor\@\@SA?AVBlockPos\@\@AEBVVec3\@\@VAABB\@\@AEBVIConstBlockSource\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    MCAPI static class BlockPos getBlockPosCurrentlyStandingOn(class Vec3 const &, class AABB, class IConstBlockSource const &, class optional_ref<class GetCollisionShapeInterface const>);
    /**
     * @symbol  ?getCenter\@Actor\@\@SA?AVVec3\@\@MAEBUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@M\@Z
     */
    MCAPI static class Vec3 getCenter(float, struct AABBShapeComponent const &, struct StateVectorComponent const &, float);
    /**
     * @hash   -148525625
     * @symbol  ?getEffect\@Actor\@\@SAPEBVMobEffectInstance\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@AEBVMobEffect\@\@\@Z
     */
    MCAPI static class MobEffectInstance const * getEffect(std::vector<class MobEffectInstance> const &, class MobEffect const &);
    /**
     * @hash   -864337977
     * @symbol  ?getInterpolatedRotation\@Actor\@\@SA?AVVec2\@\@AEBV2\@0M\@Z
     */
    MCAPI static class Vec2 getInterpolatedRotation(class Vec2 const &, class Vec2 const &, float);
    /**
     * @hash   -1167571206
     * @symbol  ?getLiquidAABB\@Actor\@\@SA?AVAABB\@\@AEBV2\@W4MaterialType\@\@\@Z
     */
    MCAPI static class AABB getLiquidAABB(class AABB const &, enum class MaterialType);
    /**
     * @hash   2110082429
     * @symbol  ?getLiquidFlowStrength\@Actor\@\@SAMW4MaterialType\@\@\@Z
     */
    MCAPI static float getLiquidFlowStrength(enum class MaterialType);
    /**
     * @hash   -70635712
     * @symbol  ?getStatusFlag\@Actor\@\@SA_NAEBVSynchedActorData\@\@W4ActorFlags\@\@\@Z
     */
    MCAPI static bool getStatusFlag(class SynchedActorData const &, enum class ActorFlags);
    /**
     * @hash   -935918530
     * @symbol  ?getViewVector\@Actor\@\@SA?AVVec3\@\@AEBUIActorMovementProxy\@\@M\@Z
     */
    MCAPI static class Vec3 getViewVector(struct IActorMovementProxy const &, float);
    /**
     * @hash   2117245879
     * @symbol  ?getViewVector\@Actor\@\@SA?AVVec3\@\@AEBVVec2\@\@0M\@Z
     */
    MCAPI static class Vec3 getViewVector(class Vec2 const &, class Vec2 const &, float);
    /**
     * @hash   -695313327
     * @symbol  ?hasSubBBIn\@Actor\@\@SA_NAEBVIConstBlockSource\@\@AEBV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static bool hasSubBBIn(class IConstBlockSource const &, std::vector<class AABB> const &, enum class MaterialType);
    /**
     * @hash   719048163
     * @symbol  ?isFree\@Actor\@\@SA_NAEAUIActorMovementProxy\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI static bool isFree(struct IActorMovementProxy &, class Vec3 const &, float);
    /**
     * @hash   1292955223
     * @symbol  ?isImmersedInWater\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isImmersedInWater(struct IActorMovementProxy const &);
    /**
     * @hash   -305063083
     * @symbol  ?isImmobile\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isImmobile(struct IActorMovementProxy const &);
    /**
     * @hash   -1598158000
     * @symbol  ?isInLava\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static bool isInLava(struct IActorMovementProxy const &, class IConstBlockSource const &);
    /**
     * @hash   200360204
     * @symbol  ?isInLiquid\@Actor\@\@SA_NW4MaterialType\@\@AEBVIConstBlockSource\@\@AEBVAABB\@\@AEBV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool isInLiquid(enum class MaterialType, class IConstBlockSource const &, class AABB const &, std::vector<class AABB> const &);
    /**
     * @hash   528997383
     * @symbol  ?isInScaffolding\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isInScaffolding(struct IActorMovementProxy const &);
    /**
     * @hash   774365703
     * @symbol  ?isSitting\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isSitting(struct IActorMovementProxy const &);
    /**
     * @hash   -171090555
     * @symbol  ?isStanding\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isStanding(struct IActorMovementProxy const &);
    /**
     * @hash   -918749026
     * @symbol  ?moveRelative\@Actor\@\@SAXAEAUIActorMovementProxy\@\@MMMM\@Z
     */
    MCAPI static void moveRelative(struct IActorMovementProxy &, float, float, float, float);
    /**
     * @hash   382155765
     * @symbol  ?onClimbableBlock\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool onClimbableBlock(struct IActorMovementProxy const &);
    /**
     * @hash   -866531041
     * @symbol  ?testForCollidableMobs\@Actor\@\@SAXAEBUIActorMovementProxy\@\@AEAVBlockSource\@\@AEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void testForCollidableMobs(struct IActorMovementProxy const &, class BlockSource &, class AABB const &, std::vector<class AABB> &);
    /**
     * @hash   -721671417
     * @symbol  ?tryGetFromComponent\@Actor\@\@SAPEAV1\@AEAVActorOwnerComponent\@\@_N\@Z
     */
    MCAPI static class Actor * tryGetFromComponent(class ActorOwnerComponent &, bool);
    /**
     * @hash   1072032805
     * @symbol  ?tryGetFromComponent\@Actor\@\@SAPEBV1\@AEBVActorOwnerComponent\@\@_N\@Z
     */
    MCAPI static class Actor const * tryGetFromComponent(class ActorOwnerComponent const &, bool);
    /**
     * @hash   992185365
     * @symbol  ?tryGetFromEntity\@Actor\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Actor * tryGetFromEntity(class EntityContext &, bool);
    /**
     * @symbol  ?tryGetFromEntity\@Actor\@\@SAPEAV1\@AEBVStrictEntityContext\@\@AEAVEntityRegistry\@\@_N\@Z
     */
    MCAPI static class Actor * tryGetFromEntity(class StrictEntityContext const &, class EntityRegistry &, bool);
    /**
     * @hash   -2008082918
     * @symbol  ?tryGetFromEntity\@Actor\@\@SAPEAV1\@V?$StackRefResultT\@UEntityRefTraits\@\@\@\@_N\@Z
     */
    MCAPI static class Actor * tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool);

//protected:
    /**
     * @hash   -841588865
     * @symbol  ?_assignActorMovementProxy\@Actor\@\@IEAAXV?$not_null\@V?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@\@gsl\@\@\@Z
     */
    MCAPI void _assignActorMovementProxy(class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>>);
    /**
     * @hash   -1134783595
     * @symbol  ?_drop\@Actor\@\@IEAAPEBVItemActor\@\@AEBVItemStack\@\@_N\@Z
     */
    MCAPI class ItemActor const * _drop(class ItemStack const &, bool);
    /**
     * @symbol  ?_getAllEffectsNonConst\@Actor\@\@IEAAAEAV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobEffectInstance> & _getAllEffectsNonConst();
    /**
     * @hash   304937428
     * @symbol  ?_initializeMaxAutoStep\@Actor\@\@IEAAXM\@Z
     */
    MCAPI void _initializeMaxAutoStep(float);
    /**
     * @hash   1980304240
     * @symbol  ?_isHeadInWater\@Actor\@\@IEBA_NXZ
     */
    MCAPI bool _isHeadInWater() const;
    /**
     * @hash   670797001
     * @symbol  ?_playMovementSound\@Actor\@\@IEAAX_N\@Z
     */
    MCAPI void _playMovementSound(bool);
    /**
     * @hash   682026730
     * @symbol  ?_refreshAABB\@Actor\@\@IEAAXXZ
     */
    MCAPI void _refreshAABB();
    /**
     * @hash   1784718114
     * @symbol  ?_setArmorContainer\@Actor\@\@IEAAXV?$unique_ptr\@VSimpleContainer\@\@U?$default_delete\@VSimpleContainer\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _setArmorContainer(std::unique_ptr<class SimpleContainer>);
    /**
     * @hash   -719447876
     * @symbol  ?_setDimensionTransitionComponent\@Actor\@\@IEAAXV?$AutomaticID\@VDimension\@\@H\@\@0H\@Z
     */
    MCAPI void _setDimensionTransitionComponent(class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>, int);
    /**
     * @hash   1190158680
     * @symbol  ?_setHandContainer\@Actor\@\@IEAAXV?$unique_ptr\@VSimpleContainer\@\@U?$default_delete\@VSimpleContainer\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _setHandContainer(std::unique_ptr<class SimpleContainer>);
    /**
     * @hash   897626331
     * @symbol  ?_setHandContainerItem\@Actor\@\@IEAAXAEBVItemStack\@\@W4HandSlot\@\@\@Z
     */
    MCAPI void _setHandContainerItem(class ItemStack const &, enum class HandSlot);
    /**
     * @hash   -615574601
     * @symbol  ?_setHeightOffset\@Actor\@\@IEAAXM\@Z
     */
    MCAPI void _setHeightOffset(float);
    /**
     * @hash   1579167563
     * @symbol  ?_setPos\@Actor\@\@IEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _setPos(class Vec3 const &);
    /**
     * @hash   585560904
     * @symbol  ?_setPosPrev\@Actor\@\@IEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _setPosPrev(class Vec3 const &);
    /**
     * @hash   -1856431655
     * @symbol  ?enableAutoSendPosRot\@Actor\@\@IEAAX_N\@Z
     */
    MCAPI void enableAutoSendPosRot(bool);
    /**
     * @hash   -1276058725
     * @symbol  ?updateWaterState\@Actor\@\@IEAA_NXZ
     */
    MCAPI bool updateWaterState();
    /**
     * @hash   1039111163
     * @symbol  ?getBlockWhenClimbing\@Actor\@\@KAAEBVBlock\@\@AEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static class Block const & getBlockWhenClimbing(struct IActorMovementProxy const &);
    /**
     * @hash   -368322956
     * @symbol  ?getBlockWhenClimbing\@Actor\@\@KAAEBVBlock\@\@AEBUIActorMovementProxy\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static class Block const & getBlockWhenClimbing(struct IActorMovementProxy const &, class IConstBlockSource const &);

//private:
    /**
     * @hash   -656320517
     * @symbol  ?_addActorBuiltInComponents\@Actor\@\@AEAA?AUBuiltInActorComponents\@\@XZ
     */
    MCAPI struct BuiltInActorComponents _addActorBuiltInComponents();
    /**
     * @hash   -1465799258
     * @symbol  ?_addActorNonBuiltInComponents\@Actor\@\@AEAAXXZ
     */
    MCAPI void _addActorNonBuiltInComponents();
    /**
     * @hash   -1263516121
     * @symbol  ?_damageNearbyMobs\@Actor\@\@AEAAXXZ
     */
    MCAPI void _damageNearbyMobs();
    /**
     * @hash   -1474455477
     * @symbol  ?_defaultInitEquipmentDropChances\@Actor\@\@AEAAXXZ
     */
    MCAPI void _defaultInitEquipmentDropChances();
    /**
     * @hash   -2004541843
     * @symbol  ?_initializeLeashRopeSystem\@Actor\@\@AEAAXPEAV1\@\@Z
     */
    MCAPI void _initializeLeashRopeSystem(class Actor *);
    /**
     * @hash   1691193605
     * @symbol  ?_isItemStackNetManagerEnabled\@Actor\@\@AEBA_NXZ
     */
    MCAPI bool _isItemStackNetManagerEnabled() const;
    /**
     * @hash   -1474508483
     * @symbol  ?_onVibrationDetected\@Actor\@\@AEAAXXZ
     */
    MCAPI void _onVibrationDetected();
    /**
     * @hash   1084186894
     * @symbol  ?_serializeComponents\@Actor\@\@AEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _serializeComponents(class CompoundTag &) const;
    /**
     * @hash   -518267487
     * @symbol  ?_setupServerAnimationComponent\@Actor\@\@AEAAXXZ
     */
    MCAPI void _setupServerAnimationComponent();
    /**
     * @hash   1571466072
     * @symbol  ?_tryPlantWitherRose\@Actor\@\@AEAAXXZ
     */
    MCAPI void _tryPlantWitherRose();
    /**
     * @hash   1793582891
     * @symbol  ?_updateComposition\@Actor\@\@AEAAX_N\@Z
     */
    MCAPI void _updateComposition(bool);
    /**
     * @hash   -200277623
     * @symbol  ?_updateOwnerChunk\@Actor\@\@AEAAXXZ
     */
    MCAPI void _updateOwnerChunk();
    /**
     * @hash   -1837916253
     * @symbol  ?_containsSneakCollisionShapes\@Actor\@\@CA_NAEAUIActorMovementProxy\@\@AEBVIConstBlockSource\@\@AEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool _containsSneakCollisionShapes(struct IActorMovementProxy &, class IConstBlockSource const &, class AABB const &, std::vector<class AABB> &);

protected:

private:
    /**
     * @hash   -1061560981
     * @symbol  ?DAMAGE_NEARBY_MOBS_DURATION\@Actor\@\@0HB
     */
    MCAPI static int const DAMAGE_NEARBY_MOBS_DURATION;
    /**
     * @hash   220792304
     * @symbol  ?DEFAULT_MAX_DISTANCE_OPTIMIZATION\@Actor\@\@0MB
     */
    MCAPI static float const DEFAULT_MAX_DISTANCE_OPTIMIZATION;
    /**
     * @hash   -414970754
     * @symbol  ?DEFAULT_MAX_TICK_DELAY_OPTIMIZATION\@Actor\@\@0_KB
     */
    MCAPI static unsigned __int64 const DEFAULT_MAX_TICK_DELAY_OPTIMIZATION;

};