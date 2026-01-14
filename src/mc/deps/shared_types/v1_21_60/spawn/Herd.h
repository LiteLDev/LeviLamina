#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::Spawn {

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
    Herd(Herd const&);
    Herd();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_60::Spawn::Herd& operator=(::SharedTypes::v1_21_60::Spawn::Herd&&);

    MCAPI ~Herd();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
