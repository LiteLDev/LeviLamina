//Extra Part For Bedrock.hpp
#ifdef EXTRA_INCLUDE_PART_BEDROCK
// Include Headers or Declare Types Here

#else
// Add Member There
template <typename T>
class NonOwnerPointer;
struct PlatformRuntimeInfo;
class WorkerPoolManager{
    public:
    class PoolHandleInterface;
};
class PubSub{
    public:
    class Subscription;
};
class Threading{
public:
    template <typename T1, typename T2 = std::allocator<T1>>
    class ThreadLocalObject;
    template <typename T>
    class IAsyncResult;
    enum AsyncStatus;
};
#endif
