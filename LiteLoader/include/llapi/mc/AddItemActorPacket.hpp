/**
 * @file  AddItemActorPacket.hpp
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
 * @brief MC class AddItemActorPacket.
 *
 */
class AddItemActorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDITEMACTORPACKET
public:
    class AddItemActorPacket& operator=(class AddItemActorPacket const &) = delete;
    AddItemActorPacket(class AddItemActorPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AddItemActorPacket();
    /**
     * @hash   -1118266555
     * @vftbl  1
     * @symbol  ?getId\@AddItemActorPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -371111438
     * @vftbl  2
     * @symbol  ?getName\@AddItemActorPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -13459499
     * @vftbl  3
     * @symbol  ?write\@AddItemActorPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -76453003
     * @vftbl  6
     * @symbol  ?_read\@AddItemActorPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1516796699
     * @symbol  ??0AddItemActorPacket\@\@QEAA\@XZ
     */
    MCAPI AddItemActorPacket();
    /**
     * @hash   913489808
     * @symbol  ??0AddItemActorPacket\@\@QEAA\@AEAVItemActor\@\@\@Z
     */
    MCAPI AddItemActorPacket(class ItemActor &);

};