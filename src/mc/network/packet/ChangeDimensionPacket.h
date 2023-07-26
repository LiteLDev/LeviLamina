#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"

class ChangeDimensionPacket : public ::Packet {

public:
    // prevent constructor by default
    ChangeDimensionPacket& operator=(ChangeDimensionPacket const&) = delete;
    ChangeDimensionPacket(ChangeDimensionPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@ChangeDimensionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ChangeDimensionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@ChangeDimensionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ChangeDimensionPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHANGEDIMENSIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChangeDimensionPacket(); // NOLINT
#endif
    /**
     * @symbol ??0ChangeDimensionPacket\@\@QEAA\@XZ
     */
    MCAPI ChangeDimensionPacket(); // NOLINT
    /**
     * @symbol ??0ChangeDimensionPacket\@\@QEAA\@V?$AutomaticID\@VDimension\@\@H\@\@VVec3\@\@_N\@Z
     */
    MCAPI ChangeDimensionPacket(class AutomaticID<class Dimension, int>, class Vec3, bool); // NOLINT
};
