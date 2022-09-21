/**
 * @file  MC/Squid.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Squid.
 *
 */
class Squid : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUID
public:
    class Squid& operator=(class Squid const &) = delete;
    Squid(class Squid const &) = delete;
    Squid() = delete;
#endif

public:
    /**
     * @hash   -1276217532
     * @vftbl  8
     * @symbol ?reloadHardcoded@Squid@@MEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Squid();
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
     * @hash   -304023516
     * @vftbl  141
     * @symbol ?handleEntityEvent@Squid@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
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
     * @hash   -1101514726
     * @vftbl  268
     * @symbol ?updateEntitySpecificMolangVariables@Squid@@UEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   1482852926
     * @vftbl  271
     * @symbol ?_hurt@Squid@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -973603303
     * @vftbl  300
     * @symbol ?aiStep@Squid@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @hash   -353552511
     * @vftbl  305
     * @symbol ?checkSpawnRules@Squid@@UEAA_N_N@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @hash   512409843
     * @vftbl  306
     * @symbol ?checkSpawnObstruction@Squid@@UEBA_NXZ
     */
    virtual bool checkSpawnObstruction() const;
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
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   -1897324836
     * @vftbl  367
     * @symbol ?_getInkSquirtSoundEvent@Squid@@MEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent _getInkSquirtSoundEvent() const;
    /**
     * @hash   256558745
     * @symbol ??0Squid@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@AEBVColor@mce@@@Z
     */
    MCAPI Squid(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &, class mce::Color const &);
    /**
     * @hash   1405069547
     * @symbol ?postAiStep@Squid@@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @hash   -2067484903
     * @symbol ?spawnInkParticles@Squid@@QEAAXXZ
     */
    MCAPI void spawnInkParticles();

//private:
    /**
     * @hash   -1719442355
     * @symbol ?_randomInkDir@Squid@@AEAA?AVVec3@@XZ
     */
    MCAPI class Vec3 _randomInkDir();

private:

};