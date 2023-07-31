#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCreativeGroupDescription {

public:
    // prevent constructor by default
    BlockCreativeGroupDescription& operator=(BlockCreativeGroupDescription const&) = delete;
    BlockCreativeGroupDescription(BlockCreativeGroupDescription const&)            = delete;
    BlockCreativeGroupDescription()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockCreativeGroupDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @symbol
     * ?NameID\@BlockCreativeGroupDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    // NOLINTEND
};
