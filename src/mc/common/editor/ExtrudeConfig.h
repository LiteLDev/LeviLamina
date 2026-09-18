#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct ExtrudeConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4e056b;
    ::ll::UntypedStorage<4, 4>  mUnkc6cf08;
    ::ll::UntypedStorage<4, 4>  mUnkcfac85;
    ::ll::UntypedStorage<1, 1>  mUnk5a2bcd;
    ::ll::UntypedStorage<1, 1>  mUnk5db03d;
    ::ll::UntypedStorage<8, 24> mUnk4c942d;
    ::ll::UntypedStorage<4, 4>  mUnk30fcbc;
    // NOLINTEND

public:
    // prevent constructor by default
    ExtrudeConfig& operator=(ExtrudeConfig const&);
    ExtrudeConfig(ExtrudeConfig const&);
    ExtrudeConfig();
};

} // namespace Editor::InteractiveTools
