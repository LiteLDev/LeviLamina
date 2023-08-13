#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/registry/IUnknownBlockTypeRegistry.h"

class UnknownBlockTypeRegistry : public ::IUnknownBlockTypeRegistry {

public:
    // prevent constructor by default
    UnknownBlockTypeRegistry& operator=(UnknownBlockTypeRegistry const&) = delete;
    UnknownBlockTypeRegistry(UnknownBlockTypeRegistry const&)            = delete;
    UnknownBlockTypeRegistry()                                           = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_registerBlock\@UnknownBlockTypeRegistry\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@Z
     */
    MCAPI void _registerBlock(std::string const&, uint64_t);
    // NOLINTEND
};
