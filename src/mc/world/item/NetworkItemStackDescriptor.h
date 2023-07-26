#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/TypedServerNetId.h"
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class NetworkItemStackDescriptor : public ::ItemDescriptorCount {

public:
    // prevent constructor by default
    NetworkItemStackDescriptor& operator=(NetworkItemStackDescriptor const&) = delete;
    NetworkItemStackDescriptor()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKITEMSTACKDESCRIPTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkItemStackDescriptor(); // NOLINT
#endif
    /**
     * @symbol ??0NetworkItemStackDescriptor\@\@QEAA\@AEBVItemStack\@\@\@Z
     */
    MCAPI NetworkItemStackDescriptor(class ItemStack const&); // NOLINT
    /**
     * @symbol ??0NetworkItemStackDescriptor\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI NetworkItemStackDescriptor(class NetworkItemStackDescriptor const&); // NOLINT
    /**
     * @symbol ??0NetworkItemStackDescriptor\@\@QEAA\@AEBVItemStackDescriptor\@\@\@Z
     */
    MCAPI NetworkItemStackDescriptor(class ItemStackDescriptor const&); // NOLINT
    /**
     * @symbol ??0NetworkItemStackDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI NetworkItemStackDescriptor(class NetworkItemStackDescriptor&&); // NOLINT
    /**
     * @symbol
     * ?read\@NetworkItemStackDescriptor\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol ?setIncludeNetIds\@NetworkItemStackDescriptor\@\@QEBAX_N\@Z
     */
    MCAPI void setIncludeNetIds(bool) const; // NOLINT
    /**
     * @symbol
     * ?tryGetServerNetId\@NetworkItemStackDescriptor\@\@QEBAPEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const* tryGetServerNetId() const; // NOLINT
    /**
     * @symbol ?write\@NetworkItemStackDescriptor\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream&) const; // NOLINT

    // private:
    /**
     * @symbol ?getItemStack\@NetworkItemStackDescriptor\@\@AEBA?AVItemStack\@\@AEBVBlockPalette\@\@\@Z
     */
    MCAPI class ItemStack getItemStack(class BlockPalette const&) const; // NOLINT

private:
};
