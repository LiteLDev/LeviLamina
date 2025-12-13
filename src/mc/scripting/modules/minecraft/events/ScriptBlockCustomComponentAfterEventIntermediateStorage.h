#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfe5414;
    ::ll::UntypedStorage<4, 12> mUnk97e4f3;
    ::ll::UntypedStorage<8, 8>  mUnkdefbfd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentAfterEventIntermediateStorage(
        ScriptBlockCustomComponentAfterEventIntermediateStorage const&
    );
    ScriptBlockCustomComponentAfterEventIntermediateStorage();
};

} // namespace ScriptModuleMinecraft
