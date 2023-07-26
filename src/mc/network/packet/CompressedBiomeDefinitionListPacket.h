#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class CompressedBiomeDefinitionListPacket : public ::Packet {

public:
    // prevent constructor by default
    CompressedBiomeDefinitionListPacket& operator=(CompressedBiomeDefinitionListPacket const&) = delete;
    CompressedBiomeDefinitionListPacket(CompressedBiomeDefinitionListPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@CompressedBiomeDefinitionListPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CompressedBiomeDefinitionListPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@CompressedBiomeDefinitionListPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?read\@CompressedBiomeDefinitionListPacket\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPRESSEDBIOMEDEFINITIONLISTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CompressedBiomeDefinitionListPacket(); // NOLINT
#endif
    /**
     * @symbol ??0CompressedBiomeDefinitionListPacket\@\@QEAA\@VCompoundTag\@\@\@Z
     */
    MCAPI CompressedBiomeDefinitionListPacket(class CompoundTag); // NOLINT
    /**
     * @symbol ??0CompressedBiomeDefinitionListPacket\@\@QEAA\@XZ
     */
    MCAPI CompressedBiomeDefinitionListPacket(); // NOLINT
};
