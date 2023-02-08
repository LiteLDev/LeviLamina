/**
 * @file  RequestChunkRadiusPacket.hpp
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
 * @brief MC class RequestChunkRadiusPacket.
 *
 */
class RequestChunkRadiusPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTCHUNKRADIUSPACKET
public:
    class RequestChunkRadiusPacket& operator=(class RequestChunkRadiusPacket const &) = delete;
    RequestChunkRadiusPacket(class RequestChunkRadiusPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RequestChunkRadiusPacket();
    /**
     * @hash   352953718
     * @vftbl  1
     * @symbol  ?getId\@RequestChunkRadiusPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -757894109
     * @vftbl  2
     * @symbol  ?getName\@RequestChunkRadiusPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -625306620
     * @vftbl  3
     * @symbol  ?write\@RequestChunkRadiusPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   2091899412
     * @vftbl  6
     * @symbol  ?_read\@RequestChunkRadiusPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1993992172
     * @symbol  ??0RequestChunkRadiusPacket\@\@QEAA\@XZ
     */
    MCAPI RequestChunkRadiusPacket();

};