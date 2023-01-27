/**
 * @file  RemoveEntityPacket.hpp
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
 * @brief MC class RemoveEntityPacket.
 *
 */
class RemoveEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEENTITYPACKET
public:
    class RemoveEntityPacket& operator=(class RemoveEntityPacket const &) = delete;
    RemoveEntityPacket(class RemoveEntityPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RemoveEntityPacket();
    /**
     * @hash   989528431
     * @vftbl  1
     * @symbol  ?getId\@RemoveEntityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1211960420
     * @vftbl  2
     * @symbol  ?getName\@RemoveEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   379334187
     * @symbol  ??0RemoveEntityPacket\@\@QEAA\@XZ
     */
    MCAPI RemoveEntityPacket();
    /**
     * @hash   163498742
     * @symbol  ??0RemoveEntityPacket\@\@QEAA\@AEAVEntityContext\@\@\@Z
     */
    MCAPI RemoveEntityPacket(class EntityContext &);

};