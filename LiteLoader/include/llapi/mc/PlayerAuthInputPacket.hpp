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
     * @hash   1683876853
     * @vftbl  1
     * @symbol  ?getId\@PlayerAuthInputPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1355497790
     * @vftbl  2
     * @symbol  ?getName\@PlayerAuthInputPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   918179749
     * @vftbl  3
     * @symbol  ?write\@PlayerAuthInputPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   347085381
     * @vftbl  6
     * @symbol  ?_read\@PlayerAuthInputPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1584140485
     * @symbol  ??0PlayerAuthInputPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerAuthInputPacket();
    /**
     * @hash   32127771
     * @symbol  ??0PlayerAuthInputPacket\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI PlayerAuthInputPacket(class PlayerAuthInputPacket &&);
    /**
     * @hash   1347053569
     * @symbol  ?getInput\@PlayerAuthInputPacket\@\@QEBA_NW4InputData\@1\@\@Z
     */
    MCAPI bool getInput(enum class PlayerAuthInputPacket::InputData) const;
    /**
     * @hash   -162624986
     * @symbol  ??4PlayerAuthInputPacket\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class PlayerAuthInputPacket & operator=(class PlayerAuthInputPacket &&);
    /**
     * @hash   -1697656588
     * @symbol  ?readIntoComponent\@PlayerAuthInputPacket\@\@QEBA?AUPlayerActionComponent\@\@XZ
     */
    MCAPI struct PlayerActionComponent readIntoComponent() const;
    /**
     * @hash   1853162775
     * @symbol  ?setInput\@PlayerAuthInputPacket\@\@QEAAXW4InputData\@1\@_N\@Z
     */
    MCAPI void setInput(enum class PlayerAuthInputPacket::InputData, bool);
    /**
     * @hash   -1863464130
     * @symbol  ?takeCopy\@PlayerAuthInputPacket\@\@QEBA?AV1\@XZ
     */
    MCAPI class PlayerAuthInputPacket takeCopy() const;

};