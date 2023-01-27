/**
 * @file  ScriptCustomEventPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptCustomEventPacket.
 *
 */
class ScriptCustomEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTCUSTOMEVENTPACKET
public:
    class ScriptCustomEventPacket& operator=(class ScriptCustomEventPacket const &) = delete;
    ScriptCustomEventPacket(class ScriptCustomEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptCustomEventPacket();
    /**
     * @hash   -114306040
     * @vftbl  1
     * @symbol  ?getId\@ScriptCustomEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1107259723
     * @vftbl  2
     * @symbol  ?getName\@ScriptCustomEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   943231666
     * @vftbl  3
     * @symbol  ?write\@ScriptCustomEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1445354370
     * @vftbl  6
     * @symbol  ?_read\@ScriptCustomEventPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -237208878
     * @symbol  ??0ScriptCustomEventPacket\@\@QEAA\@XZ
     */
    MCAPI ScriptCustomEventPacket();

};