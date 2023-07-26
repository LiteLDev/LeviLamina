#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"

class SubChunkPacket : public ::Packet {
public:
    // SubChunkPacket inner types declare
    // clang-format off
    class HeightmapData;
    struct SubChunkPacketData;
    struct SubChunkPosOffset;
    // clang-format on

    // SubChunkPacket inner types define
    enum class HeightMapDataType {};

    enum class SubChunkRequestResult {};

    class HeightmapData {

    public:
        // prevent constructor by default
        HeightmapData& operator=(HeightmapData const&) = delete;
        HeightmapData(HeightmapData const&)            = delete;
        HeightmapData()                                = delete;

    public:
        /**
         * @symbol ?HEIGHT_COLUMN_ABOVE_SUBCHUNK\@HeightmapData\@SubChunkPacket\@\@2CB
         */
        MCAPI static signed char const HEIGHT_COLUMN_ABOVE_SUBCHUNK; // NOLINT
        /**
         * @symbol ?HEIGHT_COLUMN_BELOW_SUBCHUNK\@HeightmapData\@SubChunkPacket\@\@2CB
         */
        MCAPI static signed char const HEIGHT_COLUMN_BELOW_SUBCHUNK; // NOLINT
    };

    struct SubChunkPacketData {

    public:
        // prevent constructor by default
        SubChunkPacketData& operator=(SubChunkPacketData const&) = delete;
        SubChunkPacketData(SubChunkPacketData const&)            = delete;
        SubChunkPacketData()                                     = delete;

    public:
        /**
         * @symbol
         * ??0SubChunkPacketData\@SubChunkPacket\@\@QEAA\@AEBUSubChunkPosOffset\@1\@W4SubChunkRequestResult\@1\@\@Z
         */
        MCAPI SubChunkPacketData(
            struct SubChunkPacket::SubChunkPosOffset const&,
            enum class SubChunkPacket::SubChunkRequestResult
        ); // NOLINT
        /**
         * @symbol ??0SubChunkPacketData\@SubChunkPacket\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI SubChunkPacketData(struct SubChunkPacket::SubChunkPacketData&&); // NOLINT
        /**
         * @symbol ??1SubChunkPacketData\@SubChunkPacket\@\@QEAA\@XZ
         */
        MCAPI ~SubChunkPacketData(); // NOLINT
    };

    struct SubChunkPosOffset {

    public:
        // prevent constructor by default
        SubChunkPosOffset& operator=(SubChunkPosOffset const&) = delete;
        SubChunkPosOffset(SubChunkPosOffset const&)            = delete;
        SubChunkPosOffset()                                    = delete;
    };

public:
    // prevent constructor by default
    SubChunkPacket& operator=(SubChunkPacket const&) = delete;
    SubChunkPacket(SubChunkPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@SubChunkPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SubChunkPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@SubChunkPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SubChunkPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUBCHUNKPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SubChunkPacket(); // NOLINT
#endif
    /**
     * @symbol ??0SubChunkPacket\@\@QEAA\@XZ
     */
    MCAPI SubChunkPacket(); // NOLINT
    /**
     * @symbol ??0SubChunkPacket\@\@QEAA\@AEBV?$AutomaticID\@VDimension\@\@H\@\@AEBVSubChunkPos\@\@_N\@Z
     */
    MCAPI SubChunkPacket(class AutomaticID<class Dimension, int> const&, class SubChunkPos const&, bool); // NOLINT
};
