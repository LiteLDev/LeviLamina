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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@RequestChunkRadiusPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@RequestChunkRadiusPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@RequestChunkRadiusPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@RequestChunkRadiusPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0RequestChunkRadiusPacket\@\@QEAA\@XZ
     */
    MCAPI RequestChunkRadiusPacket();

};
