#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class CameraPacket : public ::Packet {

public:
    // prevent constructor by default
    CameraPacket& operator=(CameraPacket const&) = delete;
    CameraPacket(CameraPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CameraPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CameraPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CameraPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CameraPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAMERAPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CameraPacket();
#endif
    /**
     * @symbol ??0CameraPacket\@\@QEAA\@UActorUniqueID\@\@0\@Z
     */
    MCAPI CameraPacket(struct ActorUniqueID, struct ActorUniqueID);
    /**
     * @symbol ??0CameraPacket\@\@QEAA\@XZ
     */
    MCAPI CameraPacket();
    // NOLINTEND
};
