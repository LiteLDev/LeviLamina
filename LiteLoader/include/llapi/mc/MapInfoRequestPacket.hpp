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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MapInfoRequestPacket();
    /**
     * @hash   1029670945
     * @vftbl  1
     * @symbol  ?getId\@MapInfoRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   365115086
     * @vftbl  2
     * @symbol  ?getName\@MapInfoRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -305714983
     * @vftbl  3
     * @symbol  ?write\@MapInfoRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1048294119
     * @vftbl  6
     * @symbol  ?_read\@MapInfoRequestPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -739101511
     * @symbol  ??0MapInfoRequestPacket\@\@QEAA\@XZ
     */
    MCAPI MapInfoRequestPacket();
    /**
     * @hash   -1826475665
     * @symbol  ??0MapInfoRequestPacket\@\@QEAA\@UActorUniqueID\@\@AEAVMapItemSavedData\@\@\@Z
     */
    MCAPI MapInfoRequestPacket(struct ActorUniqueID, class MapItemSavedData &);
    /**
     * @hash   584983414
     * @symbol  ??0MapInfoRequestPacket\@\@QEAA\@UActorUniqueID\@\@\@Z
     */
    MCAPI MapInfoRequestPacket(struct ActorUniqueID);
    /**
     * @hash   -1979832792
     * @symbol  ?getMapId\@MapInfoRequestPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getMapId() const;
    /**
     * @hash   1444092527
     * @symbol  ?replaceServerPixels\@MapInfoRequestPacket\@\@QEBA_NAEAVMapItemSavedData\@\@\@Z
     */
    MCAPI bool replaceServerPixels(class MapItemSavedData &) const;

};