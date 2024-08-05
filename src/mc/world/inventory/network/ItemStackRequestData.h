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
    MCAPI std::vector<std::unique_ptr<class ItemStackRequestAction>> const& getActions() const;

    MCAPI ItemStackRequestId const& getRequestId() const;

    MCAPI std::vector<std::string> const& getStringsToFilter() const;

    MCAPI ::TextProcessingEventOrigin const& getStringsToFilterOrigin() const;

    MCAPI void postLoadItems(class BlockPalette& blockPalette, bool isClientSide);

    MCAPI class ItemStackRequestAction const* tryFindAction(::ItemStackRequestActionType type) const;

    MCAPI void write(class BinaryStream& stream) const;

    MCAPI ~ItemStackRequestData();

    MCAPI static class Bedrock::Result<std::unique_ptr<class ItemStackRequestData>>
    read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
