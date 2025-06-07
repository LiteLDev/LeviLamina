#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
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
    ::ll::UntypedStorage<8, 24> mUnk84a036;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInventoryComponentContainer& operator=(ScriptInventoryComponentContainer const&);
    ScriptInventoryComponentContainer(ScriptInventoryComponentContainer const&);
    ScriptInventoryComponentContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptInventoryComponentContainer() /*override*/ = default;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const /*override*/;

    // vIndex: 13
    virtual ::Container* _tryGetContainer() const /*override*/;

    // vIndex: 14
    virtual ::ItemContext _getItemContext(int slot) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;

    MCNAPI ::Container* $_tryGetContainer() const;

    MCNAPI ::ItemContext $_getItemContext(int slot) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
