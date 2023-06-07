/**
 * @file  EvocationIllager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EvocationIllager.
 *
 */
class EvocationIllager : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVOCATIONILLAGER
public:
    class EvocationIllager& operator=(class EvocationIllager const &) = delete;
    EvocationIllager(class EvocationIllager const &) = delete;
    EvocationIllager() = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@EvocationIllager\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 190
     * @symbol __unk_vfn_190
     */
    virtual void __unk_vfn_190();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 216
     * @symbol __unk_vfn_216
     */
    virtual void __unk_vfn_216();
    /**
     * @vftbl 232
     * @symbol __unk_vfn_232
     */
    virtual void __unk_vfn_232();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 237
     * @symbol ?die\@EvocationIllager\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 267
     * @symbol __unk_vfn_267
     */
    virtual void __unk_vfn_267();
    /**
     * @vftbl 280
     * @symbol ?aiStep\@EvocationIllager\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 293
     * @symbol __unk_vfn_293
     */
    virtual void __unk_vfn_293();
    /**
     * @vftbl 295
     * @symbol ?isAlliedTo\@EvocationIllager\@\@UEAA_NPEAVMob\@\@\@Z
     */
    virtual bool isAlliedTo(class Mob *);
    /**
     * @vftbl 297
     * @symbol __unk_vfn_297
     */
    virtual void __unk_vfn_297();
    /**
     * @vftbl 302
     * @symbol ?getArmorValue\@EvocationIllager\@\@MEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EVOCATIONILLAGER
    /**
     * @symbol ?canExistInPeaceful\@EvocationIllager\@\@UEBA_NXZ
     */
    MCVAPI bool canExistInPeaceful() const;
#endif
    /**
     * @symbol ??0EvocationIllager\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI EvocationIllager(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};
