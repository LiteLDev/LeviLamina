#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

class ScriptAnnotationInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc3d8a9;
    ::ll::UntypedStorage<8, 32> mUnk6e01b2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAnnotationInstance& operator=(ScriptAnnotationInstance const&);
    ScriptAnnotationInstance(ScriptAnnotationInstance const&);
    ScriptAnnotationInstance();
};

} // namespace Editor::ScriptModule
