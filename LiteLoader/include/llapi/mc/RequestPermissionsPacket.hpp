/**
 * @file  MC/RequestPermissionsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RequestPermissionsPacket();
    /**
     * @hash   -42042079
     * @vftbl  1
     * @symbol ?getId@RequestPermissionsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   512175054
     * @vftbl  2
     * @symbol ?getName@RequestPermissionsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   848588313
     * @vftbl  3
     * @symbol ?write@RequestPermissionsPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1572355993
     * @vftbl  6
     * @symbol ?_read@RequestPermissionsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1238754377
     * @symbol ??0RequestPermissionsPacket@@QEAA@XZ
     */
    MCAPI RequestPermissionsPacket();
    /**
     * @hash   39912027
     * @symbol ?getCustomAbilityValue@RequestPermissionsPacket@@QEBA_NW4AbilitiesIndex@@@Z
     */
    MCAPI bool getCustomAbilityValue(enum AbilitiesIndex) const;
    /**
     * @hash   -73762382
     * @symbol ?getPlayerPermissions@RequestPermissionsPacket@@QEBA?AW4PlayerPermissionLevel@@XZ
     */
    MCAPI enum PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @hash   -1816825762
     * @symbol ?getTargetPlayerId@RequestPermissionsPacket@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getTargetPlayerId() const;

};