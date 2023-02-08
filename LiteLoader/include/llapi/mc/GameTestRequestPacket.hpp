/**
 * @file  GameTestRequestPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameTestRequestPacket.
 *
 */
class GameTestRequestPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTREQUESTPACKET
public:
    class GameTestRequestPacket& operator=(class GameTestRequestPacket const &) = delete;
    GameTestRequestPacket(class GameTestRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GameTestRequestPacket();
    /**
     * @hash   -637907989
     * @vftbl  1
     * @symbol  ?getId\@GameTestRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   717383320
     * @vftbl  2
     * @symbol  ?getName\@GameTestRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   447498991
     * @vftbl  3
     * @symbol  ?write\@GameTestRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -287571137
     * @vftbl  6
     * @symbol  ?_read\@GameTestRequestPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1011353617
     * @symbol  ??0GameTestRequestPacket\@\@QEAA\@XZ
     */
    MCAPI GameTestRequestPacket();
    /**
     * @hash   -1253087682
     * @symbol  ?getParams\@GameTestRequestPacket\@\@QEBAAEBUTestParameters\@gametest\@\@XZ
     */
    MCAPI struct gametest::TestParameters const & getParams() const;
    /**
     * @hash   1394783878
     * @symbol  ?getTestName\@GameTestRequestPacket\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getTestName() const;

};