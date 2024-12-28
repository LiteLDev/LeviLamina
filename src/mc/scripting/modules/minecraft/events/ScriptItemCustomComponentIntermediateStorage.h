#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubAdapterStorage.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptCustomComponentPubSubAdapterStorage<
      ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface> {
public:
    // prevent constructor by default
    ScriptItemCustomComponentIntermediateStorage& operator=(ScriptItemCustomComponentIntermediateStorage const&);
    ScriptItemCustomComponentIntermediateStorage(ScriptItemCustomComponentIntermediateStorage const&);
    ScriptItemCustomComponentIntermediateStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptItemCustomComponentIntermediateStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
