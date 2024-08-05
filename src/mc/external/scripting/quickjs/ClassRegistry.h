#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
struct JSContext;
// clang-format on

namespace Scripting::QuickJS {

class ClassRegistry {
public:
    // prevent constructor by default
    ClassRegistry& operator=(ClassRegistry const&);
    ClassRegistry(ClassRegistry const&);

public:
    // NOLINTBEGIN
    MCAPI ClassRegistry();

    MCAPI class Scripting::QuickJS::RegisteredClass* findClassByType(entt::meta_type const& type) const;

    MCAPI class Scripting::QuickJS::RegisteredEnum* findEnumByType(entt::meta_type const& type) const;

    MCAPI class Scripting::QuickJS::RegisteredError* findErrorByType(entt::meta_type const& type) const;

    MCAPI class Scripting::QuickJS::RegisteredInterface* findInterfaceByType(entt::meta_type const& type) const;

    MCAPI std::optional<struct Scripting::TypeNameInfo>
          getNameForType(struct Scripting::QuickJS::ResolvedTypes const&, entt::meta_type const&, bool) const;

    MCAPI class Scripting::QuickJS::RegisteredClass&
    registerClass(struct JSContext* ctx, struct Scripting::ClassBinding const&, bool);

    MCAPI void registerEnum(struct JSContext* ctx, struct Scripting::EnumBinding const&);

    MCAPI class Scripting::QuickJS::RegisteredError&
    registerError(struct JSContext* ctx, struct Scripting::ErrorBinding const&);

    MCAPI class Scripting::QuickJS::RegisteredInterface&
    registerInterface(struct JSContext* ctx, struct Scripting::InterfaceBinding const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _collectAllInterfaceProperties(std::unordered_set<struct Scripting::PropertyBinding, struct Scripting::HashPropertyBinding, struct Scripting::EqualPropertyBinding, std::allocator<struct Scripting::PropertyBinding>>&, struct Scripting::InterfaceBinding const&);

    MCAPI void
    _collectAllProperties(std::unordered_set<struct Scripting::PropertyBinding, struct Scripting::HashPropertyBinding, struct Scripting::EqualPropertyBinding, std::allocator<struct Scripting::PropertyBinding>>&, struct Scripting::ClassBinding const&);

    MCAPI void _registerBakedProperties(struct Scripting::ClassBinding const&);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
