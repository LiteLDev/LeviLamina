#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class RequestAbilityPacket : public ::Packet {
public:
    // RequestAbilityPacket inner types declare
    // clang-format off

    // clang-format on

    // RequestAbilityPacket inner types define
    enum class Type {};

public:
    // prevent constructor by default
    RequestAbilityPacket& operator=(RequestAbilityPacket const&) = delete;
    RequestAbilityPacket(RequestAbilityPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@RequestAbilityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@RequestAbilityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@RequestAbilityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@RequestAbilityPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REQUESTABILITYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RequestAbilityPacket(); // NOLINT
#endif
    /**
     * @symbol ??0RequestAbilityPacket\@\@QEAA\@XZ
     */
    MCAPI RequestAbilityPacket(); // NOLINT
    /**
     * @symbol ??0RequestAbilityPacket\@\@QEAA\@W4AbilitiesIndex\@\@_N\@Z
     */
    MCAPI RequestAbilityPacket(enum class AbilitiesIndex, bool); // NOLINT
    /**
     * @symbol ?getAbility\@RequestAbilityPacket\@\@QEBA?AW4AbilitiesIndex\@\@XZ
     */
    MCAPI enum class AbilitiesIndex getAbility() const; // NOLINT
    /**
     * @symbol ?tryGetBool\@RequestAbilityPacket\@\@QEBA_NAEA_N\@Z
     */
    MCAPI bool tryGetBool(bool&) const; // NOLINT
};
