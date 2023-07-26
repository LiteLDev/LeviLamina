#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class ItemStackResponsePacket : public ::Packet {

public:
    // prevent constructor by default
    ItemStackResponsePacket& operator=(ItemStackResponsePacket const&) = delete;
    ItemStackResponsePacket(ItemStackResponsePacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@ItemStackResponsePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ItemStackResponsePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@ItemStackResponsePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ItemStackResponsePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKRESPONSEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemStackResponsePacket(); // NOLINT
#endif
    /**
     * @symbol ??0ItemStackResponsePacket\@\@QEAA\@XZ
     */
    MCAPI ItemStackResponsePacket(); // NOLINT
    /**
     * @symbol
     * ??0ItemStackResponsePacket\@\@QEAA\@$$QEAV?$vector\@UItemStackResponseInfo\@\@V?$allocator\@UItemStackResponseInfo\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ItemStackResponsePacket(std::vector<struct ItemStackResponseInfo>&&); // NOLINT
    /**
     * @symbol
     * ?getResponses\@ItemStackResponsePacket\@\@QEBAAEBV?$vector\@UItemStackResponseInfo\@\@V?$allocator\@UItemStackResponseInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ItemStackResponseInfo> const& getResponses() const; // NOLINT
};
