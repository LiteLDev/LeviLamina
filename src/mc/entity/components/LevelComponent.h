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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ILevel>> mLevel;
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

    MCAPI LevelComponent(::LevelComponent&& other);

    MCFOLD ::ILevel const& getLevel() const;

    MCFOLD ::ILevel& getLevel();

    MCFOLD ::LevelComponent& operator=(::LevelComponent&& other);

    MCAPI ~LevelComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::unique_ptr<::ILevel> level);

    MCFOLD void* $ctor(::LevelComponent&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
