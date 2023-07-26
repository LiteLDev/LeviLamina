#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class NetworkSettingsPacket : public ::Packet {

public:
    // prevent constructor by default
    NetworkSettingsPacket& operator=(NetworkSettingsPacket const&) = delete;
    NetworkSettingsPacket(NetworkSettingsPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@NetworkSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@NetworkSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@NetworkSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@NetworkSettingsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKSETTINGSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkSettingsPacket(); // NOLINT
#endif
    /**
     * @symbol ??0NetworkSettingsPacket\@\@QEAA\@AEBUNetworkSettingOptions\@\@\@Z
     */
    MCAPI NetworkSettingsPacket(struct NetworkSettingOptions const&); // NOLINT
    /**
     * @symbol ??0NetworkSettingsPacket\@\@QEAA\@XZ
     */
    MCAPI NetworkSettingsPacket(); // NOLINT
};
