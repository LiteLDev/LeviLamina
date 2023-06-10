/**
 * @file  UpdateClientInputLocksPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateClientInputLocksPacket.
 *
 */
class UpdateClientInputLocksPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATECLIENTINPUTLOCKSPACKET
public:
    class UpdateClientInputLocksPacket& operator=(class UpdateClientInputLocksPacket const &) = delete;
    UpdateClientInputLocksPacket(class UpdateClientInputLocksPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateClientInputLocksPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@UpdateClientInputLocksPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateClientInputLocksPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@UpdateClientInputLocksPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATECLIENTINPUTLOCKSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateClientInputLocksPacket();
#endif
    /**
     * @symbol ??0UpdateClientInputLocksPacket\@\@QEAA\@AEBUClientInputLockComponent\@\@AEBVVec3\@\@\@Z
     */
    MCAPI UpdateClientInputLocksPacket(struct ClientInputLockComponent const &, class Vec3 const &);
    /**
     * @symbol ??0UpdateClientInputLocksPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateClientInputLocksPacket();

};
