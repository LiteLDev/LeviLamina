#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class MapCreateLockedCopyPacket : public ::Packet {

public:
    // prevent constructor by default
    MapCreateLockedCopyPacket& operator=(MapCreateLockedCopyPacket const&) = delete;
    MapCreateLockedCopyPacket(MapCreateLockedCopyPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MapCreateLockedCopyPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@MapCreateLockedCopyPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MapCreateLockedCopyPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@MapCreateLockedCopyPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MAPCREATELOCKEDCOPYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MapCreateLockedCopyPacket();
#endif
    /**
     * @symbol ??0MapCreateLockedCopyPacket\@\@QEAA\@UActorUniqueID\@\@0\@Z
     */
    MCAPI MapCreateLockedCopyPacket(struct ActorUniqueID, struct ActorUniqueID);
    /**
     * @symbol ??0MapCreateLockedCopyPacket\@\@QEAA\@XZ
     */
    MCAPI MapCreateLockedCopyPacket();
    /**
     * @symbol ?getNewMapId\@MapCreateLockedCopyPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getNewMapId() const;
    /**
     * @symbol ?getOriginalMapId\@MapCreateLockedCopyPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getOriginalMapId() const;
    // NOLINTEND
};
