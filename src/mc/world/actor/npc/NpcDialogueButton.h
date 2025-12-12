#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct NpcDialogueButton {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mButtonName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mCommands;
    ::ll::TypedStorage<8, 32, ::std::string>                mURL;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NpcDialogueButton();

    MCAPI ~NpcDialogueButton();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NpcDialogueButton parse(::Json::Value const& root, ::std::string const& fileName, int);
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
