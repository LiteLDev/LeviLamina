#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemStackDescriptor : public ::ItemDescriptorCount {

public:
    // prevent constructor by default
    ItemStackDescriptor& operator=(ItemStackDescriptor const&) = delete;
    ItemStackDescriptor(ItemStackDescriptor const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKDESCRIPTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemStackDescriptor(); // NOLINT
#endif
    /**
     * @symbol ??0ItemStackDescriptor\@\@QEAA\@AEBVItem\@\@HGPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStackDescriptor(class Item const&, int, unsigned short, class CompoundTag const*); // NOLINT
    /**
     * @symbol ??0ItemStackDescriptor\@\@QEAA\@XZ
     */
    MCAPI ItemStackDescriptor(); // NOLINT
    /**
     * @symbol ??4ItemStackDescriptor\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ItemStackDescriptor& operator=(class ItemStackDescriptor&&); // NOLINT
};
