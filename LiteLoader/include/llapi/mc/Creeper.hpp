/**
 * @file  Creeper.hpp
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
 * @brief MC class Creeper.
 *
 */
class Creeper : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREEPER
public:
    class Creeper& operator=(class Creeper const &) = delete;
    Creeper(class Creeper const &) = delete;
    Creeper() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Creeper();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -1625926371
     * @vftbl  48
     * @symbol ?normalTick@Creeper@@UEAAXXZ
     */
    virtual void normalTick();
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
     * @hash   -312291407
     * @vftbl  253
     * @symbol ?die@Creeper@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   367883607
     * @vftbl  284
     * @symbol ?_onSizeUpdated@Creeper@@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREEPER
    /**
     * @hash   1409407051
     * @symbol ?useNewAi@Creeper@@UEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @hash   -677769158
     * @symbol ??0Creeper@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Creeper(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -1885285026
     * @symbol ?getSwellDir@Creeper@@QEAAHXZ
     */
    MCAPI int getSwellDir();
    /**
     * @hash   -1141901325
     * @symbol ?getSwelling@Creeper@@QEBAMM@Z
     */
    MCAPI float getSwelling(float) const;
    /**
     * @hash   154734508
     * @symbol ?tryGetFromEntity@Creeper@@SAPEAV1@AEAVEntityContext@@_N@Z
     */
    MCAPI static class Creeper * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @hash   840588930
     * @symbol ?_setSwellDir@Creeper@@AEAAXH@Z
     */
    MCAPI void _setSwellDir(int);

private:

};