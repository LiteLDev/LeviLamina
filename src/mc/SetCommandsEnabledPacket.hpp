/**
 * @file  SetCommandsEnabledPacket.hpp
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
 * @brief MC class SetCommandsEnabledPacket.
 *
 */
class SetCommandsEnabledPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETCOMMANDSENABLEDPACKET
public:
    class SetCommandsEnabledPacket& operator=(class SetCommandsEnabledPacket const &) = delete;
    SetCommandsEnabledPacket(class SetCommandsEnabledPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetCommandsEnabledPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@SetCommandsEnabledPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@SetCommandsEnabledPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@SetCommandsEnabledPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@SetCommandsEnabledPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0SetCommandsEnabledPacket\@\@QEAA\@_N\@Z
     */
    MCAPI SetCommandsEnabledPacket(bool);
    /**
     * @symbol  ??0SetCommandsEnabledPacket\@\@QEAA\@XZ
     */
    MCAPI SetCommandsEnabledPacket();

};