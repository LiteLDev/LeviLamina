/**
 * @file  SetScorePacket.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SetScorePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@SetScorePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SetScorePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@SetScorePacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETSCOREPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetScorePacket();
#endif
    /**
     * @symbol ?change\@SetScorePacket\@\@SA?AV1\@V?$vector\@UScorePacketInfo\@\@V?$allocator\@UScorePacketInfo\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static class SetScorePacket change(std::vector<struct ScorePacketInfo>);
    /**
     * @symbol ?change\@SetScorePacket\@\@SA?AV1\@AEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    MCAPI static class SetScorePacket change(struct ScoreboardId const &, class Objective const &);
    /**
     * @symbol ?remove\@SetScorePacket\@\@SA?AV1\@AEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    MCAPI static class SetScorePacket remove(struct ScoreboardId const &, class Objective const &);

//private:
    /**
     * @symbol ??0SetScorePacket\@\@AEAA\@W4ScorePacketType\@\@AEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    MCAPI SetScorePacket(enum class ScorePacketType, struct ScoreboardId const &, class Objective const &);

private:

};
