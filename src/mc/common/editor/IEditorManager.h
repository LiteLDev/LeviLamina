#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

class IEditorManager {
public:
    // prevent constructor by default
    IEditorManager& operator=(IEditorManager const&);
    IEditorManager(IEditorManager const&);
    IEditorManager();
};

}; // namespace Editor
