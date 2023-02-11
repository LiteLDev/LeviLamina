/**
 * @file  ServerToClientHandshakePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerToClientHandshakePacket.
 *
 */
class ServerToClientHandshakePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[32];
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERTOCLIENTHANDSHAKEPACKET
public:
    class ServerToClientHandshakePacket& operator=(class ServerToClientHandshakePacket const &) = delete;
    ServerToClientHandshakePacket(class ServerToClientHandshakePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerToClientHandshakePacket();
    /**
     * @hash   1201533464
     * @vftbl  1
     * @symbol  ?getId\@ServerToClientHandshakePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -2024526651
     * @vftbl  2
     * @symbol  ?getName\@ServerToClientHandshakePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   487575010
     * @vftbl  3
     * @symbol  ?write\@ServerToClientHandshakePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   381940626
     * @vftbl  6
     * @symbol  ?_read\@ServerToClientHandshakePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   935153410
     * @symbol  ??0ServerToClientHandshakePacket\@\@QEAA\@XZ
     */
    MCAPI ServerToClientHandshakePacket();
    /**
     * @hash   2106685503
     * @symbol  ??0ServerToClientHandshakePacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ServerToClientHandshakePacket(std::string const &);

};