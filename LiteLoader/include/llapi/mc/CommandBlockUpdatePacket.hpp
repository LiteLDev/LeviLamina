/**
 * @file  CommandBlockUpdatePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandBlockUpdatePacket.
 *
 */
class CommandBlockUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKUPDATEPACKET
public:
    class CommandBlockUpdatePacket& operator=(class CommandBlockUpdatePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CommandBlockUpdatePacket();
    /**
     * @hash   -1577784053
     * @vftbl  1
     * @symbol  ?getId\@CommandBlockUpdatePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1962400696
     * @vftbl  2
     * @symbol  ?getName\@CommandBlockUpdatePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   2026084143
     * @vftbl  3
     * @symbol  ?write\@CommandBlockUpdatePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -590430929
     * @vftbl  6
     * @symbol  ?_read\@CommandBlockUpdatePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -140120449
     * @symbol  ??0CommandBlockUpdatePacket\@\@QEAA\@XZ
     */
    MCAPI CommandBlockUpdatePacket();
    /**
     * @hash   934347985
     * @symbol  ??0CommandBlockUpdatePacket\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandBlockUpdatePacket(class CommandBlockUpdatePacket const &);

};