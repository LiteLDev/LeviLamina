#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

class LevelComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1cbec1;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelComponent& operator=(LevelComponent const&);
    LevelComponent(LevelComponent const&);
    LevelComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LevelComponent(::std::unique_ptr<::ILevel> level);

    MCFOLD ::ILevel& getLevel();

    MCAPI ~LevelComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::unique_ptr<::ILevel> level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
