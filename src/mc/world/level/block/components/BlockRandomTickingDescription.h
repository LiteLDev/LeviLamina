#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockRandomTickingDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKRANDOMTICKINGDESCRIPTION
public:
    BlockRandomTickingDescription& operator=(BlockRandomTickingDescription const&) = delete;
    BlockRandomTickingDescription(BlockRandomTickingDescription const&)            = delete;
    BlockRandomTickingDescription()                                                = delete;
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
     * @symbol
     * ?NameID\@BlockRandomTickingDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType\@BlockRandomTickingDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
};
