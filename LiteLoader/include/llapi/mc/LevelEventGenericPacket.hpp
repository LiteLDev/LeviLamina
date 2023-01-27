/**
 * @file  LevelEventGenericPacket.hpp
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
 * @brief MC class LevelEventGenericPacket.
 *
 */
class LevelEventGenericPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELEVENTGENERICPACKET
public:
    class LevelEventGenericPacket& operator=(class LevelEventGenericPacket const &) = delete;
    LevelEventGenericPacket(class LevelEventGenericPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LevelEventGenericPacket();
    /**
     * @hash   1943916373
     * @vftbl  1
     * @symbol  ?getId\@LevelEventGenericPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -341645806
     * @vftbl  2
     * @symbol  ?getName\@LevelEventGenericPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -2030474187
     * @vftbl  3
     * @symbol  ?write\@LevelEventGenericPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1962912197
     * @vftbl  6
     * @symbol  ?_read\@LevelEventGenericPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   896841333
     * @symbol  ??0LevelEventGenericPacket\@\@QEAA\@XZ
     */
    MCAPI LevelEventGenericPacket();
    /**
     * @hash   -942828317
     * @symbol  ??0LevelEventGenericPacket\@\@QEAA\@W4LevelEvent\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI LevelEventGenericPacket(enum class LevelEvent, class CompoundTag const &);

};