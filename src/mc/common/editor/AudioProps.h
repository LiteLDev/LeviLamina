#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Settings {

struct AudioProps {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8d24b9;
    ::ll::UntypedStorage<1, 1> mUnk88c2db;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioProps& operator=(AudioProps const&);
    AudioProps(AudioProps const&);
    AudioProps();
};

} // namespace Editor::Settings
