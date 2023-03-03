/**
 * @file  ClientboundMapItemDataPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MapItemTrackedActor.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientboundMapItemDataPacket.
 *
 */
class ClientboundMapItemDataPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBOUNDMAPITEMDATAPACKET
public:
    class ClientboundMapItemDataPacket& operator=(class ClientboundMapItemDataPacket const &) = delete;
    ClientboundMapItemDataPacket(class ClientboundMapItemDataPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ClientboundMapItemDataPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@ClientboundMapItemDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@ClientboundMapItemDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@ClientboundMapItemDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@ClientboundMapItemDataPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0ClientboundMapItemDataPacket\@\@QEAA\@XZ
     */
    MCAPI ClientboundMapItemDataPacket();
    /**
     * @symbol  ??0ClientboundMapItemDataPacket\@\@QEAA\@V?$not_null\@PEAVMapItemSavedData\@\@\@gsl\@\@AEAVLevel\@\@\@Z
     */
    MCAPI ClientboundMapItemDataPacket(class gsl::not_null<class MapItemSavedData *>, class Level &);
    /**
     * @symbol  ??0ClientboundMapItemDataPacket\@\@QEAA\@UActorUniqueID\@\@CAEBV?$vector\@U?$pair\@UUniqueId\@MapItemTrackedActor\@\@V?$shared_ptr\@VMapDecoration\@\@\@std\@\@\@std\@\@V?$allocator\@U?$pair\@UUniqueId\@MapItemTrackedActor\@\@V?$shared_ptr\@VMapDecoration\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@V?$buffer_span\@I\@\@HHHHV?$AutomaticID\@VDimension\@\@H\@\@_NAEBVBlockPos\@\@\@Z
     */
    MCAPI ClientboundMapItemDataPacket(struct ActorUniqueID, signed char, std::vector<struct std::pair<struct MapItemTrackedActor::UniqueId, class std::shared_ptr<class MapDecoration>>> const &, class buffer_span<unsigned int>, int, int, int, int, class AutomaticID<class Dimension, int>, bool, class BlockPos const &);

};