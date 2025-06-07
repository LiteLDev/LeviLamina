#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"

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
namespace Scripting { struct EnumBinding; }
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
        ::ll::UntypedStorage<8, 192> mUnkc8e476;
        ::ll::UntypedStorage<1, 1>   mUnkcaed09;
        // NOLINTEND

    public:
        // prevent constructor by default
        UnhandledPromiseRejectionEntry& operator=(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~UnhandledPromiseRejectionEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>    mUnk21a88e;
    ::ll::UntypedStorage<8, 8>    mUnka4780b;
    ::ll::UntypedStorage<8, 6912> mUnka99eed;
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
    MCNAPI ContextObject(
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

    MCNAPI void _bindGlobals(::Scripting::GlobalBinding const& global);

    MCNAPI void _bindModules(::std::vector<::Scripting::ModuleBinding> const& modules);

    MCNAPI void _bindPrint(::JSContext* ctx);

    MCNAPI ::JSModuleDef* _evalScriptAsModule(::std::string const& moduleName, ::std::string const& moduleScript);

    MCNAPI void _resolvePromise(::JSValue jsResolutionFunc, ::entt::meta_any& arg);

    MCNAPI void addUnhandledPromiseRejection(void* promise, ::entt::meta_any rejection, bool isHandled);

    MCNAPI ::Scripting::ResultAny call(
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType> closureHandle,
        ::entt::meta_any*                                        args,
        uint                                                     argc,
        ::entt::meta_type const&                                 expectedReturnType
    );

    MCNAPI ::Scripting::ResultAny getFutureResult(
        ::Scripting::TypedObjectHandle<::Scripting::FutureType> futureHandle,
        ::entt::meta_type const&
    ) const;

    MCNAPI ::Scripting::TypeNameInfo getNameForType(::entt::meta_type const& type, bool allowUnknownTypes) const;

    MCNAPI bool isModuleImportAllowed(::std::string const& baseName, ::std::string const& moduleName) const;

    MCNAPI ::JSModuleDef* loadScriptAsModule(::std::string const& moduleName);

    MCNAPI void processUnhandledPromiseRejection();

    MCNAPI ::Scripting::ResultAny run(::std::string const& scriptName, ::std::string const& scriptData);

    MCNAPI ~ContextObject();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _bindClass(
        ::JSContext*                           ctx,
        ::JSModuleDef*                         jsModuleDef,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::QuickJS::RegisteredClass& registeredClass
    );

    MCNAPI static void
    _bindError(::JSContext* ctx, ::JSModuleDef* moduleDef, ::Scripting::QuickJS::RegisteredError& registeredError);

    MCNAPI static ::std::unique_ptr<::Scripting::AnyAndJSValue> _createConstant(
        ::JSContext*                           ctx,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::JSValue                              target,
        ::Scripting::ConstantFactory const&    constantCreator
    );

    MCNAPI static ::std::unique_ptr<::Scripting::AnyAndJSValue> _createEnumReverseConstant(
        ::JSContext*                           ctx,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::JSValue                              enumObj,
        ::Scripting::EnumBinding const&        enumBinding,
        ::Scripting::ConstantFactory const&    constantBinding
    );

    MCNAPI static void _createFunction(
        ::JSContext*                        ctx,
        ::JSValue                           jsValue,
        ::Scripting::FunctionBinding const& functionBinding,
        ::JSValue                           jsCtorVal,
        ::std::string const&                className
    );

    MCNAPI static void _createGlobalEnum(
        ::JSContext*                           ctx,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::EnumBinding const&        enumBinding
    );

    MCNAPI static void _createGlobalFunction(::JSContext* ctx, ::Scripting::FunctionBinding const& functionBinding);

    MCNAPI static void _createGlobalObject(
        ::JSContext*                           ctx,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::ObjectFactory const&      objectFactory
    );

    MCNAPI static void _createIterator(
        ::JSContext*                           ctx,
        ::JSModuleDef*                         jsModuleDef,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::JSValue                              jsValue,
        ::Scripting::IteratorBinding&          iteratorBinding
    );

    MCNAPI static void _createModuleEnum(
        ::JSContext*                           ctx,
        ::JSModuleDef*                         jsModuleDef,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::EnumBinding const&        enumBinding
    );

    MCNAPI static void _createModuleFunction(
        ::JSContext*                        ctx,
        ::JSModuleDef*                      jsModuleDef,
        ::Scripting::FunctionBinding const& functionBinding
    );

    MCNAPI static void _createModuleObject(
        ::JSContext*                           ctx,
        ::JSModuleDef*                         jsModuleDef,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::ObjectFactory const&      objectFactory
    );

    MCNAPI static void _createProperty(
        ::JSContext*                        ctx,
        ::JSValue                           jsPrototype,
        ::Scripting::PropertyBinding const& propertyBinding,
        ::std::string const&                className
    );

    MCNAPI static int _initializeModuleBinding(
        ::JSContext*                           ctx,
        ::JSModuleDef*                         jsModuleDef,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::ModuleBinding const&      moduleBinding
    );

    MCNAPI static int _moduleInitializer(::JSContext* ctx, ::JSModuleDef* jsModuleDef);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
