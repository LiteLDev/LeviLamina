/**
 * @file  EnderDragon.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnderDragon.
 *
 */
class EnderDragon : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERDRAGON
public:
    class EnderDragon& operator=(class EnderDragon const &) = delete;
    EnderDragon(class EnderDragon const &) = delete;
    EnderDragon() = delete;
#endif

public:
    /**
     * @hash   -115573550
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@EnderDragon\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~EnderDragon();
    /**
     * @hash   817459568
     * @vftbl  19
     * @symbol  ?remove\@EnderDragon\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @hash   -1165550485
     * @vftbl  81
     * @symbol  ?getShadowRadius\@EnderDragon\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @hash   2100542531
     * @vftbl  82
     * @symbol  ?getHeadLookVector\@EnderDragon\@\@UEBA?AVVec3\@\@M\@Z
     */
    virtual class Vec3 getHeadLookVector(float) const;
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @hash   378493357
     * @vftbl  93
     * @symbol  ?isImmobile\@EnderDragon\@\@UEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
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
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   -460341530
     * @vftbl  121
     * @symbol  ?setSitting\@EnderDragon\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool);
    /**
     * @hash   1140664841
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@EnderDragon\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   -1660235861
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@EnderDragon\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @hash   -190869568
     * @vftbl  178
     * @symbol  ?canChangeDimensionsUsingPortal\@EnderDragon\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   148496690
     * @vftbl  191
     * @symbol  ?canBePulledIntoVehicle\@EnderDragon\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @hash   57460596
     * @vftbl  208
     * @symbol  ?canBeAffected\@EnderDragon\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const;
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
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @hash   -1457621042
     * @vftbl  246
     * @symbol  ?die\@EnderDragon\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @hash   -1273722605
     * @vftbl  260
     * @symbol  ?updateEntitySpecificMolangVariables\@EnderDragon\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -1144356219
     * @vftbl  263
     * @symbol  ?_hurt\@EnderDragon\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   117577402
     * @vftbl  276
     * @symbol  ?_onSizeUpdated\@EnderDragon\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -93783872
     * @vftbl  291
     * @symbol  ?aiStep\@EnderDragon\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   -1520456388
     * @vftbl  352
     * @symbol  ?tickDeath\@EnderDragon\@\@MEAAXXZ
     */
    virtual void tickDeath();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERDRAGON
    /**
     * @hash   -324351704
     * @symbol  ?canExistInPeaceful\@EnderDragon\@\@UEBA_NXZ
     */
    MCVAPI bool canExistInPeaceful() const;
    /**
     * @hash   -416662247
     * @symbol  ?isFishable\@EnderDragon\@\@UEBA_NXZ
     */
    MCVAPI bool isFishable() const;
#endif
    /**
     * @hash   549918391
     * @symbol  ??0EnderDragon\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI EnderDragon(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   895629103
     * @symbol  ?dieNaturally\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void dieNaturally();
    /**
     * @hash   -997772931
     * @symbol  ?findClosestNode\@EnderDragon\@\@QEAAHAEBVVec3\@\@\@Z
     */
    MCAPI int findClosestNode(class Vec3 const &);
    /**
     * @hash   -46471426
     * @symbol  ?findClosestNode\@EnderDragon\@\@QEAAHXZ
     */
    MCAPI int findClosestNode();
    /**
     * @hash   -616871146
     * @symbol  ?findPath\@EnderDragon\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@HHPEAVPathfinderNode\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> findPath(int, int, class PathfinderNode *);
    /**
     * @hash   -499576932
     * @symbol  ?getFlameCount\@EnderDragon\@\@QEBAHXZ
     */
    MCAPI int getFlameCount() const;
    /**
     * @hash   903961286
     * @symbol  ?getFlapTime\@EnderDragon\@\@QEBAMXZ
     */
    MCAPI float getFlapTime() const;
    /**
     * @hash   -353375188
     * @symbol  ?getHeadPos\@EnderDragon\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getHeadPos() const;
    /**
     * @hash   1698145834
     * @symbol  ?getLatencyPos\@EnderDragon\@\@QEBA?BV?$vector\@MV?$allocator\@M\@std\@\@\@std\@\@HM\@Z
     */
    MCAPI std::vector<float> const getLatencyPos(int, float) const;
    /**
     * @hash   -1249968950
     * @symbol  ?getNumCrystalsAlive\@EnderDragon\@\@QEAAHXZ
     */
    MCAPI int getNumCrystalsAlive();
    /**
     * @hash   -2067074822
     * @symbol  ?getTargetPos\@EnderDragon\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getTargetPos() const;
    /**
     * @hash   974811723
     * @symbol  ?incrementFlameCount\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void incrementFlameCount();
    /**
     * @hash   -505301866
     * @symbol  ?onCrystalDestroyed\@EnderDragon\@\@QEAAXAEBVEnderCrystal\@\@VBlockPos\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class BlockPos, class ActorDamageSource const &);
    /**
     * @hash   -1353860837
     * @symbol  ?postAiStep\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @hash   -1950855717
     * @symbol  ?resetFlameCount\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void resetFlameCount();
    /**
     * @hash   152199389
     * @symbol  ?setDragonKilledCallback\@EnderDragon\@\@QEAAXV?$function\@$$A6AXAEAVEnderDragon\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setDragonKilledCallback(class std::function<void (class EnderDragon &)>);
    /**
     * @hash   -1373329950
     * @symbol  ?setHasDragonPreviouslyBeenKilled\@EnderDragon\@\@QEAAX_N\@Z
     */
    MCAPI void setHasDragonPreviouslyBeenKilled(bool);
    /**
     * @hash   -1721276786
     * @symbol  ?setNumCrystalsAlive\@EnderDragon\@\@QEAAXH\@Z
     */
    MCAPI void setNumCrystalsAlive(int);
    /**
     * @hash   -729525714
     * @symbol  ?setTargetPos\@EnderDragon\@\@QEAAXVVec3\@\@\@Z
     */
    MCAPI void setTargetPos(class Vec3);
    /**
     * @hash   -2073415130
     * @symbol  ?setTurnSpeed\@EnderDragon\@\@QEAAXM\@Z
     */
    MCAPI void setTurnSpeed(float);

//protected:
    /**
     * @hash   -2064668304
     * @symbol  ?_hurt\@EnderDragon\@\@IEAA_NPEAVAABB\@\@AEBVActorDamageSource\@\@M\@Z
     */
    MCAPI bool _hurt(class AABB *, class ActorDamageSource const &, float);

//private:
    /**
     * @hash   -1648986393
     * @symbol  ?_checkCrystals\@EnderDragon\@\@AEAAXXZ
     */
    MCAPI void _checkCrystals();
    /**
     * @hash   -1591209752
     * @symbol  ?_checkWalls\@EnderDragon\@\@AEAA_NVAABB\@\@\@Z
     */
    MCAPI bool _checkWalls(class AABB);
    /**
     * @hash   -254478298
     * @symbol  ?_hurtEntities\@EnderDragon\@\@AEBAXV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI void _hurtEntities(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    /**
     * @hash   2144412121
     * @symbol  ?_knockBack\@EnderDragon\@\@AEBAXV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI void _knockBack(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    /**
     * @hash   -1481588037
     * @symbol  ?_reconstructPath\@EnderDragon\@\@AEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVPathfinderNode\@\@0W4PathCompletionType\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> _reconstructPath(class PathfinderNode &, class PathfinderNode &, enum class PathCompletionType);
    /**
     * @hash   135020474
     * @symbol  ?_isDragonImmuneBlock\@EnderDragon\@\@CA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI static bool _isDragonImmuneBlock(class BlockLegacy const &);

protected:

private:
    /**
     * @hash   90595324
     * @symbol  ?GROWL_INTERVAL_MAX\@EnderDragon\@\@0HA
     */
    MCAPI static int GROWL_INTERVAL_MAX;
    /**
     * @hash   109528358
     * @symbol  ?GROWL_INTERVAL_MIN\@EnderDragon\@\@0HA
     */
    MCAPI static int GROWL_INTERVAL_MIN;
    /**
     * @hash   187878885
     * @symbol  ?MAX_PATH_RADIUS\@EnderDragon\@\@0HA
     */
    MCAPI static int MAX_PATH_RADIUS;
    /**
     * @hash   1970149123
     * @symbol  ?SITTING_ALLOWED_DAMAGE_PERCENTAGE\@EnderDragon\@\@0MA
     */
    MCAPI static float SITTING_ALLOWED_DAMAGE_PERCENTAGE;

};