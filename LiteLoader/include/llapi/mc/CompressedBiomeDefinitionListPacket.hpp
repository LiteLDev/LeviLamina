/**
 * @file  CompressedBiomeDefinitionListPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CompressedBiomeDefinitionListPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPRESSEDBIOMEDEFINITIONLISTPACKET
public:
    class CompressedBiomeDefinitionListPacket& operator=(class CompressedBiomeDefinitionListPacket const &) = delete;
    CompressedBiomeDefinitionListPacket(class CompressedBiomeDefinitionListPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CompressedBiomeDefinitionListPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@CompressedBiomeDefinitionListPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CompressedBiomeDefinitionListPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 4
     * @symbol ?read\@CompressedBiomeDefinitionListPacket\@\@UEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPRESSEDBIOMEDEFINITIONLISTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CompressedBiomeDefinitionListPacket();
#endif
    /**
     * @symbol ??0CompressedBiomeDefinitionListPacket\@\@QEAA\@VCompoundTag\@\@\@Z
     */
    MCAPI CompressedBiomeDefinitionListPacket(class CompoundTag);
    /**
     * @symbol ??0CompressedBiomeDefinitionListPacket\@\@QEAA\@XZ
     */
    MCAPI CompressedBiomeDefinitionListPacket();

};
