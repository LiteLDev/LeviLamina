#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class LabTablePacket : public ::Packet {
public:
    // LabTablePacket inner types declare
    // clang-format off

    // clang-format on

    // LabTablePacket inner types define
    enum class Type {};

public:
    // prevent constructor by default
    LabTablePacket& operator=(LabTablePacket const&) = delete;
    LabTablePacket(LabTablePacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@LabTablePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@LabTablePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@LabTablePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@LabTablePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LABTABLEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LabTablePacket(); // NOLINT
#endif
    /**
     * @symbol ??0LabTablePacket\@\@QEAA\@AEBVBlockPos\@\@W4LabTableReactionType\@\@\@Z
     */
    MCAPI LabTablePacket(class BlockPos const&, enum class LabTableReactionType); // NOLINT
    /**
     * @symbol ??0LabTablePacket\@\@QEAA\@XZ
     */
    MCAPI LabTablePacket(); // NOLINT
    /**
     * @symbol ??0LabTablePacket\@\@QEAA\@W4Type\@0\@AEBVBlockPos\@\@\@Z
     */
    MCAPI LabTablePacket(enum class LabTablePacket::Type, class BlockPos const&); // NOLINT
};
