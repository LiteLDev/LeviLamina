#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorHotbarCollectionEventHotbarUpdated {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkb48ea5;
    ::ll::UntypedStorage<8, 952> mUnk20ac39;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorHotbarCollectionEventHotbarUpdated& operator=(EditorHotbarCollectionEventHotbarUpdated const&);
    EditorHotbarCollectionEventHotbarUpdated(EditorHotbarCollectionEventHotbarUpdated const&);
    EditorHotbarCollectionEventHotbarUpdated();
};

} // namespace Editor
