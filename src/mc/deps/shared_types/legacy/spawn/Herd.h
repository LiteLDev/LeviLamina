#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct Herd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6569ad;
    ::ll::UntypedStorage<4, 4>  mUnk5de8b0;
    ::ll::UntypedStorage<4, 4>  mUnkabfc82;
    ::ll::UntypedStorage<4, 4>  mUnkd72426;
    ::ll::UntypedStorage<8, 32> mUnkfbe37f;
    ::ll::UntypedStorage<8, 32> mUnke39803;
    // NOLINTEND

public:
    // prevent constructor by default
    Herd(Herd const&);
    Herd();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::Legacy::Spawn::Herd& operator=(::SharedTypes::Legacy::Spawn::Herd&&);

    MCFOLD ::SharedTypes::Legacy::Spawn::Herd& operator=(::SharedTypes::Legacy::Spawn::Herd const&);

    MCAPI ~Herd();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
