#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockRandomTickingDescription {

public:
    // prevent constructor by default
    BlockRandomTickingDescription& operator=(BlockRandomTickingDescription const&) = delete;
    BlockRandomTickingDescription(BlockRandomTickingDescription const&)            = delete;
    BlockRandomTickingDescription()                                                = delete;

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
     * ?getName\@BlockRandomTickingDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockRandomTickingDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext&) const;
    /**
     * @symbol ?bindType\@BlockRandomTickingDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol
     * ?NameID\@BlockRandomTickingDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    // NOLINTEND
};
