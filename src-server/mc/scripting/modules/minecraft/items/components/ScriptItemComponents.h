#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentReader; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct SupportedScriptComponentFactoriesEntry; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkcea8fd;
    ::ll::UntypedStorage<8, 16> mUnkdbb30f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemComponents& operator=(ScriptItemComponents const&);
    ScriptItemComponents(ScriptItemComponents const&);
    ScriptItemComponents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemComponents(
        ::BaseGameVersion const&                                                   version,
        ::std::string const&                                                       prerelease,
        ::WeakRef<::ScriptModuleMinecraft::IScriptItemCustomComponentReader const> customComponentReader
    );

    MCNAPI ::std::vector<::std::string_view> getSupportedItemComponentIds(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        bool                                                                         includeCustom
    );

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>
    tryCreateComponent(
        ::std::string_view                                                             componentName,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Scripting::WeakLifetimeScope const&                                          scope,
        bool                                                                           includeCustom
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::
        unordered_map<::std::string_view, ::std::shared_ptr<::ScriptModuleMinecraft::IScriptItemComponentFactory>>
        _getSupportedNativeItemComponents(
            ::std::vector<::ScriptModuleMinecraft::SupportedScriptComponentFactoriesEntry> const&
                                     supportedComponentTypeNames,
            ::BaseGameVersion const& version,
            ::std::string const&     prerelease
        );

    MCNAPI static void bind(
        ::Scripting::ModuleBindingBuilder&                       moduleBuilder,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BaseGameVersion const&                                                   version,
        ::std::string const&                                                       prerelease,
        ::WeakRef<::ScriptModuleMinecraft::IScriptItemCustomComponentReader const> customComponentReader
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
