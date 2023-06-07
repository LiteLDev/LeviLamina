/**
 * @file  RequestPermissionsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RequestPermissionsPacket.
 *
 */
class RequestPermissionsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTPERMISSIONSPACKET
public:
    class RequestPermissionsPacket& operator=(class RequestPermissionsPacket const &) = delete;
    RequestPermissionsPacket(class RequestPermissionsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@RequestPermissionsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@RequestPermissionsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@RequestPermissionsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@RequestPermissionsPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0RequestPermissionsPacket\@\@QEAA\@XZ
     */
    MCAPI RequestPermissionsPacket();
    /**
     * @symbol ?getCustomAbilityValue\@RequestPermissionsPacket\@\@QEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCAPI bool getCustomAbilityValue(enum class AbilitiesIndex) const;
    /**
     * @symbol ?getPlayerPermissions\@RequestPermissionsPacket\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @symbol ?getTargetPlayerId\@RequestPermissionsPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetPlayerId() const;

};
