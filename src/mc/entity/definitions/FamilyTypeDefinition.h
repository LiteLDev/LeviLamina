#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct FamilyTypeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkcc400e;
    // NOLINTEND

public:
    // prevent constructor by default
    FamilyTypeDefinition& operator=(FamilyTypeDefinition const&);
    FamilyTypeDefinition(FamilyTypeDefinition const&);
    FamilyTypeDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addFamilyName(::std::string const& name);
    // NOLINTEND
};
