#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct Herd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mMin;
    ::ll::TypedStorage<4, 4, int>            mMax;
    ::ll::TypedStorage<4, 4, int>            mInitEventCount;
    ::ll::TypedStorage<4, 4, int>            mEventSkipCount;
    ::ll::TypedStorage<8, 32, ::std::string> mInitialEvent;
    ::ll::TypedStorage<8, 32, ::std::string> mEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    Herd& operator=(Herd const&);
    Herd();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Herd(::SharedTypes::Legacy::Spawn::Herd const&);

    MCFOLD ::SharedTypes::Legacy::Spawn::Herd& operator=(::SharedTypes::Legacy::Spawn::Herd&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::Legacy::Spawn::Herd const&);
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
