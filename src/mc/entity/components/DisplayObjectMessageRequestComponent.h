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
    DisplayObjectMessageRequestComponent(DisplayObjectMessageRequestComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::DisplayObjectMessageRequestComponent& operator=(::DisplayObjectMessageRequestComponent&&);
    // NOLINTEND
};
