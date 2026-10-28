#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class NamedTickEvent; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentNamedTickIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mNamespace;
    ::ll::TypedStorage<8, 32, ::std::string> mEventName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentNamedTickIntermediateStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptBlockCustomComponentNamedTickIntermediateStorage(
        ::BlockEvents::NamedTickEvent const& eventData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockEvents::NamedTickEvent const& eventData);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
