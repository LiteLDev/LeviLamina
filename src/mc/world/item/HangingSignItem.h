#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/SignItem.h"
#include "mc/world/level/block/SignBlock.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class HangingSignItem : public ::SignItem {

public:
    // prevent constructor by default
    HangingSignItem& operator=(HangingSignItem const&) = delete;
    HangingSignItem(HangingSignItem const&)            = delete;
    HangingSignItem()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51(); // NOLINT
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53(); // NOLINT
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66(); // NOLINT
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72(); // NOLINT
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75(); // NOLINT
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79(); // NOLINT
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80(); // NOLINT
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115(); // NOLINT
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116(); // NOLINT
    /**
     * @vftbl 133
     * @symbol ?_calculatePlacePos\@HangingSignItem\@\@EEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    virtual bool
    _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const; // NOLINT
    /**
     * @vftbl 136
     * @symbol ?getBlockToPlace\@HangingSignItem\@\@MEBAPEBVBlock\@\@EAEBVActor\@\@VBlockPos\@\@\@Z
     */
    virtual class Block const* getBlockToPlace(unsigned char, class Actor const&, class BlockPos) const; // NOLINT
    /**
     * @symbol
     * ??0HangingSignItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4SignType\@SignBlock\@\@\@Z
     */
    MCAPI HangingSignItem(std::string const&, int, enum class SignBlock::SignType); // NOLINT

    // private:
    /**
     * @symbol ?_getCeilingHangingSignBlock\@HangingSignItem\@\@AEBAPEBVBlock\@\@AEBVActor\@\@AEBEAEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const*
    _getCeilingHangingSignBlock(class Actor const&, unsigned char const&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?_getWallHangingSignBlock\@HangingSignItem\@\@AEBAPEBVBlock\@\@AEBVActor\@\@AEBEAEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const*
    _getWallHangingSignBlock(class Actor const&, unsigned char const&, class BlockPos const&) const; // NOLINT

private:
};
