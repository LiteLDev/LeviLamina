#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct SmartFillResultStream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk874c46;
    ::ll::UntypedStorage<8, 8>  mUnk49796d;
    // NOLINTEND

public:
    // prevent constructor by default
    SmartFillResultStream& operator=(SmartFillResultStream const&);
    SmartFillResultStream(SmartFillResultStream const&);
    SmartFillResultStream();
};

} // namespace Editor::InteractiveTools
