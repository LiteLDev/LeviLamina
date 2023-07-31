#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStackBase.h"

class ItemInstance : public ::ItemStackBase {

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?reinit\@ItemInstance\@\@UEAAXAEBVItem\@\@HH\@Z
     */
    virtual void reinit(class Item const&, int, int);
    /**
     * @vftbl 2
     * @symbol ?reinit\@ItemInstance\@\@UEAAXAEBVBlockLegacy\@\@H\@Z
     */
    virtual void reinit(class BlockLegacy const&, int);
    /**
     * @vftbl 3
     * @symbol ?reinit\@ItemInstance\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HH\@Z
     */
    virtual void reinit(std::string_view, int, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMINSTANCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemInstance();
#endif
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@XZ
     */
    MCAPI ItemInstance();
    /**
     * @symbol
     * ??0ItemInstance\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemInstance(std::string_view, int, int, class CompoundTag const*);
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemInstance(class ItemInstance const&);
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI ItemInstance(class ItemStackBase const&);
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@AEBVBlockLegacy\@\@H\@Z
     */
    MCAPI ItemInstance(class BlockLegacy const&, int);
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@AEBVBlock\@\@HPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemInstance(class Block const&, int, class CompoundTag const*);
    /**
     * @symbol ??0ItemInstance\@\@QEAA\@AEBVItem\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemInstance(class Item const&, int, int, class CompoundTag const*);
    /**
     * @symbol ?clone\@ItemInstance\@\@QEBA?AV1\@XZ
     */
    MCAPI class ItemInstance clone() const;
    /**
     * @symbol ?fromTag\@ItemInstance\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class ItemInstance fromTag(class CompoundTag const&);
    /**
     * @symbol ??4ItemInstance\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemInstance& operator=(class ItemInstance const&);
    /**
     * @symbol ?EMPTY_ITEM\@ItemInstance\@\@2V1\@B
     */
    MCAPI static class ItemInstance const EMPTY_ITEM;
    // NOLINTEND
};
