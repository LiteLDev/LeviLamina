#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::Spawn {

struct PermuteType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb6984d;
    ::ll::UntypedStorage<4, 4>  mUnk76732d;
    ::ll::UntypedStorage<8, 32> mUnk8ea54d;
    // NOLINTEND

public:
    // prevent constructor by default
    PermuteType(PermuteType const&);
    PermuteType();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_60::Spawn::PermuteType& operator=(::SharedTypes::v1_21_60::Spawn::PermuteType const&);

    MCFOLD ::SharedTypes::v1_21_60::Spawn::PermuteType& operator=(::SharedTypes::v1_21_60::Spawn::PermuteType&&);

    MCAPI ~PermuteType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
