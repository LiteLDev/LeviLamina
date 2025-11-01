#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct StoriesSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc43d38;
    ::ll::UntypedStorage<4, 4> mUnkc339a2;
    ::ll::UntypedStorage<1, 1> mUnk506e9c;
    ::ll::UntypedStorage<1, 1> mUnk864f9b;
    ::ll::UntypedStorage<1, 1> mUnk387df9;
    ::ll::UntypedStorage<1, 1> mUnkda5961;
    ::ll::UntypedStorage<1, 1> mUnkf5053c;
    // NOLINTEND

public:
    // prevent constructor by default
    StoriesSettings& operator=(StoriesSettings const&);
    StoriesSettings(StoriesSettings const&);
    StoriesSettings();

};

}
