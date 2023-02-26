/**
 * @file  ChunkRadiusUpdatedPacket.hpp
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
 * @brief MC class ChunkRadiusUpdatedPacket.
 *
 */
class ChunkRadiusUpdatedPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKRADIUSUPDATEDPACKET
public:
    class ChunkRadiusUpdatedPacket& operator=(class ChunkRadiusUpdatedPacket const &) = delete;
    ChunkRadiusUpdatedPacket(class ChunkRadiusUpdatedPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ChunkRadiusUpdatedPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@ChunkRadiusUpdatedPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@ChunkRadiusUpdatedPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@ChunkRadiusUpdatedPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@ChunkRadiusUpdatedPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0ChunkRadiusUpdatedPacket\@\@QEAA\@XZ
     */
    MCAPI ChunkRadiusUpdatedPacket();
    /**
     * @symbol  ??0ChunkRadiusUpdatedPacket\@\@QEAA\@H\@Z
     */
    MCAPI ChunkRadiusUpdatedPacket(int);

};