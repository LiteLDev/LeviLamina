#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class AutomationClientConnectPacket : public ::Packet {

public:
    // prevent constructor by default
    AutomationClientConnectPacket& operator=(AutomationClientConnectPacket const&) = delete;
    AutomationClientConnectPacket(AutomationClientConnectPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@AutomationClientConnectPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AutomationClientConnectPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@AutomationClientConnectPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@AutomationClientConnectPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AUTOMATIONCLIENTCONNECTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AutomationClientConnectPacket(); // NOLINT
#endif
    /**
     * @symbol ??0AutomationClientConnectPacket\@\@QEAA\@UWebSocketPacketData\@\@\@Z
     */
    MCAPI AutomationClientConnectPacket(struct WebSocketPacketData); // NOLINT
    /**
     * @symbol ??0AutomationClientConnectPacket\@\@QEAA\@XZ
     */
    MCAPI AutomationClientConnectPacket(); // NOLINT
};
