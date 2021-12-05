//Extra Part For NetworkPeer.hpp
#ifdef EXTRA_INCLUDE_PART_NETWORKPEER
// Include Headers or Declare Types Here

#else
// Add Member There
public:
enum class Reliability : int {};
enum class DataStatus : int { OK,
                              BUSY };
struct NetworkStatus {
    int unk0;             //0
    int ping;             //4
    int avgping;          //8
    int unk12;            //12
    float packetloss;     //16
    float avgpacketloss;  //20
    double unk24;         //24
    double unk32;         //32
    double unk40;         //40
};

#endif
