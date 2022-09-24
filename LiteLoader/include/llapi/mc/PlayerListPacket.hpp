/**
 * @file  PlayerListPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "PlayerListEntry.hpp"

enum class PlayerListPacketType
{
    Add,
    Remove
};

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerListPacket.
 *
 */
class PlayerListPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
public:
    std::vector<class PlayerListEntry> entries;
    enum class PlayerListPacketType type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERLISTPACKET
public:
    class PlayerListPacket& operator=(class PlayerListPacket const &) = delete;
    PlayerListPacket(class PlayerListPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlayerListPacket();
    /**
     * @hash   -214465497
     * @vftbl  1
     * @symbol ?getId@PlayerListPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1445720788
     * @vftbl  2
     * @symbol ?getName@PlayerListPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1859456525
     * @vftbl  3
     * @symbol ?write@PlayerListPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1761313144
     * @vftbl  4
     * @symbol ?readExtended@PlayerListPacket@@UEAA?AUExtendedStreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @hash   -513419725
     * @vftbl  6
     * @symbol ?_read@PlayerListPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   812090227
     * @symbol ??0PlayerListPacket@@QEAA@XZ
     */
    MCAPI PlayerListPacket();
    /**
     * @hash   -1383143812
     * @symbol ?emplace@PlayerListPacket@@QEAAX$$QEAVPlayerListEntry@@@Z
     */
    MCAPI void emplace(class PlayerListEntry &&);

};