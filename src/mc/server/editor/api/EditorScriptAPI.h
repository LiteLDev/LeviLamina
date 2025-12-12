#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptProjectAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::API {

class EditorScriptAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkb8dbe7;
    ::ll::UntypedStorage<8, 32> mUnk4e6ce7;
    ::ll::UntypedStorage<8, 32> mUnk2079d7;
    ::ll::UntypedStorage<8, 32> mUnk2caeec;
    ::ll::UntypedStorage<8, 16> mUnk263bcc;
    ::ll::UntypedStorage<8, 16> mUnk74450d;
    ::ll::UntypedStorage<8, 8>  mUnk8907b6;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorScriptAPI& operator=(EditorScriptAPI const&);
    EditorScriptAPI(EditorScriptAPI const&);
    EditorScriptAPI();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorScriptAPI(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptProjectAfterEvents>
    _getAfterEvents() const;

    MCNAPI ::std::optional<::GeneratorType> _getWorldGeneratorType() const;

    MCNAPI ~EditorScriptAPI();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::API
