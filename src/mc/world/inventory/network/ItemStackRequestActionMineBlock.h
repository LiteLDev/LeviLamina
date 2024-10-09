#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionMineBlock : public ::ItemStackRequestAction {
public:
    // ItemStackRequestActionMineBlock inner types define
    enum class PreValidationStatus {};

public:
    // prevent constructor by default
    ItemStackRequestActionMineBlock& operator=(ItemStackRequestActionMineBlock const&);
    ItemStackRequestActionMineBlock(ItemStackRequestActionMineBlock const&);
    ItemStackRequestActionMineBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionMineBlock() = default;

    // vIndex: 4
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ::ItemStackRequestActionMineBlock::PreValidationStatus getPreValidationStatus() const;

    MCAPI int getPredictedDurability() const;

    MCAPI struct ItemStackRequestSlotInfo getSrc() const;

    MCAPI void setPreValidationStatus(::ItemStackRequestActionMineBlock::PreValidationStatus status) const;

    // NOLINTEND
};
