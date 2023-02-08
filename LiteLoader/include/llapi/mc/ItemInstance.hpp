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
     * @hash   351552428
     * @vftbl  1
     * @symbol  ?reinit\@ItemInstance\@\@UEAAXAEBVItem\@\@HH\@Z
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @hash   1832198750
     * @vftbl  2
     * @symbol  ?reinit\@ItemInstance\@\@UEAAXAEBVBlockLegacy\@\@H\@Z
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @hash   -1243040511
     * @vftbl  3
     * @symbol  ?reinit\@ItemInstance\@\@UEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@HH\@Z
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @hash   2113610276
     * @symbol  ??0ItemInstance\@\@QEAA\@XZ
     */
    MCAPI ItemInstance();
    /**
     * @hash   242176807
     * @symbol  ??0ItemInstance\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemInstance(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @hash   -1167178983
     * @symbol  ??0ItemInstance\@\@QEAA\@AEBVItem\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemInstance(class Item const &, int, int, class CompoundTag const *);
    /**
     * @hash   -1546942946
     * @symbol  ??0ItemInstance\@\@QEAA\@AEBVBlockLegacy\@\@H\@Z
     */
    MCAPI ItemInstance(class BlockLegacy const &, int);
    /**
     * @hash   1848149408
     * @symbol  ??0ItemInstance\@\@QEAA\@AEBVBlock\@\@HPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemInstance(class Block const &, int, class CompoundTag const *);
    /**
     * @hash   -571840335
     * @symbol  ??0ItemInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemInstance(class ItemInstance const &);
    /**
     * @hash   -1830825339
     * @symbol  ??0ItemInstance\@\@QEAA\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI ItemInstance(class ItemStackBase const &);
    /**
     * @hash   -837679449
     * @symbol  ?clone\@ItemInstance\@\@QEBA?AV1\@XZ
     */
    MCAPI class ItemInstance clone() const;
    /**
     * @hash   1831290740
     * @symbol  ??4ItemInstance\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemInstance & operator=(class ItemInstance const &);
    /**
     * @hash   802842858
     * @symbol  ?EMPTY_ITEM\@ItemInstance\@\@2V1\@B
     */
    MCAPI static class ItemInstance const EMPTY_ITEM;
    /**
     * @hash   -766355948
     * @symbol  ?fromTag\@ItemInstance\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class ItemInstance fromTag(class CompoundTag const &);

};