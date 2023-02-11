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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UpdateAbilitiesPacket();
    /**
     * @hash   1247638455
     * @vftbl  1
     * @symbol  ?getId\@UpdateAbilitiesPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   2111639140
     * @vftbl  2
     * @symbol  ?getName\@UpdateAbilitiesPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1825797251
     * @vftbl  3
     * @symbol  ?write\@UpdateAbilitiesPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -180955741
     * @vftbl  6
     * @symbol  ?_read\@UpdateAbilitiesPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1147162413
     * @symbol  ??0UpdateAbilitiesPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateAbilitiesPacket();
    /**
     * @hash   -730438789
     * @symbol  ??0UpdateAbilitiesPacket\@\@QEAA\@UActorUniqueID\@\@AEBVLayeredAbilities\@\@\@Z
     */
    MCAPI UpdateAbilitiesPacket(struct ActorUniqueID, class LayeredAbilities const &);

};