#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockFlammableDescription {

public:
    // prevent constructor by default
    BlockFlammableDescription& operator=(BlockFlammableDescription const&) = delete;
    BlockFlammableDescription(BlockFlammableDescription const&)            = delete;
    BlockFlammableDescription()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockFlammableDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockFlammableDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext&) const; // NOLINT
    /**
     * @symbol ?bindType\@BlockFlammableDescription\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?CATCH_CHANCE_DEFAULT\@BlockFlammableDescription\@\@2HB
     */
    MCAPI static int const CATCH_CHANCE_DEFAULT; // NOLINT
    /**
     * @symbol ?DESTROY_CHANCE_DEFAULT\@BlockFlammableDescription\@\@2HB
     */
    MCAPI static int const DESTROY_CHANCE_DEFAULT; // NOLINT
    /**
     * @symbol
     * ?NameID\@BlockFlammableDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID; // NOLINT
};
