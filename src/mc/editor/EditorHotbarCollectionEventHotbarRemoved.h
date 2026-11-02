#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorHotbarCollectionEventHotbarRemoved {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk662829;
    ::ll::UntypedStorage<8, 48> mUnk475c6e;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorHotbarCollectionEventHotbarRemoved& operator=(EditorHotbarCollectionEventHotbarRemoved const&);
    EditorHotbarCollectionEventHotbarRemoved(EditorHotbarCollectionEventHotbarRemoved const&);
    EditorHotbarCollectionEventHotbarRemoved();
};

} // namespace Editor
