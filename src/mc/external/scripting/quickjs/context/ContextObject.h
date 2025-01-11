#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSModuleDef;
struct JSRuntime;
struct JSValue;
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk6fd6ad;
        ::ll::UntypedStorage<1, 1>  mUnkcaed09;
        // NOLINTEND

    public:
        // prevent constructor by default
        UnhandledPromiseRejectionEntry& operator=(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~UnhandledPromiseRejectionEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>    mUnk21a88e;
    ::ll::UntypedStorage<8, 8>    mUnka4780b;
    ::ll::UntypedStorage<8, 6768> mUnka99eed;
    ::ll::UntypedStorage<8, 144>  mUnk3d7cec;
    ::ll::UntypedStorage<8, 24>   mUnk99b67a;
    ::ll::UntypedStorage<8, 8>    mUnk880742;
    ::ll::UntypedStorage<8, 8>    mUnkeb8990;
    ::ll::UntypedStorage<8, 8>    mUnk8cc61a;
    ::ll::UntypedStorage<8, 8>    mUnkd3ef0c;
    ::ll::UntypedStorage<8, 8>    mUnk59aa18;
    ::ll::UntypedStorage<8, 16>   mUnk182a63;
    ::ll::UntypedStorage<8, 64>   mUnkd84617;
    ::ll::UntypedStorage<8, 8>    mUnkfbf45f;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextObject& operator=(ContextObject const&);
    ContextObject(ContextObject const&);
    ContextObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContextObject(
        ::Scripting::ContextId                                     contextId,
        ::JSContext*                                               jsContext,
        ::Scripting::WeakLifetimeScope                             scope,
        ::Scripting::ModuleBindingBundle&&                         bindings,
        ::std::unique_ptr<::Scripting::ScriptObjectFactory>&&      factory,
        ::std::unique_ptr<::Scripting::QuickJS::ObjectInspector>&& inspector,
        ::Scripting::IPrinter*                                     printer,
        ::Scripting::IDependencyLoader*                            loader,
        ::JSRuntime*                                               jsRuntime,
        ::Scripting::ContextConfig const&                          contextConfig
    );

    MCAPI void _bindGlobals(::Scripting::GlobalBinding const& global);

    MCAPI void _bindModules(::std::vector<::Scripting::ModuleBinding> const& modules);

    MCAPI void _resolvePromise(::JSValue jsResolutionFunc, ::entt::meta_any& arg);

    MCAPI void addUnhandledPromiseRejection(void* promise, ::std::string const& message, bool isHandled);

    MCAPI ::Scripting::ResultAny call(
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType> closureHandle,
        ::entt::meta_any*                                        args,
        uint                                                     argc,
        ::entt::meta_type const&                                 expectedReturnType
    );

    MCAPI ::Scripting::ResultAny
    getFutureResult(::Scripting::TypedObjectHandle<::Scripting::FutureType> futureHandle, ::entt::meta_type const&)
        const;

    MCAPI ::Scripting::TypeNameInfo getNameForType(::entt::meta_type const& type, bool allowUnknownTypes) const;

    MCAPI ::JSModuleDef* loadScriptAsModule(char const* moduleName);

    MCAPI ::Scripting::ResultAny run(::std::string const& scriptName, ::std::string const& scriptData);

    MCAPI ~ContextObject();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _bindClass(
        ::JSContext*                           ctx,
        ::JSModuleDef*                         jsModuleDef,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::QuickJS::RegisteredClass& registeredClass
    );

    MCAPI static void
    _bindError(::JSContext* ctx, ::JSModuleDef* moduleDef, ::Scripting::QuickJS::RegisteredError& registeredError);

    MCAPI static ::std::unique_ptr<::Scripting::AnyAndJSValue> _createConstant(
        ::JSContext*                           ctx,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::JSValue                              target,
        ::Scripting::ConstantFactory const&    constantCreator
    );

    MCAPI static void _createFunction(
        ::JSContext*                        ctx,
        ::JSValue                           jsValue,
        ::Scripting::FunctionBinding const& functionBinding,
        ::JSValue                           jsCtorVal,
        ::std::string const&                className
    );

    MCAPI static void _createGlobalFunction(::JSContext* ctx, ::Scripting::FunctionBinding const& functionBinding);

    MCAPI static void _createGlobalObject(
        ::JSContext*                           ctx,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::ObjectFactory const&      objectFactory
    );

    MCAPI static void _createIterator(
        ::JSContext*                           ctx,
        ::JSModuleDef*                         jsModuleDef,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::JSValue                              jsValue,
        ::Scripting::IteratorBinding&          iteratorBinding
    );

    MCAPI static void _createModuleConstant(
        ::JSContext*                           ctx,
        ::JSModuleDef*                         jsModuleDef,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::ConstantFactory const&    constantFactory
    );

    MCAPI static void _createModuleFunction(
        ::JSContext*                        ctx,
        ::JSModuleDef*                      jsModuleDef,
        ::Scripting::FunctionBinding const& functionBinding
    );

    MCAPI static void _createModuleObject(
        ::JSContext*                           ctx,
        ::JSModuleDef*                         jsModuleDef,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::ObjectFactory const&      objectFactory
    );

    MCAPI static void _createProperty(
        ::JSContext*                        ctx,
        ::JSValue                           jsValue,
        ::Scripting::PropertyBinding const& propertyBinding,
        ::std::string const&                className
    );

    MCAPI static int _initializeModuleBinding(
        ::JSContext*                           ctx,
        ::JSModuleDef*                         jsModuleDef,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::ModuleBinding const&      moduleBinding
    );

    MCAPI static int _moduleInitializer(::JSContext* ctx, ::JSModuleDef* jsModuleDef);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::ContextId                                     contextId,
        ::JSContext*                                               jsContext,
        ::Scripting::WeakLifetimeScope                             scope,
        ::Scripting::ModuleBindingBundle&&                         bindings,
        ::std::unique_ptr<::Scripting::ScriptObjectFactory>&&      factory,
        ::std::unique_ptr<::Scripting::QuickJS::ObjectInspector>&& inspector,
        ::Scripting::IPrinter*                                     printer,
        ::Scripting::IDependencyLoader*                            loader,
        ::JSRuntime*                                               jsRuntime,
        ::Scripting::ContextConfig const&                          contextConfig
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
