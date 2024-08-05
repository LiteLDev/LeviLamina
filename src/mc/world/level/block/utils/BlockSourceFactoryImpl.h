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
    MCAPI explicit BlockSourceFactoryImpl(gsl::not_null<class ILevel*>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _createOrUpdate(class MockableOwnedBlockSource& region, DimensionType type) const;

    // NOLINTEND
};
