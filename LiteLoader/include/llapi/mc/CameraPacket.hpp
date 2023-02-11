/**
 * @file  CameraPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CameraPacket.
 *
 */
class CameraPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAPACKET
public:
    class CameraPacket& operator=(class CameraPacket const &) = delete;
    CameraPacket(class CameraPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CameraPacket();
    /**
     * @hash   696752145
     * @vftbl  1
     * @symbol  ?getId\@CameraPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1438562626
     * @vftbl  2
     * @symbol  ?getName\@CameraPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1022086247
     * @vftbl  3
     * @symbol  ?write\@CameraPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1355592089
     * @vftbl  6
     * @symbol  ?_read\@CameraPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1373970567
     * @symbol  ??0CameraPacket\@\@QEAA\@XZ
     */
    MCAPI CameraPacket();
    /**
     * @hash   -878879941
     * @symbol  ??0CameraPacket\@\@QEAA\@UActorUniqueID\@\@0\@Z
     */
    MCAPI CameraPacket(struct ActorUniqueID, struct ActorUniqueID);

};