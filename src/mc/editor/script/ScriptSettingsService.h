#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Services { class EditorSettingsServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSettingsService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptSettingsService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2048e5;
    ::ll::UntypedStorage<8, 8>  mUnke626b3;
    ::ll::UntypedStorage<8, 32> mUnk8931ad;
    ::ll::UntypedStorage<8, 32> mUnk1f47ab;
    ::ll::UntypedStorage<8, 32> mUnk2ceb90;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettingsService& operator=(ScriptSettingsService const&);
    ScriptSettingsService(ScriptSettingsService const&);
    ScriptSettingsService();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSettingsService(::Editor::ScriptModule::ScriptSettingsService&&);

    MCAPI ScriptSettingsService(
        ::Editor::Services::EditorSettingsServiceProvider* serviceProvider,
        ::Scripting::WeakLifetimeScope const&              scope
    );

    MCAPI ::Editor::ScriptModule::ScriptSettingsService& operator=(::Editor::ScriptModule::ScriptSettingsService&&);

    MCAPI ~ScriptSettingsService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptSettingsService> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptSettingsService&&);

    MCAPI void* $ctor(
        ::Editor::Services::EditorSettingsServiceProvider* serviceProvider,
        ::Scripting::WeakLifetimeScope const&              scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
