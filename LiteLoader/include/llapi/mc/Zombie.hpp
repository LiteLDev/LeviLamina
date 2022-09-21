/**
 * @file  MC/Zombie.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Zombie.
 *
 */
class Zombie : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There
public:
enum class ZombieType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZOMBIE
public:
    class Zombie& operator=(class Zombie const &) = delete;
    Zombie(class Zombie const &) = delete;
    Zombie() = delete;
#endif

public:
    /**
     * @hash   377035655
     * @vftbl  8
     * @symbol ?reloadHardcoded@Zombie@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Zombie();
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
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   170609553
     * @vftbl  192
     * @symbol ?canPickupItem@Zombie@@UEBA_NAEBVItemStack@@@Z
     */
    virtual bool canPickupItem(class ItemStack const &) const;
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
     * @hash   -1972459563
     * @vftbl  305
     * @symbol ?checkSpawnRules@Zombie@@UEAA_N_N@Z
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
     * @hash   -1863083418
     * @vftbl  322
     * @symbol ?getArmorValue@Zombie@@MEBAHXZ
     */
    virtual int getArmorValue() const;
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ZOMBIE
    /**
     * @hash   1267374156
     * @symbol ?useNewAi@Zombie@@MEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @hash   -1533631246
     * @symbol ??0Zombie@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Zombie(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -54284443
     * @symbol ?setZombieType@Zombie@@QEAAXW4ZombieType@1@@Z
     */
    MCAPI void setZombieType(enum Zombie::ZombieType);

//protected:

protected:
    /**
     * @hash   2080468553
     * @symbol ?SPAWN_BONUS_UUID@Zombie@@1VUUID@mce@@B
     */
    MCAPI static class mce::UUID const SPAWN_BONUS_UUID;
    /**
     * @hash   751525619
     * @symbol ?SPAWN_REINFORCEMENTS_CHANCE@Zombie@@1VAttribute@@B
     */
    MCAPI static class Attribute const SPAWN_REINFORCEMENTS_CHANCE;

};