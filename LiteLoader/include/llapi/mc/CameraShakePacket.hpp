/**
 * @file  CameraShakePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~CameraShakePacket();
    /**
     * @hash   -1427797883
     * @vftbl  1
     * @symbol  ?getId\@CameraShakePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   175039282
     * @vftbl  2
     * @symbol  ?getName\@CameraShakePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   289911765
     * @vftbl  3
     * @symbol  ?write\@CameraShakePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1759976037
     * @vftbl  6
     * @symbol  ?_read\@CameraShakePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1311542027
     * @symbol  ??0CameraShakePacket\@\@QEAA\@XZ
     */
    MCAPI CameraShakePacket();
    /**
     * @hash   -2098071128
     * @symbol  ??0CameraShakePacket\@\@QEAA\@W4CameraShakeAction\@\@\@Z
     */
    MCAPI CameraShakePacket(enum class CameraShakeAction);
    /**
     * @hash   1211858608
     * @symbol  ??0CameraShakePacket\@\@QEAA\@MMW4CameraShakeType\@\@\@Z
     */
    MCAPI CameraShakePacket(float, float, enum class CameraShakeType);

};