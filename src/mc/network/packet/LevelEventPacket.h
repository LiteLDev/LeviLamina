#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class LevelEventPacket : public ::Packet {

public:
    // prevent constructor by default
    LevelEventPacket& operator=(LevelEventPacket const&) = delete;
    LevelEventPacket(LevelEventPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@LevelEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@LevelEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@LevelEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@LevelEventPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELEVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelEventPacket();
#endif
    /**
     * @symbol ??0LevelEventPacket\@\@QEAA\@W4LevelEvent\@\@MMMH\@Z
     */
    MCAPI LevelEventPacket(enum class LevelEvent, float, float, float, int);
    /**
     * @symbol ??0LevelEventPacket\@\@QEAA\@XZ
     */
    MCAPI LevelEventPacket();
    /**
     * @symbol ??0LevelEventPacket\@\@QEAA\@W4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI LevelEventPacket(enum class LevelEvent, class Vec3 const&, int);
    // NOLINTEND
};
