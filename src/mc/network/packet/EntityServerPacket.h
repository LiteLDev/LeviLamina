#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class EntityServerPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSERVERPACKET
public:
    EntityServerPacket& operator=(EntityServerPacket const&) = delete;
    EntityServerPacket(EntityServerPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?write\@EntityServerPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@EntityServerPacket\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYSERVERPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EntityServerPacket();
#endif
    /**
     * @symbol ??0EntityServerPacket\@\@QEAA\@AEBVEntityContext\@\@\@Z
     */
    MCAPI EntityServerPacket(class EntityContext const&);
    /**
     * @symbol ??0EntityServerPacket\@\@QEAA\@XZ
     */
    MCAPI EntityServerPacket();
};
