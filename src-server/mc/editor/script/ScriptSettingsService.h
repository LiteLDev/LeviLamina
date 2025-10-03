#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSettingsService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptSettingsService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2048e5;
    ::ll::UntypedStorage<8, 8>  mUnke626b3;
    ::ll::UntypedStorage<8, 32> mUnkc35cdf;
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
    MCNAPI ScriptSettingsService(::Editor::ScriptModule::ScriptSettingsService&&);

    MCNAPI ::Editor::ScriptModule::ScriptSettingsService& operator=(::Editor::ScriptModule::ScriptSettingsService&&);

    MCNAPI ~ScriptSettingsService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptSettingsService&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
