/**
 * @file  ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING.
 *
 */
class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTRESULTS_DEPRECATEDASKTYLAING
public:
    class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING& operator=(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &) = delete;
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCRAFTRESULTS_DEPRECATEDASKTYLAING
    /**
     * @hash   1056573541
     * @symbol  ?_read\@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@MEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCVAPI bool _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   854072253
     * @symbol  ?_write\@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    MCVAPI void _write(class BinaryStream &) const;
    /**
     * @hash   -1340799111
     * @symbol  ?postLoadItems_DEPRECATEDASKTYLAING\@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    MCVAPI void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette &, bool);
#endif
    /**
     * @hash   -1189599449
     * @symbol  ??0ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();
    /**
     * @hash   1907958749
     * @symbol  ?getNumCrafts\@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@QEBAEXZ
     */
    MCAPI unsigned char getNumCrafts() const;
    /**
     * @hash   873033514
     * @symbol  ?getResults\@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@QEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class ItemInstance> const & getResults() const;

};