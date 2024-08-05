#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionCreate : public ::ItemStackRequestAction {
public:
    // prevent constructor by default
    ItemStackRequestActionCreate& operator=(ItemStackRequestActionCreate const&);
    ItemStackRequestActionCreate(ItemStackRequestActionCreate const&);
    ItemStackRequestActionCreate();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionCreate() = default;

    // vIndex: 4
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI uchar getResultsIndex() const;

    // NOLINTEND
};
