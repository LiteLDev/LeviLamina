#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorHotbarCollectionEventSelectedIndexChanged {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk35c3bd;
    ::ll::UntypedStorage<8, 8> mUnk93b35f;
    ::ll::UntypedStorage<8, 8> mUnk40077d;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorHotbarCollectionEventSelectedIndexChanged& operator=(EditorHotbarCollectionEventSelectedIndexChanged const&);
    EditorHotbarCollectionEventSelectedIndexChanged(EditorHotbarCollectionEventSelectedIndexChanged const&);
    EditorHotbarCollectionEventSelectedIndexChanged();
};

} // namespace Editor
