#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptAimAssistCategory; }
namespace ScriptModuleMinecraft { class ScriptAimAssistCategorySettings; }
namespace ScriptModuleMinecraft { class ScriptAimAssistPreset; }
namespace ScriptModuleMinecraft { class ScriptAimAssistPresetSettings; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc0d955;
    ::ll::UntypedStorage<8, 8> mUnkbc5c8b;
    ::ll::UntypedStorage<8, 64> mUnkc4ea74;
    ::ll::UntypedStorage<8, 64> mUnk14be86;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistRegistry& operator=(ScriptAimAssistRegistry const&);
    ScriptAimAssistRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptAimAssistRegistry(::ScriptModuleMinecraft::ScriptAimAssistRegistry&&);

    MCNAPI ScriptAimAssistRegistry(::ScriptModuleMinecraft::ScriptAimAssistRegistry const&);

    MCNAPI ::Scripting::Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistCategory>, ::Scripting::Error, ::Scripting::InvalidArgumentError, ::Scripting::EngineError, ::ScriptModuleMinecraft::ScriptNamespaceNameError> _addCategory(::ScriptModuleMinecraft::ScriptAimAssistCategorySettings const& categorySettings);

    MCNAPI ::Scripting::Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistPreset>, ::Scripting::Error, ::Scripting::InvalidArgumentError, ::Scripting::EngineError, ::ScriptModuleMinecraft::ScriptNamespaceNameError> _addPreset(::ScriptModuleMinecraft::ScriptAimAssistPresetSettings const& presetSettings);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistCategory> _createCategoryHandle(::std::string const& categoryId) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistPreset> _createPresetHandle(::std::string const& presetId) const;

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistCategory>> _getCategories() const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistCategory>> _getOrCreateCategoryHandle(::std::string const& categoryId) const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistPreset>> _getOrCreatePresetHandle(::std::string const& presetId) const;

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistPreset>> _getPresets() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptAimAssistRegistry& operator=(::ScriptModuleMinecraft::ScriptAimAssistRegistry&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptAimAssistRegistry&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptAimAssistRegistry const&);
    // NOLINTEND

};

}
