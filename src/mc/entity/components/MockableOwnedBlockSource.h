#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IBlockSource;
// clang-format on

class MockableOwnedBlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnkc6081e;
    ::ll::UntypedStorage<8, 272> mUnk261323;
    // NOLINTEND

public:
    // prevent constructor by default
    MockableOwnedBlockSource& operator=(MockableOwnedBlockSource const&);
    MockableOwnedBlockSource(MockableOwnedBlockSource const&);
    MockableOwnedBlockSource();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::IBlockSource const& get() const;

    MCFOLD ::IBlockSource& get();
    // NOLINTEND
};
