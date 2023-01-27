/**
 * @file  StopSoundPacket.hpp
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
 * @brief MC class StopSoundPacket.
 *
 */
class StopSoundPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPSOUNDPACKET
public:
    class StopSoundPacket& operator=(class StopSoundPacket const &) = delete;
    StopSoundPacket(class StopSoundPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StopSoundPacket();
    /**
     * @hash   2112632489
     * @vftbl  1
     * @symbol  ?getId\@StopSoundPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   625185110
     * @vftbl  2
     * @symbol  ?getName\@StopSoundPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1656861233
     * @vftbl  3
     * @symbol  ?write\@StopSoundPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1949929887
     * @vftbl  6
     * @symbol  ?_read\@StopSoundPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -123929231
     * @symbol  ??0StopSoundPacket\@\@QEAA\@XZ
     */
    MCAPI StopSoundPacket();
    /**
     * @hash   -1055211359
     * @symbol  ??0StopSoundPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI StopSoundPacket(std::string const &, bool);

};