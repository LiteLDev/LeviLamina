/**
 * @file  EmotePacket.hpp
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
 * @brief MC class EmotePacket.
 *
 */
class EmotePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMOTEPACKET
public:
    class EmotePacket& operator=(class EmotePacket const &) = delete;
    EmotePacket(class EmotePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EmotePacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@EmotePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@EmotePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@EmotePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@EmotePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0EmotePacket\@\@QEAA\@XZ
     */
    MCAPI EmotePacket();
    /**
     * @symbol  ?isServerSide\@EmotePacket\@\@QEBA_NXZ
     */
    MCAPI bool isServerSide() const;
    /**
     * @symbol  ?setEmoteChatMute\@EmotePacket\@\@QEAAXXZ
     */
    MCAPI void setEmoteChatMute();
    /**
     * @symbol  ?setServerSide\@EmotePacket\@\@QEAAXXZ
     */
    MCAPI void setServerSide();

};