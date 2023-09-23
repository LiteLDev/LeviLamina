#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/TypedClientNetId.h"
#include "mc/world/events/TextProcessingEventOrigin.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class ItemStackRequestData {
public:
    // prevent constructor by default
    ItemStackRequestData& operator=(ItemStackRequestData const&);
    ItemStackRequestData(ItemStackRequestData const&);
    ItemStackRequestData();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getActions@ItemStackRequestData@@QEBAAEBV?$vector@V?$unique_ptr@VItemStackRequestAction@@U?$default_delete@VItemStackRequestAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VItemStackRequestAction@@U?$default_delete@VItemStackRequestAction@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class ItemStackRequestAction>> const& getActions() const;

    // symbol: ?getRequestId@ItemStackRequestData@@QEBAAEBV?$TypedClientNetId@UItemStackRequestIdTag@@H$0A@@@XZ
    MCAPI class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const& getRequestId() const;

    // symbol:
    // ?getStringsToFilter@ItemStackRequestData@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const& getStringsToFilter() const;

    // symbol: ?getStringsToFilterOrigin@ItemStackRequestData@@QEBAAEBW4TextProcessingEventOrigin@@XZ
    MCAPI ::TextProcessingEventOrigin const& getStringsToFilterOrigin() const;

    // symbol: ?postLoadItems@ItemStackRequestData@@QEAAXAEAVBlockPalette@@_N@Z
    MCAPI void postLoadItems(class BlockPalette&, bool);

    // symbol: ?tryFindAction@ItemStackRequestData@@QEBAPEBVItemStackRequestAction@@W4ItemStackRequestActionType@@@Z
    MCAPI class ItemStackRequestAction const* tryFindAction(::ItemStackRequestActionType) const;

    // symbol: ?write@ItemStackRequestData@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream&) const;

    // symbol: ??1ItemStackRequestData@@QEAA@XZ
    MCAPI ~ItemStackRequestData();

    // symbol:
    // ?read@ItemStackRequestData@@SA?AV?$Result@V?$unique_ptr@VItemStackRequestData@@U?$default_delete@VItemStackRequestData@@@std@@@std@@Verror_code@2@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<std::unique_ptr<class ItemStackRequestData>, std::error_code>
    read(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
