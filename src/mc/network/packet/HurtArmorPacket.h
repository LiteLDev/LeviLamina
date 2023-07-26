#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class HurtArmorPacket : public ::Packet {

public:
    // prevent constructor by default
    HurtArmorPacket& operator=(HurtArmorPacket const&) = delete;
    HurtArmorPacket(HurtArmorPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@HurtArmorPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@HurtArmorPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@HurtArmorPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@HurtArmorPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HURTARMORPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HurtArmorPacket(); // NOLINT
#endif
    /**
     * @symbol ??0HurtArmorPacket\@\@QEAA\@W4ActorDamageCause\@\@HV?$bitset\@$03\@std\@\@\@Z
     */
    MCAPI HurtArmorPacket(enum class ActorDamageCause, int, class std::bitset<4>); // NOLINT
    /**
     * @symbol ??0HurtArmorPacket\@\@QEAA\@XZ
     */
    MCAPI HurtArmorPacket(); // NOLINT
};
