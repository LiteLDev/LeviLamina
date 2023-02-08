/**
 * @file  SetDefaultGameTypePacket.hpp
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
 * @brief MC class SetDefaultGameTypePacket.
 *
 */
class SetDefaultGameTypePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETDEFAULTGAMETYPEPACKET
public:
    class SetDefaultGameTypePacket& operator=(class SetDefaultGameTypePacket const &) = delete;
    SetDefaultGameTypePacket(class SetDefaultGameTypePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetDefaultGameTypePacket();
    /**
     * @hash   -221500773
     * @vftbl  1
     * @symbol  ?getId\@SetDefaultGameTypePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1231087288
     * @vftbl  2
     * @symbol  ?getName\@SetDefaultGameTypePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1052718145
     * @vftbl  3
     * @symbol  ?write\@SetDefaultGameTypePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   889005935
     * @vftbl  6
     * @symbol  ?_read\@SetDefaultGameTypePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   568852767
     * @symbol  ??0SetDefaultGameTypePacket\@\@QEAA\@XZ
     */
    MCAPI SetDefaultGameTypePacket();
    /**
     * @hash   -302348438
     * @symbol  ??0SetDefaultGameTypePacket\@\@QEAA\@W4GameType\@\@\@Z
     */
    MCAPI SetDefaultGameTypePacket(enum class GameType);

};