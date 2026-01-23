#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPatternData.h"

class BlockPatternBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::BlockPatternData> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockPatternBuilder& aisle(::std::vector<::std::string> patterns);

    MCAPI ::BlockPatternData buildOrAssert();

    MCAPI ~BlockPatternBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
