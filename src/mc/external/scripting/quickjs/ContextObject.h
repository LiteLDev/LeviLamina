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
        // symbol: ??1UnhandledPromiseRejectionEntry@ContextObject@QuickJS@Scripting@@QEAA@XZ
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
    // symbol:
    // ??0ContextObject@QuickJS@Scripting@@QEAA@UContextId@2@PEAUJSContext@@VWeakLifetimeScope@2@$$QEAUModuleBindingBundle@2@$$QEAV?$unique_ptr@VScriptObjectFactory@Scripting@@U?$default_delete@VScriptObjectFactory@Scripting@@@std@@@std@@$$QEAV?$unique_ptr@VObjectInspector@QuickJS@Scripting@@U?$default_delete@VObjectInspector@QuickJS@Scripting@@@std@@@8@$$QEAV?$unique_ptr@VIPrinter@Scripting@@U?$default_delete@VIPrinter@Scripting@@@std@@@8@PEAVIDependencyLoader@2@PEAUJSRuntime@@AEBUContextConfig@2@@Z
    MCAPI
    ContextObject(struct Scripting::ContextId, struct JSContext*, class Scripting::WeakLifetimeScope scope, struct Scripting::ModuleBindingBundle&& bindings, std::unique_ptr<class Scripting::ScriptObjectFactory>&& factory, std::unique_ptr<class Scripting::QuickJS::ObjectInspector>&&, std::unique_ptr<class Scripting::IPrinter>&&, class Scripting::IDependencyLoader* loader, struct JSRuntime*, struct Scripting::ContextConfig const&);

    // symbol:
    // ?addUnhandledPromiseRejection@ContextObject@QuickJS@Scripting@@QEAAXPEAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void addUnhandledPromiseRejection(void*, std::string const& message, bool);

    // symbol:
    // ?call@ContextObject@QuickJS@Scripting@@QEAA?AVResultAny@3@U?$TypedObjectHandle@UClosureType@Scripting@@@3@PEAVmeta_any@entt@@IAEBVmeta_type@7@@Z
    MCAPI class Scripting::ResultAny
    call(struct Scripting::TypedObjectHandle<struct Scripting::ClosureType>, entt::meta_any* args, uint argc, entt::meta_type const&);

    // symbol:
    // ?getFutureResult@ContextObject@QuickJS@Scripting@@QEBA?AVResultAny@3@U?$TypedObjectHandle@UFutureType@Scripting@@@3@AEBVmeta_type@entt@@@Z
    MCAPI class Scripting::ResultAny
    getFutureResult(struct Scripting::TypedObjectHandle<struct Scripting::FutureType>, entt::meta_type const&) const;

    // symbol: ?getNameForType@ContextObject@QuickJS@Scripting@@QEBA?AUTypeNameInfo@3@AEBVmeta_type@entt@@_N@Z
    MCAPI struct Scripting::TypeNameInfo getNameForType(entt::meta_type const&, bool) const;

    // symbol: ?loadScriptAsModule@ContextObject@QuickJS@Scripting@@QEAAPEAUJSModuleDef@@PEBD@Z
    MCAPI struct JSModuleDef* loadScriptAsModule(char const*);

    // symbol: ?processUnhandledPromiseRejection@ContextObject@QuickJS@Scripting@@QEAAXXZ
    MCAPI void processUnhandledPromiseRejection();

    // symbol:
    // ?run@ContextObject@QuickJS@Scripting@@QEAA?AVResultAny@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI class Scripting::ResultAny run(std::string const& scriptName, std::string const& scriptData);

    // symbol: ??1ContextObject@QuickJS@Scripting@@QEAA@XZ
    MCAPI ~ContextObject();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_bindGlobals@ContextObject@QuickJS@Scripting@@AEAAXAEBUGlobalBinding@3@@Z
    MCAPI void _bindGlobals(struct Scripting::GlobalBinding const&);

    // symbol:
    // ?_bindModules@ContextObject@QuickJS@Scripting@@AEAAXAEBV?$vector@UModuleBinding@Scripting@@V?$allocator@UModuleBinding@Scripting@@@std@@@std@@@Z
    MCAPI void _bindModules(std::vector<struct Scripting::ModuleBinding> const& modules);

    // symbol: ?_resolvePromise@ContextObject@QuickJS@Scripting@@AEAAXUJSValue@@AEAVmeta_any@entt@@@Z
    MCAPI void _resolvePromise(struct JSValue, entt::meta_any& arg);

    // symbol:
    // ?_bindClass@ContextObject@QuickJS@Scripting@@CAXPEAUJSContext@@PEAUJSModuleDef@@AEAVContextUserData@23@AEAVRegisteredClass@23@@Z
    MCAPI static void
    _bindClass(struct JSContext*, struct JSModuleDef*, class Scripting::QuickJS::ContextUserData&, class Scripting::QuickJS::RegisteredClass&);

    // symbol: ?_bindError@ContextObject@QuickJS@Scripting@@CAXPEAUJSContext@@PEAUJSModuleDef@@AEAVRegisteredError@23@@Z
    MCAPI static void
    _bindError(struct JSContext* ctx, struct JSModuleDef*, class Scripting::QuickJS::RegisteredError&);

    // symbol:
    // ?_bindInterface@ContextObject@QuickJS@Scripting@@CAXPEAUJSContext@@PEAUJSModuleDef@@AEAVRegisteredInterface@23@@Z
    MCAPI static void
    _bindInterface(struct JSContext* ctx, struct JSModuleDef*, class Scripting::QuickJS::RegisteredInterface&);

    // symbol:
    // ?_createConstant@ContextObject@QuickJS@Scripting@@CA?AV?$unique_ptr@UAnyAndJSValue@Scripting@@U?$default_delete@UAnyAndJSValue@Scripting@@@std@@@std@@PEAUJSContext@@AEAVContextUserData@23@UJSValue@@AEBUConstantFactory@3@@Z
    MCAPI static std::unique_ptr<struct Scripting::AnyAndJSValue>
    _createConstant(struct JSContext* ctx, class Scripting::QuickJS::ContextUserData&, struct JSValue target, struct Scripting::ConstantFactory const&);

    // symbol:
    // ?_createFunction@ContextObject@QuickJS@Scripting@@CAXPEAUJSContext@@UJSValue@@AEBUFunctionBinding@3@1AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void
    _createFunction(struct JSContext* ctx, struct JSValue, struct Scripting::FunctionBinding const&, struct JSValue, std::string const&);

    // symbol:
    // ?_createGlobalObject@ContextObject@QuickJS@Scripting@@CAXPEAUJSContext@@AEAVContextUserData@23@AEBUObjectFactory@3@@Z
    MCAPI static void
    _createGlobalObject(struct JSContext* ctx, class Scripting::QuickJS::ContextUserData&, struct Scripting::ObjectFactory const&);

    // symbol:
    // ?_createIterator@ContextObject@QuickJS@Scripting@@CAXPEAUJSContext@@PEAUJSModuleDef@@AEAVContextUserData@23@UJSValue@@AEAUIteratorBinding@3@@Z
    MCAPI static void
    _createIterator(struct JSContext*, struct JSModuleDef*, class Scripting::QuickJS::ContextUserData&, struct JSValue, struct Scripting::IteratorBinding&);

    // symbol:
    // ?_createModuleObject@ContextObject@QuickJS@Scripting@@CAXPEAUJSContext@@PEAUJSModuleDef@@AEAVContextUserData@23@AEBUObjectFactory@3@@Z
    MCAPI static void
    _createModuleObject(struct JSContext* ctx, struct JSModuleDef*, class Scripting::QuickJS::ContextUserData&, struct Scripting::ObjectFactory const&);

    // symbol:
    // ?_createProperty@ContextObject@QuickJS@Scripting@@CAXPEAUJSContext@@UJSValue@@AEBUPropertyBinding@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void
    _createProperty(struct JSContext* ctx, struct JSValue, struct Scripting::PropertyBinding const&, std::string const&);

    // symbol:
    // ?_initializeModuleBinding@ContextObject@QuickJS@Scripting@@CAHPEAUJSContext@@PEAUJSModuleDef@@AEAVContextUserData@23@AEBUModuleBinding@3@@Z
    MCAPI static int
    _initializeModuleBinding(struct JSContext* ctx, struct JSModuleDef*, class Scripting::QuickJS::ContextUserData&, struct Scripting::ModuleBinding const&);

    // symbol: ?_moduleInitializer@ContextObject@QuickJS@Scripting@@CAHPEAUJSContext@@PEAUJSModuleDef@@@Z
    MCAPI static int _moduleInitializer(struct JSContext* ctx, struct JSModuleDef*);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
