#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"

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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ContextObject& operator=(ContextObject const&);
    ContextObject(ContextObject const&);
    ContextObject();

public:
    // NOLINTBEGIN
    MCAPI ContextObject(
        struct Scripting::ContextId                                  contextId,
        struct JSContext*                                            jsContext,
        class Scripting::WeakLifetimeScope                           scope,
        struct Scripting::ModuleBindingBundle&&                      bindings,
        std::unique_ptr<class Scripting::ScriptObjectFactory>&&      factory,
        std::unique_ptr<class Scripting::QuickJS::ObjectInspector>&& inspector,
        class Scripting::IPrinter*                                   printer,
        class Scripting::IDependencyLoader*                          loader,
        struct JSRuntime*                                            jsRuntime,
        struct Scripting::ContextConfig const&                       contextConfig
    );

    MCAPI void addUnhandledPromiseRejection(void* promise, std::string const& message, bool isHandled);

    MCAPI class Scripting::ResultAny call(
        struct Scripting::TypedObjectHandle<struct Scripting::ClosureType> closureHandle,
        entt::meta_any*                                                    args,
        uint                                                               argc,
        entt::meta_type const&                                             expectedReturnType
    );

    MCAPI class Scripting::ResultAny
    getFutureResult(struct Scripting::TypedObjectHandle<struct Scripting::FutureType> futureHandle, entt::meta_type const&)
        const;

    MCAPI struct Scripting::TypeNameInfo getNameForType(entt::meta_type const& type, bool allowUnknownTypes) const;

    MCAPI struct JSModuleDef* loadScriptAsModule(char const* moduleName);

    MCAPI void processUnhandledPromiseRejection();

    MCAPI class Scripting::ResultAny run(std::string const& scriptName, std::string const& scriptData);

    MCAPI ~ContextObject();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _bindGlobals(struct Scripting::GlobalBinding const& global);

    MCAPI void _bindModules(std::vector<struct Scripting::ModuleBinding> const& modules);

    MCAPI void _resolvePromise(struct JSValue jsResolutionFunc, entt::meta_any& arg);

    MCAPI static void _bindClass(
        struct JSContext*                          ctx,
        struct JSModuleDef*                        jsModuleDef,
        class Scripting::QuickJS::ContextUserData& contextData,
        class Scripting::QuickJS::RegisteredClass& registeredClass
    );

    MCAPI static void _bindError(
        struct JSContext*                          ctx,
        struct JSModuleDef*                        moduleDef,
        class Scripting::QuickJS::RegisteredError& registeredError
    );

    MCAPI static void _bindInterface(
        struct JSContext*                              ctx,
        struct JSModuleDef*                            moduleDef,
        class Scripting::QuickJS::RegisteredInterface& registeredInterface
    );

    MCAPI static std::unique_ptr<struct Scripting::AnyAndJSValue> _createConstant(
        struct JSContext*                          ctx,
        class Scripting::QuickJS::ContextUserData& contextData,
        struct JSValue                             target,
        struct Scripting::ConstantFactory const&   constantCreator
    );

    MCAPI static void _createFunction(
        struct JSContext*                        ctx,
        struct JSValue                           jsValue,
        struct Scripting::FunctionBinding const& functionBinding,
        struct JSValue                           jsCtorVal,
        std::string const&                       className
    );

    MCAPI static void _createGlobalObject(
        struct JSContext*                          ctx,
        class Scripting::QuickJS::ContextUserData& contextData,
        struct Scripting::ObjectFactory const&     objectFactory
    );

    MCAPI static void _createIterator(
        struct JSContext*                          ctx,
        struct JSModuleDef*                        jsModuleDef,
        class Scripting::QuickJS::ContextUserData& contextData,
        struct JSValue                             jsValue,
        struct Scripting::IteratorBinding&         iteratorBinding
    );

    MCAPI static void _createModuleObject(
        struct JSContext*                          ctx,
        struct JSModuleDef*                        jsModuleDef,
        class Scripting::QuickJS::ContextUserData& contextData,
        struct Scripting::ObjectFactory const&     objectFactory
    );

    MCAPI static void _createProperty(
        struct JSContext*                        ctx,
        struct JSValue                           jsValue,
        struct Scripting::PropertyBinding const& propertyBinding,
        std::string const&                       className
    );

    MCAPI static int _initializeModuleBinding(
        struct JSContext*                          ctx,
        struct JSModuleDef*                        jsModuleDef,
        class Scripting::QuickJS::ContextUserData& contextData,
        struct Scripting::ModuleBinding const&     moduleBinding
    );

    MCAPI static int _moduleInitializer(struct JSContext* ctx, struct JSModuleDef* jsModuleDef);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        struct Scripting::ContextId                                  contextId,
        struct JSContext*                                            jsContext,
        class Scripting::WeakLifetimeScope                           scope,
        struct Scripting::ModuleBindingBundle&&                      bindings,
        std::unique_ptr<class Scripting::ScriptObjectFactory>&&      factory,
        std::unique_ptr<class Scripting::QuickJS::ObjectInspector>&& inspector,
        class Scripting::IPrinter*                                   printer,
        class Scripting::IDependencyLoader*                          loader,
        struct JSRuntime*                                            jsRuntime,
        struct Scripting::ContextConfig const&                       contextConfig
    );

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
