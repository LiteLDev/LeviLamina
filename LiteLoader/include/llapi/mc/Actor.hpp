/**
 * @file  MC/Actor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "VehicleUtils.hpp"

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
    LIAPI bool hurtEntity(float damage, ActorDamageCause damageCause = ActorDamageCause::ActorDamageCause_Override);
    LIAPI bool teleport(Vec3 to, int dimID, float x, float y);
    LIAPI bool teleport(Vec3 pos,int dimid);
    LIAPI ItemStack* getHandSlot();
    LIAPI bool rename(const string& name);
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI bool refreshActorData();
    LIAPI bool addEffect(MobEffect::EffectType type, int tick, int level, bool ambient = false, bool showParticles = true, bool showAnimation = false);
    LIAPI float quickEvalMolangScript(const string& expression);
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
     * @hash   -639861333
     * @vftbl  0
     * @symbol ?hasComponent@Actor@@UEBA_NAEBVHashedString@@@Z
     */
    virtual bool hasComponent(class HashedString const &) const;
    /**
     * @hash   526110046
     * @vftbl  1
     * @symbol ?getLastHurtByMob@Actor@@UEAAPEAVMob@@XZ
     */
    virtual class Mob * getLastHurtByMob();
    /**
     * @hash   -961527164
     * @vftbl  2
     * @symbol ?setLastHurtByMob@Actor@@UEAAXPEAVMob@@@Z
     */
    virtual void setLastHurtByMob(class Mob *);
    /**
     * @hash   -1933172166
     * @vftbl  3
     * @symbol ?getLastHurtByPlayer@Actor@@UEAAPEAVPlayer@@XZ
     */
    virtual class Player * getLastHurtByPlayer();
    /**
     * @hash   -1896943186
     * @vftbl  4
     * @symbol ?setLastHurtByPlayer@Actor@@UEAAXPEAVPlayer@@@Z
     */
    virtual void setLastHurtByPlayer(class Player *);
    /**
     * @hash   -509118251
     * @vftbl  5
     * @symbol ?getLastHurtMob@Actor@@UEAAPEAVMob@@XZ
     */
    virtual class Mob * getLastHurtMob();
    /**
     * @hash   963387376
     * @vftbl  6
     * @symbol ?setLastHurtMob@Actor@@UEAAXPEAV1@@Z
     */
    virtual void setLastHurtMob(class Actor *);
    /**
     * @hash   1664197215
     * @vftbl  7
     * @symbol ?outOfWorld@Actor@@UEAAXXZ
     */
    virtual void outOfWorld();
    /**
     * @hash   612443785
     * @vftbl  8
     * @symbol ?reloadHardcoded@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   2099414292
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   821197180
     * @vftbl  10
     * @symbol ?initializeComponents@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
     */
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -8295723
     * @vftbl  11
     * @symbol ?reloadComponents@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z
     */
    virtual void reloadComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   959328880
     * @vftbl  12
     * @symbol ?_serverInitItemStackIds@Actor@@MEAAXXZ
     */
    virtual void _serverInitItemStackIds();
    /**
     * @hash   1796894182
     * @vftbl  13
     * @symbol ?_doInitialMove@Actor@@MEAAXXZ
     */
    virtual void _doInitialMove();
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Actor();
    /**
     * @hash   1897805216
     * @vftbl  15
     * @symbol ?resetUserPos@Actor@@UEAAX_N@Z
     */
    virtual void resetUserPos(bool);
    /**
     * @hash   -692335155
     * @vftbl  16
     * @symbol ?getOwnerEntityType@Actor@@UEAA?AW4ActorType@@XZ
     */
    virtual enum ActorType getOwnerEntityType();
    /**
     * @hash   1013219174
     * @vftbl  17
     * @symbol ?remove@Actor@@UEAAXXZ
     */
    virtual void remove();
    /**
     * @hash   -1654213986
     * @vftbl  18
     * @symbol ?setPos@Actor@@UEAAXAEBVVec3@@@Z
     */
    virtual void setPos(class Vec3 const &);
    /**
     * @hash   1536893099
     * @vftbl  19
     * @symbol ?isRuntimePredictedMovementEnabled@Actor@@UEBA_NXZ
     */
    virtual bool isRuntimePredictedMovementEnabled() const;
    /**
     * @hash   1017401629
     * @vftbl  20
     * @symbol ?getPredictedMovementValues@Actor@@UEBAAEBUPredictedMovementValues@@XZ
     */
    virtual struct PredictedMovementValues const & getPredictedMovementValues() const;
    /**
     * @hash   1877371352
     * @vftbl  21
     * @symbol ?getPosition@Actor@@UEBAAEBVVec3@@XZ
     */
    virtual class Vec3 const & getPosition() const;
    /**
     * @hash   -1091173782
     * @vftbl  22
     * @symbol ?getPosPrev@Actor@@UEBAAEBVVec3@@XZ
     */
    virtual class Vec3 const & getPosPrev() const;
    /**
     * @hash   2034790427
     * @vftbl  23
     * @symbol ?getPosExtrapolated@Actor@@UEBA?BVVec3@@M@Z
     */
    virtual class Vec3 const getPosExtrapolated(float) const;
    /**
     * @hash   1730085206
     * @vftbl  24
     * @symbol ?getAttachPos@Actor@@UEBA?AVVec3@@W4ActorLocation@@M@Z
     */
    virtual class Vec3 getAttachPos(enum ActorLocation, float) const;
    /**
     * @hash   457371638
     * @vftbl  25
     * @symbol ?getFiringPos@Actor@@UEBA?AVVec3@@XZ
     */
    virtual class Vec3 getFiringPos() const;
    /**
     * @hash   -89038596
     * @vftbl  26
     * @symbol ?setRot@Actor@@UEAAXAEBVVec2@@@Z
     */
    virtual void setRot(class Vec2 const &);
    /**
     * @hash   -457965985
     * @vftbl  27
     * @symbol ?move@Actor@@UEAAXAEBVVec3@@@Z
     */
    virtual void move(class Vec3 const &);
    /**
     * @hash   -566602408
     * @vftbl  28
     * @symbol ?move@Actor@@UEBAXAEAUIActorMovementProxy@@AEBVVec3@@@Z
     */
    virtual void move(struct IActorMovementProxy &, class Vec3 const &) const;
    /**
     * @hash   -49513074
     * @vftbl  29
     * @symbol ?getInterpolatedRidingPosition@Actor@@UEBA?AVVec3@@M@Z
     */
    virtual class Vec3 getInterpolatedRidingPosition(float) const;
    /**
     * @hash   30531563
     * @vftbl  30
     * @symbol ?getInterpolatedBodyRot@Actor@@UEBAMM@Z
     */
    virtual float getInterpolatedBodyRot(float) const;
    /**
     * @hash   510098025
     * @vftbl  31
     * @symbol ?getInterpolatedHeadRot@Actor@@UEBAMM@Z
     */
    virtual float getInterpolatedHeadRot(float) const;
    /**
     * @hash   955759955
     * @vftbl  32
     * @symbol ?getInterpolatedBodyYaw@Actor@@UEBAMM@Z
     */
    virtual float getInterpolatedBodyYaw(float) const;
    /**
     * @hash   -1938405002
     * @vftbl  33
     * @symbol ?getYawSpeedInDegreesPerSecond@Actor@@UEBAMXZ
     */
    virtual float getYawSpeedInDegreesPerSecond() const;
    /**
     * @hash   -957891885
     * @vftbl  34
     * @symbol ?getInterpolatedWalkAnimSpeed@Actor@@UEBAMM@Z
     */
    virtual float getInterpolatedWalkAnimSpeed(float) const;
    /**
     * @hash   -910754460
     * @vftbl  35
     * @symbol ?getInterpolatedRidingOffset@Actor@@UEBA?AVVec3@@M@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /**
     * @hash   1530766356
     * @vftbl  36
     * @symbol ?resetInterpolated@Actor@@UEAAXXZ
     */
    virtual void resetInterpolated();
    /**
     * @hash   914217399
     * @vftbl  37
     * @symbol ?updateEntityInside@Actor@@UEAAXAEBVAABB@@@Z
     */
    virtual void updateEntityInside(class AABB const &);
    /**
     * @hash   49382762
     * @vftbl  38
     * @symbol ?updateEntityInside@Actor@@UEAAXXZ
     */
    virtual void updateEntityInside();
    /**
     * @hash   -1750410122
     * @vftbl  39
     * @symbol ?isFireImmune@Actor@@UEBA_NXZ
     */
    virtual bool isFireImmune() const;
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -435689821
     * @vftbl  41
     * @symbol ?blockedByShield@Actor@@UEAAXAEBVActorDamageSource@@AEAV1@@Z
     */
    virtual void blockedByShield(class ActorDamageSource const &, class Actor &);
    /**
     * @hash   109890677
     * @vftbl  42
     * @symbol ?canDisableShield@Actor@@UEAA_NXZ
     */
    virtual bool canDisableShield();
    /**
     * @hash   1676940962
     * @vftbl  43
     * @symbol ?teleportTo@Actor@@UEAAXAEBVVec3@@_NHH1@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @hash   -2127604059
     * @vftbl  44
     * @symbol ?tryTeleportTo@Actor@@UEAA_NAEBVVec3@@_N1HH@Z
     */
    virtual bool tryTeleportTo(class Vec3 const &, bool, bool, int, int);
    /**
     * @hash   -804666537
     * @vftbl  45
     * @symbol ?chorusFruitTeleport@Actor@@UEAAXAEBVVec3@@@Z
     */
    virtual void chorusFruitTeleport(class Vec3 const &);
    /**
     * @hash   -1487429453
     * @vftbl  46
     * @symbol ?lerpMotion@Actor@@UEAAXAEBVVec3@@@Z
     */
    virtual void lerpMotion(class Vec3 const &);
    /**
     * @hash   1841845960
     * @vftbl  47
     * @symbol ?tryCreateAddActorPacket@Actor@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @hash   -1172137786
     * @vftbl  48
     * @symbol ?normalTick@Actor@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   883726720
     * @vftbl  49
     * @symbol ?baseTick@Actor@@UEAAXXZ
     */
    virtual void baseTick();
    /**
     * @hash   93637769
     * @vftbl  50
     * @symbol ?passengerTick@Actor@@UEAAXXZ
     */
    virtual void passengerTick();
    /**
     * @hash   256663670
     * @vftbl  51
     * @symbol ?positionPassenger@Actor@@UEAAXAEAV1@M@Z
     */
    virtual void positionPassenger(class Actor &, float);
    /**
     * @hash   1995252804
     * @vftbl  52
     * @symbol ?startRiding@Actor@@UEAA_NAEAV1@@Z
     */
    virtual bool startRiding(class Actor &);
    /**
     * @hash   1803653812
     * @vftbl  53
     * @symbol ?addPassenger@Actor@@UEAAXAEAV1@@Z
     */
    virtual void addPassenger(class Actor &);
    /**
     * @hash   651191696
     * @vftbl  54
     * @symbol ?flagPassengerToRemove@Actor@@UEAAXAEAV1@@Z
     */
    virtual void flagPassengerToRemove(class Actor &);
    /**
     * @hash   -717579411
     * @vftbl  55
     * @symbol ?getExitTip@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@W4InputMode@@@Z
     */
    virtual std::string getExitTip(std::string const &, enum InputMode) const;
    /**
     * @hash   645789839
     * @vftbl  56
     * @symbol ?intersects@Actor@@UEBA_NAEBVVec3@@0@Z
     */
    virtual bool intersects(class Vec3 const &, class Vec3 const &) const;
    /**
     * @hash   -1940430052
     * @vftbl  57
     * @symbol ?isInWall@Actor@@UEBA_NXZ
     */
    virtual bool isInWall() const;
    /**
     * @hash   -724719706
     * @vftbl  58
     * @symbol ?isInvisible@Actor@@UEBA_NXZ
     */
    virtual bool isInvisible() const;
    /**
     * @hash   -965992475
     * @vftbl  59
     * @symbol ?canShowNameTag@Actor@@UEBA_NXZ
     */
    virtual bool canShowNameTag() const;
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @hash   1122438725
     * @vftbl  61
     * @symbol ?setNameTagVisible@Actor@@UEAAX_N@Z
     */
    virtual void setNameTagVisible(bool);
    /**
     * @hash   -1452944308
     * @vftbl  62
     * @symbol ?getNameTag@Actor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getNameTag() const;
    /**
     * @hash   2004226308
     * @vftbl  63
     * @symbol ?getNameTagAsHash@Actor@@UEBA_KXZ
     */
    virtual unsigned __int64 getNameTagAsHash() const;
    /**
     * @hash   1377037934
     * @vftbl  64
     * @symbol ?getFormattedNameTag@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @hash   -2077790567
     * @vftbl  65
     * @symbol ?filterFormattedNameTag@Actor@@UEAAXAEBVUIProfanityContext@@@Z
     */
    virtual void filterFormattedNameTag(class UIProfanityContext const &);
    /**
     * @hash   -1238528563
     * @vftbl  66
     * @symbol ?setNameTag@Actor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void setNameTag(std::string const &);
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -815675136
     * @vftbl  68
     * @symbol ?setScoreTag@Actor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void setScoreTag(std::string const &);
    /**
     * @hash   -1534196335
     * @vftbl  69
     * @symbol ?getScoreTag@Actor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getScoreTag() const;
    /**
     * @hash   -1472063861
     * @vftbl  70
     * @symbol ?isInWater@Actor@@UEBA_NXZ
     */
    virtual bool isInWater() const;
    /**
     * @hash   1432197277
     * @vftbl  71
     * @symbol ?hasEnteredWater@Actor@@UEBA_NXZ
     */
    virtual bool hasEnteredWater() const;
    /**
     * @hash   1951785106
     * @vftbl  72
     * @symbol ?isInLava@Actor@@UEBA_NXZ
     */
    virtual bool isInLava() const;
    /**
     * @hash   523008612
     * @vftbl  73
     * @symbol ?isUnderLiquid@Actor@@UEBA_NW4MaterialType@@@Z
     */
    virtual bool isUnderLiquid(enum MaterialType) const;
    /**
     * @hash   -2136052964
     * @vftbl  74
     * @symbol ?isOverWater@Actor@@UEBA_NXZ
     */
    virtual bool isOverWater() const;
    /**
     * @hash   -895890257
     * @vftbl  75
     * @symbol ?setBlockMovementSlowdownMultiplier@Actor@@UEAAXAEBVBlockLegacy@@AEBVVec3@@@Z
     */
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /**
     * @hash   -183467021
     * @vftbl  76
     * @symbol ?resetBlockMovementSlowdownMultiplier@Actor@@UEAAXXZ
     */
    virtual void resetBlockMovementSlowdownMultiplier();
    /**
     * @hash   19584871
     * @vftbl  77
     * @symbol ?getCameraOffset@Actor@@UEBAMXZ
     */
    virtual float getCameraOffset() const;
    /**
     * @hash   557705547
     * @vftbl  78
     * @symbol ?getShadowHeightOffs@Actor@@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @hash   1893666417
     * @vftbl  79
     * @symbol ?getShadowRadius@Actor@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @hash   -736505459
     * @vftbl  80
     * @symbol ?getHeadLookVector@Actor@@UEBA?AVVec3@@M@Z
     */
    virtual class Vec3 getHeadLookVector(float) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -662747356
     * @vftbl  82
     * @symbol ?canSee@Actor@@UEBA_NAEBV1@@Z
     */
    virtual bool canSee(class Actor const &) const;
    /**
     * @hash   -155206934
     * @vftbl  83
     * @symbol ?canSee@Actor@@UEBA_NAEBVVec3@@@Z
     */
    virtual bool canSee(class Vec3 const &) const;
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @hash   991815486
     * @vftbl  85
     * @symbol ?isSkyLit@Actor@@UEAA_NM@Z
     */
    virtual bool isSkyLit(float);
    /**
     * @hash   -745048032
     * @vftbl  86
     * @symbol ?getBrightness@Actor@@UEBAMM@Z
     */
    virtual float getBrightness(float) const;
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @hash   -2122770749
     * @vftbl  88
     * @symbol ?playerTouch@Actor@@UEAAXAEAVPlayer@@@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @hash   -1438712502
     * @vftbl  89
     * @symbol ?onAboveBubbleColumn@Actor@@UEAAX_N@Z
     */
    virtual void onAboveBubbleColumn(bool);
    /**
     * @hash   308098685
     * @vftbl  90
     * @symbol ?onInsideBubbleColumn@Actor@@UEAAX_N@Z
     */
    virtual void onInsideBubbleColumn(bool);
    /**
     * @hash   -1609258765
     * @vftbl  91
     * @symbol ?isImmobile@Actor@@UEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @hash   -2099103614
     * @vftbl  92
     * @symbol ?isSilent@Actor@@UEBA_NXZ
     */
    virtual bool isSilent() const;
    /**
     * @hash   1396351576
     * @vftbl  93
     * @symbol ?isSilentObserver@Actor@@UEBA_NXZ
     */
    virtual bool isSilentObserver() const;
    /**
     * @hash   1700513353
     * @vftbl  94
     * @symbol ?isPickable@Actor@@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @hash   -2112694984
     * @vftbl  96
     * @symbol ?isSleeping@Actor@@UEBA_NXZ
     */
    virtual bool isSleeping() const;
    /**
     * @hash   574364909
     * @vftbl  97
     * @symbol ?setSleeping@Actor@@UEAAX_N@Z
     */
    virtual void setSleeping(bool);
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @hash   -1690287718
     * @vftbl  99
     * @symbol ?setSneaking@Actor@@UEAAX_N@Z
     */
    virtual void setSneaking(bool);
    /**
     * @hash   313317378
     * @vftbl  100
     * @symbol ?isBlocking@Actor@@UEBA_NXZ
     */
    virtual bool isBlocking() const;
    /**
     * @hash   -1270925614
     * @vftbl  101
     * @symbol ?isDamageBlocked@Actor@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /**
     * @hash   1221376854
     * @vftbl  102
     * @symbol ?isAlive@Actor@@UEBA_NXZ
     */
    virtual bool isAlive() const;
    /**
     * @hash   1087228770
     * @vftbl  103
     * @symbol ?isOnFire@Actor@@UEBA_NXZ
     */
    virtual bool isOnFire() const;
    /**
     * @hash   -334169668
     * @vftbl  104
     * @symbol ?isOnHotBlock@Actor@@UEBA_NXZ
     */
    virtual bool isOnHotBlock() const;
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @hash   -267970112
     * @vftbl  106
     * @symbol ?isSurfaceMob@Actor@@UEBA_NXZ
     */
    virtual bool isSurfaceMob() const;
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @hash   1436375892
     * @vftbl  109
     * @symbol ?isRemotePlayer@Actor@@UEBA_NXZ
     */
    virtual bool isRemotePlayer() const;
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   262043499
     * @vftbl  111
     * @symbol ?isAffectedByWaterBottle@Actor@@UEBA_NXZ
     */
    virtual bool isAffectedByWaterBottle() const;
    /**
     * @hash   1342722620
     * @vftbl  112
     * @symbol ?canAttack@Actor@@UEBA_NPEAV1@_N@Z
     */
    virtual bool canAttack(class Actor *, bool) const;
    /**
     * @hash   -1112223098
     * @vftbl  113
     * @symbol ?setTarget@Actor@@UEAAXPEAV1@@Z
     */
    virtual void setTarget(class Actor *);
    /**
     * @hash   -26475149
     * @vftbl  114
     * @symbol ?isValidTarget@Actor@@UEBA_NPEAV1@@Z
     */
    virtual bool isValidTarget(class Actor *) const;
    /**
     * @hash   429073882
     * @vftbl  115
     * @symbol ?attack@Actor@@UEAA_NAEAV1@AEBW4ActorDamageCause@@@Z
     */
    virtual bool attack(class Actor &, enum ActorDamageCause const &);
    /**
     * @hash   -2113537819
     * @vftbl  116
     * @symbol ?performRangedAttack@Actor@@UEAAXAEAV1@M@Z
     */
    virtual void performRangedAttack(class Actor &, float);
    /**
     * @hash   -1329648259
     * @vftbl  117
     * @symbol ?getEquipmentCount@Actor@@UEBAHXZ
     */
    virtual int getEquipmentCount() const;
    /**
     * @hash   461984954
     * @vftbl  118
     * @symbol ?setOwner@Actor@@UEAAXUActorUniqueID@@@Z
     */
    virtual void setOwner(struct ActorUniqueID);
    /**
     * @hash   1179126032
     * @vftbl  119
     * @symbol ?setSitting@Actor@@UEAAX_N@Z
     */
    virtual void setSitting(bool);
    /**
     * @hash   -1513945578
     * @vftbl  120
     * @symbol ?onTame@Actor@@UEAAXXZ
     */
    virtual void onTame();
    /**
     * @hash   1605883539
     * @vftbl  121
     * @symbol ?onFailedTame@Actor@@UEAAXXZ
     */
    virtual void onFailedTame();
    /**
     * @hash   67683229
     * @vftbl  122
     * @symbol ?getInventorySize@Actor@@UEBAHXZ
     */
    virtual int getInventorySize() const;
    /**
     * @hash   1238402433
     * @vftbl  123
     * @symbol ?getEquipSlots@Actor@@UEBAHXZ
     */
    virtual int getEquipSlots() const;
    /**
     * @hash   -860799424
     * @vftbl  124
     * @symbol ?getChestSlots@Actor@@UEBAHXZ
     */
    virtual int getChestSlots() const;
    /**
     * @hash   1267459356
     * @vftbl  125
     * @symbol ?setStanding@Actor@@UEAAX_N@Z
     */
    virtual void setStanding(bool);
    /**
     * @hash   1837723414
     * @vftbl  126
     * @symbol ?canPowerJump@Actor@@UEBA_NXZ
     */
    virtual bool canPowerJump() const;
    /**
     * @hash   483994613
     * @vftbl  127
     * @symbol ?setCanPowerJump@Actor@@UEAAX_N@Z
     */
    virtual void setCanPowerJump(bool);
    /**
     * @hash   -1414615795
     * @vftbl  128
     * @symbol ?isJumping@Actor@@UEBA_NXZ
     */
    virtual bool isJumping() const;
    /**
     * @hash   1491339777
     * @vftbl  129
     * @symbol ?isEnchanted@Actor@@UEBA_NXZ
     */
    virtual bool isEnchanted() const;
    /**
     * @hash   76137808
     * @vftbl  130
     * @symbol ?vehicleLanded@Actor@@UEAAXAEBVVec3@@0@Z
     */
    virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /**
     * @hash   953287500
     * @vftbl  131
     * @symbol ?shouldRender@Actor@@UEBA_NXZ
     */
    virtual bool shouldRender() const;
    /**
     * @hash   -1715541971
     * @vftbl  132
     * @symbol ?playAmbientSound@Actor@@UEAAXXZ
     */
    virtual void playAmbientSound();
    /**
     * @hash   -141700705
     * @vftbl  133
     * @symbol ?getAmbientSound@Actor@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getAmbientSound() const;
    /**
     * @hash   1704185491
     * @vftbl  134
     * @symbol ?isInvulnerableTo@Actor@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   -1828435439
     * @vftbl  135
     * @symbol ?getBlockDamageCause@Actor@@UEBA?AW4ActorDamageCause@@AEBVBlock@@@Z
     */
    virtual enum ActorDamageCause getBlockDamageCause(class Block const &) const;
    /**
     * @hash   1150148002
     * @vftbl  136
     * @symbol ?animateHurt@Actor@@UEAAXXZ
     */
    virtual void animateHurt();
    /**
     * @hash   -1193550885
     * @vftbl  137
     * @symbol ?doFireHurt@Actor@@UEAA_NH@Z
     */
    virtual bool doFireHurt(int);
    /**
     * @hash   -1562076406
     * @vftbl  138
     * @symbol ?onLightningHit@Actor@@UEAAXXZ
     */
    virtual void onLightningHit();
    /**
     * @hash   -160632354
     * @vftbl  139
     * @symbol ?onBounceStarted@Actor@@UEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
     * @hash   -2048680785
     * @vftbl  140
     * @symbol ?feed@Actor@@UEAAXH@Z
     */
    virtual void feed(int);
    /**
     * @hash   -2083298767
     * @vftbl  141
     * @symbol ?handleEntityEvent@Actor@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @hash   745857283
     * @vftbl  142
     * @symbol ?getPickRadius@Actor@@UEAAMXZ
     */
    virtual float getPickRadius();
    /**
     * @hash   1905312775
     * @vftbl  143
     * @symbol ?getActorRendererId@Actor@@UEBAAEBVHashedString@@XZ
     */
    virtual class HashedString const & getActorRendererId() const;
    /**
     * @hash   1177304881
     * @vftbl  144
     * @symbol ?spawnAtLocation@Actor@@UEAAPEAVItemActor@@HH@Z
     */
    virtual class ItemActor * spawnAtLocation(int, int);
    /**
     * @hash   491779969
     * @vftbl  145
     * @symbol ?spawnAtLocation@Actor@@UEAAPEAVItemActor@@HHM@Z
     */
    virtual class ItemActor * spawnAtLocation(int, int, float);
    /**
     * @hash   2057027124
     * @vftbl  146
     * @symbol ?spawnAtLocation@Actor@@UEAAPEAVItemActor@@AEBVBlock@@H@Z
     */
    virtual class ItemActor * spawnAtLocation(class Block const &, int);
    /**
     * @hash   2007665406
     * @vftbl  147
     * @symbol ?spawnAtLocation@Actor@@UEAAPEAVItemActor@@AEBVBlock@@HM@Z
     */
    virtual class ItemActor * spawnAtLocation(class Block const &, int, float);
    /**
     * @hash   1438554991
     * @vftbl  148
     * @symbol ?spawnAtLocation@Actor@@UEAAPEAVItemActor@@AEBVItemStack@@M@Z
     */
    virtual class ItemActor * spawnAtLocation(class ItemStack const &, float);
    /**
     * @hash   -1212794180
     * @vftbl  149
     * @symbol ?despawn@Actor@@UEAAXXZ
     */
    virtual void despawn();
    /**
     * @hash   -182851072
     * @vftbl  150
     * @symbol ?killed@Actor@@UEAAXAEAV1@@Z
     */
    virtual void killed(class Actor &);
    /**
     * @hash   132346441
     * @vftbl  151
     * @symbol ?awardKillScore@Actor@@UEAAXAEAV1@H@Z
     */
    virtual void awardKillScore(class Actor &, int);
    /**
     * @hash   -1319872778
     * @vftbl  152
     * @symbol ?setArmor@Actor@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
     */
    virtual void setArmor(enum ArmorSlot, class ItemStack const &);
    /**
     * @hash   -1028582569
     * @vftbl  153
     * @symbol ?getArmor@Actor@@UEBAAEBVItemStack@@W4ArmorSlot@@@Z
     */
    virtual class ItemStack const & getArmor(enum ArmorSlot) const;
    /**
     * @hash   -1376481576
     * @vftbl  154
     * @symbol ?getAllArmor@Actor@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack const *> getAllArmor() const;
    /**
     * @hash   -1646030435
     * @vftbl  155
     * @symbol ?getArmorMaterialTypeInSlot@Actor@@UEBA?AW4ArmorMaterialType@@W4ArmorSlot@@@Z
     */
    virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /**
     * @hash   -154367378
     * @vftbl  156
     * @symbol ?getArmorMaterialTextureTypeInSlot@Actor@@UEBA?AW4ArmorTextureType@@W4ArmorSlot@@@Z
     */
    virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /**
     * @hash   -1705650584
     * @vftbl  157
     * @symbol ?getArmorColorInSlot@Actor@@UEBAMW4ArmorSlot@@H@Z
     */
    virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /**
     * @hash   133185022
     * @vftbl  158
     * @symbol ?getEquippedSlot@Actor@@UEBAAEBVItemStack@@W4EquipmentSlot@@@Z
     */
    virtual class ItemStack const & getEquippedSlot(enum EquipmentSlot) const;
    /**
     * @hash   -1125926457
     * @vftbl  159
     * @symbol ?setEquippedSlot@Actor@@UEAAXW4EquipmentSlot@@AEBVItemStack@@@Z
     */
    virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const &);
    /**
     * @hash   1693717479
     * @vftbl  160
     * @symbol ?setCarriedItem@Actor@@UEAAXAEBVItemStack@@@Z
     */
    virtual void setCarriedItem(class ItemStack const &);
    /**
     * @hash   -113299726
     * @vftbl  161
     * @symbol ?getCarriedItem@Actor@@UEBAAEBVItemStack@@XZ
     */
    virtual class ItemStack const & getCarriedItem() const;
    /**
     * @hash   -362437608
     * @vftbl  162
     * @symbol ?setOffhandSlot@Actor@@UEAAXAEBVItemStack@@@Z
     */
    virtual void setOffhandSlot(class ItemStack const &);
    /**
     * @hash   1673638903
     * @vftbl  163
     * @symbol ?getEquippedTotem@Actor@@UEBAAEBVItemStack@@XZ
     */
    virtual class ItemStack const & getEquippedTotem() const;
    /**
     * @hash   -408930359
     * @vftbl  164
     * @symbol ?consumeTotem@Actor@@UEAA_NXZ
     */
    virtual bool consumeTotem();
    /**
     * @hash   -1837130389
     * @vftbl  165
     * @symbol ?save@Actor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -848888332
     * @vftbl  166
     * @symbol ?saveWithoutId@Actor@@UEBAXAEAVCompoundTag@@@Z
     */
    virtual void saveWithoutId(class CompoundTag &) const;
    /**
     * @hash   -1965322458
     * @vftbl  167
     * @symbol ?load@Actor@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1086486967
     * @vftbl  168
     * @symbol ?loadLinks@Actor@@UEAAXAEBVCompoundTag@@AEAV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@AEAVDataLoadHelper@@@Z
     */
    virtual void loadLinks(class CompoundTag const &, std::vector<struct ActorLink> &, class DataLoadHelper &);
    /**
     * @hash   -847418192
     * @vftbl  169
     * @symbol ?getEntityTypeId@Actor@@UEBA?AW4ActorType@@XZ
     */
    virtual enum ActorType getEntityTypeId() const;
    /**
     * @hash   -15317912
     * @vftbl  170
     * @symbol ?queryEntityRenderer@Actor@@UEBAAEBVHashedString@@XZ
     */
    virtual class HashedString const & queryEntityRenderer() const;
    /**
     * @hash   393644529
     * @vftbl  171
     * @symbol ?getSourceUniqueID@Actor@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @hash   -1286435916
     * @vftbl  172
     * @symbol ?thawFreezeEffect@Actor@@UEAAXXZ
     */
    virtual void thawFreezeEffect();
    /**
     * @hash   -230289334
     * @vftbl  173
     * @symbol ?canFreeze@Actor@@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @hash   -1298770945
     * @vftbl  174
     * @symbol ?isWearingLeatherArmor@Actor@@UEBA?B_NXZ
     */
    virtual bool const isWearingLeatherArmor() const;
    /**
     * @hash   490635285
     * @vftbl  175
     * @symbol ?getLiquidAABB@Actor@@UEBA?AVAABB@@W4MaterialType@@@Z
     */
    virtual class AABB getLiquidAABB(enum MaterialType) const;
    /**
     * @hash   1048332360
     * @vftbl  176
     * @symbol ?handleInsidePortal@Actor@@UEAAXAEBVBlockPos@@@Z
     */
    virtual void handleInsidePortal(class BlockPos const &);
    /**
     * @hash   -735824317
     * @vftbl  177
     * @symbol ?getPortalCooldown@Actor@@UEBAHXZ
     */
    virtual int getPortalCooldown() const;
    /**
     * @hash   265035498
     * @vftbl  178
     * @symbol ?getPortalWaitTime@Actor@@UEBAHXZ
     */
    virtual int getPortalWaitTime() const;
    /**
     * @hash   702018226
     * @vftbl  179
     * @symbol ?getDimensionId@Actor@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @hash   -740561946
     * @vftbl  180
     * @symbol ?canChangeDimensionsUsingPortal@Actor@@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   230011544
     * @vftbl  182
     * @symbol ?changeDimension@Actor@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
     */
    virtual void changeDimension(class AutomaticID<class Dimension, int>);
    /**
     * @hash   -900917934
     * @vftbl  183
     * @symbol ?getControllingPlayer@Actor@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @hash   1631716654
     * @vftbl  184
     * @symbol ?checkFallDamage@Actor@@UEAAXM_N@Z
     */
    virtual void checkFallDamage(float, bool);
    /**
     * @hash   -1692012505
     * @vftbl  185
     * @symbol ?causeFallDamage@Actor@@UEAAXMMVActorDamageSource@@@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @hash   1004525648
     * @vftbl  186
     * @symbol ?handleFallDistanceOnServer@Actor@@UEAAXMM_N@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @hash   1969242784
     * @vftbl  187
     * @symbol ?playSynchronizedSound@Actor@@UEAAXW4LevelSoundEvent@@AEBVVec3@@AEBVBlock@@_N@Z
     */
    virtual void playSynchronizedSound(enum LevelSoundEvent, class Vec3 const &, class Block const &, bool);
    /**
     * @hash   1561997005
     * @vftbl  188
     * @symbol ?playSynchronizedSound@Actor@@UEAAXW4LevelSoundEvent@@AEBVVec3@@H_N@Z
     */
    virtual void playSynchronizedSound(enum LevelSoundEvent, class Vec3 const &, int, bool);
    /**
     * @hash   -1123498541
     * @vftbl  189
     * @symbol ?onSynchedFlagUpdate@Actor@@UEAAXH_J0@Z
     */
    virtual void onSynchedFlagUpdate(int, __int64, __int64);
    /**
     * @hash   -880752787
     * @vftbl  190
     * @symbol ?onSynchedDataUpdate@Actor@@UEAAXH@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @hash   1757953969
     * @vftbl  191
     * @symbol ?canAddPassenger@Actor@@UEBA_NAEAV1@@Z
     */
    virtual bool canAddPassenger(class Actor &) const;
    /**
     * @hash   1364993680
     * @vftbl  192
     * @symbol ?canPickupItem@Actor@@UEBA_NAEBVItemStack@@@Z
     */
    virtual bool canPickupItem(class ItemStack const &) const;
    /**
     * @hash   812822712
     * @vftbl  193
     * @symbol ?canBePulledIntoVehicle@Actor@@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @hash   -131523052
     * @vftbl  194
     * @symbol ?inCaravan@Actor@@UEBA_NXZ
     */
    virtual bool inCaravan() const;
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @hash   -1031274814
     * @vftbl  196
     * @symbol ?tickLeash@Actor@@UEAAXXZ
     */
    virtual void tickLeash();
    /**
     * @hash   -1932270790
     * @vftbl  197
     * @symbol ?sendMotionPacketIfNeeded@Actor@@UEAAXXZ
     */
    virtual void sendMotionPacketIfNeeded();
    /**
     * @hash   -1056951802
     * @vftbl  198
     * @symbol ?canSynchronizeNewEntity@Actor@@UEBA_NXZ
     */
    virtual bool canSynchronizeNewEntity() const;
    /**
     * @hash   1655862643
     * @vftbl  199
     * @symbol ?stopRiding@Actor@@UEAAX_N00@Z
     */
    virtual void stopRiding(bool, bool, bool);
    /**
     * @hash   1666195105
     * @vftbl  200
     * @symbol ?startSwimming@Actor@@UEAAXXZ
     */
    virtual void startSwimming();
    /**
     * @hash   -1805388543
     * @vftbl  201
     * @symbol ?stopSwimming@Actor@@UEAAXXZ
     */
    virtual void stopSwimming();
    /**
     * @hash   -260048599
     * @vftbl  202
     * @symbol ?buildDebugInfo@Actor@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void buildDebugInfo(std::string &) const;
    /**
     * @hash   -1266996735
     * @vftbl  203
     * @symbol ?getCommandPermissionLevel@Actor@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getCommandPermissionLevel() const;
    /**
     * @hash   1197536191
     * @vftbl  204
     * @symbol ?isClientSide@Actor@@UEBA_NXZ
     */
    virtual bool isClientSide() const;
    /**
     * @hash   -13250670
     * @vftbl  205
     * @symbol ?getMutableAttribute@Actor@@UEAAPEAVAttributeInstance@@AEBVAttribute@@@Z
     */
    virtual class AttributeInstance * getMutableAttribute(class Attribute const &);
    /**
     * @hash   -1751645002
     * @vftbl  206
     * @symbol ?getAttribute@Actor@@UEBAAEBVAttributeInstance@@AEBVAttribute@@@Z
     */
    virtual class AttributeInstance const & getAttribute(class Attribute const &) const;
    /**
     * @hash   -1493077999
     * @vftbl  207
     * @symbol ?getDeathTime@Actor@@UEBAHXZ
     */
    virtual int getDeathTime() const;
    /**
     * @hash   864311477
     * @vftbl  208
     * @symbol ?heal@Actor@@UEAAXH@Z
     */
    virtual void heal(int);
    /**
     * @hash   -836345305
     * @vftbl  209
     * @symbol ?isInvertedHealAndHarm@Actor@@UEBA_NXZ
     */
    virtual bool isInvertedHealAndHarm() const;
    /**
     * @hash   1734002099
     * @vftbl  210
     * @symbol ?canBeAffected@Actor@@UEBA_NH@Z
     */
    virtual bool canBeAffected(int) const;
    /**
     * @hash   -1538945529
     * @vftbl  211
     * @symbol ?canBeAffected@Actor@@UEBA_NAEBVMobEffectInstance@@@Z
     */
    virtual bool canBeAffected(class MobEffectInstance const &) const;
    /**
     * @hash   699963667
     * @vftbl  212
     * @symbol ?canBeAffectedByArrow@Actor@@UEBA_NAEBVMobEffectInstance@@@Z
     */
    virtual bool canBeAffectedByArrow(class MobEffectInstance const &) const;
    /**
     * @hash   -1349182252
     * @vftbl  213
     * @symbol ?onEffectAdded@Actor@@UEAAXAEAVMobEffectInstance@@@Z
     */
    virtual void onEffectAdded(class MobEffectInstance &);
    /**
     * @hash   1678019161
     * @vftbl  214
     * @symbol ?onEffectUpdated@Actor@@UEAAXAEAVMobEffectInstance@@@Z
     */
    virtual void onEffectUpdated(class MobEffectInstance &);
    /**
     * @hash   1787827028
     * @vftbl  215
     * @symbol ?onEffectRemoved@Actor@@UEAAXAEAVMobEffectInstance@@@Z
     */
    virtual void onEffectRemoved(class MobEffectInstance &);
    /**
     * @hash   344084371
     * @vftbl  216
     * @symbol ?canObstructSpawningAndBlockPlacement@Actor@@UEBA_NXZ
     */
    virtual bool canObstructSpawningAndBlockPlacement() const;
    /**
     * @hash   -1883997582
     * @vftbl  217
     * @symbol ?getAnimationComponent@Actor@@UEAAAEAVAnimationComponent@@XZ
     */
    virtual class AnimationComponent & getAnimationComponent();
    /**
     * @hash   1209206395
     * @vftbl  218
     * @symbol ?openContainerComponent@Actor@@UEAAXAEAVPlayer@@@Z
     */
    virtual void openContainerComponent(class Player &);
    /**
     * @hash   592805200
     * @vftbl  219
     * @symbol ?swing@Actor@@UEAAXXZ
     */
    virtual void swing();
    /**
     * @hash   1699605585
     * @vftbl  220
     * @symbol ?useItem@Actor@@UEAAXAEAVItemStackBase@@W4ItemUseMethod@@_N@Z
     */
    virtual void useItem(class ItemStackBase &, enum ItemUseMethod, bool);
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @hash   -1672063874
     * @vftbl  223
     * @symbol ?getDebugText@Actor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    virtual void getDebugText(std::vector<std::string> &);
    /**
     * @hash   -506013459
     * @vftbl  224
     * @symbol ?getMapDecorationRotation@Actor@@UEBAMXZ
     */
    virtual float getMapDecorationRotation() const;
    /**
     * @hash   708774142
     * @vftbl  225
     * @symbol ?getPassengerYRotation@Actor@@UEBAMAEBV1@@Z
     */
    virtual float getPassengerYRotation(class Actor const &) const;
    /**
     * @hash   -511543379
     * @vftbl  226
     * @symbol ?getYHeadRot@Actor@@UEBAMXZ
     */
    virtual float getYHeadRot() const;
    /**
     * @hash   199583376
     * @vftbl  227
     * @symbol ?setYHeadRot@Actor@@UEAAXM@Z
     */
    virtual void setYHeadRot(float);
    /**
     * @hash   1747404084
     * @vftbl  228
     * @symbol ?getYHeadRotO@Actor@@UEBAMXZ
     */
    virtual float getYHeadRotO() const;
    /**
     * @vftbl  229
     * @symbol ?setYHeadRotO@Actor@@UEAAXM@Z
     */
    virtual void setYHeadRotO(float);
    /**
     * @hash   -1360175370
     * @vftbl  230
     * @symbol ?isWorldBuilder@Actor@@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @hash   1849851324
     * @vftbl  231
     * @symbol ?isCreative@Actor@@UEBA_NXZ
     */
    virtual bool isCreative() const;
    /**
     * @hash   -1692340439
     * @vftbl  232
     * @symbol ?isAdventure@Actor@@UEBA_NXZ
     */
    virtual bool isAdventure() const;
    /**
     * @hash   455125067
     * @vftbl  233
     * @symbol ?isSurvival@Actor@@UEBA_NXZ
     */
    virtual bool isSurvival() const;
    /**
     * @hash   -1710157464
     * @vftbl  234
     * @symbol ?isSpectator@Actor@@UEBA_NXZ
     */
    virtual bool isSpectator() const;
    /**
     * @hash   -1271053468
     * @vftbl  235
     * @symbol ?isAttackableGamemode@Actor@@UEBA_NXZ
     */
    virtual bool isAttackableGamemode() const;
    /**
     * @hash   1250660386
     * @vftbl  236
     * @symbol ?add@Actor@@UEAA_NAEAVItemStack@@@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @hash   -293158085
     * @vftbl  237
     * @symbol ?drop@Actor@@UEAA_NAEBVItemStack@@_N@Z
     */
    virtual bool drop(class ItemStack const &, bool);
    /**
     * @hash   -2029767026
     * @vftbl  238
     * @symbol ?getInteraction@Actor@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /**
     * @hash   1301883444
     * @vftbl  239
     * @symbol ?canDestroyBlock@Actor@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool canDestroyBlock(class Block const &) const;
    /**
     * @hash   593341326
     * @vftbl  240
     * @symbol ?setAuxValue@Actor@@UEAAXH@Z
     */
    virtual void setAuxValue(int);
    /**
     * @hash   -2052170731
     * @vftbl  241
     * @symbol ?setSize@Actor@@UEAAXMM@Z
     */
    virtual void setSize(float, float);
    /**
     * @hash   229919785
     * @vftbl  242
     * @symbol ?onOrphan@Actor@@UEAAXXZ
     */
    virtual void onOrphan();
    /**
     * @hash   -167938285
     * @vftbl  243
     * @symbol ?wobble@Actor@@UEAAXXZ
     */
    virtual void wobble();
    /**
     * @hash   -539123204
     * @vftbl  244
     * @symbol ?wasHurt@Actor@@UEAA_NXZ
     */
    virtual bool wasHurt();
    /**
     * @hash   218575614
     * @vftbl  245
     * @symbol ?startSpinAttack@Actor@@UEAAXXZ
     */
    virtual void startSpinAttack();
    /**
     * @hash   -214694754
     * @vftbl  246
     * @symbol ?stopSpinAttack@Actor@@UEAAXXZ
     */
    virtual void stopSpinAttack();
    /**
     * @hash   1642452503
     * @vftbl  247
     * @symbol ?setDamageNearbyMobs@Actor@@UEAAX_N@Z
     */
    virtual void setDamageNearbyMobs(bool);
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @hash   1474411823
     * @vftbl  249
     * @symbol ?reloadLootTable@Actor@@UEAAXXZ
     */
    virtual void reloadLootTable();
    /**
     * @hash   1195691580
     * @vftbl  250
     * @symbol ?reloadLootTable@Actor@@UEAAXAEBUEquipmentTableDefinition@@@Z
     */
    virtual void reloadLootTable(struct EquipmentTableDefinition const &);
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @hash   1723687072
     * @vftbl  252
     * @symbol ?kill@Actor@@UEAAXXZ
     */
    virtual void kill();
    /**
     * @hash   421990024
     * @vftbl  253
     * @symbol ?die@Actor@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @hash   -509676003
     * @vftbl  254
     * @symbol ?shouldDropDeathLoot@Actor@@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @hash   -1796445805
     * @vftbl  255
     * @symbol ?shouldTick@Actor@@UEBA_NXZ
     */
    virtual bool shouldTick() const;
    /**
     * @hash   2052314047
     * @vftbl  256
     * @symbol ?extractSnapshot@Actor@@UEBAXAEAUPlayerSnapshotComponent@@@Z
     */
    virtual void extractSnapshot(struct PlayerSnapshotComponent &) const;
    /**
     * @hash   -1925551964
     * @vftbl  257
     * @symbol ?applySnapshot@Actor@@UEAAXAEBUPlayerSnapshotComponent@@0@Z
     */
    virtual void applySnapshot(struct PlayerSnapshotComponent const &, struct PlayerSnapshotComponent const &);
    /**
     * @hash   1856572051
     * @vftbl  258
     * @symbol ?getNextStep@Actor@@UEAAMM@Z
     */
    virtual float getNextStep(float);
    /**
     * @hash   -695901542
     * @vftbl  259
     * @symbol ?getLootTable@Actor@@UEAAPEAVLootTable@@XZ
     */
    virtual class LootTable * getLootTable();
    /**
     * @hash   -1341240906
     * @vftbl  260
     * @symbol ?interpolatorTick@Actor@@UEAAXXZ
     */
    virtual void interpolatorTick();
    /**
     * @hash   -327801980
     * @vftbl  261
     * @symbol ?onPush@Actor@@UEAAXAEAV1@@Z
     */
    virtual void onPush(class Actor &);
    /**
     * @hash   -1455065728
     * @vftbl  262
     * @symbol ?getLastDeathPos@Actor@@UEBA?AV?$optional@VBlockPos@@@std@@XZ
     */
    virtual class std::optional<class BlockPos> getLastDeathPos() const;
    /**
     * @hash   1729933276
     * @vftbl  263
     * @symbol ?getLastDeathDimension@Actor@@UEBA?AV?$optional@V?$AutomaticID@VDimension@@H@@@std@@XZ
     */
    virtual class std::optional<class AutomaticID<class Dimension, int>> getLastDeathDimension() const;
    /**
     * @hash   7545920
     * @vftbl  264
     * @symbol ?hasDiedBefore@Actor@@UEBA_NXZ
     */
    virtual bool hasDiedBefore() const;
    /**
     * @vftbl  265
     * @symbol ?doWaterSplashEffect@Actor@@UEAAXXZ
     */
    virtual void doWaterSplashEffect();
    /**
     * @hash   -1412934295
     * @vftbl  266
     * @symbol ?_shouldProvideFeedbackOnHandContainerItemSet@Actor@@MEBA_NW4HandSlot@@AEBVItemStack@@@Z
     */
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(enum HandSlot, class ItemStack const &) const;
    /**
     * @hash   160216569
     * @vftbl  267
     * @symbol ?_shouldProvideFeedbackOnArmorSet@Actor@@MEBA_NW4ArmorSlot@@AEBVItemStack@@@Z
     */
    virtual bool _shouldProvideFeedbackOnArmorSet(enum ArmorSlot, class ItemStack const &) const;
    /**
     * @hash   -2033882140
     * @vftbl  268
     * @symbol ?updateEntitySpecificMolangVariables@Actor@@MEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @hash   -662195734
     * @vftbl  269
     * @symbol ?shouldTryMakeStepSound@Actor@@MEAA_NXZ
     */
    virtual bool shouldTryMakeStepSound();
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -1868709189
     * @vftbl  271
     * @symbol ?_hurt@Actor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -1492884041
     * @vftbl  272
     * @symbol ?markHurt@Actor@@MEAAXXZ
     */
    virtual void markHurt();
    /**
     * @hash   -1098953414
     * @vftbl  273
     * @symbol ?_getAnimationComponent@Actor@@MEAAAEAVAnimationComponent@@AEAV?$shared_ptr@VAnimationComponent@@@std@@W4AnimationComponentGroupType@@@Z
     */
    virtual class AnimationComponent & _getAnimationComponent(class std::shared_ptr<class AnimationComponent> &, enum AnimationComponentGroupType);
    /**
     * @hash   1576618203
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Actor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -66452830
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Actor@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1411755949
     * @vftbl  276
     * @symbol ?_playStepSound@Actor@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @hash   1674666604
     * @vftbl  277
     * @symbol ?_playFlySound@Actor@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void _playFlySound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   1681733373
     * @vftbl  279
     * @symbol ?checkInsideBlocks@Actor@@MEAAXM@Z
     */
    virtual void checkInsideBlocks(float);
    /**
     * @hash   -274953754
     * @vftbl  280
     * @symbol ?pushOutOfBlocks@Actor@@MEAAXAEBVVec3@@@Z
     */
    virtual void pushOutOfBlocks(class Vec3 const &);
    /**
     * @hash   895348919
     * @vftbl  281
     * @symbol ?spawnTrailBubbles@Actor@@MEAAXXZ
     */
    virtual void spawnTrailBubbles();
    /**
     * @hash   1345538451
     * @vftbl  282
     * @symbol ?updateInsideBlock@Actor@@MEAAXXZ
     */
    virtual void updateInsideBlock();
    /**
     * @hash   1575149123
     * @vftbl  283
     * @symbol ?_removePassenger@Actor@@MEAAXAEBUActorUniqueID@@_N11@Z
     */
    virtual void _removePassenger(struct ActorUniqueID const &, bool, bool, bool);
    /**
     * @hash   -745357312
     * @vftbl  284
     * @symbol ?_onSizeUpdated@Actor@@EEAAXXZ
     */
    virtual void _onSizeUpdated();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOR
    /**
     * @hash   2015882412
     * @symbol ?_doAutoAttackOnTouch@Actor@@EEAAXAEAV1@@Z
     */
    MCVAPI void _doAutoAttackOnTouch(class Actor &);
    /**
     * @hash   148198981
     * @symbol ?_makeFlySound@Actor@@MEBA_NXZ
     */
    MCVAPI bool _makeFlySound() const;
    /**
     * @hash   769931004
     * @symbol ?breaksFallingBlocks@Actor@@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @hash   1403137950
     * @symbol ?canExistInPeaceful@Actor@@UEBA_NXZ
     */
    MCVAPI bool canExistInPeaceful() const;
    /**
     * @hash   -220876897
     * @symbol ?canInteractWithOtherEntitiesInGame@Actor@@UEBA_NXZ
     */
    MCVAPI bool canInteractWithOtherEntitiesInGame() const;
    /**
     * @hash   824075073
     * @symbol ?canMakeStepSound@Actor@@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @hash   1093378349
     * @symbol ?canSeeInvisible@Actor@@UEBA_NXZ
     */
    MCVAPI bool canSeeInvisible() const;
    /**
     * @hash   -197178365
     * @symbol ?changeDimension@Actor@@UEAAXAEBVChangeDimensionPacket@@@Z
     */
    MCVAPI void changeDimension(class ChangeDimensionPacket const &);
    /**
     * @hash   -36321200
     * @symbol ?getAlwaysShowNameTag@Actor@@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const;
    /**
     * @hash   1691161740
     * @symbol ?getDeletionDelayTimeSeconds@Actor@@UEBAMXZ
     */
    MCVAPI float getDeletionDelayTimeSeconds() const;
    /**
     * @hash   -383287259
     * @symbol ?getOutputSignal@Actor@@UEBAHXZ
     */
    MCVAPI int getOutputSignal() const;
    /**
     * @hash   -811703819
     * @symbol ?hasOutputSignal@Actor@@UEBA_NE@Z
     */
    MCVAPI bool hasOutputSignal(unsigned char) const;
    /**
     * @hash   2005889379
     * @symbol ?interactPreventDefault@Actor@@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @hash   -1197258384
     * @symbol ?isCreativeModeAllowed@Actor@@UEAA_NXZ
     */
    MCVAPI bool isCreativeModeAllowed();
    /**
     * @hash   647000383
     * @symbol ?isFishable@Actor@@UEBA_NXZ
     */
    MCVAPI bool isFishable() const;
    /**
     * @hash   -586012277
     * @symbol ?isLeashableType@Actor@@UEAA_NXZ
     */
    MCVAPI bool isLeashableType();
    /**
     * @hash   -1258276283
     * @symbol ?isLocalPlayer@Actor@@UEBA_NXZ
     */
    MCVAPI bool isLocalPlayer() const;
    /**
     * @hash   1720940718
     * @symbol ?isPlayer@Actor@@UEBA_NXZ
     */
    MCVAPI bool isPlayer() const;
    /**
     * @hash   -1489902989
     * @symbol ?isShootable@Actor@@UEAA_NXZ
     */
    MCVAPI bool isShootable();
    /**
     * @hash   -931133416
     * @symbol ?isTargetable@Actor@@UEBA_NXZ
     */
    MCVAPI bool isTargetable() const;
    /**
     * @hash   1729081672
     * @symbol ?renderDebugServerState@Actor@@UEAAXAEBVOptions@@@Z
     */
    MCVAPI void renderDebugServerState(class Options const &);
#endif
    /**
     * @hash   -1375738991
     * @symbol ??0Actor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Actor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -728653305
     * @symbol ??0Actor@@QEAA@AEAVILevel@@AEAVEntityContext@@@Z
     */
    MCAPI Actor(class ILevel &, class EntityContext &);
    /**
     * @hash   -489345148
     * @symbol ?_randomHeartPos@Actor@@QEAA?AVVec3@@XZ
     */
    MCAPI class Vec3 _randomHeartPos();
    /**
     * @hash   -1888419619
     * @symbol ?_sendDirtyActorData@Actor@@QEAAXXZ
     */
    MCAPI void _sendDirtyActorData();
    /**
     * @hash   787942090
     * @symbol ?_setActorTypeId@Actor@@QEAAXW4ActorType@@@Z
     */
    MCAPI void _setActorTypeId(enum ActorType);
    /**
     * @hash   392957761
     * @symbol ?_setLevelPtr@Actor@@QEAAXPEAVLevel@@@Z
     */
    MCAPI void _setLevelPtr(class Level *);
    /**
     * @hash   -509373752
     * @symbol ?addDefinitionGroup@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addDefinitionGroup(std::string const &);
    /**
     * @hash   -1493310736
     * @symbol ?addEffect@Actor@@QEAAXAEBVMobEffectInstance@@@Z
     */
    MCAPI void addEffect(class MobEffectInstance const &);
    /**
     * @hash   -390693013
     * @symbol ?addTag@Actor@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool addTag(std::string const &);
    /**
     * @hash   1703542320
     * @symbol ?buildDebugGroupInfo@Actor@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void buildDebugGroupInfo(std::string &) const;
    /**
     * @hash   940848926
     * @symbol ?buildForward@Actor@@QEBA?AVVec3@@XZ
     */
    MCAPI class Vec3 buildForward() const;
    /**
     * @hash   -914070247
     * @symbol ?burn@Actor@@QEAAXH_N@Z
     */
    MCAPI void burn(int, bool);
    /**
     * @hash   906875229
     * @symbol ?cacheComponentData@Actor@@QEAAXXZ
     */
    MCAPI void cacheComponentData();
    /**
     * @hash   -667770458
     * @symbol ?calcCenterPos@Actor@@QEBA?AVVec3@@XZ
     */
    MCAPI class Vec3 calcCenterPos() const;
    /**
     * @hash   543978021
     * @symbol ?calculateAttackDamage@Actor@@QEAAMAEAV1@@Z
     */
    MCAPI float calculateAttackDamage(class Actor &);
    /**
     * @hash   -407412570
     * @symbol ?canAscendCurrentBlockByJumping@Actor@@QEBA_NXZ
     */
    MCAPI bool canAscendCurrentBlockByJumping() const;
    /**
     * @hash   -84395274
     * @symbol ?canBeginOrContinueClimbingLadder@Actor@@QEBA_NXZ
     */
    MCAPI bool canBeginOrContinueClimbingLadder() const;
    /**
     * @hash   -847199850
     * @symbol ?canCurrentlySwim@Actor@@QEBA_NXZ
     */
    MCAPI bool canCurrentlySwim() const;
    /**
     * @hash   -1643685228
     * @symbol ?canDescendBlockBelowByCrouching@Actor@@QEBA_NXZ
     */
    MCAPI bool canDescendBlockBelowByCrouching() const;
    /**
     * @hash   458811254
     * @symbol ?canFly@Actor@@QEBA_NXZ
     */
    MCAPI bool canFly() const;
    /**
     * @hash   361465857
     * @symbol ?canMate@Actor@@QEBA_NAEBV1@@Z
     */
    MCAPI bool canMate(class Actor const &) const;
    /**
     * @hash   -1561924554
     * @symbol ?canReceiveMobEffectsFromGameplay@Actor@@QEBA_NXZ
     */
    MCAPI bool canReceiveMobEffectsFromGameplay() const;
    /**
     * @hash   -553446426
     * @symbol ?canSeeDaylight@Actor@@QEBA_NXZ
     */
    MCAPI bool canSeeDaylight() const;
    /**
     * @hash   734733767
     * @symbol ?celebrateHunt@Actor@@QEAAXH_N@Z
     */
    MCAPI void celebrateHunt(int, bool);
    /**
     * @hash   -337486943
     * @symbol ?checkInsideCauldron@Actor@@QEAAXXZ
     */
    MCAPI void checkInsideCauldron();
    /**
     * @hash   1624761369
     * @symbol ?clearFishingHookID@Actor@@QEAAXXZ
     */
    MCAPI void clearFishingHookID();
    /**
     * @hash   800091335
     * @symbol ?closerThan@Actor@@QEBA_NAEBV1@MM@Z
     */
    MCAPI bool closerThan(class Actor const &, float, float) const;
    /**
     * @hash   -1966532200
     * @symbol ?closerThan@Actor@@QEBA_NAEBV1@M@Z
     */
    MCAPI bool closerThan(class Actor const &, float) const;
    /**
     * @hash   1338444833
     * @symbol ?consumeItem@Actor@@QEAAXAEAVItemActor@@H@Z
     */
    MCAPI void consumeItem(class ItemActor &, int);
    /**
     * @hash   -128798797
     * @symbol ?createUpdateEquipPacket@Actor@@QEAA?AVUpdateEquipPacket@@H@Z
     */
    MCAPI class UpdateEquipPacket createUpdateEquipPacket(int);
    /**
     * @hash   -709541093
     * @symbol ?createUpdateTradePacket@Actor@@QEAA?AVUpdateTradePacket@@H@Z
     */
    MCAPI class UpdateTradePacket createUpdateTradePacket(int);
    /**
     * @hash   -1453125588
     * @symbol ?damageSensorComponentHurt@Actor@@QEAA_NAEAMAEBVActorDamageSource@@_N@Z
     */
    MCAPI bool damageSensorComponentHurt(float &, class ActorDamageSource const &, bool);
    /**
     * @hash   545895053
     * @symbol ?deregisterTagsFromLevelCache@Actor@@QEAAXXZ
     */
    MCAPI void deregisterTagsFromLevelCache();
    /**
     * @hash   1172403767
     * @symbol ?distanceSqrToBlockPosCenter@Actor@@QEBAMAEBVBlockPos@@@Z
     */
    MCAPI float distanceSqrToBlockPosCenter(class BlockPos const &) const;
    /**
     * @hash   -601716321
     * @symbol ?distanceTo@Actor@@QEBAMAEBV1@@Z
     */
    MCAPI float distanceTo(class Actor const &) const;
    /**
     * @hash   -494940091
     * @symbol ?distanceTo@Actor@@QEBAMAEBVVec3@@@Z
     */
    MCAPI float distanceTo(class Vec3 const &) const;
    /**
     * @hash   419067559
     * @symbol ?distanceToSqr@Actor@@QEBAMAEBVVec3@@@Z
     */
    MCAPI float distanceToSqr(class Vec3 const &) const;
    /**
     * @hash   1244314369
     * @symbol ?distanceToSqr@Actor@@QEBAMAEBV1@@Z
     */
    MCAPI float distanceToSqr(class Actor const &) const;
    /**
     * @hash   -140408680
     * @symbol ?dropLeash@Actor@@QEAAX_N0@Z
     */
    MCAPI void dropLeash(bool, bool);
    /**
     * @hash   1824781087
     * @symbol ?dropTowards@Actor@@QEAAXAEBVItemStack@@VVec3@@@Z
     */
    MCAPI void dropTowards(class ItemStack const &, class Vec3);
    /**
     * @symbol ?evaluateSeatRotation@Actor@@QEAAMAEBVRideableComponent@@@Z
     */
    MCAPI float evaluateSeatRotation(class RideableComponent const &);
    /**
     * @hash   -1233387208
     * @symbol ?executeEvent@Actor@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVariantParameterList@@@Z
     */
    MCAPI bool executeEvent(std::string const &, class VariantParameterList const &);
    /**
     * @hash   1496902437
     * @symbol ?exitVehicle@Actor@@QEAAXAEBV1@P6A?AV?$optional@VVec3@@@std@@AEBUVehicleDirections@VehicleUtils@@V?$function@$$A6A_NAEBVVec3@@0@Z@3@@Z@Z
     */
    MCAPI void exitVehicle(class Actor const &, class std::optional<class Vec3> ( *)(struct VehicleUtils::VehicleDirections const &, class std::function<bool (class Vec3 const &, class Vec3 const &)>));
    /**
     * @hash   -80862961
     * @symbol ?fetchFishingHook@Actor@@QEAAPEAVFishingHook@@XZ
     */
    MCAPI class FishingHook * fetchFishingHook();
    /**
     * @hash   -487739392
     * @symbol ?fetchNearbyActorsSorted@Actor@@QEAA?AV?$vector@UDistanceSortedActor@@V?$allocator@UDistanceSortedActor@@@std@@@std@@AEBVVec3@@W4ActorType@@@Z
     */
    MCAPI std::vector<struct DistanceSortedActor> fetchNearbyActorsSorted(class Vec3 const &, enum ActorType);
    /**
     * @hash   168248773
     * @symbol ?forEachLeashedActor@Actor@@QEAAXV?$function@$$A6AXV?$not_null@PEAVActor@@@gsl@@@Z@std@@@Z
     */
    MCAPI void forEachLeashedActor(class std::function<void (class gsl::not_null<class Actor *>)>);
    /**
     * @hash   -1689877408
     * @symbol ?getAABB@Actor@@QEBAAEBVAABB@@XZ
     */
    MCAPI class AABB const & getAABB() const;
    /**
     * @hash   611322470
     * @symbol ?getAABBDim@Actor@@QEBAAEBVVec2@@XZ
     */
    MCAPI class Vec2 const & getAABBDim() const;
    /**
     * @hash   1959013450
     * @symbol ?getActiveEffectCount@Actor@@QEBAHXZ
     */
    MCAPI int getActiveEffectCount() const;
    /**
     * @hash   1454549392
     * @symbol ?getActorIdentifier@Actor@@QEBAAEBUActorDefinitionIdentifier@@XZ
     */
    MCAPI struct ActorDefinitionIdentifier const & getActorIdentifier() const;
    /**
     * @hash   2022026436
     * @symbol ?getAllEffects@Actor@@QEBAAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@XZ
     */
    MCAPI std::vector<class MobEffectInstance> const & getAllEffects() const;
    /**
     * @hash   1865043242
     * @symbol ?getArmorContainer@Actor@@QEAAAEAVSimpleContainer@@XZ
     */
    MCAPI class SimpleContainer & getArmorContainer();
    /**
     * @hash   -1089400668
     * @symbol ?getArmorContainer@Actor@@QEBAAEBVSimpleContainer@@XZ
     */
    MCAPI class SimpleContainer const & getArmorContainer() const;
    /**
     * @hash   967969489
     * @symbol ?getAttributes@Actor@@QEAA?AV?$not_null@PEAVBaseAttributeMap@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class BaseAttributeMap *> getAttributes();
    /**
     * @symbol ?getAttributes@Actor@@QEBA?AV?$not_null@PEBVBaseAttributeMap@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class BaseAttributeMap const *> getAttributes() const;
    /**
     * @hash   -801895838
     * @symbol ?getBlockPosCurrentlyStandingOn@Actor@@QEBA?AVBlockPos@@PEBV1@@Z
     */
    MCAPI class BlockPos getBlockPosCurrentlyStandingOn(class Actor const *) const;
    /**
     * @hash   -723482640
     * @symbol ?getBlockTarget@Actor@@QEBA?AVBlockPos@@XZ
     */
    MCAPI class BlockPos getBlockTarget() const;
    /**
     * @hash   -1753121756
     * @symbol ?getCanPickupItems@Actor@@QEBA_NXZ
     */
    MCAPI bool getCanPickupItems() const;
    /**
     * @hash   -557085568
     * @symbol ?getCarriedItemInSlotPreferredBy@Actor@@QEBAAEBVItemStack@@AEBV2@@Z
     */
    MCAPI class ItemStack const & getCarriedItemInSlotPreferredBy(class ItemStack const &) const;
    /**
     * @hash   -207519820
     * @symbol ?getChainedDamageEffects@Actor@@QEBA_NXZ
     */
    MCAPI bool getChainedDamageEffects() const;
    /**
     * @hash   1839564694
     * @symbol ?getCollidableMobNear@Actor@@QEBA_NXZ
     */
    MCAPI bool getCollidableMobNear() const;
    /**
     * @hash   -1003018210
     * @symbol ?getColor@Actor@@QEBA?AW4PaletteColor@@XZ
     */
    MCAPI enum PaletteColor getColor() const;
    /**
     * @hash   1796986316
     * @symbol ?getColor2@Actor@@QEBA?AW4PaletteColor@@XZ
     */
    MCAPI enum PaletteColor getColor2() const;
    /**
     * @hash   1539706250
     * @symbol ?getControllingSeat@Actor@@QEBAHXZ
     */
    MCAPI int getControllingSeat() const;
    /**
     * @hash   1599137034
     * @symbol ?getCurrentSwimAmount@Actor@@QEBAMXZ
     */
    MCAPI float getCurrentSwimAmount() const;
    /**
     * @hash   449685588
     * @symbol ?getDamageNearbyMobs@Actor@@QEBA_NXZ
     */
    MCAPI bool getDamageNearbyMobs() const;
    /**
     * @hash   1499616491
     * @symbol ?getDiffList@Actor@@QEBAPEBVActorDefinitionDiffList@@XZ
     */
    MCAPI class ActorDefinitionDiffList const * getDiffList() const;
    /**
     * @hash   1488934109
     * @symbol ?getDiffListNonConst@Actor@@QEAAPEAVActorDefinitionDiffList@@XZ
     */
    MCAPI class ActorDefinitionDiffList * getDiffListNonConst();
    /**
     * @hash   -1691336376
     * @symbol ?getDimension@Actor@@QEBAAEAVDimension@@XZ
     */
    MCAPI class Dimension & getDimension() const;
    /**
     * @hash   -449996500
     * @symbol ?getDimensionConst@Actor@@QEBAAEBVDimension@@XZ
     */
    MCAPI class Dimension const & getDimensionConst() const;
    /**
     * @hash   39993653
     * @symbol ?getEconomyTradeableComponent@Actor@@QEBAPEAVEconomyTradeableComponent@@XZ
     */
    MCAPI class EconomyTradeableComponent * getEconomyTradeableComponent() const;
    /**
     * @hash   1703500960
     * @symbol ?getEffect@Actor@@QEBAPEBVMobEffectInstance@@AEBVMobEffect@@@Z
     */
    MCAPI class MobEffectInstance const * getEffect(class MobEffect const &) const;
    /**
     * @symbol ?getEntityData@Actor@@QEAAAEAVSynchedActorDataEntityWrapper@@XZ
     */
    MCAPI class SynchedActorDataEntityWrapper & getEntityData();
    /**
     * @symbol ?getEntityData@Actor@@QEBAAEBVSynchedActorDataEntityWrapper@@XZ
     */
    MCAPI class SynchedActorDataEntityWrapper const & getEntityData() const;
    /**
     * @hash   533669153
     * @symbol ?getEntityRegistry@Actor@@QEAA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
     */
    MCAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
    /**
     * @hash   33480896
     * @symbol ?getEntityTerrainInterlockData@Actor@@QEAAAEAVActorTerrainInterlockData@@XZ
     */
    MCAPI class ActorTerrainInterlockData & getEntityTerrainInterlockData();
    /**
     * @hash   -501329589
     * @symbol ?getEquipmentSlotForItem@Actor@@QEBA?AW4EquipmentSlot@@AEBVItemStack@@@Z
     */
    MCAPI enum EquipmentSlot getEquipmentSlotForItem(class ItemStack const &) const;
    /**
     * @hash   -1853991356
     * @symbol ?getFirstAvailableSeatPos@Actor@@QEBA_NAEAV1@AEAVVec3@@@Z
     */
    MCAPI bool getFirstAvailableSeatPos(class Actor &, class Vec3 &) const;
    /**
     * @hash   -966668103
     * @symbol ?getFirstPassenger@Actor@@QEBAPEAV1@XZ
     */
    MCAPI class Actor * getFirstPassenger() const;
    /**
     * @hash   -1740603280
     * @symbol ?getHandContainer@Actor@@QEAAAEAVSimpleContainer@@XZ
     */
    MCAPI class SimpleContainer & getHandContainer();
    /**
     * @hash   -400079894
     * @symbol ?getHandContainer@Actor@@QEBAAEBVSimpleContainer@@XZ
     */
    MCAPI class SimpleContainer const & getHandContainer() const;
    /**
     * @hash   -989979108
     * @symbol ?getHealth@Actor@@QEBAHXZ
     */
    MCAPI int getHealth() const;
    /**
     * @hash   -396955850
     * @symbol ?getHurtDir@Actor@@QEBAHXZ
     */
    MCAPI int getHurtDir() const;
    /**
     * @hash   209954188
     * @symbol ?getHurtTime@Actor@@QEBAHXZ
     */
    MCAPI int getHurtTime() const;
    /**
     * @hash   1219556614
     * @symbol ?getInitializationMethod@Actor@@QEAA?AW4InitializationMethod@1@XZ
     */
    MCAPI enum Actor::InitializationMethod getInitializationMethod();
    /**
     * @hash   -948087903
     * @symbol ?getInterpolatedPosition@Actor@@QEBA?AVVec3@@M@Z
     */
    MCAPI class Vec3 getInterpolatedPosition(float) const;
    /**
     * @hash   -651317803
     * @symbol ?getInterpolatedRotation@Actor@@QEBA?AVVec2@@M@Z
     */
    MCAPI class Vec2 getInterpolatedRotation(float) const;
    /**
     * @hash   -1261011290
     * @symbol ?getIsExperienceDropEnabled@Actor@@QEBA_NXZ
     */
    MCAPI bool getIsExperienceDropEnabled() const;
    /**
     * @hash   289301928
     * @symbol ?getJumpDuration@Actor@@QEBAHXZ
     */
    MCAPI int getJumpDuration() const;
    /**
     * @hash   -1152078098
     * @symbol ?getLastHurtByMobTime@Actor@@QEAAHXZ
     */
    MCAPI int getLastHurtByMobTime();
    /**
     * @hash   -167938246
     * @symbol ?getLastHurtByMobTimestamp@Actor@@QEAAHXZ
     */
    MCAPI int getLastHurtByMobTimestamp();
    /**
     * @hash   1521461284
     * @symbol ?getLastHurtCause@Actor@@QEBA?AW4ActorDamageCause@@XZ
     */
    MCAPI enum ActorDamageCause getLastHurtCause() const;
    /**
     * @hash   -1869276054
     * @symbol ?getLastHurtDamage@Actor@@QEBAMXZ
     */
    MCAPI float getLastHurtDamage() const;
    /**
     * @hash   242248508
     * @symbol ?getLastHurtMobTimestamp@Actor@@QEAAHXZ
     */
    MCAPI int getLastHurtMobTimestamp();
    /**
     * @hash   475552161
     * @symbol ?getLastHurtTimestamp@Actor@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getLastHurtTimestamp() const;
    /**
     * @hash   -863839800
     * @symbol ?getLeashHolder@Actor@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getLeashHolder() const;
    /**
     * @hash   1896422986
     * @symbol ?getLevel@Actor@@QEAAAEAVLevel@@XZ
     */
    MCAPI class Level & getLevel();
    /**
     * @hash   -376298748
     * @symbol ?getLevel@Actor@@QEBAAEBVLevel@@XZ
     */
    MCAPI class Level const & getLevel() const;
    /**
     * @hash   1965496447
     * @symbol ?getLevelTimeStamp@Actor@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getLevelTimeStamp() const;
    /**
     * @hash   -1554715270
     * @symbol ?getLimitedLifetimeTicks@Actor@@QEBAHXZ
     */
    MCAPI int getLimitedLifetimeTicks() const;
    /**
     * @hash   -2010327468
     * @symbol ?getLinks@Actor@@QEBA?AV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct ActorLink> getLinks() const;
    /**
     * @hash   1592391098
     * @symbol ?getMarkVariant@Actor@@QEBAHXZ
     */
    MCAPI int getMarkVariant() const;
    /**
     * @hash   671874682
     * @symbol ?getMaxHealth@Actor@@QEBAHXZ
     */
    MCAPI int getMaxHealth() const;
    /**
     * @hash   2060074680
     * @symbol ?getMolangVariables@Actor@@QEAAAEAVMolangVariableMap@@XZ
     */
    MCAPI class MolangVariableMap & getMolangVariables();
    /**
     * @hash   -1097607440
     * @symbol ?getMovementProxy@Actor@@QEAA?AV?$not_null@V?$shared_ptr@UIActorMovementProxy@@@std@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>> getMovementProxy();
    /**
     * @hash   -579355234
     * @symbol ?getMovementProxy@Actor@@QEBA?AV?$not_null@V?$shared_ptr@$$CBUIActorMovementProxy@@@std@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy const>> getMovementProxy() const;
    /**
     * @hash   484198146
     * @symbol ?getOffhandSlot@Actor@@QEBAAEBVItemStack@@XZ
     */
    MCAPI class ItemStack const & getOffhandSlot() const;
    /**
     * @hash   -800679814
     * @symbol ?getOnDeathExperience@Actor@@QEAAHXZ
     */
    MCAPI int getOnDeathExperience();
    /**
     * @hash   1298079864
     * @symbol ?getOrAddDynamicProperties@Actor@@QEAAAEAVDynamicProperties@@XZ
     */
    MCAPI class DynamicProperties & getOrAddDynamicProperties();
    /**
     * @hash   614387291
     * @symbol ?getOwner@Actor@@QEBAPEAVMob@@XZ
     */
    MCAPI class Mob * getOwner() const;
    /**
     * @hash   1163344948
     * @symbol ?getOwnerId@Actor@@QEBA?BUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID const getOwnerId() const;
    /**
     * @hash   1654404041
     * @symbol ?getPassengerIndex@Actor@@QEBAHAEBV1@@Z
     */
    MCAPI int getPassengerIndex(class Actor const &) const;
    /**
     * @hash   1077292618
     * @symbol ?getPersistingTradeOffers@Actor@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> getPersistingTradeOffers();
    /**
     * @hash   2064509580
     * @symbol ?getPersistingTradeRiches@Actor@@QEAAHXZ
     */
    MCAPI int getPersistingTradeRiches();
    /**
     * @hash   1890932509
     * @symbol ?getPlayerOwner@Actor@@QEBAPEAVPlayer@@XZ
     */
    MCAPI class Player * getPlayerOwner() const;
    /**
     * @hash   -969485758
     * @symbol ?getPosDelta@Actor@@QEBAAEBVVec3@@XZ
     */
    MCAPI class Vec3 const & getPosDelta() const;
    /**
     * @hash   238341700
     * @symbol ?getPosDeltaNonConst@Actor@@QEAAAEAVVec3@@XZ
     */
    MCAPI class Vec3 & getPosDeltaNonConst();
    /**
     * @hash   1183036966
     * @symbol ?getRadius@Actor@@QEBAMXZ
     */
    MCAPI float getRadius() const;
    /**
     * @hash   -915763892
     * @symbol ?getRandom@Actor@@QEBAAEAVRandom@@XZ
     */
    MCAPI class Random & getRandom() const;
    /**
     * @hash   1852973482
     * @symbol ?getRegion@Actor@@QEBAAEAVBlockSource@@XZ
     */
    MCAPI class BlockSource & getRegion() const;
    /**
     * @hash   1779170082
     * @symbol ?getRegionConst@Actor@@QEBAAEBVBlockSource@@XZ
     */
    MCAPI class BlockSource const & getRegionConst() const;
    /**
     * @hash   1877973562
     * @symbol ?getRenderParams@Actor@@QEAAAEAVRenderParams@@XZ
     */
    MCAPI class RenderParams & getRenderParams();
    /**
     * @hash   2079195674
     * @symbol ?getRidingHeight@Actor@@QEBAMXZ
     */
    MCAPI float getRidingHeight() const;
    /**
     * @hash   -430941940
     * @symbol ?getRotation@Actor@@QEBA?AVVec2@@XZ
     */
    MCAPI class Vec2 getRotation() const;
    /**
     * @hash   -815696660
     * @symbol ?getRuntimeID@Actor@@QEBA?AVActorRuntimeID@@XZ
     */
    MCAPI class ActorRuntimeID getRuntimeID() const;
    /**
     * @hash   1110531584
     * @symbol ?getShakeTime@Actor@@QEBAHXZ
     */
    MCAPI int getShakeTime() const;
    /**
     * @hash   -1426963308
     * @symbol ?getSkinID@Actor@@QEBAHXZ
     */
    MCAPI int getSkinID() const;
    /**
     * @hash   -1035534434
     * @symbol ?getSpatialNetworkData@Actor@@QEAAAEAVSpatialActorNetworkData@@XZ
     */
    MCAPI class SpatialActorNetworkData & getSpatialNetworkData();
    /**
     * @hash   1868676888
     * @symbol ?getSpatialNetworkData@Actor@@QEBAAEBVSpatialActorNetworkData@@XZ
     */
    MCAPI class SpatialActorNetworkData const & getSpatialNetworkData() const;
    /**
     * @hash   -1881396568
     * @symbol ?getSpeedInMetersPerSecond@Actor@@QEBAMXZ
     */
    MCAPI float getSpeedInMetersPerSecond() const;
    /**
     * @hash   -898322159
     * @symbol ?getStatusFlag@Actor@@QEBA_NW4ActorFlags@@@Z
     */
    MCAPI bool getStatusFlag(enum ActorFlags) const;
    /**
     * @hash   1439754630
     * @symbol ?getStrength@Actor@@QEBAHXZ
     */
    MCAPI int getStrength() const;
    /**
     * @hash   1571571504
     * @symbol ?getStrengthMax@Actor@@QEBAHXZ
     */
    MCAPI int getStrengthMax() const;
    /**
     * @hash   -29364502
     * @symbol ?getStructuralIntegrity@Actor@@QEBAHXZ
     */
    MCAPI int getStructuralIntegrity() const;
    /**
     * @hash   -2147276011
     * @symbol ?getSwimAmount@Actor@@QEBAMM@Z
     */
    MCAPI float getSwimAmount(float) const;
    /**
     * @hash   2038712836
     * @symbol ?getTags@Actor@@QEBA?BV?$span@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$0?0@gsl@@XZ
     */
    MCAPI class gsl::span<std::string, -1> const getTags() const;
    /**
     * @hash   -27347431
     * @symbol ?getTarget@Actor@@QEBAPEAV1@XZ
     */
    MCAPI class Actor * getTarget() const;
    /**
     * @hash   -1426786218
     * @symbol ?getTargetId@Actor@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getTargetId() const;
    /**
     * @hash   2084818886
     * @symbol ?getTradeInterest@Actor@@QEBA_NXZ
     */
    MCAPI bool getTradeInterest() const;
    /**
     * @hash   173985543
     * @symbol ?getTradeOffers@Actor@@QEAAPEAVMerchantRecipeList@@XZ
     */
    MCAPI class MerchantRecipeList * getTradeOffers();
    /**
     * @hash   480651933
     * @symbol ?getTradingPlayer@Actor@@QEBAPEAVPlayer@@XZ
     */
    MCAPI class Player * getTradingPlayer() const;
    /**
     * @hash   -1602836826
     * @symbol ?getUniqueID@Actor@@QEBAAEBUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID const & getUniqueID() const;
    /**
     * @hash   -462814524
     * @symbol ?getVariant@Actor@@QEBAHXZ
     */
    MCAPI int getVariant() const;
    /**
     * @hash   1053478075
     * @symbol ?getVehicle@Actor@@QEBAPEAV1@XZ
     */
    MCAPI class Actor * getVehicle() const;
    /**
     * @hash   -764965717
     * @symbol ?getVehicleRoot@Actor@@QEBAPEAV1@XZ
     */
    MCAPI class Actor * getVehicleRoot() const;
    /**
     * @hash   -1544024786
     * @symbol ?getVehicleRuntimeID@Actor@@QEBA?AVActorRuntimeID@@XZ
     */
    MCAPI class ActorRuntimeID getVehicleRuntimeID() const;
    /**
     * @hash   11883764
     * @symbol ?getVerticalSpeedInMetersPerSecond@Actor@@QEBAMXZ
     */
    MCAPI float getVerticalSpeedInMetersPerSecond() const;
    /**
     * @hash   -920100439
     * @symbol ?getViewVector@Actor@@QEBA?AVVec3@@M@Z
     */
    MCAPI class Vec3 getViewVector(float) const;
    /**
     * @hash   -1828871212
     * @symbol ?hasAnyEffects@Actor@@QEBA_NXZ
     */
    MCAPI bool hasAnyEffects() const;
    /**
     * @hash   1524538518
     * @symbol ?hasAnyVisibleEffects@Actor@@QEBA_NXZ
     */
    MCAPI bool hasAnyVisibleEffects() const;
    /**
     * @hash   1073683621
     * @symbol ?hasBeenHurtByMobInLastTicks@Actor@@QEBA_NH@Z
     */
    MCAPI bool hasBeenHurtByMobInLastTicks(int) const;
    /**
     * @hash   1588153215
     * @symbol ?hasCategory@Actor@@QEBA_NW4ActorCategory@@@Z
     */
    MCAPI bool hasCategory(enum ActorCategory) const;
    /**
     * @hash   791108649
     * @symbol ?hasDefinitionGroup@Actor@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool hasDefinitionGroup(std::string const &) const;
    /**
     * @hash   481280726
     * @symbol ?hasDimension@Actor@@QEBA_NXZ
     */
    MCAPI bool hasDimension() const;
    /**
     * @hash   -158875875
     * @symbol ?hasEffect@Actor@@QEBA_NAEBVMobEffect@@@Z
     */
    MCAPI bool hasEffect(class MobEffect const &) const;
    /**
     * @hash   1533922615
     * @symbol ?hasFamily@Actor@@QEBA_NAEBVHashedString@@@Z
     */
    MCAPI bool hasFamily(class HashedString const &) const;
    /**
     * @hash   -1099280330
     * @symbol ?hasFishingHook@Actor@@QEBA_NXZ
     */
    MCAPI bool hasFishingHook() const;
    /**
     * @hash   -1752528282
     * @symbol ?hasLevel@Actor@@QEBA_NXZ
     */
    MCAPI bool hasLevel() const;
    /**
     * @hash   1515665878
     * @symbol ?hasPassenger@Actor@@QEBA_NXZ
     */
    MCAPI bool hasPassenger() const;
    /**
     * @hash   1666312886
     * @symbol ?hasPersistingTrade@Actor@@QEBA_NXZ
     */
    MCAPI bool hasPersistingTrade() const;
    /**
     * @hash   -322782298
     * @symbol ?hasPlayerPassenger@Actor@@QEBA_NXZ
     */
    MCAPI bool hasPlayerPassenger() const;
    /**
     * @hash   -1139916524
     * @symbol ?hasPriorityAmmunition@Actor@@QEBA_NXZ
     */
    MCAPI bool hasPriorityAmmunition() const;
    /**
     * @hash   1294743462
     * @symbol ?hasRuntimeID@Actor@@QEBA_NXZ
     */
    MCAPI bool hasRuntimeID() const;
    /**
     * @hash   2029159444
     * @symbol ?hasSaddle@Actor@@QEBA_NXZ
     */
    MCAPI bool hasSaddle() const;
    /**
     * @hash   -862909367
     * @symbol ?hasTag@Actor@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool hasTag(std::string const &) const;
    /**
     * @hash   1769663012
     * @symbol ?hasTags@Actor@@QEBA_NXZ
     */
    MCAPI bool hasTags() const;
    /**
     * @hash   -1412237596
     * @symbol ?hasTeleported@Actor@@QEBA_NXZ
     */
    MCAPI bool hasTeleported() const;
    /**
     * @hash   -1780031018
     * @symbol ?hasTotemEquipped@Actor@@QEBA_NXZ
     */
    MCAPI bool hasTotemEquipped() const;
    /**
     * @hash   -891684425
     * @symbol ?hasType@Actor@@QEBA_NW4ActorType@@@Z
     */
    MCAPI bool hasType(enum ActorType) const;
    /**
     * @hash   1301640788
     * @symbol ?hasUniqueID@Actor@@QEBA_NXZ
     */
    MCAPI bool hasUniqueID() const;
    /**
     * @hash   -1823951822
     * @symbol ?healEffects@Actor@@QEAAXH@Z
     */
    MCAPI void healEffects(int);
    /**
     * @hash   -289841562
     * @symbol ?hurt@Actor@@QEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    MCAPI bool hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   1680992324
     * @symbol ?inDownwardFlowingLiquid@Actor@@QEBA_NXZ
     */
    MCAPI bool inDownwardFlowingLiquid() const;
    /**
     * @hash   1749360357
     * @symbol ?initActorProperties@Actor@@QEAAXXZ
     */
    MCAPI void initActorProperties();
    /**
     * @hash   -430459664
     * @symbol ?initParams@Actor@@QEAAXAEAVVariantParameterList@@@Z
     */
    MCAPI void initParams(class VariantParameterList &);
    /**
     * @hash   1173191196
     * @symbol ?initParams@Actor@@QEAAXAEAVRenderParams@@@Z
     */
    MCAPI void initParams(class RenderParams &);
    /**
     * @hash   679758932
     * @symbol ?isActorLocationInMaterial@Actor@@QEBA_NW4ActorLocation@@W4MaterialType@@@Z
     */
    MCAPI bool isActorLocationInMaterial(enum ActorLocation, enum MaterialType) const;
    /**
     * @hash   679988772
     * @symbol ?isAngry@Actor@@QEBA_NXZ
     */
    MCAPI bool isAngry() const;
    /**
     * @hash   807833670
     * @symbol ?isAutonomous@Actor@@QEBA_NXZ
     */
    MCAPI bool isAutonomous() const;
    /**
     * @hash   1529052886
     * @symbol ?isBaby@Actor@@QEBA_NXZ
     */
    MCAPI bool isBaby() const;
    /**
     * @hash   156830196
     * @symbol ?isBreakingObstruction@Actor@@QEBA_NXZ
     */
    MCAPI bool isBreakingObstruction() const;
    /**
     * @hash   -890084330
     * @symbol ?isBribed@Actor@@QEBA_NXZ
     */
    MCAPI bool isBribed() const;
    /**
     * @hash   2025637780
     * @symbol ?isCharged@Actor@@QEBA_NXZ
     */
    MCAPI bool isCharged() const;
    /**
     * @hash   -884413004
     * @symbol ?isChested@Actor@@QEBA_NXZ
     */
    MCAPI bool isChested() const;
    /**
     * @hash   791588006
     * @symbol ?isClimbing@Actor@@QEBA_NXZ
     */
    MCAPI bool isClimbing() const;
    /**
     * @hash   -1740513052
     * @symbol ?isControlledByLocalInstance@Actor@@QEBA_NXZ
     */
    MCAPI bool isControlledByLocalInstance() const;
    /**
     * @hash   -1364096684
     * @symbol ?isDancing@Actor@@QEBA_NXZ
     */
    MCAPI bool isDancing() const;
    /**
     * @hash   977370516
     * @symbol ?isDoorBreaker@Actor@@QEBA_NXZ
     */
    MCAPI bool isDoorBreaker() const;
    /**
     * @hash   -438984266
     * @symbol ?isDoorOpener@Actor@@QEBA_NXZ
     */
    MCAPI bool isDoorOpener() const;
    /**
     * @hash   84674598
     * @symbol ?isGlobal@Actor@@QEBA_NXZ
     */
    MCAPI bool isGlobal() const;
    /**
     * @hash   1452854276
     * @symbol ?isIgnited@Actor@@QEBA_NXZ
     */
    MCAPI bool isIgnited() const;
    /**
     * @hash   1277531828
     * @symbol ?isImmersedInWater@Actor@@QEBA_NXZ
     */
    MCAPI bool isImmersedInWater() const;
    /**
     * @hash   -1784003066
     * @symbol ?isInClouds@Actor@@QEBA_NXZ
     */
    MCAPI bool isInClouds() const;
    /**
     * @hash   -636146666
     * @symbol ?isInContactWithWater@Actor@@QEBA_NXZ
     */
    MCAPI bool isInContactWithWater() const;
    /**
     * @hash   -531823354
     * @symbol ?isInLove@Actor@@QEBA_NXZ
     */
    MCAPI bool isInLove() const;
    /**
     * @hash   1622333412
     * @symbol ?isInPrecipitation@Actor@@QEBA_NXZ
     */
    MCAPI bool isInPrecipitation() const;
    /**
     * @hash   1837403334
     * @symbol ?isInRain@Actor@@QEBA_NXZ
     */
    MCAPI bool isInRain() const;
    /**
     * @hash   1464332036
     * @symbol ?isInScaffolding@Actor@@QEBA_NXZ
     */
    MCAPI bool isInScaffolding() const;
    /**
     * @hash   449215014
     * @symbol ?isInSnow@Actor@@QEBA_NXZ
     */
    MCAPI bool isInSnow() const;
    /**
     * @hash   878699718
     * @symbol ?isInThunderstorm@Actor@@QEBA_NXZ
     */
    MCAPI bool isInThunderstorm() const;
    /**
     * @hash   1903221908
     * @symbol ?isInWaterOrRain@Actor@@QEBA_NXZ
     */
    MCAPI bool isInWaterOrRain() const;
    /**
     * @hash   -783148284
     * @symbol ?isInWorld@Actor@@QEBA_NXZ
     */
    MCAPI bool isInWorld() const;
    /**
     * @hash   -1126927133
     * @symbol ?isInsideBorderBlock@Actor@@QEBA_NM@Z
     */
    MCAPI bool isInsideBorderBlock(float) const;
    /**
     * @hash   132092550
     * @symbol ?isInsidePortal@Actor@@QEBA_NXZ
     */
    MCAPI bool isInsidePortal() const;
    /**
     * @hash   871707494
     * @symbol ?isLayingDown@Actor@@QEBA_NXZ
     */
    MCAPI bool isLayingDown() const;
    /**
     * @hash   1722107876
     * @symbol ?isLeashed@Actor@@QEBA_NXZ
     */
    MCAPI bool isLeashed() const;
    /**
     * @hash   -1821840442
     * @symbol ?isMovedToLimbo@Actor@@QEBA_NXZ
     */
    MCAPI bool isMovedToLimbo() const;
    /**
     * @hash   293497878
     * @symbol ?isMovedToUnloadedChunk@Actor@@QEBA_NXZ
     */
    MCAPI bool isMovedToUnloadedChunk() const;
    /**
     * @hash   1950552838
     * @symbol ?isMoving@Actor@@QEBA_NXZ
     */
    MCAPI bool isMoving() const;
    /**
     * @hash   1119842822
     * @symbol ?isOrphan@Actor@@QEBA_NXZ
     */
    MCAPI bool isOrphan() const;
    /**
     * @hash   1545494374
     * @symbol ?isOutOfControl@Actor@@QEBA_NXZ
     */
    MCAPI bool isOutOfControl() const;
    /**
     * @hash   1715715012
     * @symbol ?isOverScaffolding@Actor@@QEBA_NXZ
     */
    MCAPI bool isOverScaffolding() const;
    /**
     * @hash   1739455190
     * @symbol ?isPacified@Actor@@QEBA_NXZ
     */
    MCAPI bool isPacified() const;
    /**
     * @hash   197401659
     * @symbol ?isPassenger@Actor@@QEBA_NAEBV1@@Z
     */
    MCAPI bool isPassenger(class Actor const &) const;
    /**
     * @hash   1276107878
     * @symbol ?isPersistent@Actor@@QEBA_NXZ
     */
    MCAPI bool isPersistent() const;
    /**
     * @hash   -1968773164
     * @symbol ?isPlayingDead@Actor@@QEBA_NXZ
     */
    MCAPI bool isPlayingDead() const;
    /**
     * @hash   656238772
     * @symbol ?isPowered@Actor@@QEBA_NXZ
     */
    MCAPI bool isPowered() const;
    /**
     * @hash   1481019476
     * @symbol ?isRegionValid@Actor@@QEBA_NXZ
     */
    MCAPI bool isRegionValid() const;
    /**
     * @hash   -887205132
     * @symbol ?isRemoved@Actor@@QEBA_NXZ
     */
    MCAPI bool isRemoved() const;
    /**
     * @hash   -678540860
     * @symbol ?isResting@Actor@@QEBA_NXZ
     */
    MCAPI bool isResting() const;
    /**
     * @hash   -1566929076
     * @symbol ?isRiding@Actor@@QEBA_NPEAV1@@Z
     */
    MCAPI bool isRiding(class Actor *) const;
    /**
     * @hash   -613786730
     * @symbol ?isRiding@Actor@@QEBA_NXZ
     */
    MCAPI bool isRiding() const;
    /**
     * @hash   1032461940
     * @symbol ?isSafeToSleepNear@Actor@@QEBA_NXZ
     */
    MCAPI bool isSafeToSleepNear() const;
    /**
     * @hash   1884992548
     * @symbol ?isSheared@Actor@@QEBA_NXZ
     */
    MCAPI bool isSheared() const;
    /**
     * @hash   2100299748
     * @symbol ?isSitting@Actor@@QEBA_NXZ
     */
    MCAPI bool isSitting() const;
    /**
     * @hash   -329754122
     * @symbol ?isSneaking@Actor@@QEBA_NXZ
     */
    MCAPI bool isSneaking() const;
    /**
     * @hash   -1071992970
     * @symbol ?isSoulSpeedEnchantActive@Actor@@QEBA_NXZ
     */
    MCAPI bool isSoulSpeedEnchantActive() const;
    /**
     * @hash   930617764
     * @symbol ?isStackable@Actor@@QEBA_NXZ
     */
    MCAPI bool isStackable() const;
    /**
     * @hash   -2067756250
     * @symbol ?isStanding@Actor@@QEBA_NXZ
     */
    MCAPI bool isStanding() const;
    /**
     * @hash   747971684
     * @symbol ?isSwimmer@Actor@@QEBA_NXZ
     */
    MCAPI bool isSwimmer() const;
    /**
     * @hash   684779494
     * @symbol ?isSwimming@Actor@@QEBA_NXZ
     */
    MCAPI bool isSwimming() const;
    /**
     * @hash   414495110
     * @symbol ?isTame@Actor@@QEBA_NXZ
     */
    MCAPI bool isTame() const;
    /**
     * @hash   -2089931420
     * @symbol ?isTickingEntity@Actor@@QEBA_NXZ
     */
    MCAPI bool isTickingEntity() const;
    /**
     * @hash   559734148
     * @symbol ?isTouchingDamageBlock@Actor@@QEBA_NXZ
     */
    MCAPI bool isTouchingDamageBlock() const;
    /**
     * @hash   -69345212
     * @symbol ?isTrading@Actor@@QEBA_NXZ
     */
    MCAPI bool isTrading() const;
    /**
     * @hash   -1642490714
     * @symbol ?isTrusting@Actor@@QEBA_NXZ
     */
    MCAPI bool isTrusting() const;
    /**
     * @hash   -610934587
     * @symbol ?isType@Actor@@QEBA_NW4ActorType@@@Z
     */
    MCAPI bool isType(enum ActorType) const;
    /**
     * @hash   -92519820
     * @symbol ?isUseNewTradeScreen@Actor@@QEBA_NXZ
     */
    MCAPI bool isUseNewTradeScreen() const;
    /**
     * @hash   25808822
     * @symbol ?isWASDControlled@Actor@@QEBA_NXZ
     */
    MCAPI bool isWASDControlled() const;
    /**
     * @hash   1124662774
     * @symbol ?isWalker@Actor@@QEBA_NXZ
     */
    MCAPI bool isWalker() const;
    /**
     * @hash   1245623957
     * @symbol ?lerpTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@MH@Z
     */
    MCAPI void lerpTo(class Vec3 const &, class Vec2 const &, float, int);
    /**
     * @hash   1986163984
     * @symbol ?lerpTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@H@Z
     */
    MCAPI void lerpTo(class Vec3 const &, class Vec2 const &, int);
    /**
     * @hash   66944653
     * @symbol ?lerpToRotation@Actor@@QEAAXAEBVVec2@@H@Z
     */
    MCAPI void lerpToRotation(class Vec2 const &, int);
    /**
     * @hash   579510095
     * @symbol ?loadEntityFlags@Actor@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void loadEntityFlags(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -325497052
     * @symbol ?lovePartnerId@Actor@@QEBAAEBUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID const & lovePartnerId() const;
    /**
     * @hash   -1834556548
     * @symbol ?migrateUniqueID@Actor@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void migrateUniqueID(struct ActorUniqueID);
    /**
     * @hash   1886730598
     * @symbol ?moveBBs@Actor@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void moveBBs(class Vec3 const &);
    /**
     * @hash   -1722506027
     * @symbol ?moveRelative@Actor@@QEAAXMMMM@Z
     */
    MCAPI void moveRelative(float, float, float, float);
    /**
     * @hash   -429980681
     * @symbol ?moveTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@@Z
     */
    MCAPI void moveTo(class Vec3 const &, class Vec2 const &);
    /**
     * @hash   -2100610293
     * @symbol ?onAffectedByWaterBottle@Actor@@QEAAXXZ
     */
    MCAPI void onAffectedByWaterBottle();
    /**
     * @hash   -1939836698
     * @symbol ?onClimbableBlock@Actor@@QEBA_NXZ
     */
    MCAPI bool onClimbableBlock() const;
    /**
     * @hash   -1427688138
     * @symbol ?onHoverableBlock@Actor@@QEBA_NXZ
     */
    MCAPI bool onHoverableBlock() const;
    /**
     * @hash   2072898180
     * @symbol ?onOnewayCollision@Actor@@QEAAXAEBVAABB@@@Z
     */
    MCAPI void onOnewayCollision(class AABB const &);
    /**
     * @hash   -1026704777
     * @symbol ??9Actor@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator!=(class Actor const &) const;
    /**
     * @hash   1103766578
     * @symbol ??8Actor@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class Actor const &) const;
    /**
     * @hash   8770671
     * @symbol ?pickUpItem@Actor@@QEAAXAEAVItemActor@@H@Z
     */
    MCAPI void pickUpItem(class ItemActor &, int);
    /**
     * @hash   -1794601724
     * @symbol ?playSound@Actor@@QEAAXW4LevelSoundEvent@@AEBVVec3@@AEBVBlock@@@Z
     */
    MCAPI void playSound(enum LevelSoundEvent, class Vec3 const &, class Block const &);
    /**
     * @hash   2118597188
     * @symbol ?playSound@Actor@@QEAAXW4LevelSoundEvent@@AEBVVec3@@H@Z
     */
    MCAPI void playSound(enum LevelSoundEvent, class Vec3 const &, int);
    /**
     * @hash   1374709400
     * @symbol ?positionAllPassengers@Actor@@QEAAX_N@Z
     */
    MCAPI void positionAllPassengers(bool);
    /**
     * @symbol ?postSplashGameEvent@Actor@@QEAAXXZ
     */
    MCAPI void postSplashGameEvent();
    /**
     * @hash   1688429301
     * @symbol ?pullInEntity@Actor@@QEAA_NAEAV1@@Z
     */
    MCAPI bool pullInEntity(class Actor &);
    /**
     * @hash   -409065918
     * @symbol ?pushBackActionEventToActionQueue@Actor@@QEAAXVActionEvent@@@Z
     */
    MCAPI void pushBackActionEventToActionQueue(class ActionEvent);
    /**
     * @hash   -1984923417
     * @symbol ?refreshComponents@Actor@@QEAAXXZ
     */
    MCAPI void refreshComponents();
    /**
     * @hash   2022173749
     * @symbol ?reload@Actor@@QEAAXXZ
     */
    MCAPI void reload();
    /**
     * @hash   854163501
     * @symbol ?removeAllEffects@Actor@@QEAAXXZ
     */
    MCAPI void removeAllEffects();
    /**
     * @hash   -628308088
     * @symbol ?removeAllPassengers@Actor@@QEAAX_N0@Z
     */
    MCAPI void removeAllPassengers(bool, bool);
    /**
     * @hash   -1193186068
     * @symbol ?removeDefinitionGroup@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void removeDefinitionGroup(std::string const &);
    /**
     * @hash   -975212866
     * @symbol ?removeEffect@Actor@@QEAAXH@Z
     */
    MCAPI void removeEffect(int);
    /**
     * @hash   302187961
     * @symbol ?removePersistingTrade@Actor@@QEAAXXZ
     */
    MCAPI void removePersistingTrade();
    /**
     * @hash   814800109
     * @symbol ?removeTag@Actor@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool removeTag(std::string const &);
    /**
     * @hash   978362087
     * @symbol ?resetClientAnimations@Actor@@QEAAXXZ
     */
    MCAPI void resetClientAnimations();
    /**
     * @hash   -171922293
     * @symbol ?resetRegion@Actor@@QEAAXXZ
     */
    MCAPI void resetRegion();
    /**
     * @hash   1590079656
     * @symbol ?saveEntityFlags@Actor@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void saveEntityFlags(class CompoundTag &) const;
    /**
     * @hash   -1052101676
     * @symbol ?saveLinks@Actor@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class ListTag> saveLinks() const;
    /**
     * @hash   -751196587
     * @symbol ?savePersistingTrade@Actor@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@H@Z
     */
    MCAPI void savePersistingTrade(std::unique_ptr<class CompoundTag>, int);
    /**
     * @hash   964187986
     * @symbol ?sendActorDefinitionEventTriggered@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void sendActorDefinitionEventTriggered(std::string const &);
    /**
     * @hash   153835675
     * @symbol ?sendMotionToServer@Actor@@QEAAXXZ
     */
    MCAPI void sendMotionToServer();
    /**
     * @hash   155140076
     * @symbol ?serializationSetHealth@Actor@@QEAAXH@Z
     */
    MCAPI void serializationSetHealth(int);
    /**
     * @hash   1640739364
     * @symbol ?setAABB@Actor@@QEAAXAEBVAABB@@@Z
     */
    MCAPI void setAABB(class AABB const &);
    /**
     * @hash   2086982342
     * @symbol ?setAABBDim@Actor@@QEAAXAEBVVec2@@@Z
     */
    MCAPI void setAABBDim(class Vec2 const &);
    /**
     * @hash   614280288
     * @symbol ?setActorRendererId@Actor@@QEAAXVHashedString@@@Z
     */
    MCAPI void setActorRendererId(class HashedString);
    /**
     * @hash   1080226904
     * @symbol ?setAutonomous@Actor@@QEAAX_N@Z
     */
    MCAPI void setAutonomous(bool);
    /**
     * @hash   308750774
     * @symbol ?setBaseDefinition@Actor@@QEAAXAEBUActorDefinitionIdentifier@@_N1@Z
     */
    MCAPI void setBaseDefinition(struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -638173164
     * @symbol ?setBlockTarget@Actor@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setBlockTarget(class BlockPos const &);
    /**
     * @hash   2118652966
     * @symbol ?setBreakingObstruction@Actor@@QEAAX_N@Z
     */
    MCAPI void setBreakingObstruction(bool);
    /**
     * @hash   -1818434648
     * @symbol ?setCanClimb@Actor@@QEAAX_N@Z
     */
    MCAPI void setCanClimb(bool);
    /**
     * @hash   1335677768
     * @symbol ?setCanFly@Actor@@QEAAX_N@Z
     */
    MCAPI void setCanFly(bool);
    /**
     * @hash   817815512
     * @symbol ?setChainedDamageEffects@Actor@@QEAAX_N@Z
     */
    MCAPI void setChainedDamageEffects(bool);
    /**
     * @hash   713943142
     * @symbol ?setCharged@Actor@@QEAAX_N@Z
     */
    MCAPI void setCharged(bool);
    /**
     * @hash   528721736
     * @symbol ?setClimbing@Actor@@QEAAX_N@Z
     */
    MCAPI void setClimbing(bool);
    /**
     * @hash   2090996998
     * @symbol ?setCollidableMob@Actor@@QEAAX_N@Z
     */
    MCAPI void setCollidableMob(bool);
    /**
     * @hash   -677531482
     * @symbol ?setCollidableMobNear@Actor@@QEAAX_N@Z
     */
    MCAPI void setCollidableMobNear(bool);
    /**
     * @hash   -221814528
     * @symbol ?setColor@Actor@@QEAAXW4PaletteColor@@@Z
     */
    MCAPI void setColor(enum PaletteColor);
    /**
     * @hash   -552607076
     * @symbol ?setControllingSeat@Actor@@QEAAXH@Z
     */
    MCAPI void setControllingSeat(int);
    /**
     * @hash   -1301341466
     * @symbol ?setDancing@Actor@@QEAAX_N@Z
     */
    MCAPI void setDancing(bool);
    /**
     * @hash   -1829541690
     * @symbol ?setDoorBreaker@Actor@@QEAAX_N@Z
     */
    MCAPI void setDoorBreaker(bool);
    /**
     * @hash   1060389544
     * @symbol ?setDoorOpener@Actor@@QEAAX_N@Z
     */
    MCAPI void setDoorOpener(bool);
    /**
     * @hash   941273734
     * @symbol ?setEnchanted@Actor@@QEAAX_N@Z
     */
    MCAPI void setEnchanted(bool);
    /**
     * @hash   -488027046
     * @symbol ?setFishingHookID@Actor@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void setFishingHookID(struct ActorUniqueID);
    /**
     * @hash   1493410504
     * @symbol ?setGlobal@Actor@@QEAAX_N@Z
     */
    MCAPI void setGlobal(bool);
    /**
     * @hash   1869098288
     * @symbol ?setHurtDir@Actor@@QEAAXH@Z
     */
    MCAPI void setHurtDir(int);
    /**
     * @hash   -950967110
     * @symbol ?setHurtTime@Actor@@QEAAXH@Z
     */
    MCAPI void setHurtTime(int);
    /**
     * @hash   -158659587
     * @symbol ?setInLove@Actor@@QEAAXPEAV1@@Z
     */
    MCAPI void setInLove(class Actor *);
    /**
     * @hash   1900582246
     * @symbol ?setInterpolation@Actor@@QEAAX_N@Z
     */
    MCAPI void setInterpolation(bool);
    /**
     * @hash   -591492474
     * @symbol ?setInvisible@Actor@@QEAAX_N@Z
     */
    MCAPI void setInvisible(bool);
    /**
     * @hash   -1087360698
     * @symbol ?setIsExperienceDropEnabled@Actor@@QEAAX_N@Z
     */
    MCAPI void setIsExperienceDropEnabled(bool);
    /**
     * @hash   -1221953330
     * @symbol ?setJumpDuration@Actor@@QEAAXH@Z
     */
    MCAPI void setJumpDuration(int);
    /**
     * @hash   -238135518
     * @symbol ?setLastHitBB@Actor@@QEAAXAEBVVec3@@0@Z
     */
    MCAPI void setLastHitBB(class Vec3 const &, class Vec3 const &);
    /**
     * @hash   -1360781176
     * @symbol ?setLayingDown@Actor@@QEAAX_N@Z
     */
    MCAPI void setLayingDown(bool);
    /**
     * @hash   1412207178
     * @symbol ?setLeashHolder@Actor@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void setLeashHolder(struct ActorUniqueID);
    /**
     * @hash   -2003366308
     * @symbol ?setLimitedLifetimeTicks@Actor@@QEAAXH@Z
     */
    MCAPI void setLimitedLifetimeTicks(int);
    /**
     * @hash   2102921116
     * @symbol ?setMarkVariant@Actor@@QEAAXH@Z
     */
    MCAPI void setMarkVariant(int);
    /**
     * @hash   -1845143736
     * @symbol ?setMovedToLimbo@Actor@@QEAAX_N@Z
     */
    MCAPI void setMovedToLimbo(bool);
    /**
     * @hash   -978889448
     * @symbol ?setMovedToUnloadedChunk@Actor@@QEAAX_N@Z
     */
    MCAPI void setMovedToUnloadedChunk(bool);
    /**
     * @hash   -889883192
     * @symbol ?setMoving@Actor@@QEAAX_N@Z
     */
    MCAPI void setMoving(bool);
    /**
     * @hash   528670583
     * @symbol ?setPersistent@Actor@@QEAAXXZ
     */
    MCAPI void setPersistent();
    /**
     * @hash   161059396
     * @symbol ?setPosDirectLegacy@Actor@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void setPosDirectLegacy(class Vec3 const &);
    /**
     * @hash   -518380812
     * @symbol ?setPosPrev@Actor@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void setPosPrev(class Vec3 const &);
    /**
     * @hash   1253872361
     * @symbol ?setPreviousPosRot@Actor@@QEAAXAEBVVec3@@AEBVVec2@@@Z
     */
    MCAPI void setPreviousPosRot(class Vec3 const &, class Vec2 const &);
    /**
     * @hash   -1655268616
     * @symbol ?setRegion@Actor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void setRegion(class BlockSource &);
    /**
     * @hash   -1669650378
     * @symbol ?setResting@Actor@@QEAAX_N@Z
     */
    MCAPI void setResting(bool);
    /**
     * @hash   1421114800
     * @symbol ?setRuntimeID@Actor@@QEAAXVActorRuntimeID@@@Z
     */
    MCAPI void setRuntimeID(class ActorRuntimeID);
    /**
     * @hash   -984955368
     * @symbol ?setSaddle@Actor@@QEAAX_N@Z
     */
    MCAPI void setSaddle(bool);
    /**
     * @hash   -1183252072
     * @symbol ?setScared@Actor@@QEAAX_N@Z
     */
    MCAPI void setScared(bool);
    /**
     * @hash   1370423565
     * @symbol ?setSeatDescription@Actor@@QEAAXAEBVVec3@@AEBUSeatDescription@@@Z
     */
    MCAPI void setSeatDescription(class Vec3 const &, struct SeatDescription const &);
    /**
     * @hash   383622550
     * @symbol ?setShakeTime@Actor@@QEAAXH@Z
     */
    MCAPI void setShakeTime(int);
    /**
     * @hash   -1155969998
     * @symbol ?setSkinID@Actor@@QEAAXH@Z
     */
    MCAPI void setSkinID(int);
    /**
     * @hash   -780407607
     * @symbol ?setStatusFlag@Actor@@QEAAXW4ActorFlags@@_N@Z
     */
    MCAPI void setStatusFlag(enum ActorFlags, bool);
    /**
     * @hash   -1682116096
     * @symbol ?setStrength@Actor@@QEAAXH@Z
     */
    MCAPI void setStrength(int);
    /**
     * @hash   1367548726
     * @symbol ?setStrengthMax@Actor@@QEAAXH@Z
     */
    MCAPI void setStrengthMax(int);
    /**
     * @hash   1078526732
     * @symbol ?setStructuralIntegrity@Actor@@QEAAXH@Z
     */
    MCAPI void setStructuralIntegrity(int);
    /**
     * @hash   1504051670
     * @symbol ?setStunned@Actor@@QEAAX_N@Z
     */
    MCAPI void setStunned(bool);
    /**
     * @hash   -427310042
     * @symbol ?setSwimmer@Actor@@QEAAX_N@Z
     */
    MCAPI void setSwimmer(bool);
    /**
     * @hash   1689982150
     * @symbol ?setTempted@Actor@@QEAAX_N@Z
     */
    MCAPI void setTempted(bool);
    /**
     * @hash   848055638
     * @symbol ?setTradeInterest@Actor@@QEAAX_N@Z
     */
    MCAPI void setTradeInterest(bool);
    /**
     * @hash   -768258115
     * @symbol ?setTradingPlayer@Actor@@QEAAXPEAVPlayer@@@Z
     */
    MCAPI void setTradingPlayer(class Player *);
    /**
     * @hash   -79127972
     * @symbol ?setUniqueID@Actor@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void setUniqueID(struct ActorUniqueID);
    /**
     * @hash   -409172622
     * @symbol ?setVariant@Actor@@QEAAXH@Z
     */
    MCAPI void setVariant(int);
    /**
     * @hash   1570628326
     * @symbol ?setVelocity@Actor@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void setVelocity(class Vec3 const &);
    /**
     * @hash   -473311352
     * @symbol ?setWASDControlled@Actor@@QEAAX_N@Z
     */
    MCAPI void setWASDControlled(bool);
    /**
     * @hash   -824337512
     * @symbol ?setWalker@Actor@@QEAAX_N@Z
     */
    MCAPI void setWalker(bool);
    /**
     * @hash   842132403
     * @symbol ?shouldOrphan@Actor@@QEAA_NAEAVBlockSource@@@Z
     */
    MCAPI bool shouldOrphan(class BlockSource &);
    /**
     * @hash   457835636
     * @symbol ?shouldUpdateEffects@Actor@@QEBA_NXZ
     */
    MCAPI bool shouldUpdateEffects() const;
    /**
     * @hash   1412760947
     * @symbol ?spawnBalloonPopParticles@Actor@@QEAAXXZ
     */
    MCAPI void spawnBalloonPopParticles();
    /**
     * @hash   1022664061
     * @symbol ?spawnDeathParticles@Actor@@QEAAXXZ
     */
    MCAPI void spawnDeathParticles();
    /**
     * @hash   -1613895032
     * @symbol ?spawnDustParticles@Actor@@QEAAXH@Z
     */
    MCAPI void spawnDustParticles(int);
    /**
     * @hash   950470925
     * @symbol ?spawnEatParticles@Actor@@QEAAXAEBVItemStack@@H@Z
     */
    MCAPI void spawnEatParticles(class ItemStack const &, int);
    /**
     * @hash   -974320314
     * @symbol ?spawnTamingParticles@Actor@@QEAAX_N@Z
     */
    MCAPI void spawnTamingParticles(bool);
    /**
     * @hash   839483799
     * @symbol ?spinAttack@Actor@@QEAAXXZ
     */
    MCAPI void spinAttack();
    /**
     * @hash   547851204
     * @symbol ?teleportPassengersTo@Actor@@QEAAXAEBVVec3@@HH@Z
     */
    MCAPI void teleportPassengersTo(class Vec3 const &, int, int);
    /**
     * @hash   806582658
     * @symbol ?testForEntityStacking@Actor@@QEAAXAEAVBlockSource@@AEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     */
    MCAPI void testForEntityStacking(class BlockSource &, class AABB const &, std::vector<class AABB> &);
    /**
     * @hash   -530217293
     * @symbol ?tick@Actor@@QEAA_NAEAVBlockSource@@@Z
     */
    MCAPI bool tick(class BlockSource &);
    /**
     * @hash   -946610934
     * @symbol ?transferTickingArea@Actor@@QEAAXAEAVDimension@@@Z
     */
    MCAPI void transferTickingArea(class Dimension &);
    /**
     * @hash   1626821308
     * @symbol ?tryGetEquippableSlotAllowedItems@Actor@@QEBAPEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@H@Z
     */
    MCAPI std::vector<class ItemDescriptor> const * tryGetEquippableSlotAllowedItems(int) const;
    /**
     * @hash   -1841059237
     * @symbol ?updateAnimationComponentOnServer@Actor@@QEAAXXZ
     */
    MCAPI void updateAnimationComponentOnServer();
    /**
     * @hash   -1045425505
     * @symbol ?updateBBFromDefinition@Actor@@QEAAXXZ
     */
    MCAPI void updateBBFromDefinition();
    /**
     * @hash   963694987
     * @symbol ?updateDescription@Actor@@QEAAXXZ
     */
    MCAPI void updateDescription();
    /**
     * @hash   -1569255705
     * @symbol ?updateInvisibilityStatus@Actor@@QEAAXXZ
     */
    MCAPI void updateInvisibilityStatus();
    /**
     * @hash   -269832114
     * @symbol ?updateMolangVariables@Actor@@QEAAXAEAVRenderParams@@@Z
     */
    MCAPI void updateMolangVariables(class RenderParams &);
    /**
     * @hash   -1660673471
     * @symbol ?updateTickingData@Actor@@QEAAXXZ
     */
    MCAPI void updateTickingData();
    /**
     * @hash   -22075597
     * @symbol ?useSaddle@Actor@@QEAA_NAEAVItemStackBase@@PEAVPlayer@@@Z
     */
    MCAPI bool useSaddle(class ItemStackBase &, class Player *);
    /**
     * @hash   -1745677642
     * @symbol ?wasLastHitByPlayer@Actor@@QEAA_NXZ
     */
    MCAPI bool wasLastHitByPlayer();
    /**
     * @hash   -72690588
     * @symbol ?wasLoadedFromNBTThisFrame@Actor@@QEBA_NXZ
     */
    MCAPI bool wasLoadedFromNBTThisFrame() const;
    /**
     * @hash   288502083
     * @symbol ?DEFAULT_AMBIENT_SOUND_INTERVAL@Actor@@2MB
     */
    MCAPI static float const DEFAULT_AMBIENT_SOUND_INTERVAL;
    /**
     * @hash   1713568323
     * @symbol ?DEFAULT_AMBIENT_SOUND_INTERVAL_RANGE@Actor@@2MB
     */
    MCAPI static float const DEFAULT_AMBIENT_SOUND_INTERVAL_RANGE;
    /**
     * @hash   -1205945255
     * @symbol ?DEFAULT_MOVEMENT_SOUND_DISTANCE_OFFSET@Actor@@2MB
     */
    MCAPI static float const DEFAULT_MOVEMENT_SOUND_DISTANCE_OFFSET;
    /**
     * @symbol ?ENTITY_COLLISION_SKIN@Actor@@2VVec3@@B
     */
    MCAPI static class Vec3 const ENTITY_COLLISION_SKIN;
    /**
     * @hash   -517310921
     * @symbol ?LAVA_AABB_SHRINK_AMOUNT@Actor@@2VVec3@@B
     */
    MCAPI static class Vec3 const LAVA_AABB_SHRINK_AMOUNT;
    /**
     * @hash   975694875
     * @symbol ?LAVA_FLOW_STRENGTH_MULTIPLIER@Actor@@2MB
     */
    MCAPI static float const LAVA_FLOW_STRENGTH_MULTIPLIER;
    /**
     * @hash   1615402477
     * @symbol ?MAX_BYTE_CHARGE_AMOUNT@Actor@@2HB
     */
    MCAPI static int const MAX_BYTE_CHARGE_AMOUNT;
    /**
     * @hash   1984607185
     * @symbol ?PLAYER_HURT_EXPERIENCE_TIME@Actor@@2HB
     */
    MCAPI static int const PLAYER_HURT_EXPERIENCE_TIME;
    /**
     * @hash   -21844637
     * @symbol ?RIDING_TAG@Actor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RIDING_TAG;
    /**
     * @hash   -298641647
     * @symbol ?TOTAL_AIR_SUPPLY@Actor@@2HB
     */
    MCAPI static int const TOTAL_AIR_SUPPLY;
    /**
     * @hash   1656183
     * @symbol ?WATER_AABB_SHRINK_AMOUNT@Actor@@2VVec3@@B
     */
    MCAPI static class Vec3 const WATER_AABB_SHRINK_AMOUNT;
    /**
     * @hash   27231623
     * @symbol ?WATER_FLOW_STRENGTH_MULTIPLIER@Actor@@2MB
     */
    MCAPI static float const WATER_FLOW_STRENGTH_MULTIPLIER;
    /**
     * @hash   -648012449
     * @symbol ?_move@Actor@@SAXAEAUIActorMovementProxy@@AEBVVec3@@@Z
     */
    MCAPI static void _move(struct IActorMovementProxy &, class Vec3 const &);
    /**
     * @hash   -380876361
     * @symbol ?buildForward@Actor@@SA?AVVec3@@AEBUIActorMovementProxy@@@Z
     */
    MCAPI static class Vec3 buildForward(struct IActorMovementProxy const &);
    /**
     * @hash   -2133403995
     * @symbol ?canBeginOrContinueClimbingLadder@Actor@@SA_NAEBUIActorMovementProxy@@@Z
     */
    MCAPI static bool canBeginOrContinueClimbingLadder(struct IActorMovementProxy const &);
    /**
     * @hash   1713957589
     * @symbol ?checkEntityOnewayCollision@Actor@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static void checkEntityOnewayCollision(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1593910155
     * @symbol ?getBlockPosCurrentlyStandingOn@Actor@@SA?AVBlockPos@@AEBUIActorMovementProxy@@PEBU3@@Z
     */
    MCAPI static class BlockPos getBlockPosCurrentlyStandingOn(struct IActorMovementProxy const &, struct IActorMovementProxy const *);
    /**
     * @hash   280325489
     * @symbol ?getBlockPosCurrentlyStandingOn@Actor@@SA?AVBlockPos@@AEBVVec3@@VAABB@@AEBVIConstBlockSource@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    MCAPI static class BlockPos getBlockPosCurrentlyStandingOn(class Vec3 const &, class AABB, class IConstBlockSource const &, class optional_ref<class GetCollisionShapeInterface const>);
    /**
     * @hash   -173509673
     * @symbol ?getInterpolatedRotation@Actor@@SA?AVVec2@@AEBV2@0M@Z
     */
    MCAPI static class Vec2 getInterpolatedRotation(class Vec2 const &, class Vec2 const &, float);
    /**
     * @hash   -476819782
     * @symbol ?getLiquidAABB@Actor@@SA?AVAABB@@AEBV2@W4MaterialType@@@Z
     */
    MCAPI static class AABB getLiquidAABB(class AABB const &, enum MaterialType);
    /**
     * @hash   -1494179571
     * @symbol ?getLiquidFlowStrength@Actor@@SAMW4MaterialType@@@Z
     */
    MCAPI static float getLiquidFlowStrength(enum MaterialType);
    /**
     * @hash   619254656
     * @symbol ?getStatusFlag@Actor@@SA_NAEBVSynchedActorData@@W4ActorFlags@@@Z
     */
    MCAPI static bool getStatusFlag(class SynchedActorData const &, enum ActorFlags);
    /**
     * @hash   -1488030937
     * @symbol ?getViewVector@Actor@@SA?AVVec3@@AEBVVec2@@0M@Z
     */
    MCAPI static class Vec3 getViewVector(class Vec2 const &, class Vec2 const &, float);
    /**
     * @hash   -246212674
     * @symbol ?getViewVector@Actor@@SA?AVVec3@@AEBUIActorMovementProxy@@M@Z
     */
    MCAPI static class Vec3 getViewVector(struct IActorMovementProxy const &, float);
    /**
     * @hash   -6068751
     * @symbol ?hasSubBBIn@Actor@@SA_NAEBVIConstBlockSource@@AEBV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@W4MaterialType@@@Z
     */
    MCAPI static bool hasSubBBIn(class IConstBlockSource const &, std::vector<class AABB> const &, enum MaterialType);
    /**
     * @hash   1408984659
     * @symbol ?isFree@Actor@@SA_NAEAUIActorMovementProxy@@AEBVVec3@@M@Z
     */
    MCAPI static bool isFree(struct IActorMovementProxy &, class Vec3 const &, float);
    /**
     * @hash   1982860967
     * @symbol ?isImmersedInWater@Actor@@SA_NAEBUIActorMovementProxy@@@Z
     */
    MCAPI static bool isImmersedInWater(struct IActorMovementProxy const &);
    /**
     * @hash   384796533
     * @symbol ?isImmobile@Actor@@SA_NAEBUIActorMovementProxy@@@Z
     */
    MCAPI static bool isImmobile(struct IActorMovementProxy const &);
    /**
     * @hash   1218211207
     * @symbol ?isInScaffolding@Actor@@SA_NAEBUIActorMovementProxy@@@Z
     */
    MCAPI static bool isInScaffolding(struct IActorMovementProxy const &);
    /**
     * @hash   1463179751
     * @symbol ?isSitting@Actor@@SA_NAEBUIActorMovementProxy@@@Z
     */
    MCAPI static bool isSitting(struct IActorMovementProxy const &);
    /**
     * @hash   517661989
     * @symbol ?isStanding@Actor@@SA_NAEBUIActorMovementProxy@@@Z
     */
    MCAPI static bool isStanding(struct IActorMovementProxy const &);
    /**
     * @hash   -232287506
     * @symbol ?moveRelative@Actor@@SAXAEAUIActorMovementProxy@@MMMM@Z
     */
    MCAPI static void moveRelative(struct IActorMovementProxy &, float, float, float, float);
    /**
     * @hash   1067663973
     * @symbol ?onClimbableBlock@Actor@@SA_NAEBUIActorMovementProxy@@@Z
     */
    MCAPI static bool onClimbableBlock(struct IActorMovementProxy const &);
    /**
     * @hash   -178578049
     * @symbol ?testForCollidableMobs@Actor@@SAXAEBUIActorMovementProxy@@AEAVBlockSource@@AEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     */
    MCAPI static void testForCollidableMobs(struct IActorMovementProxy const &, class BlockSource &, class AABB const &, std::vector<class AABB> &);
    /**
     * @hash   -33887561
     * @symbol ?tryGetFromComponent@Actor@@SAPEAV1@AEAVActorOwnerComponent@@_N@Z
     */
    MCAPI static class Actor * tryGetFromComponent(class ActorOwnerComponent &, bool);
    /**
     * @hash   1759816661
     * @symbol ?tryGetFromComponent@Actor@@SAPEBV1@AEBVActorOwnerComponent@@_N@Z
     */
    MCAPI static class Actor const * tryGetFromComponent(class ActorOwnerComponent const &, bool);
    /**
     * @hash   1679969221
     * @symbol ?tryGetFromEntity@Actor@@SAPEAV1@AEAVEntityContext@@_N@Z
     */
    MCAPI static class Actor * tryGetFromEntity(class EntityContext &, bool);
    /**
     * @hash   -1320299062
     * @symbol ?tryGetFromEntity@Actor@@SAPEAV1@V?$StackRefResultT@UEntityRefTraits@@@@_N@Z
     */
    MCAPI static class Actor * tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool);

//protected:
    /**
     * @hash   -143057185
     * @symbol ?_assignActorMovementProxy@Actor@@IEAAXV?$not_null@V?$shared_ptr@UIActorMovementProxy@@@std@@@gsl@@@Z
     */
    MCAPI void _assignActorMovementProxy(class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>>);
    /**
     * @hash   -437328235
     * @symbol ?_drop@Actor@@IEAAPEBVItemActor@@AEBVItemStack@@_N@Z
     */
    MCAPI class ItemActor const * _drop(class ItemStack const &, bool);
    /**
     * @hash   -1617392208
     * @symbol ?_isHeadInWater@Actor@@IEBA_NXZ
     */
    MCAPI bool _isHeadInWater() const;
    /**
     * @hash   1366945401
     * @symbol ?_playMovementSound@Actor@@IEAAX_N@Z
     */
    MCAPI void _playMovementSound(bool);
    /**
     * @hash   1378436522
     * @symbol ?_refreshAABB@Actor@@IEAAXXZ
     */
    MCAPI void _refreshAABB();
    /**
     * @hash   -1815453870
     * @symbol ?_setArmorContainer@Actor@@IEAAXV?$unique_ptr@VSimpleContainer@@U?$default_delete@VSimpleContainer@@@std@@@std@@@Z
     */
    MCAPI void _setArmorContainer(std::unique_ptr<class SimpleContainer>);
    /**
     * @hash   -24667940
     * @symbol ?_setDimensionTransitionComponent@Actor@@IEAAXV?$AutomaticID@VDimension@@H@@0H@Z
     */
    MCAPI void _setDimensionTransitionComponent(class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>, int);
    /**
     * @hash   1884907864
     * @symbol ?_setHandContainer@Actor@@IEAAXV?$unique_ptr@VSimpleContainer@@U?$default_delete@VSimpleContainer@@@std@@@std@@@Z
     */
    MCAPI void _setHandContainer(std::unique_ptr<class SimpleContainer>);
    /**
     * @hash   1592360139
     * @symbol ?_setHandContainerItem@Actor@@IEAAXAEBVItemStack@@W4HandSlot@@@Z
     */
    MCAPI void _setHandContainerItem(class ItemStack const &, enum HandSlot);
    /**
     * @hash   79128455
     * @symbol ?_setHeightOffset@Actor@@IEAAXM@Z
     */
    MCAPI void _setHeightOffset(float);
    /**
     * @hash   -2021096677
     * @symbol ?_setPos@Actor@@IEAAXAEBVVec3@@@Z
     */
    MCAPI void _setPos(class Vec3 const &);
    /**
     * @hash   1280263960
     * @symbol ?_setPosPrev@Actor@@IEAAXAEBVVec3@@@Z
     */
    MCAPI void _setPosPrev(class Vec3 const &);
    /**
     * @hash   -1164788423
     * @symbol ?enableAutoSendPosRot@Actor@@IEAAX_N@Z
     */
    MCAPI void enableAutoSendPosRot(bool);
    /**
     * @hash   -588551637
     * @symbol ?updateWaterState@Actor@@IEAA_NXZ
     */
    MCAPI bool updateWaterState();
    /**
     * @hash   1730739019
     * @symbol ?getBlockWhenClimbing@Actor@@KAAEBVBlock@@AEBUIActorMovementProxy@@@Z
     */
    MCAPI static class Block const & getBlockWhenClimbing(struct IActorMovementProxy const &);

//private:
    /**
     * @hash   -1000091968
     * @symbol ?_addActorComponents@Actor@@AEAAXXZ
     */
    MCAPI void _addActorComponents();
    /**
     * @symbol ?_convertOldSave@Actor@@AEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void _convertOldSave(class CompoundTag const &);
    /**
     * @symbol ?_defaultInitEquipmentDropChances@Actor@@AEAAXXZ
     */
    MCAPI void _defaultInitEquipmentDropChances();
    /**
     * @hash   -1307117235
     * @symbol ?_initializeLeashRopeSystem@Actor@@AEAAXPEAV1@@Z
     */
    MCAPI void _initializeLeashRopeSystem(class Actor *);
    /**
     * @hash   -1906518219
     * @symbol ?_isItemStackNetManagerEnabled@Actor@@AEBA_NXZ
     */
    MCAPI bool _isItemStackNetManagerEnabled() const;
    /**
     * @hash   420120048
     * @symbol ?_managePassengers@Actor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _managePassengers(class BlockSource &);
    /**
     * @hash   -852499620
     * @symbol ?_sendLinkPacket@Actor@@AEBAXAEBUActorLink@@@Z
     */
    MCAPI void _sendLinkPacket(struct ActorLink const &) const;
    /**
     * @hash   1779074462
     * @symbol ?_serializeComponents@Actor@@AEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void _serializeComponents(class CompoundTag &) const;
    /**
     * @hash   176481697
     * @symbol ?_setupServerAnimationComponent@Actor@@AEAAXXZ
     */
    MCAPI void _setupServerAnimationComponent();
    /**
     * @hash   -1149887568
     * @symbol ?_spawnTreasureHuntingParticles@Actor@@AEAAXXZ
     */
    MCAPI void _spawnTreasureHuntingParticles();
    /**
     * @hash   -2028152376
     * @symbol ?_tryPlantWitherRose@Actor@@AEAAXXZ
     */
    MCAPI void _tryPlantWitherRose();
    /**
     * @hash   -1806112437
     * @symbol ?_updateComposition@Actor@@AEAAX_N@Z
     */
    MCAPI void _updateComposition(bool);
    /**
     * @hash   494978969
     * @symbol ?_updateOwnerChunk@Actor@@AEAAXXZ
     */
    MCAPI void _updateOwnerChunk();
    /**
     * @hash   -2047282576
     * @symbol ?_containsSneakCollisionShapes@Actor@@CA_NAEAUIActorMovementProxy@@AEBVAABB@@@Z
     */
    MCAPI static bool _containsSneakCollisionShapes(struct IActorMovementProxy &, class AABB const &);

protected:

private:
    /**
     * @hash   -2031640509
     * @symbol ?DAMAGE_NEARBY_MOBS_DURATION@Actor@@0HB
     */
    MCAPI static int const DAMAGE_NEARBY_MOBS_DURATION;
    /**
     * @hash   -749287224
     * @symbol ?DEFAULT_MAX_DISTANCE_OPTIMIZATION@Actor@@0MB
     */
    MCAPI static float const DEFAULT_MAX_DISTANCE_OPTIMIZATION;
    /**
     * @hash   -1385050282
     * @symbol ?DEFAULT_MAX_TICK_DELAY_OPTIMIZATION@Actor@@0_KB
     */
    MCAPI static unsigned __int64 const DEFAULT_MAX_TICK_DELAY_OPTIMIZATION;

};