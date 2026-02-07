#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EmoteDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> displayName;
    ::ll::TypedStorage<8, 32, ::std::string> emoteName;
    ::ll::TypedStorage<8, 32, ::std::string> imageName;
    ::ll::TypedStorage<8, 32, ::std::string> hoverImageName;
    // NOLINTEND
};
