#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::Spawn {

struct Herd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkdf4a27;
    ::ll::UntypedStorage<4, 4>  mUnk1294a3;
    ::ll::UntypedStorage<4, 4>  mUnk2399b1;
    ::ll::UntypedStorage<4, 4>  mUnk84600d;
    ::ll::UntypedStorage<8, 32> mUnkabdcc8;
    ::ll::UntypedStorage<8, 32> mUnk3cec42;
    // NOLINTEND

public:
    // prevent constructor by default
    Herd(Herd const&);
    Herd();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_60::Spawn::Herd& operator=(::SharedTypes::v1_21_60::Spawn::Herd&&);

    MCFOLD ::SharedTypes::v1_21_60::Spawn::Herd& operator=(::SharedTypes::v1_21_60::Spawn::Herd const&);

    MCAPI ~Herd();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
