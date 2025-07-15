#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Settings {

struct GraphicsProps {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8b7f52;
    ::ll::UntypedStorage<1, 1> mUnk9b81ec;
    ::ll::UntypedStorage<1, 1> mUnk6566f6;
    ::ll::UntypedStorage<1, 1> mUnk8717a5;
    ::ll::UntypedStorage<1, 1> mUnkf55bdc;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsProps& operator=(GraphicsProps const&);
    GraphicsProps(GraphicsProps const&);
    GraphicsProps();
};

} // namespace Editor::Settings
