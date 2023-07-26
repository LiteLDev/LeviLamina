#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class MultiplayerSettingsPacket : public ::Packet {

public:
    // prevent constructor by default
    MultiplayerSettingsPacket& operator=(MultiplayerSettingsPacket const&) = delete;
    MultiplayerSettingsPacket(MultiplayerSettingsPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@MultiplayerSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@MultiplayerSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@MultiplayerSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@MultiplayerSettingsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MULTIPLAYERSETTINGSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MultiplayerSettingsPacket(); // NOLINT
#endif
    /**
     * @symbol ??0MultiplayerSettingsPacket\@\@QEAA\@W4MultiplayerSettingsPacketType\@\@\@Z
     */
    MCAPI MultiplayerSettingsPacket(enum class MultiplayerSettingsPacketType); // NOLINT
    /**
     * @symbol ??0MultiplayerSettingsPacket\@\@QEAA\@XZ
     */
    MCAPI MultiplayerSettingsPacket(); // NOLINT
};
