#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SetTitlePacket : public ::Packet {
public:
    // SetTitlePacket inner types declare
    // clang-format off

    // clang-format on

    // SetTitlePacket inner types define
    enum class TitleType : int {
        Clear               = 0x0,
        Reset               = 0x1,
        Title               = 0x2,
        Subtitle            = 0x3,
        Actionbar           = 0x4,
        Times               = 0x5,
        TitleTextObject     = 0x6,
        SubtitleTextObject  = 0x7,
        ActionbarTextObject = 0x8,
    };

public:
    // prevent constructor by default
    SetTitlePacket& operator=(SetTitlePacket const&) = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@SetTitlePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetTitlePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@SetTitlePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetTitlePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETTITLEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetTitlePacket(); // NOLINT
#endif
    /**
     * @symbol ??0SetTitlePacket\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SetTitlePacket(class SetTitlePacket const&); // NOLINT
    /**
     * @symbol ??0SetTitlePacket\@\@QEAA\@XZ
     */
    MCAPI SetTitlePacket(); // NOLINT
    /**
     * @symbol ??0SetTitlePacket\@\@QEAA\@W4TitleType\@0\@\@Z
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType); // NOLINT
    /**
     * @symbol ??0SetTitlePacket\@\@QEAA\@HHH\@Z
     */
    MCAPI SetTitlePacket(int, int, int); // NOLINT
    /**
     * @symbol ??0SetTitlePacket\@\@QEAA\@W4TitleType\@0\@AEBVResolvedTextObject\@\@\@Z
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType, class ResolvedTextObject const&); // NOLINT
    /**
     * @symbol
     * ??0SetTitlePacket\@\@QEAA\@W4TitleType\@0\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType, std::string const&); // NOLINT
    /**
     * @symbol ??4SetTitlePacket\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class SetTitlePacket& operator=(class SetTitlePacket&&); // NOLINT
};
