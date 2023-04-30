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
     * @vftbl 10
     * @symbol ?reloadHardcoded\@EnderDragon\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol ?remove\@EnderDragon\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl 80
     * @symbol ?getShadowRadius\@EnderDragon\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 81
     * @symbol ?getHeadLookVector\@EnderDragon\@\@UEBA?AVVec3\@\@M\@Z
     */
    virtual class Vec3 getHeadLookVector(float) const;
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 92
     * @symbol ?isImmobile\@EnderDragon\@\@UEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl 120
     * @symbol ?setSitting\@EnderDragon\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool);
    /**
     * @vftbl 134
     * @symbol ?isInvulnerableTo\@EnderDragon\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 141
     * @symbol ?handleEntityEvent\@EnderDragon\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 177
     * @symbol ?canChangeDimensionsUsingPortal\@EnderDragon\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 190
     * @symbol ?canBePulledIntoVehicle\@EnderDragon\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl 192
     * @symbol __unk_vfn_192
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl 207
     * @symbol ?canBeAffected\@EnderDragon\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const;
    /**
     * @vftbl 217
     * @symbol __unk_vfn_217
     */
    virtual void __unk_vfn_217();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 240
     * @symbol __unk_vfn_240
     */
    virtual void __unk_vfn_240();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 245
     * @symbol ?die\@EnderDragon\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl 258
     * @symbol ?updateEntitySpecificMolangVariables\@EnderDragon\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 261
     * @symbol ?_hurt\@EnderDragon\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 274
     * @symbol ?_onSizeUpdated\@EnderDragon\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 301
     * @symbol __unk_vfn_301
     */
    virtual void __unk_vfn_301();
    /**
     * @vftbl 305
     * @symbol __unk_vfn_305
     */
    virtual void __unk_vfn_305();
    /**
     * @vftbl 349
     * @symbol ?tickDeath\@EnderDragon\@\@MEAAXXZ
     */
    virtual void tickDeath();
    /**
     * @vftbl 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERDRAGON
    /**
     * @symbol ?canExistInPeaceful\@EnderDragon\@\@UEBA_NXZ
     */
    MCVAPI bool canExistInPeaceful() const;
    /**
     * @symbol ?isFishable\@EnderDragon\@\@UEBA_NXZ
     */
    MCVAPI bool isFishable() const;
#endif
    /**
     * @symbol ??0EnderDragon\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI EnderDragon(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?dieNaturally\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void dieNaturally();
    /**
     * @symbol ?findClosestNode\@EnderDragon\@\@QEAAHAEBVVec3\@\@\@Z
     */
    MCAPI int findClosestNode(class Vec3 const &);
    /**
     * @symbol ?findClosestNode\@EnderDragon\@\@QEAAHXZ
     */
    MCAPI int findClosestNode();
    /**
     * @symbol ?findPath\@EnderDragon\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@HHPEAVPathfinderNode\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> findPath(int, int, class PathfinderNode *);
    /**
     * @symbol ?getFlameCount\@EnderDragon\@\@QEBAHXZ
     */
    MCAPI int getFlameCount() const;
    /**
     * @symbol ?getFlapTime\@EnderDragon\@\@QEBAMXZ
     */
    MCAPI float getFlapTime() const;
    /**
     * @symbol ?getHeadPos\@EnderDragon\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getHeadPos() const;
    /**
     * @symbol ?getLatencyPos\@EnderDragon\@\@QEBA?BV?$vector\@MV?$allocator\@M\@std\@\@\@std\@\@HM\@Z
     */
    MCAPI std::vector<float> const getLatencyPos(int, float) const;
    /**
     * @symbol ?getNumCrystalsAlive\@EnderDragon\@\@QEAAHXZ
     */
    MCAPI int getNumCrystalsAlive();
    /**
     * @symbol ?getTargetPos\@EnderDragon\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getTargetPos() const;
    /**
     * @symbol ?incrementFlameCount\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void incrementFlameCount();
    /**
     * @symbol ?onCrystalDestroyed\@EnderDragon\@\@QEAAXAEBVEnderCrystal\@\@VBlockPos\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class BlockPos, class ActorDamageSource const &);
    /**
     * @symbol ?postAiStep\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @symbol ?resetFlameCount\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void resetFlameCount();
    /**
     * @symbol ?setDragonKilledCallback\@EnderDragon\@\@QEAAXV?$function\@$$A6AXAEAVEnderDragon\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setDragonKilledCallback(class std::function<void (class EnderDragon &)>);
    /**
     * @symbol ?setHasDragonPreviouslyBeenKilled\@EnderDragon\@\@QEAAX_N\@Z
     */
    MCAPI void setHasDragonPreviouslyBeenKilled(bool);
    /**
     * @symbol ?setNumCrystalsAlive\@EnderDragon\@\@QEAAXH\@Z
     */
    MCAPI void setNumCrystalsAlive(int);
    /**
     * @symbol ?setTargetPos\@EnderDragon\@\@QEAAXVVec3\@\@\@Z
     */
    MCAPI void setTargetPos(class Vec3);
    /**
     * @symbol ?setTurnSpeed\@EnderDragon\@\@QEAAXM\@Z
     */
    MCAPI void setTurnSpeed(float);

//protected:
    /**
     * @symbol ?_hurt\@EnderDragon\@\@IEAA_NPEAVAABB\@\@AEBVActorDamageSource\@\@M\@Z
     */
    MCAPI bool _hurt(class AABB *, class ActorDamageSource const &, float);

//private:
    /**
     * @symbol ?_checkCrystals\@EnderDragon\@\@AEAAXXZ
     */
    MCAPI void _checkCrystals();
    /**
     * @symbol ?_checkWalls\@EnderDragon\@\@AEAA_NVAABB\@\@\@Z
     */
    MCAPI bool _checkWalls(class AABB);
    /**
     * @symbol ?_hurtEntities\@EnderDragon\@\@AEBAXV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI void _hurtEntities(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    /**
     * @symbol ?_knockBack\@EnderDragon\@\@AEBAXV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI void _knockBack(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    /**
     * @symbol ?_reconstructPath\@EnderDragon\@\@AEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVPathfinderNode\@\@0W4PathCompletionType\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> _reconstructPath(class PathfinderNode &, class PathfinderNode &, enum class PathCompletionType);
    /**
     * @symbol ?_isDragonImmuneBlock\@EnderDragon\@\@CA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI static bool _isDragonImmuneBlock(class BlockLegacy const &);

protected:

private:
    /**
     * @symbol ?GROWL_INTERVAL_MAX\@EnderDragon\@\@0HA
     */
    MCAPI static int GROWL_INTERVAL_MAX;
    /**
     * @symbol ?GROWL_INTERVAL_MIN\@EnderDragon\@\@0HA
     */
    MCAPI static int GROWL_INTERVAL_MIN;
    /**
     * @symbol ?MAX_PATH_RADIUS\@EnderDragon\@\@0HA
     */
    MCAPI static int MAX_PATH_RADIUS;
    /**
     * @symbol ?SITTING_ALLOWED_DAMAGE_PERCENTAGE\@EnderDragon\@\@0MA
     */
    MCAPI static float SITTING_ALLOWED_DAMAGE_PERCENTAGE;

};
