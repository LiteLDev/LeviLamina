#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class EntityServerPacket : public ::Packet {

public:
    // prevent constructor by default
    EntityServerPacket& operator=(EntityServerPacket const&) = delete;
    EntityServerPacket(EntityServerPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@EntityServerPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@EntityServerPacket\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYSERVERPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EntityServerPacket(); // NOLINT
#endif
    /**
     * @symbol ??0EntityServerPacket\@\@QEAA\@AEBVEntityContext\@\@\@Z
     */
    MCAPI EntityServerPacket(class EntityContext const&); // NOLINT
    /**
     * @symbol ??0EntityServerPacket\@\@QEAA\@XZ
     */
    MCAPI EntityServerPacket(); // NOLINT
};
