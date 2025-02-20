#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::Spawn {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfb311f;
    // NOLINTEND

public:
    // prevent constructor by default
    Description(Description const&);
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_60::Spawn::Description& operator=(::SharedTypes::v1_21_60::Spawn::Description&&);

    MCFOLD ::SharedTypes::v1_21_60::Spawn::Description& operator=(::SharedTypes::v1_21_60::Spawn::Description const&);

    MCAPI ~Description();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
