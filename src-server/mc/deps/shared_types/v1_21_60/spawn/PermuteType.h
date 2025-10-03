#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::Spawn {

struct PermuteType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb6984d;
    ::ll::UntypedStorage<4, 4>  mUnk76732d;
    ::ll::UntypedStorage<8, 32> mUnk4ec86f;
    // NOLINTEND

public:
    // prevent constructor by default
    PermuteType& operator=(PermuteType const&);
    PermuteType(PermuteType const&);
    PermuteType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::Spawn::PermuteType& operator=(::SharedTypes::v1_21_60::Spawn::PermuteType&&);

    MCNAPI ~PermuteType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
