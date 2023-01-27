/**
 * @file  LessonProgressPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LessonProgressPacket.
 *
 */
class LessonProgressPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LESSONPROGRESSPACKET
public:
    class LessonProgressPacket& operator=(class LessonProgressPacket const &) = delete;
    LessonProgressPacket(class LessonProgressPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LessonProgressPacket();
    /**
     * @hash   -422805439
     * @vftbl  1
     * @symbol  ?getId\@LessonProgressPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1331703534
     * @vftbl  2
     * @symbol  ?getName\@LessonProgressPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1508180313
     * @vftbl  3
     * @symbol  ?write\@LessonProgressPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   48440105
     * @vftbl  6
     * @symbol  ?_read\@LessonProgressPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1980361815
     * @symbol  ??0LessonProgressPacket\@\@QEAA\@XZ
     */
    MCAPI LessonProgressPacket();
    /**
     * @hash   1886156406
     * @symbol  ??0LessonProgressPacket\@\@QEAA\@W4LessonAction\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI LessonProgressPacket(enum class LessonAction, int, std::string const &);

};