#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class IUnknownBlockTypeRegistry : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    IUnknownBlockTypeRegistry& operator=(IUnknownBlockTypeRegistry const&) = delete;
    IUnknownBlockTypeRegistry(IUnknownBlockTypeRegistry const&)            = delete;
    IUnknownBlockTypeRegistry()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol ?getUnknownBlock\@UnknownBlockTypeRegistry\@\@UEAAAEBVBlock\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual class Block const& getUnknownBlock(class CompoundTag const&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IUNKNOWNBLOCKTYPEREGISTRY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IUnknownBlockTypeRegistry();
#endif
    // NOLINTEND
};
