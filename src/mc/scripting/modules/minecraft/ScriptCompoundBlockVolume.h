#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeIterable.h"

// auto generated forward declare list
// clang-format off
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
    ::ll::UntypedStorage<8, 16> mUnkf65901;
    ::ll::UntypedStorage<8, 16> mUnk13417a;
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
    MCNAPI ::ScriptModuleMinecraft::ScriptCompoundBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptCompoundBlockVolume const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindActionEnums();

    MCNAPI static ::Scripting::ClassBinding bindClass();

    MCNAPI static ::Scripting::EnumBinding bindRelativeEnums();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
