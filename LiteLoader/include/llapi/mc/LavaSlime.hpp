/**
 * @file  LavaSlime.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Slime.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LavaSlime.
 *
 */
class LavaSlime : public Slime {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVASLIME
public:
    class LavaSlime& operator=(class LavaSlime const &) = delete;
    LavaSlime(class LavaSlime const &) = delete;
    LavaSlime() = delete;
#endif

public:
    /**
     * @hash   -1959926443
     * @vftbl  8
     * @symbol ?reloadHardcoded@LavaSlime@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~LavaSlime();
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
     * @hash   -1707225505
     * @vftbl  72
     * @symbol ?isInLava@LavaSlime@@UEBA_NXZ
     */
    virtual bool isInLava() const;
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
     * @hash   496025731
     * @vftbl  86
     * @symbol ?getBrightness@LavaSlime@@UEBAMM@Z
     */
    virtual float getBrightness(float) const;
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
     * @hash   342955624
     * @vftbl  103
     * @symbol ?isOnFire@LavaSlime@@MEBA_NXZ
     */
    virtual bool isOnFire() const;
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
     * @hash   997758791
     * @vftbl  305
     * @symbol ?checkSpawnRules@LavaSlime@@UEAA_N_N@Z
     */
    virtual bool checkSpawnRules(bool);
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
     * @hash   -1572310581
     * @vftbl  322
     * @symbol ?getArmorValue@LavaSlime@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @hash   1783678279
     * @vftbl  357
     * @symbol ?jumpFromGround@LavaSlime@@MEAAXXZ
     */
    virtual void jumpFromGround();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   -2133996096
     * @vftbl  367
     * @symbol ?isDarkEnoughToSpawn@LavaSlime@@UEBA_NXZ
     */
    virtual bool isDarkEnoughToSpawn() const;
    /**
     * @hash   1960765173
     * @vftbl  368
     * @symbol ?canDealDamage@LavaSlime@@MEAA_NXZ
     */
    virtual bool canDealDamage();
    /**
     * @hash   -951324529
     * @vftbl  372
     * @symbol ?doPlayLandSound@LavaSlime@@MEAA_NXZ
     */
    virtual bool doPlayLandSound();
    /**
     * @hash   1130214957
     * @vftbl  375
     * @symbol ?decreaseSquish@LavaSlime@@MEAAXXZ
     */
    virtual void decreaseSquish();
    /**
     * @hash   1796640511
     * @vftbl  376
     * @symbol ?createChild@LavaSlime@@MEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@H@Z
     */
    virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);
    /**
     * @hash   -292541004
     * @symbol ??0LavaSlime@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI LavaSlime(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};