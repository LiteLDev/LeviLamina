#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMapColorDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMAPCOLORDESCRIPTION
public:
    BlockMapColorDescription& operator=(BlockMapColorDescription const&) = delete;
    BlockMapColorDescription(BlockMapColorDescription const&)            = delete;
    BlockMapColorDescription()                                           = delete;
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
     * ?getName\@BlockMapColorDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 2
     * @symbol ?initializeComponent\@BlockMapColorDescription\@\@UEBAXAEAVBlockComponentStorage\@\@\@Z
     */
    virtual void initializeComponent(class BlockComponentStorage&) const;
    /**
     * @symbol
     * ?NameID\@BlockMapColorDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType\@BlockMapColorDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
};
