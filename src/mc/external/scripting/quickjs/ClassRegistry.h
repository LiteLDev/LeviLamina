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
    // symbol: ??0ClassRegistry@QuickJS@Scripting@@QEAA@XZ
    MCAPI ClassRegistry();

    // symbol: ?findClassByType@ClassRegistry@QuickJS@Scripting@@QEBAPEAVRegisteredClass@23@AEBVmeta_type@entt@@@Z
    MCAPI class Scripting::QuickJS::RegisteredClass* findClassByType(entt::meta_type const& type) const;

    // symbol: ?findEnumByType@ClassRegistry@QuickJS@Scripting@@QEBAPEAVRegisteredEnum@23@AEBVmeta_type@entt@@@Z
    MCAPI class Scripting::QuickJS::RegisteredEnum* findEnumByType(entt::meta_type const& type) const;

    // symbol: ?findErrorByType@ClassRegistry@QuickJS@Scripting@@QEBAPEAVRegisteredError@23@AEBVmeta_type@entt@@@Z
    MCAPI class Scripting::QuickJS::RegisteredError* findErrorByType(entt::meta_type const& type) const;

    // symbol:
    // ?findInterfaceByType@ClassRegistry@QuickJS@Scripting@@QEBAPEAVRegisteredInterface@23@AEBVmeta_type@entt@@@Z
    MCAPI class Scripting::QuickJS::RegisteredInterface* findInterfaceByType(entt::meta_type const& type) const;

    // symbol:
    // ?getNameForType@ClassRegistry@QuickJS@Scripting@@QEBA?AV?$optional@UTypeNameInfo@Scripting@@@std@@AEBUResolvedTypes@23@AEBVmeta_type@entt@@_N@Z
    MCAPI std::optional<struct Scripting::TypeNameInfo>
          getNameForType(struct Scripting::QuickJS::ResolvedTypes const&, entt::meta_type const&, bool) const;

    // symbol:
    // ?registerClass@ClassRegistry@QuickJS@Scripting@@QEAAAEAVRegisteredClass@23@PEAUJSContext@@AEBUClassBinding@3@_N@Z
    MCAPI class Scripting::QuickJS::RegisteredClass&
    registerClass(struct JSContext* ctx, struct Scripting::ClassBinding const&, bool);

    // symbol: ?registerEnum@ClassRegistry@QuickJS@Scripting@@QEAAXPEAUJSContext@@AEBUEnumBinding@3@@Z
    MCAPI void registerEnum(struct JSContext* ctx, struct Scripting::EnumBinding const&);

    // symbol:
    // ?registerError@ClassRegistry@QuickJS@Scripting@@QEAAAEAVRegisteredError@23@PEAUJSContext@@AEBUErrorBinding@3@@Z
    MCAPI class Scripting::QuickJS::RegisteredError&
    registerError(struct JSContext* ctx, struct Scripting::ErrorBinding const&);

    // symbol:
    // ?registerInterface@ClassRegistry@QuickJS@Scripting@@QEAAAEAVRegisteredInterface@23@PEAUJSContext@@AEBUInterfaceBinding@3@@Z
    MCAPI class Scripting::QuickJS::RegisteredInterface&
    registerInterface(struct JSContext* ctx, struct Scripting::InterfaceBinding const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_collectAllInterfaceProperties@ClassRegistry@QuickJS@Scripting@@AEAAXAEAV?$unordered_set@UPropertyBinding@Scripting@@UHashPropertyBinding@2@UEqualPropertyBinding@2@V?$allocator@UPropertyBinding@Scripting@@@std@@@std@@AEBUInterfaceBinding@3@@Z
    MCAPI void
    _collectAllInterfaceProperties(std::unordered_set<struct Scripting::PropertyBinding, struct Scripting::HashPropertyBinding, struct Scripting::EqualPropertyBinding, std::allocator<struct Scripting::PropertyBinding>>&, struct Scripting::InterfaceBinding const&);

    // symbol:
    // ?_collectAllProperties@ClassRegistry@QuickJS@Scripting@@AEAAXAEAV?$unordered_set@UPropertyBinding@Scripting@@UHashPropertyBinding@2@UEqualPropertyBinding@2@V?$allocator@UPropertyBinding@Scripting@@@std@@@std@@AEBUClassBinding@3@@Z
    MCAPI void
    _collectAllProperties(std::unordered_set<struct Scripting::PropertyBinding, struct Scripting::HashPropertyBinding, struct Scripting::EqualPropertyBinding, std::allocator<struct Scripting::PropertyBinding>>&, struct Scripting::ClassBinding const&);

    // symbol: ?_registerBakedProperties@ClassRegistry@QuickJS@Scripting@@AEAAXAEBUClassBinding@3@@Z
    MCAPI void _registerBakedProperties(struct Scripting::ClassBinding const&);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
