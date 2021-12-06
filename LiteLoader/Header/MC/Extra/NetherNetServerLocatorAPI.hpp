//Extra Part For NetherNetServerLocator.hpp
#ifdef EXTRA_INCLUDE_PART_NETHERNETSERVERLOCATOR
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct ServerData {
    ServerData() = delete;
    ServerData(ServerData const&) = delete;
    ServerData(ServerData const&&) = delete;
};

#endif
