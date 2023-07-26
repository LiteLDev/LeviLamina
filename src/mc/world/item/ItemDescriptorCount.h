#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemDescriptorCount : public ::ItemDescriptor {

public:
    // prevent constructor by default
    ItemDescriptorCount& operator=(ItemDescriptorCount const&) = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?serialize\@ItemDescriptorCount\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMDESCRIPTORCOUNT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemDescriptorCount(); // NOLINT
#endif
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemDescriptorCount(class ItemDescriptorCount const&); // NOLINT
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVBlockLegacy\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class BlockLegacy const&, unsigned short); // NOLINT
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVBlock\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class Block const&, unsigned short); // NOLINT
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HG\@Z
     */
    MCAPI ItemDescriptorCount(
        class std::basic_string_view<char, struct std::char_traits<char>>,
        int,
        unsigned short
    ); // NOLINT
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVItem\@\@HG\@Z
     */
    MCAPI ItemDescriptorCount(class Item const&, int, unsigned short); // NOLINT
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@XZ
     */
    MCAPI ItemDescriptorCount(); // NOLINT
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI ItemDescriptorCount(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVItemDescriptor\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class ItemDescriptor const&, unsigned short); // NOLINT
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBUItemTag\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(struct ItemTag const&, unsigned short); // NOLINT
    /**
     * @symbol ?getStackSize\@ItemDescriptorCount\@\@QEBAFXZ
     */
    MCAPI short getStackSize() const; // NOLINT
    /**
     * @symbol ?setStackSize\@ItemDescriptorCount\@\@QEAAXF\@Z
     */
    MCAPI void setStackSize(short); // NOLINT
};
