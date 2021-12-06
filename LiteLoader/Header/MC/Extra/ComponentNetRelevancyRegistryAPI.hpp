//Extra Part For ComponentNetRelevancyRegistry.hpp
#ifdef EXTRA_INCLUDE_PART_COMPONENTNETRELEVANCYREGISTRY
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct NetSerializationCallbacks {
    NetSerializationCallbacks() = delete;
    NetSerializationCallbacks(NetSerializationCallbacks const&) = delete;
    NetSerializationCallbacks(NetSerializationCallbacks const&&) = delete;
};

#endif
