#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

// auto generated forward declare list
// clang-format off
struct NeighborChange;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentNeighborChangedAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::Bedrock::small_vector<::NeighborChange, 1>> mChanges;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
