/**
 * @file  CreativeContentPacket.hpp
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
 * @brief MC class CreativeContentPacket.
 *
 */
class CreativeContentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVECONTENTPACKET
public:
    class CreativeContentPacket& operator=(class CreativeContentPacket const &) = delete;
    CreativeContentPacket(class CreativeContentPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CreativeContentPacket();
    /**
     * @hash   1613868476
     * @vftbl  1
     * @symbol  ?getId\@CreativeContentPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1211340695
     * @vftbl  2
     * @symbol  ?getName\@CreativeContentPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1486733634
     * @vftbl  3
     * @symbol  ?write\@CreativeContentPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -729060882
     * @vftbl  6
     * @symbol  ?_read\@CreativeContentPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   488292718
     * @symbol  ??0CreativeContentPacket\@\@QEAA\@XZ
     */
    MCAPI CreativeContentPacket();
    /**
     * @hash   -1969105373
     * @symbol  ??0CreativeContentPacket\@\@QEAA\@AEBV?$vector\@VCreativeItemEntry\@\@V?$allocator\@VCreativeItemEntry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI CreativeContentPacket(std::vector<class CreativeItemEntry> const &);

};