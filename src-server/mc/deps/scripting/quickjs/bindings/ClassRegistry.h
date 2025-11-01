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
    struct TypeHash {
    };
    
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
    MCNAPI ClassRegistry();

    MCNAPI void _collectAllInterfaceProperties(::std::unordered_set<::Scripting::PropertyBinding, ::Scripting::HashPropertyBinding, ::Scripting::EqualPropertyBinding>& allProperties, ::Scripting::InterfaceBinding const& interfaceBinding);

    MCNAPI void _collectAllProperties(::std::unordered_set<::Scripting::PropertyBinding, ::Scripting::HashPropertyBinding, ::Scripting::EqualPropertyBinding>& allProperties, ::Scripting::ClassBinding const& classBinding);

    MCNAPI void _registerBakedProperties(::Scripting::ClassBinding const& classBinding);

    MCNAPI ::Scripting::QuickJS::RegisteredClass* findClassByType(::entt::meta_type const& type) const;

    MCNAPI ::Scripting::QuickJS::RegisteredEnum* findEnumByType(::entt::meta_type const& type) const;

    MCNAPI ::Scripting::QuickJS::RegisteredError* findErrorByType(::entt::meta_type const& type) const;

    MCNAPI ::Scripting::QuickJS::RegisteredInterface* findInterfaceByType(::entt::meta_type const& type) const;

    MCNAPI ::std::optional<::Scripting::TypeNameInfo> getNameForType(::Scripting::QuickJS::ResolvedTypes const& resolvedTypes, ::entt::meta_type const& type, bool allowUnknownTypes) const;

    MCNAPI ::Scripting::QuickJS::RegisteredClass& registerClass(::JSContext* ctx, ::Scripting::ClassBinding const& classBinding, bool forModule);

    MCNAPI void registerEnum(::JSContext* ctx, ::Scripting::EnumBinding const& enumBinding);

    MCNAPI ::Scripting::QuickJS::RegisteredError& registerError(::JSContext* ctx, ::Scripting::ErrorBinding const& errorBinding);

    MCNAPI ::Scripting::QuickJS::RegisteredInterface& registerInterface(::JSContext* ctx, ::Scripting::InterfaceBinding const& interfaceBinding);

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

}
