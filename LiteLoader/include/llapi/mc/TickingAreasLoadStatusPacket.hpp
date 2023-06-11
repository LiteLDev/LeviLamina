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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@TickingAreasLoadStatusPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@TickingAreasLoadStatusPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@TickingAreasLoadStatusPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@TickingAreasLoadStatusPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREASLOADSTATUSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TickingAreasLoadStatusPacket();
#endif
    /**
     * @symbol ??0TickingAreasLoadStatusPacket\@\@QEAA\@XZ
     */
    MCAPI TickingAreasLoadStatusPacket();
    /**
     * @symbol ??0TickingAreasLoadStatusPacket\@\@QEAA\@_N\@Z
     */
    MCAPI TickingAreasLoadStatusPacket(bool);

};
