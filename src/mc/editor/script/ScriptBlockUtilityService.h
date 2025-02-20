#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptSelectionContainer; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockUtilityService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockUtilityService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf57135;
    ::ll::UntypedStorage<8, 8>  mUnkd4df07;
    ::ll::UntypedStorage<8, 8>  mUnk23c0a9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockUtilityService& operator=(ScriptBlockUtilityService const&);
    ScriptBlockUtilityService(ScriptBlockUtilityService const&);
    ScriptBlockUtilityService();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> _fillVolume(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptSelectionContainer>> const&
            volumeVariant,
        ::std::optional<::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const> const&
            optblockVariant
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptBlockUtilityService> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
