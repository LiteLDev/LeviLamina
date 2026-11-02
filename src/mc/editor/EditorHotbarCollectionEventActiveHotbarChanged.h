#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorHotbarCollectionEventActiveHotbarChanged {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5d3f19;
    ::ll::UntypedStorage<8, 8> mUnkbcdbd5;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorHotbarCollectionEventActiveHotbarChanged& operator=(EditorHotbarCollectionEventActiveHotbarChanged const&);
    EditorHotbarCollectionEventActiveHotbarChanged(EditorHotbarCollectionEventActiveHotbarChanged const&);
    EditorHotbarCollectionEventActiveHotbarChanged();
};

} // namespace Editor
