/**
 * @file  EmoteListPacket.hpp
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
 * @brief MC class EmoteListPacket.
 *
 */
class EmoteListPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMOTELISTPACKET
public:
    class EmoteListPacket& operator=(class EmoteListPacket const &) = delete;
    EmoteListPacket(class EmoteListPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@EmoteListPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@EmoteListPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@EmoteListPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@EmoteListPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EMOTELISTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EmoteListPacket();
#endif
    /**
     * @symbol ??0EmoteListPacket\@\@QEAA\@VActorRuntimeID\@\@\@Z
     */
    MCAPI EmoteListPacket(class ActorRuntimeID);
    /**
     * @symbol ??0EmoteListPacket\@\@QEAA\@XZ
     */
    MCAPI EmoteListPacket();
    /**
     * @symbol ?MAX_EMOTE_PIECE_IDS\@EmoteListPacket\@\@2HB
     */
    MCAPI static int const MAX_EMOTE_PIECE_IDS;

};
