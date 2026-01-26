#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct BlockDifference;
struct HeightDifference;
// clang-format on

struct DeserializationChanges {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::BlockDifference>> blockChangesMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::HeightDifference>>                   heightChanges;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};
