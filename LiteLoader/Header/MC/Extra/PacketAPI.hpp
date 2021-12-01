//Extra Part For Packet.hpp
#ifdef EXTRA_INCLUDE_PART_PACKET
// Include Headers or Declare Types Here
class BinaryStream;
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
    : incompressible(!compress) {
}
inline Packet() {
}

#endif
