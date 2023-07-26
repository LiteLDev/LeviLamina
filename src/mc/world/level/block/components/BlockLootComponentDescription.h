#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLootComponentDescription {

public:
    // prevent constructor by default
    BlockLootComponentDescription& operator=(BlockLootComponentDescription const&) = delete;
    BlockLootComponentDescription(BlockLootComponentDescription const&)            = delete;
    BlockLootComponentDescription()                                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockLootComponentDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockLootComponentDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext&) const; // NOLINT
    /**
     * @symbol ?bindType\@BlockLootComponentDescription\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol
     * ?NameID\@BlockLootComponentDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID; // NOLINT
};
