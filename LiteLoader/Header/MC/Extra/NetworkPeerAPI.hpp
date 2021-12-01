//Extra Part For NetworkPeer.hpp
#ifdef EXTRA_INCLUDE_PART_NETWORKPEER
// Include Headers or Declare Types Here

#else
// Add Member There

enum class Reliability : int {};
enum class DataStatus : int { OK,
                              BUSY };
struct NetworkStatus {
    int level;
    int ping, avgping;
    double packetloss, avgpacketloss;
    char pkt[64];
};

#endif
