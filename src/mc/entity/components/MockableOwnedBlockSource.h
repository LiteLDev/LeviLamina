#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MockableOwnedBlockSource {
public:
    // prevent constructor by default
    MockableOwnedBlockSource& operator=(MockableOwnedBlockSource const&);
    MockableOwnedBlockSource(MockableOwnedBlockSource const&);
    MockableOwnedBlockSource();

public:
    // NOLINTBEGIN
    MCAPI class IBlockSource& get();

    MCAPI class IBlockSource const& get() const;

    // NOLINTEND
};
