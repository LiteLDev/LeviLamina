/**
 * @file  PlayerAuthInputPacket.hpp
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
 * @brief MC class PlayerAuthInputPacket.
 *
 */
class PlayerAuthInputPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
enum class InputData;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERAUTHINPUTPACKET
public:
    class PlayerAuthInputPacket& operator=(class PlayerAuthInputPacket const &) = delete;
    PlayerAuthInputPacket(class PlayerAuthInputPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayerAuthInputPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@PlayerAuthInputPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@PlayerAuthInputPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@PlayerAuthInputPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@PlayerAuthInputPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0PlayerAuthInputPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerAuthInputPacket();
    /**
     * @symbol  ??0PlayerAuthInputPacket\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI PlayerAuthInputPacket(class PlayerAuthInputPacket &&);
    /**
     * @symbol  ?getInput\@PlayerAuthInputPacket\@\@QEBA_NW4InputData\@1\@\@Z
     */
    MCAPI bool getInput(enum class PlayerAuthInputPacket::InputData) const;
    /**
     * @symbol  ??4PlayerAuthInputPacket\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class PlayerAuthInputPacket & operator=(class PlayerAuthInputPacket &&);
    /**
     * @symbol  ?readIntoComponent\@PlayerAuthInputPacket\@\@QEBA?AUPlayerActionComponent\@\@XZ
     */
    MCAPI struct PlayerActionComponent readIntoComponent() const;
    /**
     * @symbol  ?setInput\@PlayerAuthInputPacket\@\@QEAAXW4InputData\@1\@_N\@Z
     */
    MCAPI void setInput(enum class PlayerAuthInputPacket::InputData, bool);
    /**
     * @symbol  ?takeCopy\@PlayerAuthInputPacket\@\@QEBA?AV1\@XZ
     */
    MCAPI class PlayerAuthInputPacket takeCopy() const;

};