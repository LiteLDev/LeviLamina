#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"

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
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct PropertyBinding; }
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
    enum class ImportAllowedResult : int {
        Success          = 0,
        FailRestricted   = 1,
        FailStaticImport = 2,
    };

    struct UnhandledPromiseRejectionEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkc8e476;
        ::ll::UntypedStorage<1, 1>  mUnkcaed09;
        // NOLINTEND

    public:
        // prevent constructor by default
        UnhandledPromiseRejectionEntry& operator=(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk21a88e;
    ::ll::UntypedStorage<8, 8>   mUnka4780b;
    ::ll::UntypedStorage<8, 816> mUnka99eed;
    ::ll::UntypedStorage<8, 144> mUnk3d7cec;
    ::ll::UntypedStorage<8, 24>  mUnk5457d8;
    ::ll::UntypedStorage<8, 8>   mUnkd8b07a;
    ::ll::UntypedStorage<8, 8>   mUnk4cff01;
    ::ll::UntypedStorage<8, 8>   mUnk8cc61a;
    ::ll::UntypedStorage<8, 8>   mUnk270325;
    ::ll::UntypedStorage<8, 8>   mUnk71fb76;
    ::ll::UntypedStorage<8, 16>  mUnk182a63;
    ::ll::UntypedStorage<8, 64>  mUnkd84617;
    ::ll::UntypedStorage<8, 8>   mUnkfbf45f;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextObject& operator=(ContextObject const&);
    ContextObject(ContextObject const&);
    ContextObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _resolvePromise(::JSValue jsResolutionFunc, ::entt::meta_any& arg);

    MCNAPI ::Scripting::ResultAny call(
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType> closureHandle,
        ::entt::meta_any*                                        args,
        uint                                                     argc,
        ::entt::meta_type const&                                 expectedReturnType
    );

    MCNAPI ::Scripting::QuickJS::ContextObject::ImportAllowedResult
    checkModuleImportAllowed(::std::string const& baseName, ::std::string const& moduleName, bool dynamicImport) const;

    MCNAPI void processUnhandledPromiseRejection();
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

    MCNAPI static ::JSValue _createConstructor(
        ::JSContext*         ctx,
        ::JSModuleDef*       jsModuleDef,
        ::JSValue            jsValue,
        ::std::string const& name,
        uint                 jsClassId
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

    MCNAPI static void _createProperty(
        ::JSContext*                        ctx,
        ::JSValue                           jsPrototype,
        ::Scripting::PropertyBinding const& propertyBinding,
        ::std::string const&                className
    );

    MCNAPI static int _moduleInitializer(::JSContext* ctx, ::JSModuleDef* jsModuleDef);
    // NOLINTEND
};

} // namespace Scripting::QuickJS
