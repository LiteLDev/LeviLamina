#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SetDisplayObjectivePacket : public ::Packet {

public:
    // prevent constructor by default
    SetDisplayObjectivePacket& operator=(SetDisplayObjectivePacket const&) = delete;
    SetDisplayObjectivePacket(SetDisplayObjectivePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SetDisplayObjectivePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetDisplayObjectivePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SetDisplayObjectivePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetDisplayObjectivePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETDISPLAYOBJECTIVEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetDisplayObjectivePacket();
#endif
    /**
     * @symbol ??0SetDisplayObjectivePacket\@\@QEAA\@XZ
     */
    MCAPI SetDisplayObjectivePacket();
    /**
     * @symbol
     * ??0SetDisplayObjectivePacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000W4ObjectiveSortOrder\@\@\@Z
     */
    MCAPI SetDisplayObjectivePacket(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        enum class ObjectiveSortOrder
    );
    // NOLINTEND
};
