#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk47d052;
    ::ll::UntypedStorage<4, 12> mUnka25fd7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemInventoryComponentContainer& operator=(ScriptItemInventoryComponentContainer const&);
    ScriptItemInventoryComponentContainer(ScriptItemInventoryComponentContainer const&);
    ScriptItemInventoryComponentContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemInventoryComponentContainer() /*override*/ = default;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const /*override*/;

    // vIndex: 13
    virtual ::Container* _tryGetContainer() const /*override*/;

    // vIndex: 14
    virtual ::ItemContext _getItemContext(int slot) const /*override*/;
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

}
