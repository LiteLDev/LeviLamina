#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

struct EDULibraryCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                   categoryLabel;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   icon;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   screenshot;
    ::ll::TypedStorage<4, 12, ::std::array<float, 3>>                                          defaultColor;
    ::ll::TypedStorage<4, 12, ::std::array<float, 3>>                                          interactColor;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::shared_ptr<::MainMenuScreenModel>)>> interactCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EDULibraryCategory();

    MCAPI ~EDULibraryCategory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
