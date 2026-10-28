#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorHotbarCollectionEventHotbarDisplayNameChanged {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkea0b80;
    ::ll::UntypedStorage<8, 8>  mUnk940d7e;
    ::ll::UntypedStorage<8, 32> mUnkebc5f2;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorHotbarCollectionEventHotbarDisplayNameChanged&
    operator=(EditorHotbarCollectionEventHotbarDisplayNameChanged const&);
    EditorHotbarCollectionEventHotbarDisplayNameChanged(EditorHotbarCollectionEventHotbarDisplayNameChanged const&);
    EditorHotbarCollectionEventHotbarDisplayNameChanged();
};

} // namespace Editor
