#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStackBase.h"

class ItemInstance : public ::ItemStackBase {

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?reinit\@ItemInstance\@\@UEAAXAEBVItem\@\@HH\@Z
     */
    virtual void reinit(class Item const&, int, int); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?reinit\@ItemInstance\@\@UEAAXAEBVBlockLegacy\@\@H\@Z
     */
    virtual void reinit(class BlockLegacy const&, int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?reinit\@ItemInstance\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HH\@Z
     */
    virtual void reinit(class std::basic_string_view<char, struct std::char_traits<char>>, int, int); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMINSTANCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemInstance(); // NOLINT
#endif
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@XZ
     */
    MCAPI ItemInstance(); // NOLINT
    /**
     * @symbol
     * ??0ItemInstance\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI
    ItemInstance(class std::basic_string_view<char, struct std::char_traits<char>>, int, int, class CompoundTag const*); // NOLINT
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemInstance(class ItemInstance const&); // NOLINT
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI ItemInstance(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@AEBVBlockLegacy\@\@H\@Z
     */
    MCAPI ItemInstance(class BlockLegacy const&, int); // NOLINT
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@AEBVBlock\@\@HPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemInstance(class Block const&, int, class CompoundTag const*); // NOLINT
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@AEBVItem\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemInstance(class Item const&, int, int, class CompoundTag const*); // NOLINT
    /**
     * @symbol ?clone\@ItemInstance\@\@QEBA?AV1\@XZ
     */
    MCAPI class ItemInstance clone() const; // NOLINT
    /**
     * @symbol ??4ItemInstance\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemInstance& operator=(class ItemInstance const&); // NOLINT
    /**
     * @symbol ?fromTag\@ItemInstance\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class ItemInstance fromTag(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?EMPTY_ITEM\@ItemInstance\@\@2V1\@B
     */
    MCAPI static class ItemInstance const EMPTY_ITEM; // NOLINT
};
