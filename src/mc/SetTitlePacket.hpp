/**
 * @file  SetTitlePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetTitlePacket.
 *
 */
class SetTitlePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
enum class TitleType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTITLEPACKET
public:
    class SetTitlePacket& operator=(class SetTitlePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetTitlePacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@SetTitlePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@SetTitlePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@SetTitlePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@SetTitlePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0SetTitlePacket\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SetTitlePacket(class SetTitlePacket const &);
    /**
     * @symbol  ??0SetTitlePacket\@\@QEAA\@XZ
     */
    MCAPI SetTitlePacket();
    /**
     * @symbol  ??0SetTitlePacket\@\@QEAA\@W4TitleType\@0\@AEBVResolvedTextObject\@\@\@Z
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType, class ResolvedTextObject const &);
    /**
     * @symbol  ??0SetTitlePacket\@\@QEAA\@W4TitleType\@0\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType, std::string const &);
    /**
     * @symbol  ??0SetTitlePacket\@\@QEAA\@W4TitleType\@0\@\@Z
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType);
    /**
     * @symbol  ??0SetTitlePacket\@\@QEAA\@HHH\@Z
     */
    MCAPI SetTitlePacket(int, int, int);
    /**
     * @symbol  ??4SetTitlePacket\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class SetTitlePacket & operator=(class SetTitlePacket &&);

};