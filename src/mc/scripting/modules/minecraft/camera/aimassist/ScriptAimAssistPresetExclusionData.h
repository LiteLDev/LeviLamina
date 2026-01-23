#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptAimAssistPresetExclusionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk596e44;
    ::ll::UntypedStorage<8, 32> mUnk193f30;
    ::ll::UntypedStorage<8, 32> mUnk8b2003;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistPresetExclusionData& operator=(ScriptAimAssistPresetExclusionData const&);
    ScriptAimAssistPresetExclusionData(ScriptAimAssistPresetExclusionData const&);
    ScriptAimAssistPresetExclusionData();
};

} // namespace ScriptModuleMinecraft
