/**
 * @file  NpcDialoguePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NpcDialoguePacket();
    /**
     * @hash   411428365
     * @vftbl  1
     * @symbol ?getId@NpcDialoguePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -368820038
     * @vftbl  2
     * @symbol ?getName@NpcDialoguePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1305602877
     * @vftbl  3
     * @symbol ?write@NpcDialoguePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -490901827
     * @vftbl  6
     * @symbol ?_read@NpcDialoguePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   502510765
     * @symbol ??0NpcDialoguePacket@@QEAA@XZ
     */
    MCAPI NpcDialoguePacket();
    /**
     * @hash   -463789702
     * @symbol ??0NpcDialoguePacket@@QEAA@UActorUniqueID@@@Z
     */
    MCAPI NpcDialoguePacket(struct ActorUniqueID);
    /**
     * @hash   -741427768
     * @symbol ?initializePacket@NpcDialoguePacket@@SA_NAEAV1@PEBVNpcDialogueStorage@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool initializePacket(class NpcDialoguePacket &, class NpcDialogueStorage const *, std::string const &);

};