#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct SmartFillConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9147d8;
    ::ll::UntypedStorage<4, 4>  mUnk934150;
    ::ll::UntypedStorage<1, 1>  mUnk4bb8f8;
    ::ll::UntypedStorage<1, 1>  mUnk7e04b0;
    // NOLINTEND

public:
    // prevent constructor by default
    SmartFillConfig& operator=(SmartFillConfig const&);
    SmartFillConfig(SmartFillConfig const&);
    SmartFillConfig();
};

} // namespace Editor::InteractiveTools
