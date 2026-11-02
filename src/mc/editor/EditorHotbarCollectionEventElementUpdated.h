#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorHotbarCollectionEventElementUpdated {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk13cdf5;
    ::ll::UntypedStorage<8, 48> mUnkc754cd;
    ::ll::UntypedStorage<8, 8>  mUnk249867;
    ::ll::UntypedStorage<8, 96> mUnk5493fc;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorHotbarCollectionEventElementUpdated& operator=(EditorHotbarCollectionEventElementUpdated const&);
    EditorHotbarCollectionEventElementUpdated(EditorHotbarCollectionEventElementUpdated const&);
    EditorHotbarCollectionEventElementUpdated();
};

} // namespace Editor
