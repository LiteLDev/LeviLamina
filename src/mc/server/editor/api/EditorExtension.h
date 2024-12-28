#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/editor/script/ServerScriptPackType.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
namespace Editor::API { class EditorExtensionContext; }
namespace Editor::API { struct EditorExtensionOptionalParameters; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::API {

class EditorExtension : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk60f377;
    ::ll::UntypedStorage<8, 32> mUnk149d3f;
    ::ll::UntypedStorage<8, 32> mUnk4fc1bb;
    ::ll::UntypedStorage<8, 32> mUnkcd2171;
    ::ll::UntypedStorage<4, 4>  mUnkd042ea;
    ::ll::UntypedStorage<8, 16> mUnk155d3d;
    ::ll::UntypedStorage<8, 88> mUnk7bcc01;
    ::ll::UntypedStorage<8, 88> mUnk9025b6;
    ::ll::UntypedStorage<8, 40> mUnkc15389;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorExtension();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorExtension() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EditorExtension(::Editor::API::EditorExtension const&);

    MCAPI EditorExtension(
        ::std::string const&           name,
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
            activationClosure,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
                                                                          shutdownClosure,
        ::std::optional<::Editor::API::EditorExtensionOptionalParameters> options,
        ::Editor::API::ServerScriptPackType                               sourcePackType
    );

    MCAPI void _setDescription(::std::string const& value);

    MCAPI void _setNotes(::std::string const& value);

    MCAPI void _setToolGroup(::std::string const& value);

    MCAPI ::Scripting::Result<void> executeActivation(::Editor::API::EditorExtensionContext& context);

    MCAPI ::Scripting::Result<void> executeShutdown(::Editor::API::EditorExtensionContext& context);

    MCAPI ::Editor::API::EditorExtension& operator=(::Editor::API::EditorExtension const&);

    MCAPI void setTrackingScope(::Scripting::StrongTypedObjectHandle<::Editor::API::EditorExtension> object);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::API::EditorExtension> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::API::EditorExtension const&);

    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::API
