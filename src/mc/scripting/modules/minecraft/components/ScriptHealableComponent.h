#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class HealableComponent;
class HealableDefinition;
struct FeedItem;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::HealableComponent, ::HealableDefinition> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptHealableComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<bool> getForceUse() const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::FeedItem>> getItems() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
