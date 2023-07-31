#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class CameraShakePacket : public ::Packet {

public:
    // prevent constructor by default
    CameraShakePacket& operator=(CameraShakePacket const&) = delete;
    CameraShakePacket(CameraShakePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CameraShakePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CameraShakePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CameraShakePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CameraShakePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAMERASHAKEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CameraShakePacket();
#endif
    /**
     * @symbol ??0CameraShakePacket\@\@QEAA\@MMW4CameraShakeType\@\@\@Z
     */
    MCAPI CameraShakePacket(float, float, enum class CameraShakeType);
    /**
     * @symbol ??0CameraShakePacket\@\@QEAA\@XZ
     */
    MCAPI CameraShakePacket();
    /**
     * @symbol ??0CameraShakePacket\@\@QEAA\@W4CameraShakeAction\@\@\@Z
     */
    MCAPI CameraShakePacket(enum class CameraShakeAction);
    // NOLINTEND
};
