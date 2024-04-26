#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class BlockSourceFactoryImpl {
public:
    // prevent constructor by default
    BlockSourceFactoryImpl& operator=(BlockSourceFactoryImpl const&);
    BlockSourceFactoryImpl(BlockSourceFactoryImpl const&);
    BlockSourceFactoryImpl();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockSourceFactoryImpl@@QEAA@V?$not_null@PEAVILevel@@@gsl@@@Z
    MCAPI explicit BlockSourceFactoryImpl(gsl::not_null<class ILevel*>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_createOrUpdate@BlockSourceFactoryImpl@@IEBAXAEAVMockableOwnedBlockSource@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void _createOrUpdate(class MockableOwnedBlockSource& region, DimensionType type) const;

    // NOLINTEND
};
