/**
 * @file  RandomizableBlockActorContainerBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomizableBlockActorContainerBase.
 *
 */
class RandomizableBlockActorContainerBase : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMIZABLEBLOCKACTORCONTAINERBASE
public:
    class RandomizableBlockActorContainerBase& operator=(class RandomizableBlockActorContainerBase const &) = delete;
    RandomizableBlockActorContainerBase(class RandomizableBlockActorContainerBase const &) = delete;
    RandomizableBlockActorContainerBase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RandomizableBlockActorContainerBase();
    /**
     * @vftbl  1
     * @symbol  ?load\@RandomizableBlockActorContainerBase\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol  ?save\@RandomizableBlockActorContainerBase\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @symbol  ?setLootTable\@RandomizableBlockActorContainerBase\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI void setLootTable(std::string const &, int);
    /**
     * @symbol  ?unPackLootTable\@RandomizableBlockActorContainerBase\@\@QEAAXAEAVLevel\@\@AEAVContainer\@\@V?$AutomaticID\@VDimension\@\@H\@\@PEAVActor\@\@\@Z
     */
    MCAPI void unPackLootTable(class Level &, class Container &, class AutomaticID<class Dimension, int>, class Actor *);

};