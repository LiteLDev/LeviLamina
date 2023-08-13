#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class Packet {

public:
    // prevent constructor by default
    Packet& operator=(Packet const&) = delete;
    Packet(Packet const&)            = delete;
    Packet()                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateAbilitiesPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateAbilitiesPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const = 0;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateAbilitiesPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const = 0;
    /**
     * @vftbl 4
     * @symbol ?read\@Packet\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
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
     * ?_read\@UpdateAbilitiesPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Packet();
#endif
    /**
     * @symbol
     * ?handle\@Packet\@\@QEAAXAEBVNetworkIdentifier\@\@AEAVNetEventCallback\@\@AEAV?$shared_ptr\@VPacket\@\@\@std\@\@\@Z
     */
    MCAPI void handle(class NetworkIdentifier const&, class NetEventCallback&, std::shared_ptr<class Packet>&);
    /**
     * @symbol
     * ?readNoHeader\@Packet\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@AEBW4SubClientId\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, std::error_code>
    readNoHeader(class ReadOnlyBinaryStream&, enum class SubClientId const&);
    /**
     * @symbol ?writeWithHeader\@Packet\@\@QEBAXW4SubClientId\@\@AEAVBinaryStream\@\@\@Z
     */
    MCAPI void writeWithHeader(enum class SubClientId, class BinaryStream&) const;
    // NOLINTEND
};
