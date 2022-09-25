/**
 * @file  ServerSettingsResponsePacket.hpp
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
 * @brief MC class ServerSettingsResponsePacket.
 *
 */
class ServerSettingsResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSETTINGSRESPONSEPACKET
public:
    class ServerSettingsResponsePacket& operator=(class ServerSettingsResponsePacket const &) = delete;
    ServerSettingsResponsePacket(class ServerSettingsResponsePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ServerSettingsResponsePacket();
    /**
     * @hash   -213182449
     * @vftbl  1
     * @symbol ?getId@ServerSettingsResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -724334916
     * @vftbl  2
     * @symbol ?getName@ServerSettingsResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -820919909
     * @vftbl  3
     * @symbol ?write@ServerSettingsResponsePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   194068475
     * @vftbl  6
     * @symbol ?_read@ServerSettingsResponsePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1825733589
     * @symbol ??0ServerSettingsResponsePacket@@QEAA@XZ
     */
    MCAPI ServerSettingsResponsePacket();

};