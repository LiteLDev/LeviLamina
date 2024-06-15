#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/TextPacketType.h"
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

    // vIndex: 4, symbol: ?write@TextPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol: ?_read@TextPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0TextPacket@@QEAA@XZ
    MCAPI TextPacket();

    // symbol: ??4TextPacket@@QEAAAEAV0@AEBV0@@Z
    MCAPI class TextPacket& operator=(class TextPacket const&);

    // symbol:
    // ?_shouldHandleTextPacketForPlayer@TextPacket@@SA?B_NAEAUIPlayerData@PlayerCapabilities@@AEBUISharedController@3@@Z
    MCAPI static bool const
    _shouldHandleTextPacketForPlayer(struct PlayerCapabilities::IPlayerData&, struct PlayerCapabilities::ISharedController const&);

    // symbol:
    // ?createAnnouncement@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCAPI static class TextPacket createAnnouncement(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    // symbol:
    // ?createChat@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@3@00@Z
    MCAPI static class TextPacket
    createChat(std::string const&, std::string const&, std::optional<std::string>, std::string const&, std::string const&);

    // symbol:
    // ?createJukeboxPopup@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI static class TextPacket
    createJukeboxPopup(std::string const& message, std::vector<std::string> const& params);

    // symbol:
    // ?createRawJsonObjectMessage@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class TextPacket createRawJsonObjectMessage(std::string const& rawJson);

    // symbol:
    // ?createSystemMessage@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class TextPacket createSystemMessage(std::string const& message);

    // symbol:
    // ?createTextObjectMessage@TextPacket@@SA?AV1@AEBVResolvedTextObject@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI static class TextPacket
    createTextObjectMessage(class ResolvedTextObject const& resolvedTextObject, std::string, std::string);

    // symbol:
    // ?createTextObjectWhisperMessage@TextPacket@@SA?AV1@AEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI static class TextPacket createTextObjectWhisperMessage(
        class ResolvedTextObject const& resolvedTextObject,
        std::string const&              xuid,
        std::string const&              platformId
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

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0TextPacket@@AEAA@W4TextPacketType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@3@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@_N11@Z
    MCAPI
    TextPacket(::TextPacketType, std::string const&, std::string const&, std::optional<std::string>, std::vector<std::string> const&, bool, std::string const&, std::string const&);

    // NOLINTEND
};
