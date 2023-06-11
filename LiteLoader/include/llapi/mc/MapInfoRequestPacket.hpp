/**
 * @file  MapInfoRequestPacket.hpp
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
 * @brief MC class MapInfoRequestPacket.
 *
 */
class MapInfoRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPINFOREQUESTPACKET
public:
    class MapInfoRequestPacket& operator=(class MapInfoRequestPacket const &) = delete;
    MapInfoRequestPacket(class MapInfoRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MapInfoRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@MapInfoRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MapInfoRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@MapInfoRequestPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MAPINFOREQUESTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MapInfoRequestPacket();
#endif
    /**
     * @symbol ??0MapInfoRequestPacket\@\@QEAA\@UActorUniqueID\@\@AEAVMapItemSavedData\@\@\@Z
     */
    MCAPI MapInfoRequestPacket(struct ActorUniqueID, class MapItemSavedData &);
    /**
     * @symbol ??0MapInfoRequestPacket\@\@QEAA\@UActorUniqueID\@\@\@Z
     */
    MCAPI MapInfoRequestPacket(struct ActorUniqueID);
    /**
     * @symbol ??0MapInfoRequestPacket\@\@QEAA\@XZ
     */
    MCAPI MapInfoRequestPacket();
    /**
     * @symbol ?getMapId\@MapInfoRequestPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getMapId() const;
    /**
     * @symbol ?replaceServerPixels\@MapInfoRequestPacket\@\@QEBA_NAEAVMapItemSavedData\@\@\@Z
     */
    MCAPI bool replaceServerPixels(class MapItemSavedData &) const;

};
