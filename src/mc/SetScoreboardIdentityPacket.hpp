/**
 * @file  SetScoreboardIdentityPacket.hpp
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
 * @brief MC class SetScoreboardIdentityPacket.
 *
 */
class SetScoreboardIdentityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETSCOREBOARDIDENTITYPACKET
public:
    class SetScoreboardIdentityPacket& operator=(class SetScoreboardIdentityPacket const &) = delete;
    SetScoreboardIdentityPacket(class SetScoreboardIdentityPacket const &) = delete;
    SetScoreboardIdentityPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetScoreboardIdentityPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@SetScoreboardIdentityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@SetScoreboardIdentityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@SetScoreboardIdentityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@SetScoreboardIdentityPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ?change\@SetScoreboardIdentityPacket\@\@SA?AV1\@AEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI static class SetScoreboardIdentityPacket change(struct ScoreboardId const &, struct PlayerScoreboardId const &);

};