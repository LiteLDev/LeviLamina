/**
 * @file  RemoveObjectivePacket.hpp
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
 * @brief MC class RemoveObjectivePacket.
 *
 */
class RemoveObjectivePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEOBJECTIVEPACKET
public:
    class RemoveObjectivePacket& operator=(class RemoveObjectivePacket const &) = delete;
    RemoveObjectivePacket(class RemoveObjectivePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RemoveObjectivePacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@RemoveObjectivePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@RemoveObjectivePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@RemoveObjectivePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@RemoveObjectivePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0RemoveObjectivePacket\@\@QEAA\@XZ
     */
    MCAPI RemoveObjectivePacket();
    /**
     * @symbol  ??0RemoveObjectivePacket\@\@QEAA\@AEBVObjective\@\@\@Z
     */
    MCAPI RemoveObjectivePacket(class Objective const &);

};