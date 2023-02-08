/**
 * @file  ServerStatsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerStatsPacket.
 *
 */
class ServerStatsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSTATSPACKET
public:
    class ServerStatsPacket& operator=(class ServerStatsPacket const &) = delete;
    ServerStatsPacket(class ServerStatsPacket const &) = delete;
    ServerStatsPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerStatsPacket();
    /**
     * @hash   708697290
     * @vftbl  1
     * @symbol  ?getId\@ServerStatsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -458467465
     * @vftbl  2
     * @symbol  ?getName\@ServerStatsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1110091824
     * @vftbl  3
     * @symbol  ?write\@ServerStatsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -31570544
     * @vftbl  6
     * @symbol  ?_read\@ServerStatsPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};