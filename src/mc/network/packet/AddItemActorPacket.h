#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/AddActorBasePacket.h"

class AddItemActorPacket : public ::AddActorBasePacket {

public:
    // prevent constructor by default
    AddItemActorPacket& operator=(AddItemActorPacket const&) = delete;
    AddItemActorPacket(AddItemActorPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AddItemActorPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AddItemActorPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AddItemActorPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 4
     * @symbol
     * ?read\@AvailableActorIdentifiersPacket\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @vftbl 5
     * @symbol ?disallowBatching\@Packet\@\@UEBA_NXZ
     */
    virtual bool disallowBatching() const;
    /**
     * @vftbl 6
     * @symbol ?isValid\@Packet\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@AddItemActorPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0AddItemActorPacket\@\@QEAA\@AEAVItemActor\@\@\@Z
     */
    MCAPI AddItemActorPacket(class ItemActor&);
    /**
     * @symbol ??0AddItemActorPacket\@\@QEAA\@XZ
     */
    MCAPI AddItemActorPacket();
    // NOLINTEND
};
