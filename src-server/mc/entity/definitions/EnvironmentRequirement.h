#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
// clang-format on

struct EnvironmentRequirement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8c8d8e;
    ::ll::UntypedStorage<4, 4>  mUnkf24b2c;
    ::ll::UntypedStorage<4, 4>  mUnkaa15da;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentRequirement& operator=(EnvironmentRequirement const&);
    EnvironmentRequirement(EnvironmentRequirement const&);
    EnvironmentRequirement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addBlockDescriptor(::BlockDescriptor const& blockDescriptor);

    MCNAPI ~EnvironmentRequirement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
