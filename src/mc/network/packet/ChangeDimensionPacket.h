#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"

class ChangeDimensionPacket : public ::Packet {

public:
    // prevent constructor by default
    ChangeDimensionPacket& operator=(ChangeDimensionPacket const&) = delete;
    ChangeDimensionPacket(ChangeDimensionPacket const&)            = delete;

    class AutomaticID<class Dimension, int> dimensionId;
    class Vec3                              position;
    bool                                    respawn;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ChangeDimensionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ChangeDimensionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ChangeDimensionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ChangeDimensionPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHANGEDIMENSIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChangeDimensionPacket();
#endif
    /**
     * @symbol ??0ChangeDimensionPacket\@\@QEAA\@XZ
     */
    MCAPI ChangeDimensionPacket();
    /**
     * @symbol ??0ChangeDimensionPacket\@\@QEAA\@V?$AutomaticID\@VDimension\@\@H\@\@VVec3\@\@_N\@Z
     */
    MCAPI ChangeDimensionPacket(class AutomaticID<class Dimension, int>, class Vec3, bool);
    // NOLINTEND
};
