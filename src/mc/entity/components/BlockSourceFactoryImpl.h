#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

class BlockSourceFactoryImpl {
public:
    // prevent constructor by default
    BlockSourceFactoryImpl& operator=(BlockSourceFactoryImpl const&);
    BlockSourceFactoryImpl(BlockSourceFactoryImpl const&);
    BlockSourceFactoryImpl();

public:
    // NOLINTBEGIN
    MCAPI explicit BlockSourceFactoryImpl(gsl::not_null<class ILevel*> level);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _createOrUpdate(class MockableOwnedBlockSource& region, DimensionType type) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
