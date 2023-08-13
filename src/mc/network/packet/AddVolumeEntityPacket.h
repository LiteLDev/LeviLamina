#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/AddEntityPacket.h"

class AddVolumeEntityPacket : public ::AddEntityPacket {

public:
    // prevent constructor by default
    AddVolumeEntityPacket& operator=(AddVolumeEntityPacket const&) = delete;
    AddVolumeEntityPacket(AddVolumeEntityPacket const&)            = delete;
    AddVolumeEntityPacket()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AddVolumeEntityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AddVolumeEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AddVolumeEntityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@AddVolumeEntityPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDVOLUMEENTITYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AddVolumeEntityPacket();
#endif
    /**
     * @symbol ??0AddVolumeEntityPacket\@\@QEAA\@AEBVEntityContext\@\@VCompoundTag\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI AddVolumeEntityPacket(class EntityContext const&, class CompoundTag, class SemVersion const&);
    // NOLINTEND
};
