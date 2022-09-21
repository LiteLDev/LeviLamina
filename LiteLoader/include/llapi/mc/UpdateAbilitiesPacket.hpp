/**
 * @file  MC/UpdateAbilitiesPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateAbilitiesPacket.
 *
 */
class UpdateAbilitiesPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEABILITIESPACKET
public:
    class UpdateAbilitiesPacket& operator=(class UpdateAbilitiesPacket const &) = delete;
    UpdateAbilitiesPacket(class UpdateAbilitiesPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~UpdateAbilitiesPacket();
    /**
     * @hash   -2130442585
     * @vftbl  1
     * @symbol ?getId@UpdateAbilitiesPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1266441900
     * @vftbl  2
     * @symbol ?getName@UpdateAbilitiesPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1552283789
     * @vftbl  3
     * @symbol ?write@UpdateAbilitiesPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   735699875
     * @vftbl  6
     * @symbol ?_read@UpdateAbilitiesPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -231244845
     * @symbol ??0UpdateAbilitiesPacket@@QEAA@XZ
     */
    MCAPI UpdateAbilitiesPacket();
    /**
     * @hash   185325019
     * @symbol ??0UpdateAbilitiesPacket@@QEAA@UActorUniqueID@@AEBVLayeredAbilities@@@Z
     */
    MCAPI UpdateAbilitiesPacket(struct ActorUniqueID, class LayeredAbilities const &);

};