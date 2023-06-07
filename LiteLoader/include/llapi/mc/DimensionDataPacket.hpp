/**
 * @file  DimensionDataPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@DimensionDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@DimensionDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@DimensionDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@DimensionDataPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSIONDATAPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DimensionDataPacket();
#endif
    /**
     * @symbol ??0DimensionDataPacket\@\@QEAA\@AEBVDimensionDefinitionGroup\@\@\@Z
     */
    MCAPI DimensionDataPacket(class DimensionDefinitionGroup const &);

};
