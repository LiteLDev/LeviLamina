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
     * @vftbl  81
     * @symbol  ?getShadowRadius\@EnderDragon\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
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
     * @vftbl  121
     * @symbol  ?setSitting\@EnderDragon\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool);
    /**
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@EnderDragon\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@EnderDragon\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
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
     * @vftbl  246
     * @symbol  ?die\@EnderDragon\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
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
     * @symbol  ?canExistInPeaceful\@EnderDragon\@\@UEBA_NXZ
     */
    MCVAPI bool canExistInPeaceful() const;
    /**
     * @symbol  ?isFishable\@EnderDragon\@\@UEBA_NXZ
     */
    MCVAPI bool isFishable() const;
#endif
    /**
     * @symbol  ??0EnderDragon\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI EnderDragon(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol  ?dieNaturally\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void dieNaturally();
    /**
     * @symbol  ?findClosestNode\@EnderDragon\@\@QEAAHAEBVVec3\@\@\@Z
     */
    MCAPI int findClosestNode(class Vec3 const &);
    /**
     * @symbol  ?findClosestNode\@EnderDragon\@\@QEAAHXZ
     */
    MCAPI int findClosestNode();
    /**
     * @symbol  ?findPath\@EnderDragon\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@HHPEAVPathfinderNode\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> findPath(int, int, class PathfinderNode *);
    /**
     * @symbol  ?getFlameCount\@EnderDragon\@\@QEBAHXZ
     */
    MCAPI int getFlameCount() const;
    /**
     * @symbol  ?getFlapTime\@EnderDragon\@\@QEBAMXZ
     */
    MCAPI float getFlapTime() const;
    /**
     * @symbol  ?getHeadPos\@EnderDragon\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getHeadPos() const;
    /**
     * @symbol  ?getLatencyPos\@EnderDragon\@\@QEBA?BV?$vector\@MV?$allocator\@M\@std\@\@\@std\@\@HM\@Z
     */
    MCAPI std::vector<float> const getLatencyPos(int, float) const;
    /**
     * @symbol  ?getNumCrystalsAlive\@EnderDragon\@\@QEAAHXZ
     */
    MCAPI int getNumCrystalsAlive();
    /**
     * @symbol  ?getTargetPos\@EnderDragon\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getTargetPos() const;
    /**
     * @symbol  ?incrementFlameCount\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void incrementFlameCount();
    /**
     * @symbol  ?onCrystalDestroyed\@EnderDragon\@\@QEAAXAEBVEnderCrystal\@\@VBlockPos\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class BlockPos, class ActorDamageSource const &);
    /**
     * @symbol  ?postAiStep\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @symbol  ?resetFlameCount\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void resetFlameCount();
    /**
     * @symbol  ?setDragonKilledCallback\@EnderDragon\@\@QEAAXV?$function\@$$A6AXAEAVEnderDragon\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setDragonKilledCallback(class std::function<void (class EnderDragon &)>);
    /**
     * @symbol  ?setHasDragonPreviouslyBeenKilled\@EnderDragon\@\@QEAAX_N\@Z
     */
    MCAPI void setHasDragonPreviouslyBeenKilled(bool);
    /**
     * @symbol  ?setNumCrystalsAlive\@EnderDragon\@\@QEAAXH\@Z
     */
    MCAPI void setNumCrystalsAlive(int);
    /**
     * @symbol  ?setTargetPos\@EnderDragon\@\@QEAAXVVec3\@\@\@Z
     */
    MCAPI void setTargetPos(class Vec3);
    /**
     * @symbol  ?setTurnSpeed\@EnderDragon\@\@QEAAXM\@Z
     */
    MCAPI void setTurnSpeed(float);

//protected:
    /**
     * @symbol  ?_hurt\@EnderDragon\@\@IEAA_NPEAVAABB\@\@AEBVActorDamageSource\@\@M\@Z
     */
    MCAPI bool _hurt(class AABB *, class ActorDamageSource const &, float);

//private:
    /**
     * @symbol  ?_checkCrystals\@EnderDragon\@\@AEAAXXZ
     */
    MCAPI void _checkCrystals();
    /**
     * @symbol  ?_checkWalls\@EnderDragon\@\@AEAA_NVAABB\@\@\@Z
     */
    MCAPI bool _checkWalls(class AABB);
    /**
     * @symbol  ?_hurtEntities\@EnderDragon\@\@AEBAXV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI void _hurtEntities(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    /**
     * @symbol  ?_knockBack\@EnderDragon\@\@AEBAXV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI void _knockBack(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    /**
     * @symbol  ?_reconstructPath\@EnderDragon\@\@AEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVPathfinderNode\@\@0W4PathCompletionType\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> _reconstructPath(class PathfinderNode &, class PathfinderNode &, enum class PathCompletionType);
    /**
     * @symbol  ?_isDragonImmuneBlock\@EnderDragon\@\@CA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI static bool _isDragonImmuneBlock(class BlockLegacy const &);

protected:

private:
    /**
     * @symbol  ?GROWL_INTERVAL_MAX\@EnderDragon\@\@0HA
     */
    MCAPI static int GROWL_INTERVAL_MAX;
    /**
     * @symbol  ?GROWL_INTERVAL_MIN\@EnderDragon\@\@0HA
     */
    MCAPI static int GROWL_INTERVAL_MIN;
    /**
     * @symbol  ?MAX_PATH_RADIUS\@EnderDragon\@\@0HA
     */
    MCAPI static int MAX_PATH_RADIUS;
    /**
     * @symbol  ?SITTING_ALLOWED_DAMAGE_PERCENTAGE\@EnderDragon\@\@0MA
     */
    MCAPI static float SITTING_ALLOWED_DAMAGE_PERCENTAGE;

};