/**
 * @file  MoveActorAbsolutePacket.hpp
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
 * @brief MC class MoveActorAbsolutePacket.
 *
 */
class MoveActorAbsolutePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEACTORABSOLUTEPACKET
public:
    class MoveActorAbsolutePacket& operator=(class MoveActorAbsolutePacket const &) = delete;
    MoveActorAbsolutePacket(class MoveActorAbsolutePacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MoveActorAbsolutePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@MoveActorAbsolutePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MoveActorAbsolutePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@MoveActorAbsolutePacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEACTORABSOLUTEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveActorAbsolutePacket();
#endif
    /**
     * @symbol ??0MoveActorAbsolutePacket\@\@QEAA\@AEBVMoveActorAbsoluteData\@\@\@Z
     */
    MCAPI MoveActorAbsolutePacket(class MoveActorAbsoluteData const &);
    /**
     * @symbol ??0MoveActorAbsolutePacket\@\@QEAA\@XZ
     */
    MCAPI MoveActorAbsolutePacket();

};
