#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeIterable.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolume
: public ::ScriptModuleMinecraft::ScriptBlockVolumeIterable,
  public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptCompoundBlockVolume> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>           mScope;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CompoundBlockVolume>> mVolume;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCompoundBlockVolume(ScriptCompoundBlockVolume const&);
    ScriptCompoundBlockVolume();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptCompoundBlockVolume() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptCompoundBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptCompoundBlockVolume const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBinding bindActionEnums();

    MCAPI static ::Scripting::ClassBinding bindClass();

    MCAPI static ::Scripting::EnumBinding bindRelativeEnums();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
