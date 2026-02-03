#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockSource;
class Container;
class ItemContext;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockActor*>  mBlockActor;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mPosition;
    ::ll::TypedStorage<8, 8, ::BlockSource&> mBlockSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockInventoryComponentContainer& operator=(ScriptBlockInventoryComponentContainer const&);
    ScriptBlockInventoryComponentContainer(ScriptBlockInventoryComponentContainer const&);
    ScriptBlockInventoryComponentContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockInventoryComponentContainer() /*override*/ = default;

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

    MCAPI ::ItemContext $_getItemContext(int slot) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
