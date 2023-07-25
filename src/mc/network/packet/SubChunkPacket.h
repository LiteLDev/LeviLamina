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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPACKET_HEIGHTMAPDATA
    public:
        HeightmapData& operator=(HeightmapData const&) = delete;
        HeightmapData(HeightmapData const&)            = delete;
        HeightmapData()                                = delete;
#endif

    public:
        /**
         * @symbol ?HEIGHT_COLUMN_ABOVE_SUBCHUNK\@HeightmapData\@SubChunkPacket\@\@2CB
         */
        MCAPI static signed char const HEIGHT_COLUMN_ABOVE_SUBCHUNK;
        /**
         * @symbol ?HEIGHT_COLUMN_BELOW_SUBCHUNK\@HeightmapData\@SubChunkPacket\@\@2CB
         */
        MCAPI static signed char const HEIGHT_COLUMN_BELOW_SUBCHUNK;
    };

    struct SubChunkPacketData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPACKET_SUBCHUNKPACKETDATA
    public:
        SubChunkPacketData& operator=(SubChunkPacketData const&) = delete;
        SubChunkPacketData(SubChunkPacketData const&)            = delete;
        SubChunkPacketData()                                     = delete;
#endif

    public:
        /**
         * @symbol
         * ??0SubChunkPacketData\@SubChunkPacket\@\@QEAA\@AEBUSubChunkPosOffset\@1\@W4SubChunkRequestResult\@1\@\@Z
         */
        MCAPI SubChunkPacketData(
            struct SubChunkPacket::SubChunkPosOffset const&,
            enum class SubChunkPacket::SubChunkRequestResult
        );
        /**
         * @symbol ??0SubChunkPacketData\@SubChunkPacket\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI SubChunkPacketData(struct SubChunkPacket::SubChunkPacketData&&);
        /**
         * @symbol ??1SubChunkPacketData\@SubChunkPacket\@\@QEAA\@XZ
         */
        MCAPI ~SubChunkPacketData();
    };

    struct SubChunkPosOffset {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPACKET_SUBCHUNKPOSOFFSET
    public:
        SubChunkPosOffset& operator=(SubChunkPosOffset const&) = delete;
        SubChunkPosOffset(SubChunkPosOffset const&)            = delete;
        SubChunkPosOffset()                                    = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPACKET
public:
    SubChunkPacket& operator=(SubChunkPacket const&) = delete;
    SubChunkPacket(SubChunkPacket const&)            = delete;
#endif

public:
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
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
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
};
