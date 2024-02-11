#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
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
    // vIndex: 0, symbol: __gen_??1ItemStackRequestActionMineBlock@@UEAA@XZ
    virtual ~ItemStackRequestActionMineBlock() = default;

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionMineBlock@@MEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionMineBlock@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ?getSrc@ItemStackRequestActionMineBlock@@QEBA?AUItemStackRequestSlotInfo@@XZ
    MCAPI struct ItemStackRequestSlotInfo getSrc() const;

    // symbol: ?setPreValidationStatus@ItemStackRequestActionMineBlock@@QEBAXW4PreValidationStatus@1@@Z
    MCAPI void setPreValidationStatus(::ItemStackRequestActionMineBlock::PreValidationStatus status) const;

    // NOLINTEND
};
