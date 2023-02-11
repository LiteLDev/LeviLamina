/**
 * @file  TickingAreasLoadStatusPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TickingAreasLoadStatusPacket.
 *
 */
class TickingAreasLoadStatusPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREASLOADSTATUSPACKET
public:
    class TickingAreasLoadStatusPacket& operator=(class TickingAreasLoadStatusPacket const &) = delete;
    TickingAreasLoadStatusPacket(class TickingAreasLoadStatusPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TickingAreasLoadStatusPacket();
    /**
     * @hash   -1659440467
     * @vftbl  1
     * @symbol  ?getId\@TickingAreasLoadStatusPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   2098733402
     * @vftbl  2
     * @symbol  ?getName\@TickingAreasLoadStatusPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -28398659
     * @vftbl  3
     * @symbol  ?write\@TickingAreasLoadStatusPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1810444547
     * @vftbl  6
     * @symbol  ?_read\@TickingAreasLoadStatusPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   796679158
     * @symbol  ??0TickingAreasLoadStatusPacket\@\@QEAA\@_N\@Z
     */
    MCAPI TickingAreasLoadStatusPacket(bool);
    /**
     * @hash   829889917
     * @symbol  ??0TickingAreasLoadStatusPacket\@\@QEAA\@XZ
     */
    MCAPI TickingAreasLoadStatusPacket();

};