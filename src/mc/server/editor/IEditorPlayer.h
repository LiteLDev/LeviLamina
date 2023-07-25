#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

class IEditorPlayer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDITOR_IEDITORPLAYER
public:
    IEditorPlayer& operator=(IEditorPlayer const&) = delete;
    IEditorPlayer(IEditorPlayer const&)            = delete;
    IEditorPlayer()                                = delete;
#endif

public:
};

}; // namespace Editor
