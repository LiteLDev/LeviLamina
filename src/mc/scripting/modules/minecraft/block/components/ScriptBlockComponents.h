#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class IScriptBlockComponentFactory; }
namespace ScriptModuleMinecraft { class IScriptBlockCustomComponentReader; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string_view, ::std::shared_ptr<::ScriptModuleMinecraft::IScriptBlockComponentFactory>>>
        mNativeFactories;
    ::ll::TypedStorage<8, 16, ::WeakRef<::ScriptModuleMinecraft::IScriptBlockCustomComponentReader const>>
        mCustomComponentReader;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockComponents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptBlockComponents(
        ::WeakRef<::ScriptModuleMinecraft::IScriptBlockCustomComponentReader const> customComponentReader
    );

    MCAPI ::std::unordered_map<
        ::std::string_view,
        ::std::shared_ptr<::ScriptModuleMinecraft::IScriptBlockComponentFactory>> const&
    getOrCreateBlockComponentFactories() const;

    MCAPI ::std::vector<::std::string_view> getSupportedComponentIds(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> const& permutation,
        bool                                                                                         includeCustom
    ) const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>
    tryCreateComponent(
        ::std::string_view                    componentName,
        ::BlockSource&                        region,
        ::BlockPos                            position,
        ::Scripting::WeakLifetimeScope const& scope,
        bool                                  allowCustomComponent
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(
        ::Scripting::ModuleBindingBuilder&                                       moduleBuilder,
        ::Scripting::Version const&                                              scriptingVersion,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&                 componentTypeEnumBuilder,
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockComponents> const& blockComponents
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void*
    $ctor(::WeakRef<::ScriptModuleMinecraft::IScriptBlockCustomComponentReader const> customComponentReader);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
