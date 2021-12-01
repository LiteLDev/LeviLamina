//Extra Part For Bedrock.hpp
#ifdef EXTRA_INCLUDE_PART_BEDROCK
// Include Headers or Declare Types Here

#else
// Add Member There
template <typename T>
class NonOwnerPointer;
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
};
#endif
