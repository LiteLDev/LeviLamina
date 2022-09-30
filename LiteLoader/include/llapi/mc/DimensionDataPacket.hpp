/**
 * @file  DimensionDataPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DimensionDataPacket.
 *
 */
class DimensionDataPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDATAPACKET
public:
    class DimensionDataPacket& operator=(class DimensionDataPacket const &) = delete;
    DimensionDataPacket(class DimensionDataPacket const &) = delete;
    DimensionDataPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DimensionDataPacket();
    /**
     * @hash   -1116859482
     * @vftbl  1
     * @symbol ?getId@DimensionDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -843936173
     * @vftbl  2
     * @symbol ?getName@DimensionDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1586278732
     * @vftbl  3
     * @symbol ?write@DimensionDataPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1740225468
     * @vftbl  6
     * @symbol ?_read@DimensionDataPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   532763069
     * @symbol ??0DimensionDataPacket@@QEAA@AEBVDimensionDefinitionGroup@@@Z
     */
    MCAPI DimensionDataPacket(class DimensionDefinitionGroup const &);

};