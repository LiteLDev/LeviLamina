/**
 * @file  ItemStackRequestData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1811056165
     * @symbol ?getActions@ItemStackRequestData@@QEBAAEBV?$vector@V?$unique_ptr@VItemStackRequestAction@@U?$default_delete@VItemStackRequestAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VItemStackRequestAction@@U?$default_delete@VItemStackRequestAction@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::unique_ptr<class ItemStackRequestAction>> const & getActions() const;
    /**
     * @hash   294213365
     * @symbol ?getRequestId@ItemStackRequestData@@QEBAAEBV?$TypedClientNetId@UItemStackRequestIdTag@@H$0A@@@XZ
     */
    MCAPI class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const & getRequestId() const;
    /**
     * @hash   1263757495
     * @symbol ?getStringsToFilter@ItemStackRequestData@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> const & getStringsToFilter() const;
    /**
     * @symbol ?getStringsToFilterOrigin@ItemStackRequestData@@QEBAAEBW4TextProcessingEventOrigin@@XZ
     */
    MCAPI enum TextProcessingEventOrigin const & getStringsToFilterOrigin() const;
    /**
     * @hash   44916187
     * @symbol ?postLoadItems@ItemStackRequestData@@QEAAXAEAVBlockPalette@@_N@Z
     */
    MCAPI void postLoadItems(class BlockPalette &, bool);
    /**
     * @hash   -1599139296
     * @symbol ?tryFindAction@ItemStackRequestData@@QEBAPEBVItemStackRequestAction@@W4ItemStackRequestActionType@@@Z
     */
    MCAPI class ItemStackRequestAction const * tryFindAction(enum ItemStackRequestActionType) const;
    /**
     * @hash   -1955462576
     * @symbol ?write@ItemStackRequestData@@QEBAXAEAVBinaryStream@@@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @hash   -1356503394
     * @symbol ??1ItemStackRequestData@@QEAA@XZ
     */
    MCAPI ~ItemStackRequestData();
    /**
     * @hash   -1202503425
     * @symbol ?read@ItemStackRequestData@@SA?AV?$unique_ptr@VItemStackRequestData@@U?$default_delete@VItemStackRequestData@@@std@@@std@@AEAVReadOnlyBinaryStream@@@Z
     */
    MCAPI static std::unique_ptr<class ItemStackRequestData> read(class ReadOnlyBinaryStream &);

};