/**
 * @file  MC/ItemInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~ItemInstance();
    /**
     * @hash   -509119172
     * @vftbl  1
     * @symbol ?reinit@ItemInstance@@UEAAXAEBVItem@@HH@Z
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @hash   971527150
     * @vftbl  2
     * @symbol ?reinit@ItemInstance@@UEAAXAEBVBlockLegacy@@H@Z
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @hash   -2103712111
     * @vftbl  3
     * @symbol ?reinit@ItemInstance@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@HH@Z
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @hash   1252938676
     * @symbol ??0ItemInstance@@QEAA@XZ
     */
    MCAPI ItemInstance();
    /**
     * @hash   -618494793
     * @symbol ??0ItemInstance@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@HHPEBVCompoundTag@@@Z
     */
    MCAPI ItemInstance(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @hash   -2027850583
     * @symbol ??0ItemInstance@@QEAA@AEBVItem@@HHPEBVCompoundTag@@@Z
     */
    MCAPI ItemInstance(class Item const &, int, int, class CompoundTag const *);
    /**
     * @hash   1887214366
     * @symbol ??0ItemInstance@@QEAA@AEBVBlockLegacy@@H@Z
     */
    MCAPI ItemInstance(class BlockLegacy const &, int);
    /**
     * @hash   987339424
     * @symbol ??0ItemInstance@@QEAA@AEBVBlock@@HPEBVCompoundTag@@@Z
     */
    MCAPI ItemInstance(class Block const &, int, class CompoundTag const *);
    /**
     * @hash   -1432650319
     * @symbol ??0ItemInstance@@QEAA@AEBV0@@Z
     */
    MCAPI ItemInstance(class ItemInstance const &);
    /**
     * @hash   1603331973
     * @symbol ??0ItemInstance@@QEAA@AEBVItemStackBase@@@Z
     */
    MCAPI ItemInstance(class ItemStackBase const &);
    /**
     * @hash   -1698351049
     * @symbol ?clone@ItemInstance@@QEBA?AV1@XZ
     */
    MCAPI class ItemInstance clone() const;
    /**
     * @hash   970619140
     * @symbol ??4ItemInstance@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ItemInstance & operator=(class ItemInstance const &);
    /**
     * @hash   -94592758
     * @symbol ?EMPTY_ITEM@ItemInstance@@2V1@B
     */
    MCAPI static class ItemInstance const EMPTY_ITEM;
    /**
     * @hash   -1627027548
     * @symbol ?fromTag@ItemInstance@@SA?AV1@AEBVCompoundTag@@@Z
     */
    MCAPI static class ItemInstance fromTag(class CompoundTag const &);

};