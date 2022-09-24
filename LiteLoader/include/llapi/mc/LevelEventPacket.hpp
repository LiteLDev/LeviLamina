/**
 * @file  LevelEventPacket.hpp
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
 * @brief MC class LevelEventPacket.
 *
 */
class LevelEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELEVENTPACKET
public:
    class LevelEventPacket& operator=(class LevelEventPacket const &) = delete;
    LevelEventPacket(class LevelEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LevelEventPacket();
    /**
     * @hash   -1313891168
     * @vftbl  1
     * @symbol ?getId@LevelEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1753179251
     * @vftbl  2
     * @symbol ?getName@LevelEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -348906198
     * @vftbl  3
     * @symbol ?write@LevelEventPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   923241098
     * @vftbl  6
     * @symbol ?_read@LevelEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   252356026
     * @symbol ??0LevelEventPacket@@QEAA@XZ
     */
    MCAPI LevelEventPacket();
    /**
     * @hash   177770883
     * @symbol ??0LevelEventPacket@@QEAA@W4LevelEvent@@MMMH@Z
     */
    MCAPI LevelEventPacket(enum LevelEvent, float, float, float, int);
    /**
     * @hash   1749798983
     * @symbol ??0LevelEventPacket@@QEAA@W4LevelEvent@@AEBVVec3@@H@Z
     */
    MCAPI LevelEventPacket(enum LevelEvent, class Vec3 const &, int);

};