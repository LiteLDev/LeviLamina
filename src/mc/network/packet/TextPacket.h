#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
// clang-format on

class TextPacket : public ::Packet {

public:
    // prevent constructor by default
    TextPacket& operator=(TextPacket const&) = delete;
    TextPacket(TextPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@TextPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getName\@TextPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@TextPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?_read\@TextPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TextPacket(); // NOLINT
#endif
    /**
     * @symbol ??0TextPacket\@\@QEAA\@XZ
     */
    MCAPI TextPacket(); // NOLINT
    /**
     * @symbol
     * ?_shouldHandleTextPacketForPlayer\@TextPacket\@\@SA?B_NAEBV1\@AEAUIPlayerData\@PlayerCapabilities\@\@AEBUISharedController\@3\@\@Z
     */
    MCAPI static bool const
    _shouldHandleTextPacketForPlayer(class TextPacket const&, struct PlayerCapabilities::IPlayerData&, struct PlayerCapabilities::ISharedController const&); // NOLINT
    /**
     * @symbol
     * ?createAnnouncement\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket
    createAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?createChat\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket
    createChat(std::string const&, std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?createJukeboxPopup\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static class TextPacket createJukeboxPopup(std::string const&, std::vector<std::string> const&); // NOLINT
    /**
     * @symbol
     * ?createRawJsonObjectMessage\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class TextPacket createRawJsonObjectMessage(std::string const&); // NOLINT
    /**
     * @symbol
     * ?createSystemMessage\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class TextPacket createSystemMessage(std::string const&); // NOLINT
    /**
     * @symbol
     * ?createTextObjectMessage\@TextPacket\@\@SA?AV1\@AEBVResolvedTextObject\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI static class TextPacket
    createTextObjectMessage(class ResolvedTextObject const&, std::string, std::string); // NOLINT
    /**
     * @symbol
     * ?createTextObjectWhisperMessage\@TextPacket\@\@SA?AV1\@AEBVResolvedTextObject\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI static class TextPacket
    createTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?createTextObjectWhisperMessage\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI static class TextPacket
    createTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?createTranslated\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static class TextPacket createTranslated(std::string const&, std::vector<std::string> const&); // NOLINT
    /**
     * @symbol
     * ?createTranslatedAnnouncement\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket
    createTranslatedAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?createWhisper\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket
    createWhisper(std::string const&, std::string const&, std::string const&, std::string const&); // NOLINT
};
