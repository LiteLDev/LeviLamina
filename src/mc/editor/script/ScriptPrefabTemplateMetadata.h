#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

class ScriptPrefabTemplateMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbf50fd;
    ::ll::UntypedStorage<8, 32> mUnk1bcb6f;
    ::ll::UntypedStorage<8, 32> mUnkfd60cd;
    ::ll::UntypedStorage<8, 32> mUnkdb43f5;
    ::ll::UntypedStorage<8, 32> mUnk41ce83;
    ::ll::UntypedStorage<8, 24> mUnkdaaead;
    ::ll::UntypedStorage<4, 4>  mUnkdbfb45;
    ::ll::UntypedStorage<4, 4>  mUnk8ff97e;
    ::ll::UntypedStorage<4, 4>  mUnkd6b590;
    ::ll::UntypedStorage<1, 1>  mUnkb1e734;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateMetadata& operator=(ScriptPrefabTemplateMetadata const&);
    ScriptPrefabTemplateMetadata(ScriptPrefabTemplateMetadata const&);
    ScriptPrefabTemplateMetadata();
};

} // namespace Editor::ScriptModule
