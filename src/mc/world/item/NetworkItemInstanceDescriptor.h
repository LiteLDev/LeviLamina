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

public:
    // prevent constructor by default
    NetworkItemInstanceDescriptor& operator=(NetworkItemInstanceDescriptor const&) = delete;
    NetworkItemInstanceDescriptor(NetworkItemInstanceDescriptor const&)            = delete;
    NetworkItemInstanceDescriptor()                                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKITEMINSTANCEDESCRIPTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkItemInstanceDescriptor(); // NOLINT
#endif
    /**
     * @symbol ??0NetworkItemInstanceDescriptor\@\@QEAA\@AEBVItemStackDescriptor\@\@\@Z
     */
    MCAPI NetworkItemInstanceDescriptor(class ItemStackDescriptor const&); // NOLINT
    /**
     * @symbol ??0NetworkItemInstanceDescriptor\@\@QEAA\@AEBVItemInstance\@\@\@Z
     */
    MCAPI NetworkItemInstanceDescriptor(class ItemInstance const&); // NOLINT
    /**
     * @symbol ??0NetworkItemInstanceDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI NetworkItemInstanceDescriptor(class NetworkItemInstanceDescriptor&&); // NOLINT
    /**
     * @symbol ?getItemInstance\@NetworkItemInstanceDescriptor\@\@QEBA?AVItemInstance\@\@AEBVBlockPalette\@\@\@Z
     */
    MCAPI class ItemInstance getItemInstance(class BlockPalette const&) const; // NOLINT
    /**
     * @symbol
     * ?read\@NetworkItemInstanceDescriptor\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol ?write\@NetworkItemInstanceDescriptor\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream&) const; // NOLINT
};
