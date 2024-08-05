#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPrinter; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct AnyAndJSValue; }
namespace Scripting { struct ClosureType; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct FutureType; }
namespace Scripting { struct GlobalBinding; }
namespace Scripting { struct IteratorBinding; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct PropertyBinding; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting::QuickJS { class ContextUserData; }
namespace Scripting::QuickJS { class ObjectInspector; }
namespace Scripting::QuickJS { class RegisteredClass; }
namespace Scripting::QuickJS { class RegisteredError; }
namespace Scripting::QuickJS { class RegisteredInterface; }
struct JSContext;
struct JSModuleDef;
struct JSRuntime;
struct JSValue;
// clang-format on

namespace Scripting::QuickJS {

class ContextObject {
public:
    // ContextObject inner types declare
    // clang-format off
    struct UnhandledPromiseRejectionEntry;
    // clang-format on

    // ContextObject inner types define
    struct UnhandledPromiseRejectionEntry {
    public:
        // prevent constructor by default
        UnhandledPromiseRejectionEntry& operator=(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry();

    public:
        // NOLINTBEGIN
        MCAPI ~UnhandledPromiseRejectionEntry();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ContextObject& operator=(ContextObject const&);
    ContextObject(ContextObject const&);
    ContextObject();

public:
    // NOLINTBEGIN
    MCAPI ContextObject(struct Scripting::ContextId, struct JSContext*, class Scripting::WeakLifetimeScope scope, struct Scripting::ModuleBindingBundle&& bindings, std::unique_ptr<class Scripting::ScriptObjectFactory>&& factory, std::unique_ptr<class Scripting::QuickJS::ObjectInspector>&&, class Scripting::IPrinter*, class Scripting::IDependencyLoader* loader, struct JSRuntime*, struct Scripting::ContextConfig const&);

    MCAPI void addUnhandledPromiseRejection(void*, std::string const& message, bool);

    MCAPI class Scripting::ResultAny
    call(struct Scripting::TypedObjectHandle<struct Scripting::ClosureType>, entt::meta_any* args, uint argc, entt::meta_type const&);

    MCAPI class Scripting::ResultAny
    getFutureResult(struct Scripting::TypedObjectHandle<struct Scripting::FutureType>, entt::meta_type const&) const;

    MCAPI struct Scripting::TypeNameInfo getNameForType(entt::meta_type const&, bool) const;

    MCAPI struct JSModuleDef* loadScriptAsModule(char const*);

    MCAPI void processUnhandledPromiseRejection();

    MCAPI class Scripting::ResultAny run(std::string const& scriptName, std::string const& scriptData);

    MCAPI ~ContextObject();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _bindGlobals(struct Scripting::GlobalBinding const&);

    MCAPI void _bindModules(std::vector<struct Scripting::ModuleBinding> const& modules);

    MCAPI void _resolvePromise(struct JSValue, entt::meta_any& arg);

    MCAPI static void
    _bindClass(struct JSContext*, struct JSModuleDef*, class Scripting::QuickJS::ContextUserData&, class Scripting::QuickJS::RegisteredClass&);

    MCAPI static void
    _bindError(struct JSContext* ctx, struct JSModuleDef*, class Scripting::QuickJS::RegisteredError&);

    MCAPI static void
    _bindInterface(struct JSContext* ctx, struct JSModuleDef*, class Scripting::QuickJS::RegisteredInterface&);

    MCAPI static std::unique_ptr<struct Scripting::AnyAndJSValue>
    _createConstant(struct JSContext* ctx, class Scripting::QuickJS::ContextUserData&, struct JSValue target, struct Scripting::ConstantFactory const&);

    MCAPI static void
    _createFunction(struct JSContext* ctx, struct JSValue, struct Scripting::FunctionBinding const&, struct JSValue, std::string const&);

    MCAPI static void
    _createGlobalObject(struct JSContext* ctx, class Scripting::QuickJS::ContextUserData&, struct Scripting::ObjectFactory const&);

    MCAPI static void
    _createIterator(struct JSContext*, struct JSModuleDef*, class Scripting::QuickJS::ContextUserData&, struct JSValue, struct Scripting::IteratorBinding&);

    MCAPI static void
    _createModuleObject(struct JSContext* ctx, struct JSModuleDef*, class Scripting::QuickJS::ContextUserData&, struct Scripting::ObjectFactory const&);

    MCAPI static void
    _createProperty(struct JSContext* ctx, struct JSValue, struct Scripting::PropertyBinding const&, std::string const&);

    MCAPI static int
    _initializeModuleBinding(struct JSContext* ctx, struct JSModuleDef*, class Scripting::QuickJS::ContextUserData&, struct Scripting::ModuleBinding const&);

    MCAPI static int _moduleInitializer(struct JSContext* ctx, struct JSModuleDef*);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
