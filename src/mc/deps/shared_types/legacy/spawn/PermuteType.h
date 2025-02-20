#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct PermuteType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1ca512;
    ::ll::UntypedStorage<4, 4>  mUnk8a25aa;
    ::ll::UntypedStorage<8, 32> mUnkd86d1a;
    // NOLINTEND

public:
    // prevent constructor by default
    PermuteType(PermuteType const&);
    PermuteType();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::Legacy::Spawn::PermuteType& operator=(::SharedTypes::Legacy::Spawn::PermuteType&&);

    MCFOLD ::SharedTypes::Legacy::Spawn::PermuteType& operator=(::SharedTypes::Legacy::Spawn::PermuteType const&);

    MCAPI ~PermuteType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
