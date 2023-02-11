/**
 * @file  ServerSettingsResponsePacket.hpp
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
 * @brief MC class ServerSettingsResponsePacket.
 *
 */
class ServerSettingsResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSETTINGSRESPONSEPACKET
public:
    class ServerSettingsResponsePacket& operator=(class ServerSettingsResponsePacket const &) = delete;
    ServerSettingsResponsePacket(class ServerSettingsResponsePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerSettingsResponsePacket();
    /**
     * @hash   -1141124049
     * @vftbl  1
     * @symbol  ?getId\@ServerSettingsResponsePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1652276516
     * @vftbl  2
     * @symbol  ?getName\@ServerSettingsResponsePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1748676997
     * @vftbl  3
     * @symbol  ?write\@ServerSettingsResponsePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -733688613
     * @vftbl  6
     * @symbol  ?_read\@ServerSettingsResponsePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1541292107
     * @symbol  ??0ServerSettingsResponsePacket\@\@QEAA\@XZ
     */
    MCAPI ServerSettingsResponsePacket();

};