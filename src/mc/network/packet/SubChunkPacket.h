#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/Dimension.h"

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
    enum class HeightMapDataType : char {
        NoData     = 0x0,
        HasData    = 0x1,
        AllTooHigh = 0x2,
        AllTooLow  = 0x3,
    };

    enum class SubChunkRequestResult : char {
        Undefined             = 0x0,
        Success               = 0x1,
        LevelChunkDoesntExist = 0x2,
        WrongDimension        = 0x3,
        PlayerDoesntExist     = 0x4,
        IndexOutOfBounds      = 0x5,
        SuccessAllAir         = 0x6,
    };

    class HeightmapData {

    public:
        HeightMapDataType                               mHeightMapType;
        std::array<std::array<signed char, 16UL>, 16UL> mSubchunkHeightMap;
        // prevent constructor by default
        HeightmapData& operator=(HeightmapData const&) = delete;
        HeightmapData(HeightmapData const&)            = delete;
        HeightmapData()                                = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ?HEIGHT_COLUMN_ABOVE_SUBCHUNK\@HeightmapData\@SubChunkPacket\@\@2CB
         */
        MCAPI static signed char const HEIGHT_COLUMN_ABOVE_SUBCHUNK;
        /**
         * @symbol ?HEIGHT_COLUMN_BELOW_SUBCHUNK\@HeightmapData\@SubChunkPacket\@\@2CB
         */
        MCAPI static signed char const HEIGHT_COLUMN_BELOW_SUBCHUNK;
        // NOLINTEND
    };

    struct SubChunkPosOffset {

    public:
        int8_t mX;
        int8_t mY;
        int8_t mZ;
        // prevent constructor by default
        SubChunkPosOffset& operator=(SubChunkPosOffset const&) = delete;
        SubChunkPosOffset(SubChunkPosOffset const&)            = delete;
        SubChunkPosOffset()                                    = delete;
    };

    struct SubChunkPacketData {

    public:
        const SubChunkPosOffset mSubChunkPosOffset;
        std::string             mSerializedSubChunk;
        SubChunkRequestResult   mResult;
        HeightmapData           mHeightMapData;
        uint64_t                mBlobId;
        // prevent constructor by default
        SubChunkPacketData& operator=(SubChunkPacketData const&) = delete;
        SubChunkPacketData(SubChunkPacketData const&)            = delete;
        SubChunkPacketData()                                     = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ??0SubChunkPacketData\@SubChunkPacket\@\@QEAA\@AEBUSubChunkPosOffset\@1\@W4SubChunkRequestResult\@1\@\@Z
         */
        MCAPI SubChunkPacketData(SubChunkPosOffset const&, SubChunkRequestResult);
        /**
         * @symbol ??0SubChunkPacketData\@SubChunkPacket\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI SubChunkPacketData(SubChunkPacketData&&);
        /**
         * @symbol ??1SubChunkPacketData\@SubChunkPacket\@\@QEAA\@XZ
         */
        MCAPI ~SubChunkPacketData();
        // NOLINTEND
    };

public:
    bool                            mCacheEnabled;
    AutomaticID<Dimension, int>     mDimensionType;
    std::vector<SubChunkPacketData> mSubChunkData;
    SubChunkPos                     mCenterPos;
    // prevent constructor by default
    SubChunkPacket& operator=(SubChunkPacket const&) = delete;
    SubChunkPacket(SubChunkPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SubChunkPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SubChunkPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SubChunkPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SubChunkPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUBCHUNKPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SubChunkPacket();
#endif
    /**
     * @symbol ??0SubChunkPacket\@\@QEAA\@XZ
     */
    MCAPI SubChunkPacket();
    /**
     * @symbol ??0SubChunkPacket\@\@QEAA\@AEBV?$AutomaticID\@VDimension\@\@H\@\@AEBVSubChunkPos\@\@_N\@Z
     */
    MCAPI SubChunkPacket(class AutomaticID<class Dimension, int> const&, class SubChunkPos const&, bool);
    // NOLINTEND
};
