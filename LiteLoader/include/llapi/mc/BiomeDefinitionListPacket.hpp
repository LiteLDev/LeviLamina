/**
 * @file  BiomeDefinitionListPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeDefinitionListPacket.
 *
 */
class BiomeDefinitionListPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEDEFINITIONLISTPACKET
public:
    class BiomeDefinitionListPacket& operator=(class BiomeDefinitionListPacket const &) = delete;
    BiomeDefinitionListPacket(class BiomeDefinitionListPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@BiomeDefinitionListPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@BiomeDefinitionListPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@BiomeDefinitionListPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 4
     * @symbol ?read\@BiomeDefinitionListPacket\@\@UEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult read(class ReadOnlyBinaryStream &);
    /**
     * @vftbl 7
     * @symbol ?_read\@BiomeDefinitionListPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMEDEFINITIONLISTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BiomeDefinitionListPacket();
#endif
    /**
     * @symbol ??0BiomeDefinitionListPacket\@\@QEAA\@XZ
     */
    MCAPI BiomeDefinitionListPacket();
    /**
     * @symbol ??0BiomeDefinitionListPacket\@\@QEAA\@VCompoundTag\@\@\@Z
     */
    MCAPI BiomeDefinitionListPacket(class CompoundTag);

};
