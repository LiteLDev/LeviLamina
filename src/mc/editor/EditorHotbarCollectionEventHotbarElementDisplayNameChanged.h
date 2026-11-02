#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorHotbarCollectionEventHotbarElementDisplayNameChanged {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb93451;
    ::ll::UntypedStorage<8, 8>  mUnkc9213b;
    ::ll::UntypedStorage<8, 8>  mUnk5e00a0;
    ::ll::UntypedStorage<8, 32> mUnkb67197;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorHotbarCollectionEventHotbarElementDisplayNameChanged&
    operator=(EditorHotbarCollectionEventHotbarElementDisplayNameChanged const&);
    EditorHotbarCollectionEventHotbarElementDisplayNameChanged(
        EditorHotbarCollectionEventHotbarElementDisplayNameChanged const&
    );
    EditorHotbarCollectionEventHotbarElementDisplayNameChanged();
};

} // namespace Editor
