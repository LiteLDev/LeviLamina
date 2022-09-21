/**
 * @file  MC/SubClientLoginPacket.hpp
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
 * @brief MC class SubClientLoginPacket.
 *
 */
class SubClientLoginPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCLIENTLOGINPACKET
public:
    class SubClientLoginPacket& operator=(class SubClientLoginPacket const &) = delete;
    SubClientLoginPacket(class SubClientLoginPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SubClientLoginPacket();
    /**
     * @hash   1468106216
     * @vftbl  1
     * @symbol ?getId@SubClientLoginPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1126722411
     * @vftbl  2
     * @symbol ?getName@SubClientLoginPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -816398894
     * @vftbl  3
     * @symbol ?write@SubClientLoginPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1239141771
     * @vftbl  5
     * @symbol ?disallowBatching@SubClientLoginPacket@@UEBA_NXZ
     */
    virtual bool disallowBatching() const;
    /**
     * @hash   -776828606
     * @vftbl  6
     * @symbol ?_read@SubClientLoginPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   666088706
     * @symbol ??0SubClientLoginPacket@@QEAA@XZ
     */
    MCAPI SubClientLoginPacket();

};