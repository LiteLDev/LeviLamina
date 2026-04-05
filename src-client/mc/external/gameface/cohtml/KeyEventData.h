#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct KeyEventData {
public:
    // KeyEventData inner types define
    enum class EventType : int {
        Unknown = 0,
        KeyDown = 1,
        KeyUp   = 2,
        Char    = 3,
    };

    enum class EventLocation : int {
        Standard = 0,
        Left     = 1,
        Right    = 2,
        Numpad   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk203d66;
    ::ll::UntypedStorage<4, 4> mUnk2dad26;
    ::ll::UntypedStorage<1, 7> mUnk84e76f;
    ::ll::UntypedStorage<4, 4> mUnkc8fa02;
    ::ll::UntypedStorage<1, 1> mUnk339782;
    ::ll::UntypedStorage<1, 1> mUnke1cd3d;
    ::ll::UntypedStorage<1, 1> mUnk1cea41;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyEventData& operator=(KeyEventData const&);
    KeyEventData(KeyEventData const&);
    KeyEventData();
};

} // namespace cohtml
