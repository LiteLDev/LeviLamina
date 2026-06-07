#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DisplayObjectMessageRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mLocalizableText;
    ::ll::TypedStorage<8, 32, ::std::string> mColor;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayObjectMessageRequestComponent& operator=(DisplayObjectMessageRequestComponent const&);
    DisplayObjectMessageRequestComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DisplayObjectMessageRequestComponent(::DisplayObjectMessageRequestComponent const&);

    MCFOLD ::DisplayObjectMessageRequestComponent& operator=(::DisplayObjectMessageRequestComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::DisplayObjectMessageRequestComponent const&);
    // NOLINTEND
};
