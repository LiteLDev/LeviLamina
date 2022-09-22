/**
 * @file  CameraShakePacket.hpp
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
 * @brief MC class CameraShakePacket.
 *
 */
class CameraShakePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERASHAKEPACKET
public:
    class CameraShakePacket& operator=(class CameraShakePacket const &) = delete;
    CameraShakePacket(class CameraShakePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CameraShakePacket();
    /**
     * @hash   -499564139
     * @vftbl  1
     * @symbol ?getId@CameraShakePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1103273026
     * @vftbl  2
     * @symbol ?getName@CameraShakePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1218145509
     * @vftbl  3
     * @symbol ?write@CameraShakePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1606757515
     * @vftbl  6
     * @symbol ?_read@CameraShakePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -383308283
     * @symbol ??0CameraShakePacket@@QEAA@XZ
     */
    MCAPI CameraShakePacket();
    /**
     * @hash   -1169837384
     * @symbol ??0CameraShakePacket@@QEAA@W4CameraShakeAction@@@Z
     */
    MCAPI CameraShakePacket(enum CameraShakeAction);
    /**
     * @hash   2140092352
     * @symbol ??0CameraShakePacket@@QEAA@MMW4CameraShakeType@@@Z
     */
    MCAPI CameraShakePacket(float, float, enum CameraShakeType);

};