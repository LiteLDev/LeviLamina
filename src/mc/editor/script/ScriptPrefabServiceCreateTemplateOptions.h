#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptPrefabServiceCreateTemplateOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk802bef;
    ::ll::UntypedStorage<8, 40> mUnkb38419;
    ::ll::UntypedStorage<8, 40> mUnkb5aeae;
    ::ll::UntypedStorage<8, 32> mUnk88421a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabServiceCreateTemplateOptions& operator=(ScriptPrefabServiceCreateTemplateOptions const&);
    ScriptPrefabServiceCreateTemplateOptions(ScriptPrefabServiceCreateTemplateOptions const&);
    ScriptPrefabServiceCreateTemplateOptions();
};

} // namespace Editor::ScriptModule
