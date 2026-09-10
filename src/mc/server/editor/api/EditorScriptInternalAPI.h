#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::API {

class EditorScriptInternalAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6c34da;
    ::ll::UntypedStorage<8, 40> mUnk26f8ed;
    ::ll::UntypedStorage<8, 32> mUnk72f340;
    ::ll::UntypedStorage<8, 32> mUnk24869d;
    ::ll::UntypedStorage<8, 8>  mUnk3d92dd;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorScriptInternalAPI& operator=(EditorScriptInternalAPI const&);
    EditorScriptInternalAPI();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorScriptInternalAPI(::Editor::API::EditorScriptInternalAPI const&);

    MCNAPI
    EditorScriptInternalAPI(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI ~EditorScriptInternalAPI();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::API::EditorScriptInternalAPI const&);

    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::API
