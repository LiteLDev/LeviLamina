#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorHotbarCollectionEventCollectionUpdated {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8c6cbe;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorHotbarCollectionEventCollectionUpdated& operator=(EditorHotbarCollectionEventCollectionUpdated const&);
    EditorHotbarCollectionEventCollectionUpdated(EditorHotbarCollectionEventCollectionUpdated const&);
    EditorHotbarCollectionEventCollectionUpdated();
};

} // namespace Editor
