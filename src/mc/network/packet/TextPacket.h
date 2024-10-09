#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/config/IPlayerData.h"
#include "mc/config/ISharedController.h"
#include "mc/enums/TextPacketType.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/TextPacketType.h"
#include "mc/platform/Result.h"

class TextPacket : public ::Packet {
public:
    TextPacketType             mType;            // this+0x30
    std::string                mAuthor;          // this+0x38
    std::string                mMessage;         // this+0x58
    std::optional<std::string> mFilteredMessage; // this+0x78
    std::vector<std::string>   mParams;          // this+0xA0
    bool                       mLocalize;        // this+0x88
    std::string                mXuid;            // this+0xC0
    std::string                mPlatformId;      // this+0xE0

    [[nodiscard]] inline static TextPacket createRawMessage(std::string_view msg) {
        auto res  = TextPacket{};
        res.mType = TextPacketType::Raw;
        res.mMessage.assign(msg);
        return res;
    }

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

    MCAPI static bool const _shouldHandleTextPacketForPlayer(

        struct PlayerCapabilities::IPlayerData&             playerData,
        struct PlayerCapabilities::ISharedController const& sharedController
    );

    MCAPI static class TextPacket createAnnouncement(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    MCAPI static class TextPacket createChat(
        std::string const&         author,
        std::string const&         message,
        std::optional<std::string> filteredMessage,
        std::string const&         xuid,
        std::string const&         platformId
    );

    MCAPI static class TextPacket
    createJukeboxPopup(std::string const& message, std::vector<std::string> const& params);

    MCAPI static class TextPacket createRawJsonObjectMessage(std::string const& rawJson);

    MCAPI static class TextPacket createSystemMessage(std::string const& message);

    MCAPI static class TextPacket createTextObjectMessage(
        class ResolvedTextObject const& resolvedTextObject,
        std::string                     fromXuid,
        std::string                     fromPlatformId
    );

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
    MCAPI TextPacket(
        ::TextPacketType                type,
        std::string const&              author,
        std::string const&              message,
        std::optional<std::string>      filteredMessage,
        std::vector<std::string> const& params,
        bool                            localize_,
        std::string const&              xuid,
        std::string const&              platformId
    );

    // NOLINTEND
};
