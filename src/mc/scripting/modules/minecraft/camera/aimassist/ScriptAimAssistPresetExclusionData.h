#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptAimAssistPresetExclusionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mBlocks;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mActors;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mBlockTags;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
