#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubAdapterAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentAfterEvent
: public ::ScriptModuleMinecraft::ScriptCustomComponentPubSubAdapterAfterEvent<
      ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemCustomComponentAfterEvent() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
