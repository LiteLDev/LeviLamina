#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class PlayerAuthInputPacket : public ::Packet {
public:
    // PlayerAuthInputPacket inner types define
    enum class InputData {};

public:
    // prevent constructor by default
    PlayerAuthInputPacket& operator=(PlayerAuthInputPacket const&) = delete;
    PlayerAuthInputPacket(PlayerAuthInputPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@PlayerAuthInputPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@PlayerAuthInputPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@PlayerAuthInputPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 6
     * @symbol ?isValid\@PlayerAuthInputPacket\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@PlayerAuthInputPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERAUTHINPUTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerAuthInputPacket();
#endif
    /**
     * @symbol ??0PlayerAuthInputPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerAuthInputPacket();
    /**
     * @symbol ??0PlayerAuthInputPacket\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI PlayerAuthInputPacket(class PlayerAuthInputPacket&&);
    /**
     * @symbol ?getInput\@PlayerAuthInputPacket\@\@QEBA_NW4InputData\@1\@\@Z
     */
    MCAPI bool getInput(enum class PlayerAuthInputPacket::InputData) const;
    /**
     * @symbol ??4PlayerAuthInputPacket\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class PlayerAuthInputPacket& operator=(class PlayerAuthInputPacket&&);
    /**
     * @symbol ?readIntoComponent\@PlayerAuthInputPacket\@\@QEBA?AUPlayerActionComponent\@\@XZ
     */
    MCAPI struct PlayerActionComponent readIntoComponent() const;
    /**
     * @symbol ?takeCopy\@PlayerAuthInputPacket\@\@QEBA?AV1\@XZ
     */
    MCAPI class PlayerAuthInputPacket takeCopy() const;
    // NOLINTEND
};
