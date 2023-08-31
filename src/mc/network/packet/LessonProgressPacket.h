#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/LessonAction.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/LessonAction.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LessonProgressPacket : public ::Packet {

public:
    LessonAction mAction;     // this+0x30
    int32_t          mScore;      // this+0x34
    std::string  mActivityId; // this+0x38

    // prevent constructor by default
    LessonProgressPacket& operator=(LessonProgressPacket const&) = delete;
    LessonProgressPacket(LessonProgressPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@LessonProgressPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@LessonProgressPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@LessonProgressPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@LessonProgressPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LESSONPROGRESSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LessonProgressPacket();
#endif
    /**
     * @symbol
     * ??0LessonProgressPacket\@\@QEAA\@W4LessonAction\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI LessonProgressPacket(enum class LessonAction, int32_t, std::string const&);
    /**
     * @symbol ??0LessonProgressPacket\@\@QEAA\@XZ
     */
    MCAPI LessonProgressPacket();
    // NOLINTEND
};
