#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class CameraInstructionPacket : public ::Packet {

public:
    // prevent constructor by default
    CameraInstructionPacket& operator=(CameraInstructionPacket const&) = delete;
    CameraInstructionPacket(CameraInstructionPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@CameraInstructionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CameraInstructionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@CameraInstructionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?read\@CameraInstructionPacket\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CameraInstructionPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAMERAINSTRUCTIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CameraInstructionPacket(); // NOLINT
#endif
    /**
     * @symbol ??0CameraInstructionPacket\@\@QEAA\@AEBUCameraInstruction\@\@\@Z
     */
    MCAPI CameraInstructionPacket(struct CameraInstruction const&); // NOLINT
    /**
     * @symbol ??0CameraInstructionPacket\@\@QEAA\@XZ
     */
    MCAPI CameraInstructionPacket(); // NOLINT
};
