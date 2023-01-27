/**
 * @file  ChangeDimensionPacket.hpp
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
 * @brief MC class ChangeDimensionPacket.
 *
 */
class ChangeDimensionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    AutomaticID<Dimension, int> dimensionId;
    Vec3 position;
    bool respawn;

    inline std::string toDebugString() {
        return fmt::format("{}: pos: {}, dimensionId: {}, isRespawn: {}",
            __super::toDebugString(), position.toString(), (int)dimensionId, respawn);
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANGEDIMENSIONPACKET
public:
    class ChangeDimensionPacket& operator=(class ChangeDimensionPacket const &) = delete;
    ChangeDimensionPacket(class ChangeDimensionPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ChangeDimensionPacket();
    /**
     * @hash   -823108320
     * @vftbl  1
     * @symbol  ?getId\@ChangeDimensionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -313288755
     * @vftbl  2
     * @symbol  ?getName\@ChangeDimensionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -775570374
     * @vftbl  3
     * @symbol  ?write\@ChangeDimensionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1962988490
     * @vftbl  6
     * @symbol  ?_read\@ChangeDimensionPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   79980490
     * @symbol  ??0ChangeDimensionPacket\@\@QEAA\@XZ
     */
    MCAPI ChangeDimensionPacket();
    /**
     * @hash   448836513
     * @symbol  ??0ChangeDimensionPacket\@\@QEAA\@V?$AutomaticID\@VDimension\@\@H\@\@VVec3\@\@_N\@Z
     */
    MCAPI ChangeDimensionPacket(class AutomaticID<class Dimension, int>, class Vec3, bool);

};