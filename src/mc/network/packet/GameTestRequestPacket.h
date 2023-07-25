#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct TestParameters; }
// clang-format on

class GameTestRequestPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTREQUESTPACKET
public:
    GameTestRequestPacket& operator=(GameTestRequestPacket const&) = delete;
    GameTestRequestPacket(GameTestRequestPacket const&)            = delete;
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
     * @symbol
     * ?getName\@GameTestRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@GameTestRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@GameTestRequestPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0GameTestRequestPacket\@\@QEAA\@XZ
     */
    MCAPI GameTestRequestPacket();
    /**
     * @symbol ?getParams\@GameTestRequestPacket\@\@QEBAAEBUTestParameters\@gametest\@\@XZ
     */
    MCAPI struct gametest::TestParameters const& getParams() const;
    /**
     * @symbol
     * ?getTestName\@GameTestRequestPacket\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getTestName() const;
};
