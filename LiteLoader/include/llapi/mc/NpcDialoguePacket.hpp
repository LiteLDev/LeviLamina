/**
 * @file  NpcDialoguePacket.hpp
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
 * @brief MC class NpcDialoguePacket.
 *
 */
class NpcDialoguePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDIALOGUEPACKET
public:
    class NpcDialoguePacket& operator=(class NpcDialoguePacket const &) = delete;
    NpcDialoguePacket(class NpcDialoguePacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@NpcDialoguePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@NpcDialoguePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@NpcDialoguePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@NpcDialoguePacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCDIALOGUEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NpcDialoguePacket();
#endif
    /**
     * @symbol ??0NpcDialoguePacket\@\@QEAA\@UActorUniqueID\@\@\@Z
     */
    MCAPI NpcDialoguePacket(struct ActorUniqueID);
    /**
     * @symbol ??0NpcDialoguePacket\@\@QEAA\@XZ
     */
    MCAPI NpcDialoguePacket();
    /**
     * @symbol ?initializePacket\@NpcDialoguePacket\@\@SA_NAEAV1\@PEBVNpcDialogueStorage\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool initializePacket(class NpcDialoguePacket &, class NpcDialogueStorage const *, std::string const &);

};
