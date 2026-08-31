#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntityRef;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptInventoryComponentContainer() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const /*override*/;

    virtual ::Container* _tryGetContainer() const /*override*/;

    virtual ::ItemContext _getItemContext(int slot) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;

    MCAPI ::Container* $_tryGetContainer() const;

    MCFOLD ::ItemContext $_getItemContext(int slot) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
