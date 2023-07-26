/**
 * @file  DeprecatedSlabBlockItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
#include "BlockItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DeprecatedSlabBlockItem.
 *
 */
class DeprecatedSlabBlockItem : public BlockItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEPRECATEDSLABBLOCKITEM
public:
    class DeprecatedSlabBlockItem& operator=(class DeprecatedSlabBlockItem const &) = delete;
    DeprecatedSlabBlockItem(class DeprecatedSlabBlockItem const &) = delete;
    DeprecatedSlabBlockItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DeprecatedSlabBlockItem();
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
     * @symbol  ?_calculatePlacePos\@DeprecatedSlabBlockItem\@\@UEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @vftbl  132
     * @symbol  ?_useOn\@DeprecatedSlabBlockItem\@\@UEBA_NAEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;

//private:
    /**
     * @symbol  ?_canConvertToDoubleSlab\@DeprecatedSlabBlockItem\@\@AEBA?AV?$optional\@H\@std\@\@AEAVItemStackBase\@\@AEBVActor\@\@AEBEAEBVBlock\@\@\@Z
     */
    MCAPI class std::optional<int> _canConvertToDoubleSlab(class ItemStackBase &, class Actor const &, unsigned char const &, class Block const &) const;
    /**
     * @symbol  ?_findSlabType\@DeprecatedSlabBlockItem\@\@AEBAHAEBVBlock\@\@\@Z
     */
    MCAPI int _findSlabType(class Block const &) const;

private:

};