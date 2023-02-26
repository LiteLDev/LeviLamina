/**
 * @file  ItemStackRequestData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestData.
 *
 */
class ItemStackRequestData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTDATA
public:
    class ItemStackRequestData& operator=(class ItemStackRequestData const &) = delete;
    ItemStackRequestData(class ItemStackRequestData const &) = delete;
    ItemStackRequestData() = delete;
#endif

public:
    /**
     * @symbol  ?getActions\@ItemStackRequestData\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VItemStackRequestAction\@\@U?$default_delete\@VItemStackRequestAction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VItemStackRequestAction\@\@U?$default_delete\@VItemStackRequestAction\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class ItemStackRequestAction>> const & getActions() const;
    /**
     * @symbol  ?getRequestId\@ItemStackRequestData\@\@QEBAAEBV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const & getRequestId() const;
    /**
     * @symbol  ?getStringsToFilter\@ItemStackRequestData\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const & getStringsToFilter() const;
    /**
     * @symbol  ?getStringsToFilterOrigin\@ItemStackRequestData\@\@QEBAAEBW4TextProcessingEventOrigin\@\@XZ
     */
    MCAPI enum class TextProcessingEventOrigin const & getStringsToFilterOrigin() const;
    /**
     * @symbol  ?postLoadItems\@ItemStackRequestData\@\@QEAAXAEAVBlockPalette\@\@_N\@Z
     */
    MCAPI void postLoadItems(class BlockPalette &, bool);
    /**
     * @symbol  ?tryFindAction\@ItemStackRequestData\@\@QEBAPEBVItemStackRequestAction\@\@W4ItemStackRequestActionType\@\@\@Z
     */
    MCAPI class ItemStackRequestAction const * tryFindAction(enum class ItemStackRequestActionType) const;
    /**
     * @symbol  ?write\@ItemStackRequestData\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @symbol  ??1ItemStackRequestData\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackRequestData();
    /**
     * @symbol  ?read\@ItemStackRequestData\@\@SA?AV?$unique_ptr\@VItemStackRequestData\@\@U?$default_delete\@VItemStackRequestData\@\@\@std\@\@\@std\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ItemStackRequestData> read(class ReadOnlyBinaryStream &);

};