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
namespace Scripting::QuickJS { class RegisteredEnum; }
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
    ::ll::UntypedStorage<8, 64> mUnk5c2545;
    ::ll::UntypedStorage<8, 64> mUnkcb84ca;
    ::ll::UntypedStorage<8, 64> mUnk7668c8;
    ::ll::UntypedStorage<8, 64> mUnk2841da;
    ::ll::UntypedStorage<8, 64> mUnke46347;
    ::ll::UntypedStorage<8, 64> mUnkc88dd4;
    ::ll::UntypedStorage<8, 64> mUnkb30580;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassRegistry& operator=(ClassRegistry const&);
    ClassRegistry(ClassRegistry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClassRegistry();

    MCAPI void _collectAllInterfaceProperties(
        ::std::unordered_set<
            ::Scripting::PropertyBinding,
            ::Scripting::HashPropertyBinding,
            ::Scripting::EqualPropertyBinding>& allProperties,
        ::Scripting::InterfaceBinding const&    interfaceBinding
    );

    MCAPI void _collectAllProperties(
        ::std::unordered_set<
            ::Scripting::PropertyBinding,
            ::Scripting::HashPropertyBinding,
            ::Scripting::EqualPropertyBinding>& allProperties,
        ::Scripting::ClassBinding const&        classBinding
    );

    MCAPI void _registerBakedProperties(::Scripting::ClassBinding const& classBinding);

    MCAPI ::Scripting::QuickJS::RegisteredClass* findClassByType(::entt::meta_type const& type) const;

    MCAPI ::Scripting::QuickJS::RegisteredEnum* findEnumByType(::entt::meta_type const& type) const;

    MCAPI ::Scripting::QuickJS::RegisteredError* findErrorByType(::entt::meta_type const& type) const;

    MCAPI ::Scripting::QuickJS::RegisteredInterface* findInterfaceByType(::entt::meta_type const& type) const;

    MCAPI ::std::optional<::Scripting::TypeNameInfo> getNameForType(
        ::Scripting::QuickJS::ResolvedTypes const& resolvedTypes,
        ::entt::meta_type const&                   type,
        bool                                       allowUnknownTypes
    ) const;

    MCAPI ::Scripting::QuickJS::RegisteredClass&
    registerClass(::JSContext* ctx, ::Scripting::ClassBinding const& classBinding, bool forModule);

    MCAPI void registerEnum(::JSContext* enumBinding, ::Scripting::EnumBinding const& ctx);

    MCAPI ::Scripting::QuickJS::RegisteredError&
    registerError(::JSContext* ctx, ::Scripting::ErrorBinding const& errorBinding);

    MCAPI ::Scripting::QuickJS::RegisteredInterface&
    registerInterface(::JSContext* interfaceBinding, ::Scripting::InterfaceBinding const& ctx);

    MCAPI ~ClassRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
