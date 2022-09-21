/**
 * @file  MC/EnderDragon.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   536722498
     * @vftbl  8
     * @symbol ?reloadHardcoded@EnderDragon@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~EnderDragon();
    /**
     * @hash   1469755616
     * @vftbl  17
     * @symbol ?remove@EnderDragon@@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -512993045
     * @vftbl  79
     * @symbol ?getShadowRadius@EnderDragon@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @hash   -1541836573
     * @vftbl  80
     * @symbol ?getHeadLookVector@EnderDragon@@UEBA?AVVec3@@M@Z
     */
    virtual class Vec3 getHeadLookVector(float) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @hash   1031050797
     * @vftbl  91
     * @symbol ?isImmobile@EnderDragon@@UEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
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
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   191862262
     * @vftbl  119
     * @symbol ?setSitting@EnderDragon@@UEAAX_N@Z
     */
    virtual void setSitting(bool);
    /**
     * @hash   1793206905
     * @vftbl  134
     * @symbol ?isInvulnerableTo@EnderDragon@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   -1007678421
     * @vftbl  141
     * @symbol ?handleEntityEvent@EnderDragon@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @hash   -291490112
     * @vftbl  180
     * @symbol ?canChangeDimensionsUsingPortal@EnderDragon@@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   47876146
     * @vftbl  193
     * @symbol ?canBePulledIntoVehicle@EnderDragon@@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @hash   -1137032675
     * @vftbl  211
     * @symbol ?canBeAffected@EnderDragon@@UEBA_NAEBVMobEffectInstance@@@Z
     */
    virtual bool canBeAffected(class MobEffectInstance const &) const;
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
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @hash   -621672573
     * @vftbl  268
     * @symbol ?updateEntitySpecificMolangVariables@EnderDragon@@UEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -491445131
     * @vftbl  271
     * @symbol ?_hurt@EnderDragon@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   770426986
     * @vftbl  284
     * @symbol ?_onSizeUpdated@EnderDragon@@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   559065712
     * @vftbl  300
     * @symbol ?aiStep@EnderDragon@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @hash   -868252596
     * @vftbl  363
     * @symbol ?tickDeath@EnderDragon@@MEAAXXZ
     */
    virtual void tickDeath();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERDRAGON
    /**
     * @hash   -424249576
     * @symbol ?canExistInPeaceful@EnderDragon@@UEBA_NXZ
     */
    MCVAPI bool canExistInPeaceful() const;
    /**
     * @hash   -517282791
     * @symbol ?isFishable@EnderDragon@@UEBA_NXZ
     */
    MCVAPI bool isFishable() const;
#endif
    /**
     * @hash   1203121623
     * @symbol ??0EnderDragon@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI EnderDragon(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   1548447935
     * @symbol ?dieNaturally@EnderDragon@@QEAAXXZ
     */
    MCAPI void dieNaturally();
    /**
     * @hash   -344969475
     * @symbol ?findClosestNode@EnderDragon@@QEAAHAEBVVec3@@@Z
     */
    MCAPI int findClosestNode(class Vec3 const &);
    /**
     * @hash   606332030
     * @symbol ?findClosestNode@EnderDragon@@QEAAHXZ
     */
    MCAPI int findClosestNode();
    /**
     * @hash   35916934
     * @symbol ?findPath@EnderDragon@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@HHPEAVPathfinderNode@@@Z
     */
    MCAPI std::unique_ptr<class Path> findPath(int, int, class PathfinderNode *);
    /**
     * @hash   153011260
     * @symbol ?getFlameCount@EnderDragon@@QEBAHXZ
     */
    MCAPI int getFlameCount() const;
    /**
     * @hash   1556549478
     * @symbol ?getFlapTime@EnderDragon@@QEBAMXZ
     */
    MCAPI float getFlapTime() const;
    /**
     * @hash   299182252
     * @symbol ?getHeadPos@EnderDragon@@QEBA?AVBlockPos@@XZ
     */
    MCAPI class BlockPos getHeadPos() const;
    /**
     * @hash   -1944264022
     * @symbol ?getLatencyPos@EnderDragon@@QEBA?BV?$vector@MV?$allocator@M@std@@@std@@HM@Z
     */
    MCAPI std::vector<float> const getLatencyPos(int, float) const;
    /**
     * @hash   -597411510
     * @symbol ?getNumCrystalsAlive@EnderDragon@@QEAAHXZ
     */
    MCAPI int getNumCrystalsAlive();
    /**
     * @hash   -1414517382
     * @symbol ?getTargetPos@EnderDragon@@QEBA?AVVec3@@XZ
     */
    MCAPI class Vec3 getTargetPos() const;
    /**
     * @hash   1627369163
     * @symbol ?incrementFlameCount@EnderDragon@@QEAAXXZ
     */
    MCAPI void incrementFlameCount();
    /**
     * @hash   147240198
     * @symbol ?onCrystalDestroyed@EnderDragon@@QEAAXAEBVEnderCrystal@@VBlockPos@@AEBVActorDamageSource@@@Z
     */
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class BlockPos, class ActorDamageSource const &);
    /**
     * @hash   -701349525
     * @symbol ?postAiStep@EnderDragon@@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @hash   -1298559669
     * @symbol ?resetFlameCount@EnderDragon@@QEAAXXZ
     */
    MCAPI void resetFlameCount();
    /**
     * @hash   804495437
     * @symbol ?setDragonKilledCallback@EnderDragon@@QEAAXV?$function@$$A6AXAEAVEnderDragon@@@Z@std@@@Z
     */
    MCAPI void setDragonKilledCallback(class std::function<void (class EnderDragon &)>);
    /**
     * @hash   -721126158
     * @symbol ?setHasDragonPreviouslyBeenKilled@EnderDragon@@QEAAX_N@Z
     */
    MCAPI void setHasDragonPreviouslyBeenKilled(bool);
    /**
     * @hash   -1069072994
     * @symbol ?setNumCrystalsAlive@EnderDragon@@QEAAXH@Z
     */
    MCAPI void setNumCrystalsAlive(int);
    /**
     * @hash   -77321922
     * @symbol ?setTargetPos@EnderDragon@@QEAAXVVec3@@@Z
     */
    MCAPI void setTargetPos(class Vec3);
    /**
     * @hash   -1421211338
     * @symbol ?setTurnSpeed@EnderDragon@@QEAAXM@Z
     */
    MCAPI void setTurnSpeed(float);

//protected:
    /**
     * @hash   -1411695712
     * @symbol ?_hurt@EnderDragon@@IEAA_NPEAVAABB@@AEBVActorDamageSource@@M@Z
     */
    MCAPI bool _hurt(class AABB *, class ActorDamageSource const &, float);

//private:
    /**
     * @hash   -995875417
     * @symbol ?_checkCrystals@EnderDragon@@AEAAXXZ
     */
    MCAPI void _checkCrystals();
    /**
     * @hash   -938114152
     * @symbol ?_checkWalls@EnderDragon@@AEAA_NVAABB@@@Z
     */
    MCAPI bool _checkWalls(class AABB);
    /**
     * @hash   398432790
     * @symbol ?_hurtEntities@EnderDragon@@AEBAXV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@@Z
     */
    MCAPI void _hurtEntities(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    /**
     * @hash   -1497690215
     * @symbol ?_knockBack@EnderDragon@@AEBAXV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@@Z
     */
    MCAPI void _knockBack(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    /**
     * @hash   -828738453
     * @symbol ?_reconstructPath@EnderDragon@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVPathfinderNode@@0W4PathCompletionType@@@Z
     */
    MCAPI std::unique_ptr<class Path> _reconstructPath(class PathfinderNode &, class PathfinderNode &, enum PathCompletionType);
    /**
     * @hash   787916186
     * @symbol ?_isDragonImmuneBlock@EnderDragon@@CA_NAEBVBlockLegacy@@@Z
     */
    MCAPI static bool _isDragonImmuneBlock(class BlockLegacy const &);

protected:

private:
    /**
     * @hash   -984909748
     * @symbol ?GROWL_INTERVAL_MAX@EnderDragon@@0HA
     */
    MCAPI static int GROWL_INTERVAL_MAX;
    /**
     * @hash   -965976714
     * @symbol ?GROWL_INTERVAL_MIN@EnderDragon@@0HA
     */
    MCAPI static int GROWL_INTERVAL_MIN;
    /**
     * @hash   -887626187
     * @symbol ?MAX_PATH_RADIUS@EnderDragon@@0HA
     */
    MCAPI static int MAX_PATH_RADIUS;
    /**
     * @hash   894644051
     * @symbol ?SITTING_ALLOWED_DAMAGE_PERCENTAGE@EnderDragon@@0MA
     */
    MCAPI static float SITTING_ALLOWED_DAMAGE_PERCENTAGE;

};