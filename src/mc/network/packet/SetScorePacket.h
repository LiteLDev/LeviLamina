#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SetScorePacket : public ::Packet {

public:
    // prevent constructor by default
    SetScorePacket& operator=(SetScorePacket const&) = delete;
    SetScorePacket(SetScorePacket const&)            = delete;
    SetScorePacket()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@SetScorePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetScorePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@SetScorePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetScorePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETSCOREPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetScorePacket(); // NOLINT
#endif
    /**
     * @symbol
     * ?change\@SetScorePacket\@\@SA?AV1\@V?$vector\@UScorePacketInfo\@\@V?$allocator\@UScorePacketInfo\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static class SetScorePacket change(std::vector<struct ScorePacketInfo>); // NOLINT
    /**
     * @symbol ?change\@SetScorePacket\@\@SA?AV1\@AEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    MCAPI static class SetScorePacket change(struct ScoreboardId const&, class Objective const&); // NOLINT
    /**
     * @symbol ?remove\@SetScorePacket\@\@SA?AV1\@AEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    MCAPI static class SetScorePacket remove(struct ScoreboardId const&, class Objective const&); // NOLINT

    // private:
    /**
     * @symbol ??0SetScorePacket\@\@AEAA\@W4ScorePacketType\@\@AEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    MCAPI SetScorePacket(enum class ScorePacketType, struct ScoreboardId const&, class Objective const&); // NOLINT

private:
};
