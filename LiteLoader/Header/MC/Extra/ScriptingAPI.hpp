//Extra Part For Scripting.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here


#else
// Add Member There
class ContextUserData {};
class Reflection {
public:
    class IFunction {};
    class IPropertyGetter {};
};
struct ObjectHandle {};
struct PropertyGetSet {};
class RuntimeUserData {};
template <typename T>
class StrongTypedObjectHandle;

class WeakLifetimeScope {
};
enum class HandleReference;

#endif
