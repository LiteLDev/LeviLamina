#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/RemoveEntityPacket.h"

class RemoveVolumeEntityPacket : public ::RemoveEntityPacket {

public:
    // prevent constructor by default
    RemoveVolumeEntityPacket& operator=(RemoveVolumeEntityPacket const&) = delete;
    RemoveVolumeEntityPacket(RemoveVolumeEntityPacket const&)            = delete;
    RemoveVolumeEntityPacket()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@RemoveVolumeEntityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@RemoveVolumeEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@RemoveVolumeEntityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@RemoveVolumeEntityPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOVEVOLUMEENTITYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RemoveVolumeEntityPacket();
#endif
    /**
     * @symbol ??0RemoveVolumeEntityPacket\@\@QEAA\@AEAVEntityContext\@\@\@Z
     */
    MCAPI RemoveVolumeEntityPacket(class EntityContext&);
    // NOLINTEND
};
