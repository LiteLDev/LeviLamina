#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class RequestPermissionsPacket : public ::Packet {

public:
    // prevent constructor by default
    RequestPermissionsPacket& operator=(RequestPermissionsPacket const&) = delete;
    RequestPermissionsPacket(RequestPermissionsPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@RequestPermissionsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@RequestPermissionsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@RequestPermissionsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@RequestPermissionsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol ??0RequestPermissionsPacket\@\@QEAA\@XZ
     */
    MCAPI RequestPermissionsPacket(); // NOLINT
    /**
     * @symbol ?getCustomAbilityValue\@RequestPermissionsPacket\@\@QEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCAPI bool getCustomAbilityValue(enum class AbilitiesIndex) const; // NOLINT
    /**
     * @symbol ?getPlayerPermissions\@RequestPermissionsPacket\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const; // NOLINT
    /**
     * @symbol ?getTargetPlayerId\@RequestPermissionsPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetPlayerId() const; // NOLINT
};
