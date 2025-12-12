#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/editor/script/ServerScriptPackType.h"

// auto generated forward declare list
// clang-format off
namespace Editor::API { class EditorExtensionContext; }
namespace Editor::API { struct EditorExtensionOptionalParameters; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::API {

class EditorExtension : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk60f377;
    ::ll::UntypedStorage<8, 32>  mUnk149d3f;
    ::ll::UntypedStorage<8, 32>  mUnk4fc1bb;
    ::ll::UntypedStorage<8, 32>  mUnkcd2171;
    ::ll::UntypedStorage<4, 4>   mUnkd042ea;
    ::ll::UntypedStorage<8, 16>  mUnk155d3d;
    ::ll::UntypedStorage<8, 248> mUnk7bcc01;
    ::ll::UntypedStorage<8, 248> mUnk9025b6;
    ::ll::UntypedStorage<8, 40>  mUnkc15389;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorExtension();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorExtension() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorExtension(::Editor::API::EditorExtension const&);

    MCNAPI EditorExtension(
        ::std::string const&           name,
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
            activationClosure,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
                                                                          shutdownClosure,
        ::std::optional<::Editor::API::EditorExtensionOptionalParameters> options,
        ::Editor::API::ServerScriptPackType                               sourcePackType
    );

    MCNAPI void _setDescription(::std::string const& value);

    MCNAPI void _setNotes(::std::string const& value);

    MCNAPI void _setToolGroup(::std::string const& value);

    MCNAPI ::Scripting::Result_deprecated<void> executeActivation(::Editor::API::EditorExtensionContext& context);

    MCNAPI ::Scripting::Result_deprecated<void> executeShutdown(::Editor::API::EditorExtensionContext& context);

    MCNAPI ::Editor::API::EditorExtension& operator=(::Editor::API::EditorExtension const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::API::EditorExtension const&);

    MCNAPI void* $ctor(
        ::std::string const&           name,
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
            activationClosure,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
                                                                          shutdownClosure,
        ::std::optional<::Editor::API::EditorExtensionOptionalParameters> options,
        ::Editor::API::ServerScriptPackType                               sourcePackType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::API
