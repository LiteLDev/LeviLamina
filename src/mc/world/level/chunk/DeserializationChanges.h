#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
struct BlockDifference;
struct HeightDifference;
// clang-format on

struct DeserializationChanges {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::TypedStorage<1, 0, ::std::unordered_map<::BlockPos, ::BlockDifference>> blockChangesMap;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::BlockDifference>> blockChangesMap;
#endif
    ::ll::TypedStorage<8, 24, ::std::vector<::HeightDifference>> heightChanges;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~DeserializationChanges();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
