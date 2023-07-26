#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SetDifficultyPacket : public ::Packet {

public:
    // prevent constructor by default
    SetDifficultyPacket& operator=(SetDifficultyPacket const&) = delete;
    SetDifficultyPacket(SetDifficultyPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@SetDifficultyPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetDifficultyPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@SetDifficultyPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetDifficultyPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETDIFFICULTYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetDifficultyPacket(); // NOLINT
#endif
    /**
     * @symbol ??0SetDifficultyPacket\@\@QEAA\@W4Difficulty\@\@\@Z
     */
    MCAPI SetDifficultyPacket(enum class Difficulty); // NOLINT
    /**
     * @symbol ??0SetDifficultyPacket\@\@QEAA\@XZ
     */
    MCAPI SetDifficultyPacket(); // NOLINT
    /**
     * @symbol ?getDifficulty\@SetDifficultyPacket\@\@QEBA?AW4Difficulty\@\@XZ
     */
    MCAPI enum class Difficulty getDifficulty() const; // NOLINT
};
