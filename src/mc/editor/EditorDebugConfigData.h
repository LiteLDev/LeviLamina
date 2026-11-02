#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorDebugConfigData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk99ed12;
    ::ll::UntypedStorage<4, 4> mUnk990aed;
    ::ll::UntypedStorage<1, 1> mUnka746f1;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorDebugConfigData& operator=(EditorDebugConfigData const&);
    EditorDebugConfigData(EditorDebugConfigData const&);
    EditorDebugConfigData();
};

} // namespace Editor
