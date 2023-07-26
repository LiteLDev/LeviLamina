#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/level/block/actor/BlockActor.h"

class RandomizableBlockActorContainerBase : public ::BlockActor {

public:
    // prevent constructor by default
    RandomizableBlockActorContainerBase& operator=(RandomizableBlockActorContainerBase const&) = delete;
    RandomizableBlockActorContainerBase(RandomizableBlockActorContainerBase const&)            = delete;
    RandomizableBlockActorContainerBase()                                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?load\@RandomizableBlockActorContainerBase\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@RandomizableBlockActorContainerBase\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMIZABLEBLOCKACTORCONTAINERBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RandomizableBlockActorContainerBase(); // NOLINT
#endif
    /**
     * @symbol
     * ?setLootTable\@RandomizableBlockActorContainerBase\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI void setLootTable(std::string const&, int); // NOLINT
    /**
     * @symbol
     * ?unPackLootTable\@RandomizableBlockActorContainerBase\@\@QEAAXAEAVLevel\@\@AEAVContainer\@\@V?$AutomaticID\@VDimension\@\@H\@\@PEAVActor\@\@\@Z
     */
    MCAPI void
    unPackLootTable(class Level&, class Container&, class AutomaticID<class Dimension, int>, class Actor*); // NOLINT
};
