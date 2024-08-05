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
    // vIndex: 0
    virtual ~TextPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI TextPacket();

    MCAPI class TextPacket& operator=(class TextPacket const&);

    MCAPI static bool const
    _shouldHandleTextPacketForPlayer(struct PlayerCapabilities::IPlayerData&, struct PlayerCapabilities::ISharedController const&);

    MCAPI static class TextPacket createAnnouncement(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    MCAPI static class TextPacket
    createChat(std::string const&, std::string const&, std::optional<std::string>, std::string const&, std::string const&);

    MCAPI static class TextPacket
    createJukeboxPopup(std::string const& message, std::vector<std::string> const& params);

    MCAPI static class TextPacket createRawJsonObjectMessage(std::string const& rawJson);

    MCAPI static class TextPacket createSystemMessage(std::string const& message);

    MCAPI static class TextPacket
    createTextObjectMessage(class ResolvedTextObject const& resolvedTextObject, std::string, std::string);

    MCAPI static class TextPacket createTextObjectWhisperMessage(
        class ResolvedTextObject const& resolvedTextObject,
        std::string const&              xuid,
        std::string const&              platformId
    );

    MCAPI static class TextPacket
    createTextObjectWhisperMessage(std::string const& message, std::string const& xuid, std::string const& platformId);

    MCAPI static class TextPacket createTranslated(std::string const& message, std::vector<std::string> const& params);

    MCAPI static class TextPacket createTranslatedAnnouncement(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    MCAPI static class TextPacket createWhisper(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI
    TextPacket(::TextPacketType, std::string const&, std::string const&, std::optional<std::string>, std::vector<std::string> const&, bool, std::string const&, std::string const&);

    // NOLINTEND
};
