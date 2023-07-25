#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDestructibleByExplosionDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESTRUCTIBLEBYEXPLOSIONDESCRIPTION
public:
    BlockDestructibleByExplosionDescription& operator=(BlockDestructibleByExplosionDescription const&) = delete;
    BlockDestructibleByExplosionDescription(BlockDestructibleByExplosionDescription const&)            = delete;
    BlockDestructibleByExplosionDescription()                                                          = delete;
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
     * ?getName\@BlockDestructibleByExplosionDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockDestructibleByExplosionDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext&) const;
    /**
     * @symbol
     * ?NameID\@BlockDestructibleByExplosionDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType\@BlockDestructibleByExplosionDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
};
