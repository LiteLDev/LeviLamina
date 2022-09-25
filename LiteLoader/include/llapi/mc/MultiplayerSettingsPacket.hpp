/**
 * @file  MultiplayerSettingsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MultiplayerSettingsPacket.
 *
 */
class MultiplayerSettingsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIPLAYERSETTINGSPACKET
public:
    class MultiplayerSettingsPacket& operator=(class MultiplayerSettingsPacket const &) = delete;
    MultiplayerSettingsPacket(class MultiplayerSettingsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MultiplayerSettingsPacket();
    /**
     * @hash   -1991171223
     * @vftbl  1
     * @symbol ?getId@MultiplayerSettingsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1688797674
     * @vftbl  2
     * @symbol ?getName@MultiplayerSettingsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -96351551
     * @vftbl  3
     * @symbol ?write@MultiplayerSettingsPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1136638575
     * @vftbl  6
     * @symbol ?_read@MultiplayerSettingsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1679303903
     * @symbol ??0MultiplayerSettingsPacket@@QEAA@XZ
     */
    MCAPI MultiplayerSettingsPacket();
    /**
     * @hash   281613452
     * @symbol ??0MultiplayerSettingsPacket@@QEAA@W4MultiplayerSettingsPacketType@@@Z
     */
    MCAPI MultiplayerSettingsPacket(enum MultiplayerSettingsPacketType);

};