/**
 * @file  MapCreateLockedCopyPacket.hpp
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
 * @brief MC class MapCreateLockedCopyPacket.
 *
 */
class MapCreateLockedCopyPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPCREATELOCKEDCOPYPACKET
public:
    class MapCreateLockedCopyPacket& operator=(class MapCreateLockedCopyPacket const &) = delete;
    MapCreateLockedCopyPacket(class MapCreateLockedCopyPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MapCreateLockedCopyPacket();
    /**
     * @hash   1556011215
     * @vftbl  1
     * @symbol  ?getId\@MapCreateLockedCopyPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1424985220
     * @vftbl  2
     * @symbol  ?getName\@MapCreateLockedCopyPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   257025067
     * @vftbl  3
     * @symbol  ?write\@MapCreateLockedCopyPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   2115648555
     * @vftbl  6
     * @symbol  ?_read\@MapCreateLockedCopyPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1033638981
     * @symbol  ??0MapCreateLockedCopyPacket\@\@QEAA\@XZ
     */
    MCAPI MapCreateLockedCopyPacket();
    /**
     * @hash   -1995863207
     * @symbol  ??0MapCreateLockedCopyPacket\@\@QEAA\@UActorUniqueID\@\@0\@Z
     */
    MCAPI MapCreateLockedCopyPacket(struct ActorUniqueID, struct ActorUniqueID);
    /**
     * @hash   -1554041582
     * @symbol  ?getNewMapId\@MapCreateLockedCopyPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getNewMapId() const;
    /**
     * @hash   1718327908
     * @symbol  ?getOriginalMapId\@MapCreateLockedCopyPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getOriginalMapId() const;

};