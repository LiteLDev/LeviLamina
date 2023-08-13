#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SetTitlePacket : public ::Packet {
public:
    // SetTitlePacket inner types define
    enum class TitleType {};

public:
    // prevent constructor by default
    SetTitlePacket& operator=(SetTitlePacket const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SetTitlePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetTitlePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SetTitlePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetTitlePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETTITLEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetTitlePacket();
#endif
    /**
     * @symbol ??0SetTitlePacket\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SetTitlePacket(class SetTitlePacket const&);
    /**
     * @symbol ??0SetTitlePacket\@\@QEAA\@XZ
     */
    MCAPI SetTitlePacket();
    /**
     * @symbol ??0SetTitlePacket\@\@QEAA\@W4TitleType\@0\@AEBVResolvedTextObject\@\@\@Z
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType, class ResolvedTextObject const&);
    /**
     * @symbol ??0SetTitlePacket\@\@QEAA\@W4TitleType\@0\@\@Z
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType);
    /**
     * @symbol ??0SetTitlePacket\@\@QEAA\@HHH\@Z
     */
    MCAPI SetTitlePacket(int, int, int);
    /**
     * @symbol
     * ??0SetTitlePacket\@\@QEAA\@W4TitleType\@0\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType, std::string const&);
    /**
     * @symbol ??4SetTitlePacket\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class SetTitlePacket& operator=(class SetTitlePacket&&);
    // NOLINTEND
};
