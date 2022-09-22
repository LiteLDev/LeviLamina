/**
 * @file  Packet.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ServerNetworkHandler.hpp"
class ReadOnlyBinaryStream;
class BinaryStream;
class ServerPlayer;
class NetworkIdentifier;

enum class PacketReliability {
    Relible,
    RelibleOrdered
};

#undef BEFORE_EXTRA

/**
 * @brief MC class Packet.
 *
 */
class Packet {

#define AFTER_EXTRA
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
#define DISABLE_CONSTRUCTOR_PREVENTION_PACKET
    inline Packet() {}
    class Packet& operator=(class Packet const&) = delete;
    Packet(class Packet const&) = delete;

    inline ServerPlayer* getPlayerFromPacket(ServerNetworkHandler* handler, NetworkIdentifier* netId)
    {
        return handler->getServerPlayer(*netId, dAccess<char>(this, 16));
    }
    inline StreamReadResult read(class ReadOnlyBinaryStream& binaryStream)
    {
        return _read(binaryStream);
    }
protected:
    std::string toDebugString() {
        return fmt::format("{}({})->{}", getName(), getId(), clientSubId);
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKET
public:
    class Packet& operator=(class Packet const &) = delete;
    Packet(class Packet const &) = delete;
    Packet() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~Packet();
    /**
     * @hash   799490161
     * @vftbl  1
     * @symbol ?getId@UpdateTradePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const = 0;
    /**
     * @hash   -21487858
     * @vftbl  2
     * @symbol ?getName@UpdateTradePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const = 0;
    /**
     * @hash   1878747727
     * @vftbl  3
     * @symbol ?write@UpdateTradePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const = 0;
    /**
     * @hash   291178377
     * @vftbl  4
     * @symbol ?readExtended@Packet@@UEAA?AUExtendedStreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @hash   1131847923
     * @vftbl  5
     * @symbol ?disallowBatching@Packet@@UEBA_NXZ
     */
    virtual bool disallowBatching() const;
    /**
     * @hash   1142874111
     * @vftbl  6
     * @symbol ?_read@UpdateTradePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &) = 0;
    /**
     * @hash   -943725859
     * @symbol ?handle@Packet@@QEAAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z
     */
    MCAPI void handle(class NetworkIdentifier const &, class NetEventCallback &, class std::shared_ptr<class Packet> &);
    /**
     * @hash   2105829311
     * @symbol ?readNoHeader@Packet@@QEAA_NAEAVReadOnlyBinaryStream@@AEBW4SubClientId@@AEAUExtendedStreamReadResult@@@Z
     */
    MCAPI bool readNoHeader(class ReadOnlyBinaryStream &, enum SubClientId const &, struct ExtendedStreamReadResult &);
    /**
     * @hash   360376525
     * @symbol ?writeWithHeader@Packet@@QEBAXW4SubClientId@@AEAVBinaryStream@@@Z
     */
    MCAPI void writeWithHeader(enum SubClientId, class BinaryStream &) const;

};