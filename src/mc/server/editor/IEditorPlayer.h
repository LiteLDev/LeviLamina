#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

class IEditorPlayer {

public:
    // prevent constructor by default
    IEditorPlayer& operator=(IEditorPlayer const&) = delete;
    IEditorPlayer(IEditorPlayer const&)            = delete;
    IEditorPlayer()                                = delete;
};

}; // namespace Editor
