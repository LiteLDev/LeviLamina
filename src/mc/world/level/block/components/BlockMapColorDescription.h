#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMapColorDescription {

public:
    // prevent constructor by default
    BlockMapColorDescription& operator=(BlockMapColorDescription const&) = delete;
    BlockMapColorDescription(BlockMapColorDescription const&)            = delete;
    BlockMapColorDescription()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockMapColorDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeComponent\@BlockMapColorDescription\@\@UEBAXAEAVBlockComponentStorage\@\@\@Z
     */
    virtual void initializeComponent(class BlockComponentStorage&) const; // NOLINT
    /**
     * @symbol ?bindType\@BlockMapColorDescription\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol
     * ?NameID\@BlockMapColorDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID; // NOLINT
};
