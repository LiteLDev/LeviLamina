#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/property/IScriptBlockProperty.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStringBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk98946a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStringBlockProperty& operator=(ScriptStringBlockProperty const&);
    ScriptStringBlockProperty(ScriptStringBlockProperty const&);
    ScriptStringBlockProperty();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptStringBlockProperty() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptStringBlockProperty(::std::string name, ::BlockState const& blockState, ::std::vector<::std::string> validValues, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation);

    MCNAPI ::Scripting::Result_deprecated<::std::string> getState() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptStringBlockProperty& operator=(::ScriptModuleMinecraft::ScriptStringBlockProperty&&);

    MCNAPI ::Scripting::Result_deprecated<void> setState(::std::string state);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string name, ::BlockState const& blockState, ::std::vector<::std::string> validValues, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
