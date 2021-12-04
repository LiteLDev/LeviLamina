//Extra Part For Scripting.hpp
#ifdef EXTRA_INCLUDE_PART_SCRIPTING
// Include Headers or Declare Types Here

#else
// Add Member There
struct ArrayProxy;
template <typename T>
class ClassBindingBuilder;
struct ContextId;
class ContextUserData;
struct Error;
enum HandleReference;
class IDebuggerController;
class IModuleBindingFactory;
class IRuntime;
class LifetimeRegistry;
class ModuleBindingBuilder;
struct ModuleDescriptor;
struct ObjectHandle;
struct PropertyGetSet;
class Reflection {
public:
    class IFunction;
    class IPropertyGetter;
};
template <typename T>
class Result;
class ResultAny;
class StrongObjectHandle;
struct JSON;
template <typename T>
class TypedScriptClosure;
class RuntimeUserData;
struct ScriptContextResult;
class ScriptObjectFactory;
template <typename T>
class ScriptPromise;
template <typename T>
class StrongTypedObjectHandle;
template <typename T>
struct TypedObjectHandle;
struct Version;
class WeakLifetimeScope;
class WeakObjectHandle;
template <typename T>
class WeakTypedObjectHandle;
class ResultAny;
#endif
