//Extra Part For Scripting.hpp
#ifdef EXTRA_INCLUDE_PART_SCRIPTING
// Include Headers or Declare Types Here

#else
// Add Member There
template <typename T0>
class Result {
public:
    Result() = delete;
    Result(Result const&) = delete;
    Result(Result const&&) = delete;
};
class ContextUserData {
public:
    ContextUserData() = delete;
    ContextUserData(ContextUserData const&) = delete;
    ContextUserData(ContextUserData const&&) = delete;
};
class ModuleBindingBuilder {
public:
    ModuleBindingBuilder() = delete;
    ModuleBindingBuilder(ModuleBindingBuilder const&) = delete;
    ModuleBindingBuilder(ModuleBindingBuilder const&&) = delete;
};
struct Error {
    Error() = delete;
    Error(Error const&) = delete;
    Error(Error const&&) = delete;
};
struct ArrayProxy {
    ArrayProxy() = delete;
    ArrayProxy(ArrayProxy const&) = delete;
    ArrayProxy(ArrayProxy const&&) = delete;
};
class StrongObjectHandle {
public:
    StrongObjectHandle() = delete;
    StrongObjectHandle(StrongObjectHandle const&) = delete;
    StrongObjectHandle(StrongObjectHandle const&&) = delete;
};
class WeakObjectHandle {
public:
    WeakObjectHandle() = delete;
    WeakObjectHandle(WeakObjectHandle const&) = delete;
    WeakObjectHandle(WeakObjectHandle const&&) = delete;
};
template <typename T0>
class WeakTypedObjectHandle {
public:
    WeakTypedObjectHandle() = delete;
    WeakTypedObjectHandle(WeakTypedObjectHandle const&) = delete;
    WeakTypedObjectHandle(WeakTypedObjectHandle const&&) = delete;
};
template <typename T0>
class ClassBindingBuilder {
public:
    ClassBindingBuilder() = delete;
    ClassBindingBuilder(ClassBindingBuilder const&) = delete;
    ClassBindingBuilder(ClassBindingBuilder const&&) = delete;
};
struct JSON {
    JSON() = delete;
    JSON(JSON const&) = delete;
    JSON(JSON const&&) = delete;
};
class LifetimeRegistry {
public:
    LifetimeRegistry() = delete;
    LifetimeRegistry(LifetimeRegistry const&) = delete;
    LifetimeRegistry(LifetimeRegistry const&&) = delete;
};
class ScriptObjectFactory {
public:
    ScriptObjectFactory() = delete;
    ScriptObjectFactory(ScriptObjectFactory const&) = delete;
    ScriptObjectFactory(ScriptObjectFactory const&&) = delete;
};
template <typename T0>
class StrongTypedObjectHandle {
public:
    StrongTypedObjectHandle() = delete;
    StrongTypedObjectHandle(StrongTypedObjectHandle const&) = delete;
    StrongTypedObjectHandle(StrongTypedObjectHandle const&&) = delete;
};
struct ModuleDescriptor {
    ModuleDescriptor() = delete;
    ModuleDescriptor(ModuleDescriptor const&) = delete;
    ModuleDescriptor(ModuleDescriptor const&&) = delete;
};
struct PropertyGetSet {
    PropertyGetSet() = delete;
    PropertyGetSet(PropertyGetSet const&) = delete;
    PropertyGetSet(PropertyGetSet const&&) = delete;
};
struct ContextId {
    ContextId() = delete;
    ContextId(ContextId const&) = delete;
    ContextId(ContextId const&&) = delete;
};
struct ObjectHandle {
    ObjectHandle() = delete;
    ObjectHandle(ObjectHandle const&) = delete;
    ObjectHandle(ObjectHandle const&&) = delete;
};
class WeakLifetimeScope {
public:
    WeakLifetimeScope() = delete;
    WeakLifetimeScope(WeakLifetimeScope const&) = delete;
    WeakLifetimeScope(WeakLifetimeScope const&&) = delete;
};
class IRuntime {
public:
    IRuntime() = delete;
    IRuntime(IRuntime const&) = delete;
    IRuntime(IRuntime const&&) = delete;
};
template <typename T0>
class ScriptPromise {
public:
    ScriptPromise() = delete;
    ScriptPromise(ScriptPromise const&) = delete;
    ScriptPromise(ScriptPromise const&&) = delete;
};
class RuntimeUserData {
public:
    RuntimeUserData() = delete;
    RuntimeUserData(RuntimeUserData const&) = delete;
    RuntimeUserData(RuntimeUserData const&&) = delete;
};
struct Version {
    Version() = delete;
    Version(Version const&) = delete;
    Version(Version const&&) = delete;
};
struct ScriptContextResult {
    ScriptContextResult() = delete;
    ScriptContextResult(ScriptContextResult const&) = delete;
    ScriptContextResult(ScriptContextResult const&&) = delete;
};
class ResultAny {
public:
    ResultAny() = delete;
    ResultAny(ResultAny const&) = delete;
    ResultAny(ResultAny const&&) = delete;
};
namespace Reflection {
class IFunction {
public:
    IFunction() = delete;
    IFunction(IFunction const&) = delete;
    IFunction(IFunction const&&) = delete;
};
} // namespace Reflection

class IModuleBindingFactory {
public:
    IModuleBindingFactory() = delete;
    IModuleBindingFactory(IModuleBindingFactory const&) = delete;
    IModuleBindingFactory(IModuleBindingFactory const&&) = delete;
};
template <typename T0>
class TypedScriptClosure {
public:
    TypedScriptClosure() = delete;
    TypedScriptClosure(TypedScriptClosure const&) = delete;
    TypedScriptClosure(TypedScriptClosure const&&) = delete;
};
class IDebuggerController {
public:
    IDebuggerController() = delete;
    IDebuggerController(IDebuggerController const&) = delete;
    IDebuggerController(IDebuggerController const&&) = delete;
};
template <typename T0>
struct TypedObjectHandle {
    TypedObjectHandle() = delete;
    TypedObjectHandle(TypedObjectHandle const&) = delete;
    TypedObjectHandle(TypedObjectHandle const&&) = delete;
};
enum HandleReference;

#endif
