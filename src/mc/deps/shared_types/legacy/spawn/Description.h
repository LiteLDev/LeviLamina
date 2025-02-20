#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk35378d;
    ::ll::UntypedStorage<8, 32> mUnk3a424e;
    // NOLINTEND

public:
    // prevent constructor by default
    Description(Description const&);
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::Legacy::Spawn::Description& operator=(::SharedTypes::Legacy::Spawn::Description const&);

    MCFOLD ::SharedTypes::Legacy::Spawn::Description& operator=(::SharedTypes::Legacy::Spawn::Description&&);

    MCAPI ~Description();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
