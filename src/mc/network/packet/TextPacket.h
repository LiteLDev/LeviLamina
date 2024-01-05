#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
// clang-format on

class TextPacket : public ::Packet {
public:
    // prevent constructor by default
    TextPacket(TextPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TextPacket@@UEAA@XZ
    virtual ~TextPacket();

    // vIndex: 1, symbol: ?getId@TextPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@TextPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@TextPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol: ?_read@TextPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0TextPacket@@QEAA@XZ
    MCAPI TextPacket();

    // symbol: ??4TextPacket@@QEAAAEAV0@AEBV0@@Z
    MCAPI class TextPacket& operator=(class TextPacket const&);

    // symbol:
    // ?_shouldHandleTextPacketForPlayer@TextPacket@@SA?B_NAEBV1@AEAUIPlayerData@PlayerCapabilities@@AEBUISharedController@3@@Z
    MCAPI static bool const
    _shouldHandleTextPacketForPlayer(class TextPacket const& packet, struct PlayerCapabilities::IPlayerData&, struct PlayerCapabilities::ISharedController const&);

    // symbol:
    // ?createAnnouncement@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCAPI static class TextPacket createAnnouncement(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    // symbol: ?createChat@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCAPI static class TextPacket createChat(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    // symbol:
    // ?createJukeboxPopup@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI static class TextPacket
    createJukeboxPopup(std::string const& message, std::vector<std::string> const& params);

    // symbol:
    // ?createRawJsonObjectMessage@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class TextPacket createRawJsonObjectMessage(std::string const&);

    // symbol:
    // ?createSystemMessage@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class TextPacket createSystemMessage(std::string const& message);

    // symbol:
    // ?createTextObjectMessage@TextPacket@@SA?AV1@AEBVResolvedTextObject@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI static class TextPacket createTextObjectMessage(class ResolvedTextObject const&, std::string, std::string);

    // symbol:
    // ?createTextObjectWhisperMessage@TextPacket@@SA?AV1@AEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI static class TextPacket createTextObjectWhisperMessage(
        class ResolvedTextObject const&,
        std::string const& xuid,
        std::string const& platformId
    );

    // symbol:
    // ?createTextObjectWhisperMessage@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCAPI static class TextPacket
    createTextObjectWhisperMessage(std::string const& message, std::string const& xuid, std::string const& platformId);

    // symbol:
    // ?createTranslated@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI static class TextPacket createTranslated(std::string const& message, std::vector<std::string> const& params);

    // symbol:
    // ?createTranslatedAnnouncement@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCAPI static class TextPacket createTranslatedAnnouncement(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    // symbol: ?createWhisper@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCAPI static class TextPacket createWhisper(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    // NOLINTEND
};
