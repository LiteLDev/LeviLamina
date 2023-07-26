/**
 * @file  SetScorePacket.hpp
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
 * @brief MC class SetScorePacket.
 *
 */
class SetScorePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETSCOREPACKET
public:
    class SetScorePacket& operator=(class SetScorePacket const &) = delete;
    SetScorePacket(class SetScorePacket const &) = delete;
    SetScorePacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetScorePacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@SetScorePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@SetScorePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@SetScorePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@SetScorePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ?change\@SetScorePacket\@\@SA?AV1\@AEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    MCAPI static class SetScorePacket change(struct ScoreboardId const &, class Objective const &);
    /**
     * @symbol  ?change\@SetScorePacket\@\@SA?AV1\@V?$vector\@UScorePacketInfo\@\@V?$allocator\@UScorePacketInfo\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static class SetScorePacket change(std::vector<struct ScorePacketInfo>);
    /**
     * @symbol  ?remove\@SetScorePacket\@\@SA?AV1\@AEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    MCAPI static class SetScorePacket remove(struct ScoreboardId const &, class Objective const &);

//private:
    /**
     * @symbol  ??0SetScorePacket\@\@AEAA\@W4ScorePacketType\@\@AEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    MCAPI SetScorePacket(enum class ScorePacketType, struct ScoreboardId const &, class Objective const &);

private:

};