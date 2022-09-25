/**
 * @file  ClientToServerHandshakePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientToServerHandshakePacket.
 *
 */
class ClientToServerHandshakePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTTOSERVERHANDSHAKEPACKET
public:
    class ClientToServerHandshakePacket& operator=(class ClientToServerHandshakePacket const &) = delete;
    ClientToServerHandshakePacket(class ClientToServerHandshakePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ClientToServerHandshakePacket();
    /**
     * @hash   2006803096
     * @vftbl  1
     * @symbol ?getId@ClientToServerHandshakePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1571578555
     * @vftbl  2
     * @symbol ?getName@ClientToServerHandshakePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1571129474
     * @vftbl  3
     * @symbol ?write@ClientToServerHandshakePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1717860082
     * @vftbl  6
     * @symbol ?_read@ClientToServerHandshakePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1594230946
     * @symbol ??0ClientToServerHandshakePacket@@QEAA@XZ
     */
    MCAPI ClientToServerHandshakePacket();

};