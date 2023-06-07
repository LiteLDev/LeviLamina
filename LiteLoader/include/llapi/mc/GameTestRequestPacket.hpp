/**
 * @file  GameTestRequestPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "gametest.hpp"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@GameTestRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@GameTestRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@GameTestRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@GameTestRequestPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0GameTestRequestPacket\@\@QEAA\@XZ
     */
    MCAPI GameTestRequestPacket();
    /**
     * @symbol ?getParams\@GameTestRequestPacket\@\@QEBAAEBUTestParameters\@gametest\@\@XZ
     */
    MCAPI struct gametest::TestParameters const & getParams() const;
    /**
     * @symbol ?getTestName\@GameTestRequestPacket\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getTestName() const;

};
