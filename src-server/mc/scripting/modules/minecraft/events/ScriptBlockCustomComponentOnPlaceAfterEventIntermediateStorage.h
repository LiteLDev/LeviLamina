#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage : public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mPreviousBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage& operator=(ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage(ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage();

};

}
