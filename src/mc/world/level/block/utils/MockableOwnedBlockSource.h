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
    // symbol: ?get@MockableOwnedBlockSource@@QEAAAEAVIBlockSource@@XZ
    MCAPI class IBlockSource& get();

    // symbol: ?get@MockableOwnedBlockSource@@QEBAAEBVIBlockSource@@XZ
    MCAPI class IBlockSource const& get() const;

    // NOLINTEND
};
