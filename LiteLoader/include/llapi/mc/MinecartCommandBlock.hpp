/**
 * @file  MinecartCommandBlock.hpp
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
 * @brief MC class MinecartCommandBlock.
 *
 */
class MinecartCommandBlock : public Minecart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTCOMMANDBLOCK
public:
    class MinecartCommandBlock& operator=(class MinecartCommandBlock const &) = delete;
    MinecartCommandBlock(class MinecartCommandBlock const &) = delete;
    MinecartCommandBlock() = delete;
#endif

public:
    /**
     * @hash   1404678923
     * @vftbl  10
     * @symbol ?initializeComponents@MinecartCommandBlock@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~MinecartCommandBlock();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   930706757
     * @vftbl  59
     * @symbol ?canShowNameTag@MinecartCommandBlock@@UEBA_NXZ
     */
    virtual bool canShowNameTag() const;
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
     * @hash   -1704727886
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@MinecartCommandBlock@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1393026059
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@MinecartCommandBlock@@UEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
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
     * @hash   1720771359
     * @vftbl  287
     * @symbol ?getType@MinecartCommandBlock@@UEAA?AW4MinecartType@@XZ
     */
    virtual enum MinecartType getType();
    /**
     * @hash   -839326091
     * @vftbl  288
     * @symbol ?getDefaultDisplayBlock@MinecartCommandBlock@@UEBAPEBVBlock@@XZ
     */
    virtual class Block const * getDefaultDisplayBlock() const;
    /**
     * @vftbl  289
     * @symbol __unk_vfn_289
     */
    virtual void __unk_vfn_289();
    /**
     * @hash   -1749525781
     * @vftbl  291
     * @symbol ?applyNaturalSlowdown@MinecartCommandBlock@@MEAAXAEAVBlockSource@@@Z
     */
    virtual void applyNaturalSlowdown(class BlockSource &);
    /**
     * @hash   1172362754
     * @vftbl  292
     * @symbol ?_lazyInitDisplayBlock@MinecartCommandBlock@@EEAAXXZ
     */
    virtual void _lazyInitDisplayBlock();
    /**
     * @hash   1986916481
     * @symbol ??0MinecartCommandBlock@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI MinecartCommandBlock(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};