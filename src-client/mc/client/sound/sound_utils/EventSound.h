#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundUtils {

struct EventSound {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> eventName;
    ::ll::TypedStorage<8, 32, ::std::string> soundName;
    ::ll::TypedStorage<4, 4, float>          pitch;
    ::ll::TypedStorage<4, 4, float>          volume;
    // NOLINTEND
};

} // namespace SoundUtils
