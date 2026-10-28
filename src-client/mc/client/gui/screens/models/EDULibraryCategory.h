#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

struct EduLibraryCategory {
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
    // prevent constructor by default
    EduLibraryCategory& operator=(EduLibraryCategory const&);
    EduLibraryCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduLibraryCategory(::EduLibraryCategory const&);

    MCAPI ~EduLibraryCategory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EduLibraryCategory const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
