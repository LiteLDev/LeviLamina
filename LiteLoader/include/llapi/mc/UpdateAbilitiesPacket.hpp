/**
 * @file  UpdateAbilitiesPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
#include "SerializedAbilitiesData.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateAbilitiesPacket.
 *
 */
class UpdateAbilitiesPacket : public Packet {

#define AFTER_EXTRA
    SerializedAbilitiesData mData;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEABILITIESPACKET
public:
    class UpdateAbilitiesPacket& operator=(class UpdateAbilitiesPacket const &) = delete;
    UpdateAbilitiesPacket(class UpdateAbilitiesPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateAbilitiesPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@UpdateAbilitiesPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateAbilitiesPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@UpdateAbilitiesPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEABILITIESPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateAbilitiesPacket();
#endif
    /**
     * @symbol ??0UpdateAbilitiesPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateAbilitiesPacket();
    /**
     * @symbol ??0UpdateAbilitiesPacket\@\@QEAA\@UActorUniqueID\@\@AEBVLayeredAbilities\@\@\@Z
     */
    MCAPI UpdateAbilitiesPacket(struct ActorUniqueID, class LayeredAbilities const &);

};
