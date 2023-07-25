#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class BiomeDefinitionListPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEDEFINITIONLISTPACKET
public:
    BiomeDefinitionListPacket& operator=(BiomeDefinitionListPacket const&) = delete;
    BiomeDefinitionListPacket(BiomeDefinitionListPacket const&)            = delete;
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
     * @symbol
     * ?getName\@BiomeDefinitionListPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@BiomeDefinitionListPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 4
     * @symbol
     * ?read\@BiomeDefinitionListPacket\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@BiomeDefinitionListPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
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
