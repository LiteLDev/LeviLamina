/**
 * @file  MoveActorDeltaPacket.hpp
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
 * @brief MC class MoveActorDeltaPacket.
 *
 */
class MoveActorDeltaPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEACTORDELTAPACKET
public:
    class MoveActorDeltaPacket& operator=(class MoveActorDeltaPacket const &) = delete;
    MoveActorDeltaPacket(class MoveActorDeltaPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MoveActorDeltaPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@MoveActorDeltaPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MoveActorDeltaPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@MoveActorDeltaPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEACTORDELTAPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveActorDeltaPacket();
#endif
    /**
     * @symbol ??0MoveActorDeltaPacket\@\@QEAA\@AEBVMoveActorDeltaData\@\@\@Z
     */
    MCAPI MoveActorDeltaPacket(class MoveActorDeltaData const &);
    /**
     * @symbol ??0MoveActorDeltaPacket\@\@QEAA\@XZ
     */
    MCAPI MoveActorDeltaPacket();

};
