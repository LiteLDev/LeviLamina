#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

class ItemStackRequestBatch {
public:
    // prevent constructor by default
    ItemStackRequestBatch& operator=(ItemStackRequestBatch const&);
    ItemStackRequestBatch(ItemStackRequestBatch const&);
    ItemStackRequestBatch();

public:
    // NOLINTBEGIN
    MCAPI std::vector<std::unique_ptr<class ItemStackRequestData>> const& getRequests() const;

    MCAPI std::vector<std::unique_ptr<class ItemStackRequestData>> takeRequests() const;

    MCAPI void write(class BinaryStream& stream) const;

    MCAPI ~ItemStackRequestBatch();

    MCAPI static class Bedrock::Result<std::unique_ptr<class ItemStackRequestBatch>>
    read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
