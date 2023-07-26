#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class CraftingDataPacket : public ::Packet {

public:
    // prevent constructor by default
    CraftingDataPacket& operator=(CraftingDataPacket const&) = delete;
    CraftingDataPacket(CraftingDataPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@CraftingDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CraftingDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@CraftingDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CraftingDataPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol ??0CraftingDataPacket\@\@QEAA\@XZ
     */
    MCAPI CraftingDataPacket(); // NOLINT
    /**
     * @symbol
     * ?prepareFromRecipes\@CraftingDataPacket\@\@SA?AV?$unique_ptr\@VCraftingDataPacket\@\@U?$default_delete\@VCraftingDataPacket\@\@\@std\@\@\@std\@\@AEBVRecipes\@\@_N\@Z
     */
    MCAPI static std::unique_ptr<class CraftingDataPacket> prepareFromRecipes(class Recipes const&, bool); // NOLINT
};
