/**
 * @file  HangingSignItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
#include "SignBlockActor.hpp"
#include "SignItem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class HangingSignItem.
 *
 */
class HangingSignItem : public SignItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HANGINGSIGNITEM
public:
    class HangingSignItem& operator=(class HangingSignItem const &) = delete;
    HangingSignItem(class HangingSignItem const &) = delete;
    HangingSignItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HangingSignItem();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @symbol  __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @symbol  __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @symbol  __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @symbol  __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol  __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol  __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @symbol  __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  131
     * @symbol  ?_calculatePlacePos\@HangingSignItem\@\@EEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @vftbl  133
     * @symbol  ?getBlockToPlace\@HangingSignItem\@\@MEBAPEBVBlock\@\@EAEBVActor\@\@VBlockPos\@\@\@Z
     */
    virtual class Block const * getBlockToPlace(unsigned char, class Actor const &, class BlockPos) const;
    /**
     * @vftbl  134
     * @symbol  ?_initializeTags\@HangingSignItem\@\@EEAAXXZ
     */
    virtual void _initializeTags();
    /**
     * @symbol  ??0HangingSignItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4SignType\@SignBlockActor\@\@\@Z
     */
    MCAPI HangingSignItem(std::string const &, int, enum class SignBlockActor::SignType);

//private:
    /**
     * @symbol  ?_getCeilingHangingSignBlock\@HangingSignItem\@\@AEBAPEBVBlock\@\@AEBVActor\@\@AEBEAEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const * _getCeilingHangingSignBlock(class Actor const &, unsigned char const &, class BlockPos const &) const;
    /**
     * @symbol  ?_getWallHangingSignBlock\@HangingSignItem\@\@AEBAPEBVBlock\@\@AEBVActor\@\@AEBEAEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const * _getWallHangingSignBlock(class Actor const &, unsigned char const &, class BlockPos const &) const;

private:

};