#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class NetworkItemInstanceDescriptor : public ::ItemDescriptorCount {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKITEMINSTANCEDESCRIPTOR
public:
    NetworkItemInstanceDescriptor& operator=(NetworkItemInstanceDescriptor const&) = delete;
    NetworkItemInstanceDescriptor(NetworkItemInstanceDescriptor const&)            = delete;
    NetworkItemInstanceDescriptor()                                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKITEMINSTANCEDESCRIPTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkItemInstanceDescriptor();
#endif
    /**
     * @symbol ??0NetworkItemInstanceDescriptor\@\@QEAA\@AEBVItemStackDescriptor\@\@\@Z
     */
    MCAPI NetworkItemInstanceDescriptor(class ItemStackDescriptor const&);
    /**
     * @symbol ??0NetworkItemInstanceDescriptor\@\@QEAA\@AEBVItemInstance\@\@\@Z
     */
    MCAPI NetworkItemInstanceDescriptor(class ItemInstance const&);
    /**
     * @symbol ??0NetworkItemInstanceDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI NetworkItemInstanceDescriptor(class NetworkItemInstanceDescriptor&&);
    /**
     * @symbol ?getItemInstance\@NetworkItemInstanceDescriptor\@\@QEBA?AVItemInstance\@\@AEBVBlockPalette\@\@\@Z
     */
    MCAPI class ItemInstance getItemInstance(class BlockPalette const&) const;
    /**
     * @symbol
     * ?read\@NetworkItemInstanceDescriptor\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?write\@NetworkItemInstanceDescriptor\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream&) const;
};
