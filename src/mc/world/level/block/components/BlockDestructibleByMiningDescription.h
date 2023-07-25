#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDestructibleByMiningDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESTRUCTIBLEBYMININGDESCRIPTION
public:
    BlockDestructibleByMiningDescription& operator=(BlockDestructibleByMiningDescription const&) = delete;
    BlockDestructibleByMiningDescription(BlockDestructibleByMiningDescription const&)            = delete;
    BlockDestructibleByMiningDescription()                                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockDestructibleByMiningDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockDestructibleByMiningDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext&) const;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?isNetworkComponent\@BlockDestructibleByMiningDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 7
     * @symbol
     * ?buildNetworkTag\@BlockDestructibleByMiningDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 8
     * @symbol ?initializeFromNetwork\@BlockDestructibleByMiningDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol
     * ?NameID\@BlockDestructibleByMiningDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType\@BlockDestructibleByMiningDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
};
