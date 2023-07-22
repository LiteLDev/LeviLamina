/**
 * @file  ItemInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ItemStackBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemInstance.
 *
 */
class ItemInstance : public ItemStackBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemInstance();
    /**
     * @vftbl  1
     * @symbol  ?reinit\@ItemInstance\@\@UEAAXAEBVItem\@\@HH\@Z
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @vftbl  2
     * @symbol  ?reinit\@ItemInstance\@\@UEAAXAEBVBlockLegacy\@\@H\@Z
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @vftbl  3
     * @symbol  ?reinit\@ItemInstance\@\@UEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@HH\@Z
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @symbol  ??0ItemInstance\@\@QEAA\@XZ
     */
    MCAPI ItemInstance();
    /**
     * @symbol  ??0ItemInstance\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemInstance(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @symbol  ??0ItemInstance\@\@QEAA\@AEBVItem\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemInstance(class Item const &, int, int, class CompoundTag const *);
    /**
     * @symbol  ??0ItemInstance\@\@QEAA\@AEBVBlockLegacy\@\@H\@Z
     */
    MCAPI ItemInstance(class BlockLegacy const &, int);
    /**
     * @symbol  ??0ItemInstance\@\@QEAA\@AEBVBlock\@\@HPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemInstance(class Block const &, int, class CompoundTag const *);
    /**
     * @symbol  ??0ItemInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemInstance(class ItemInstance const &);
    /**
     * @symbol  ??0ItemInstance\@\@QEAA\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI ItemInstance(class ItemStackBase const &);
    /**
     * @symbol  ?clone\@ItemInstance\@\@QEBA?AV1\@XZ
     */
    MCAPI class ItemInstance clone() const;
    /**
     * @symbol  ??4ItemInstance\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemInstance & operator=(class ItemInstance const &);
    /**
     * @symbol  ?EMPTY_ITEM\@ItemInstance\@\@2V1\@B
     */
    MCAPI static class ItemInstance const EMPTY_ITEM;
    /**
     * @symbol  ?fromTag\@ItemInstance\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class ItemInstance fromTag(class CompoundTag const &);

};