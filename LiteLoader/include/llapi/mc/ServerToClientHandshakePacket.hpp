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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ServerToClientHandshakePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@ServerToClientHandshakePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ServerToClientHandshakePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@ServerToClientHandshakePacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERTOCLIENTHANDSHAKEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerToClientHandshakePacket();
#endif
    /**
     * @symbol ??0ServerToClientHandshakePacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ServerToClientHandshakePacket(std::string const &);
    /**
     * @symbol ??0ServerToClientHandshakePacket\@\@QEAA\@XZ
     */
    MCAPI ServerToClientHandshakePacket();

};
