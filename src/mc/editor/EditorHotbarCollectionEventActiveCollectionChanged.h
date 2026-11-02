#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorHotbarCollectionEventActiveCollectionChanged {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5622b5;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorHotbarCollectionEventActiveCollectionChanged&
    operator=(EditorHotbarCollectionEventActiveCollectionChanged const&);
    EditorHotbarCollectionEventActiveCollectionChanged(EditorHotbarCollectionEventActiveCollectionChanged const&);
    EditorHotbarCollectionEventActiveCollectionChanged();
};

} // namespace Editor
