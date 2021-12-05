//Extra Part For Packet.hpp
#ifdef EXTRA_INCLUDE_PART_PACKET
// Include Headers or Declare Types Here
#include "ServerNetworkHandler.hpp"
class BinaryStream;
class ServerPlayer;
enum class PacketReliability {
    Relible,
    RelibleOrdered
};

#else
// Add Member There
public:
    unsigned unk2 = 2;                                                     // 8
    PacketReliability reliableOrdered = PacketReliability::RelibleOrdered; // 12
    unsigned char clientSubId = 0;                                         // 16
    uint64_t unk24 = 0;                                                    // 24
    uint64_t unk40 = 0;                                                    // 32
    uint32_t incompressible = 0;                                           // 40

    inline Packet(unsigned compress)
        : incompressible(!compress)
    { }

    inline Packet() {}

    ServerPlayer* getPlayerFromPacket(ServerNetworkHandler* handler, NetworkIdentifier* netId)
    {
        return SymCall("?_getServerPlayer@ServerNetworkHandler@@AEAAPEAVServerPlayer@@AEBVNetworkIdentifier@@E@Z",
            ServerPlayer*, ServerNetworkHandler*, NetworkIdentifier*, char)(handler, netId, dAccess<char>(this, 16));
    }

#endif
