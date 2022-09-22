/**
 * @file  IronGolem.hpp
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
 * @brief MC class IronGolem.
 *
 */
class IronGolem : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IRONGOLEM
public:
    class IronGolem& operator=(class IronGolem const &) = delete;
    IronGolem(class IronGolem const &) = delete;
    IronGolem() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~IronGolem();
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
     * @hash   1873170034
     * @vftbl  79
     * @symbol ?getShadowRadius@IronGolem@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
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
     * @hash   -2123400638
     * @vftbl  141
     * @symbol ?handleEntityEvent@IronGolem@@UEAAXW4ActorEvent@@H@Z
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
     * @hash   -362318393
     * @vftbl  253
     * @symbol ?die@IronGolem@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @hash   -600654164
     * @vftbl  268
     * @symbol ?updateEntitySpecificMolangVariables@IronGolem@@UEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   834661950
     * @vftbl  276
     * @symbol ?_playStepSound@IronGolem@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
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
     * @hash   1842018166
     * @vftbl  294
     * @symbol ?hurtEffects@IronGolem@@UEAAXAEBVActorDamageSource@@M_N1@Z
     */
    virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   1884828311
     * @vftbl  300
     * @symbol ?aiStep@IronGolem@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @hash   -1180379270
     * @vftbl  316
     * @symbol ?doHurtTarget@IronGolem@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
     */
    virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IRONGOLEM
    /**
     * @hash   -323424779
     * @symbol ?useNewAi@IronGolem@@UEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @hash   899187056
     * @symbol ??0IronGolem@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI IronGolem(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -1694281134
     * @symbol ?getOfferFlowerTick@IronGolem@@QEBAHXZ
     */
    MCAPI int getOfferFlowerTick() const;
    /**
     * @hash   -1513018106
     * @symbol ?offerFlower@IronGolem@@QEAAX_N@Z
     */
    MCAPI void offerFlower(bool);

};