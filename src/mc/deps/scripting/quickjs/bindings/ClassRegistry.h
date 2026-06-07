#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct EqualPropertyBinding; }
namespace Scripting { struct ErrorBinding; }
namespace Scripting { struct HashPropertyBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct PropertyBinding; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting::QuickJS { class RegisteredClass; }
namespace Scripting::QuickJS { class RegisteredError; }
namespace Scripting::QuickJS { class RegisteredInterface; }
namespace Scripting::QuickJS { struct ResolvedTypes; }
// clang-format on

namespace Scripting::QuickJS {

class ClassRegistry {
public:
    // ClassRegistry inner types declare
    // clang-format off
    struct TypeHash;
    // clang-format on

    // ClassRegistry inner types define
    struct TypeHash {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbd88e5;
    ::ll::UntypedStorage<8, 64> mUnkcb84ca;
    ::ll::UntypedStorage<8, 64> mUnk7668c8;
    ::ll::UntypedStorage<8, 64> mUnk167758;
    ::ll::UntypedStorage<8, 64> mUnk8a16c7;
    ::ll::UntypedStorage<8, 64> mUnk85c83f;
    ::ll::UntypedStorage<8, 64> mUnkfb655b;
    ::ll::UntypedStorage<8, 64> mUnkb30580;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassRegistry& operator=(ClassRegistry const&);
    ClassRegistry(ClassRegistry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClassRegistry();

    MCNAPI void _collectAllInterfaceProperties(
        ::std::unordered_set<
            ::Scripting::PropertyBinding,
            ::Scripting::HashPropertyBinding,
            ::Scripting::EqualPropertyBinding>& allProperties,
        ::Scripting::InterfaceBinding const&    interfaceBinding
    );

    MCNAPI void _collectAllProperties(
        ::std::unordered_set<
            ::Scripting::PropertyBinding,
            ::Scripting::HashPropertyBinding,
            ::Scripting::EqualPropertyBinding>& allProperties,
        ::Scripting::ClassBinding const&        classBinding
    );

    MCNAPI void _registerBakedProperties(::Scripting::ClassBinding const& classBinding);

    MCNAPI ::std::optional<::Scripting::TypeNameInfo> getNameForType(
        ::Scripting::QuickJS::ResolvedTypes const& resolvedTypes,
        ::entt::meta_type const&                   type,
        bool                                       allowUnknownTypes
    ) const;

    MCNAPI ::Scripting::QuickJS::RegisteredClass&
    registerClass(::JSContext* ctx, ::Scripting::ClassBinding const& classBinding, bool);

    MCNAPI void registerEnum(::JSContext* enumBinding, ::Scripting::EnumBinding const&);

    MCNAPI ::Scripting::QuickJS::RegisteredError&
    registerError(::JSContext* ctx, ::Scripting::ErrorBinding const& errorBinding);

    MCNAPI ::Scripting::QuickJS::RegisteredInterface&
    registerInterface(::JSContext* interfaceBinding, ::Scripting::InterfaceBinding const&);

    MCNAPI ~ClassRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
