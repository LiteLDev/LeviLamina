/**
 * @file  DisconnectPacket.hpp
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
 * @brief MC class DisconnectPacket.
 *
 */
class DisconnectPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISCONNECTPACKET
public:
    class DisconnectPacket& operator=(class DisconnectPacket const &) = delete;
    DisconnectPacket(class DisconnectPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DisconnectPacket();
    /**
     * @hash   -1827177334
     * @vftbl  1
     * @symbol  ?getId\@DisconnectPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -138812745
     * @vftbl  2
     * @symbol  ?getName\@DisconnectPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -604117136
     * @vftbl  3
     * @symbol  ?write\@DisconnectPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1160214768
     * @vftbl  6
     * @symbol  ?_read\@DisconnectPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   908486560
     * @symbol  ??0DisconnectPacket\@\@QEAA\@XZ
     */
    MCAPI DisconnectPacket();
    /**
     * @hash   1154150882
     * @symbol  ??0DisconnectPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI DisconnectPacket(std::string const &, bool);

};