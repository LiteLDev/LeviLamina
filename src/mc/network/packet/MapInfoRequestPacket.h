#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class MapInfoRequestPacket : public ::Packet {

public:
    // prevent constructor by default
    MapInfoRequestPacket& operator=(MapInfoRequestPacket const&) = delete;
    MapInfoRequestPacket(MapInfoRequestPacket const&)            = delete;

public:
    // NOLINTBEGIN
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
     * @symbol
     * ?getName\@MapInfoRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MapInfoRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@MapInfoRequestPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MAPINFOREQUESTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MapInfoRequestPacket();
#endif
    /**
     * @symbol ??0MapInfoRequestPacket\@\@QEAA\@UActorUniqueID\@\@AEAVMapItemSavedData\@\@\@Z
     */
    MCAPI MapInfoRequestPacket(struct ActorUniqueID, class MapItemSavedData&);
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
    MCAPI bool replaceServerPixels(class MapItemSavedData&) const;
    // NOLINTEND
};
