#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/bitset.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct MolangParseConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::MolangVersion>                    mVersion;
    ::ll::TypedStorage<8, 16, ::gsl::span<::HashedString const>> mAllowedQuerySets;
    ::ll::TypedStorage<8, 16, ::brstd::bitset<77, uint64>>       mAllowedOperations;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>      mAllowedSpecificQueries;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MolangParseConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
