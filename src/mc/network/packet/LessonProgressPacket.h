#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class LessonProgressPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LESSONPROGRESSPACKET
public:
    LessonProgressPacket& operator=(LessonProgressPacket const&) = delete;
    LessonProgressPacket(LessonProgressPacket const&)            = delete;
#endif

public:
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
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
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
    MCAPI LessonProgressPacket(enum class LessonAction, int, std::string const&);
    /**
     * @symbol ??0LessonProgressPacket\@\@QEAA\@XZ
     */
    MCAPI LessonProgressPacket();
};
