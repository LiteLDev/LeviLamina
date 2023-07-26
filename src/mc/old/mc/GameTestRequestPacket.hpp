/**
 * @file  GameTestRequestPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @vftbl  1
     * @symbol  ?getId\@GameTestRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@GameTestRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@GameTestRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@GameTestRequestPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0GameTestRequestPacket\@\@QEAA\@XZ
     */
    MCAPI GameTestRequestPacket();
    /**
     * @symbol  ?getParams\@GameTestRequestPacket\@\@QEBAAEBUTestParameters\@gametest\@\@XZ
     */
    MCAPI struct gametest::TestParameters const & getParams() const;
    /**
     * @symbol  ?getTestName\@GameTestRequestPacket\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getTestName() const;

};