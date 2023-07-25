#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UnknownBlockTypeRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNKNOWNBLOCKTYPEREGISTRY
public:
    UnknownBlockTypeRegistry& operator=(UnknownBlockTypeRegistry const&) = delete;
    UnknownBlockTypeRegistry(UnknownBlockTypeRegistry const&)            = delete;
    UnknownBlockTypeRegistry()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getUnknownBlock\@UnknownBlockTypeRegistry\@\@UEAAAEBVBlock\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual class Block const& getUnknownBlock(class CompoundTag const&);

    // private:
    /**
     * @symbol
     * ?_registerBlock\@UnknownBlockTypeRegistry\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@Z
     */
    MCAPI void _registerBlock(std::string const&, unsigned __int64);

private:
};
