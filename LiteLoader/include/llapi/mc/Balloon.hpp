/**
 * @file  Balloon.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Balloon.
 *
 */
class Balloon : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BALLOON
public:
    class Balloon& operator=(class Balloon const &) = delete;
    Balloon(class Balloon const &) = delete;
    Balloon() = delete;
#endif

public:
    /**
     * @hash   -1397811570
     * @vftbl  8
     * @symbol ?reloadHardcoded@Balloon@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Balloon();
    /**
     * @hash   -834799588
     * @vftbl  17
     * @symbol ?remove@Balloon@@UEAAXXZ
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
     * @hash   1976441903
     * @vftbl  94
     * @symbol ?isPickable@Balloon@@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -1332183192
     * @vftbl  271
     * @symbol ?_hurt@Balloon@@UEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   -253714773
     * @symbol ??0Balloon@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Balloon(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -1120677606
     * @symbol ?remove@Balloon@@QEAAX_N@Z
     */
    MCAPI void remove(bool);

};