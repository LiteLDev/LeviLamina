#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

class IEditorManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDITOR_IEDITORMANAGER
public:
    IEditorManager& operator=(IEditorManager const&) = delete;
    IEditorManager(IEditorManager const&)            = delete;
    IEditorManager()                                 = delete;
#endif

public:
};

}; // namespace Editor
