/**
 * @file  MC/ServerSettingsRequestPacket.hpp
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
 * @brief MC class ServerSettingsRequestPacket.
 *
 */
class ServerSettingsRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSETTINGSREQUESTPACKET
public:
    class ServerSettingsRequestPacket& operator=(class ServerSettingsRequestPacket const &) = delete;
    ServerSettingsRequestPacket(class ServerSettingsRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ServerSettingsRequestPacket();
    /**
     * @hash   -1412370707
     * @vftbl  1
     * @symbol ?getId@ServerSettingsRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -2072917606
     * @vftbl  2
     * @symbol ?getName@ServerSettingsRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1450182563
     * @vftbl  3
     * @symbol ?write@ServerSettingsRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   959607181
     * @vftbl  6
     * @symbol ?_read@ServerSettingsRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   988624205
     * @symbol ??0ServerSettingsRequestPacket@@QEAA@XZ
     */
    MCAPI ServerSettingsRequestPacket();

};