/**
 * @file  MinecartChest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Minecart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecartChest.
 *
 */
class MinecartChest : public Minecart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTCHEST
public:
    class MinecartChest& operator=(class MinecartChest const &) = delete;
    MinecartChest(class MinecartChest const &) = delete;
    MinecartChest() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~MinecartChest();
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
     * @hash   1373722629
     * @vftbl  286
     * @symbol ?destroy@MinecartChest@@UEAAXAEBVActorDamageSource@@_N@Z
     */
    virtual void destroy(class ActorDamageSource const &, bool);
    /**
     * @hash   -571447194
     * @vftbl  287
     * @symbol ?getType@MinecartChest@@UEAA?AW4MinecartType@@XZ
     */
    virtual enum MinecartType getType();
    /**
     * @hash   -1673332932
     * @vftbl  288
     * @symbol ?getDefaultDisplayBlock@MinecartChest@@UEBAPEBVBlock@@XZ
     */
    virtual class Block const * getDefaultDisplayBlock() const;
    /**
     * @vftbl  289
     * @symbol __unk_vfn_289
     */
    virtual void __unk_vfn_289();
    /**
     * @hash   -350990227
     * @vftbl  291
     * @symbol ?applyNaturalSlowdown@MinecartChest@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void applyNaturalSlowdown(class BlockSource &);
    /**
     * @hash   -717185590
     * @symbol ??0MinecartChest@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI MinecartChest(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:

private:
    /**
     * @hash   526714118
     * @symbol ?ITEMS_SIZE@MinecartChest@@0HB
     */
    MCAPI static int const ITEMS_SIZE;

};