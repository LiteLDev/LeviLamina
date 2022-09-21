/**
 * @file  MC/MoveActorAbsolutePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveActorAbsolutePacket.
 *
 */
class MoveActorAbsolutePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEACTORABSOLUTEPACKET
public:
    class MoveActorAbsolutePacket& operator=(class MoveActorAbsolutePacket const &) = delete;
    MoveActorAbsolutePacket(class MoveActorAbsolutePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveActorAbsolutePacket();
    /**
     * @hash   1838101259
     * @vftbl  1
     * @symbol ?getId@MoveActorAbsolutePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1621872056
     * @vftbl  2
     * @symbol ?getName@MoveActorAbsolutePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   262257615
     * @vftbl  3
     * @symbol ?write@MoveActorAbsolutePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -250118113
     * @vftbl  6
     * @symbol ?_read@MoveActorAbsolutePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1970146719
     * @symbol ??0MoveActorAbsolutePacket@@QEAA@XZ
     */
    MCAPI MoveActorAbsolutePacket();
    /**
     * @hash   542957756
     * @symbol ??0MoveActorAbsolutePacket@@QEAA@AEBVMoveActorAbsoluteData@@@Z
     */
    MCAPI MoveActorAbsolutePacket(class MoveActorAbsoluteData const &);

};