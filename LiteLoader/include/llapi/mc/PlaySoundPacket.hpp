/**
 * @file  PlaySoundPacket.hpp
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
 * @brief MC class PlaySoundPacket.
 *
 */
class PlaySoundPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[56];
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYSOUNDPACKET
public:
    class PlaySoundPacket& operator=(class PlaySoundPacket const &) = delete;
    PlaySoundPacket(class PlaySoundPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlaySoundPacket();
    /**
     * @hash   -788389685
     * @vftbl  1
     * @symbol ?getId@PlaySoundPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1521793912
     * @vftbl  2
     * @symbol ?getName@PlaySoundPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -36308593
     * @vftbl  3
     * @symbol ?write@PlaySoundPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -2129826273
     * @vftbl  6
     * @symbol ?_read@PlaySoundPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1460653839
     * @symbol ??0PlaySoundPacket@@QEAA@XZ
     */
    MCAPI PlaySoundPacket();
    /**
     * @hash   1812010339
     * @symbol ??0PlaySoundPacket@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     */
    MCAPI PlaySoundPacket(std::string, class Vec3 const &, float, float);

};