#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class HealableComponent;
struct FeedItem;
namespace Scripting { struct ClassBinding; }
namespace SharedTypes::v1_26_60 { struct HealableComponentDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealableComponent
: public ::ScriptModuleMinecraft::
      ECSScriptActorComponent<::HealableComponent, ::SharedTypes::v1_26_60::HealableComponentDefinition> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::std::vector<::FeedItem>> getItems() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
