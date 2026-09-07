
#include "mc/network/packet/TextPacket.h"
#include "TextPacket.h"
#include "mc/network/packet/TextPacketPayload.h"


constexpr size_t maxTextPacketBodyLength = 1000;

char lowerFormatCode(char code) {
    if (code >= 'A' && code <= 'Z') return static_cast<char>(code + ('a' - 'A'));
    return code;
}

bool isSectionSign(std::string_view text, size_t pos) {
    return pos + 1 < text.size() && static_cast<unsigned char>(text[pos]) == 0xC2
        && static_cast<unsigned char>(text[pos + 1]) == 0xA7;
}

bool isFormatCode(char code) {
    code = lowerFormatCode(code);
    return (code >= '0' && code <= '9') || (code >= 'a' && code <= 'g') || (code >= 'k' && code <= 'o') || code == 'r';
}

struct TextFormatState {
    char color         = 0;
    bool bold          = false;
    bool italic        = false;
    bool underline     = false;
    bool strikethrough = false;
    bool obfuscated    = false;

    void apply(char rawCode) {
        char code = lowerFormatCode(rawCode);
        if ((code >= '0' && code <= '9') || (code >= 'a' && code <= 'g')) {
            color         = code;
            bold          = false;
            italic        = false;
            underline     = false;
            strikethrough = false;
            obfuscated    = false;
            return;
        }
        switch (code) {
        case 'r':
            color         = 0;
            bold          = false;
            italic        = false;
            underline     = false;
            strikethrough = false;
            obfuscated    = false;
            break;
        case 'l':
            bold = true;
            break;
        case 'o':
            italic = true;
            break;
        case 'n':
            underline = true;
            break;
        case 'm':
            strikethrough = true;
            break;
        case 'k':
            obfuscated = true;
            break;
        default:
            break;
        }
    }

    void scan(std::string_view text) {
        for (size_t i = 0; i < text.size();) {
            if (isSectionSign(text, i)) {
                if (i + 2 < text.size()) apply(text[i + 2]);
                i += 2;
            } else ++i;
        }
    }

    std::string prefix() const {
        std::string result;
        auto        appendCode = [&result](char code) {
            result.append("\xC2\xA7", 2);
            result += code;
        };
        if (color) appendCode(color);
        if (bold) appendCode('l');
        if (italic) appendCode('o');
        if (underline) appendCode('n');
        if (strikethrough) appendCode('m');
        if (obfuscated) appendCode('k');
        return result;
    }
};

size_t utf8SafeLimit(std::string_view text, size_t limit) {
    if (limit >= text.size()) return text.size();
    while (limit > 0 && (static_cast<unsigned char>(text[limit]) & 0xC0) == 0x80) --limit;
    return limit;
}

size_t formatSafeLimit(std::string_view text, size_t limit) {
    if (limit == 0 || limit >= text.size()) return limit;
    if (limit >= 2 && isSectionSign(text, limit - 2) && isFormatCode(text[limit])) return limit - 2;
    return limit;
}

template <typename Sender>
void segmentAndSend(std::string const& text, TextPacketType textType, Sender&& sender) {
    if (text.empty()) {
        sender(textType, text);
        return;
    }

    std::string_view remaining{text};
    TextFormatState  state;
    while (!remaining.empty()) {
        std::string prefix = state.prefix();
        if (prefix.size() + remaining.size() <= maxTextPacketBodyLength) {
            sender(textType, prefix + std::string{remaining});
            return;
        }

        size_t capacity = prefix.size() >= maxTextPacketBodyLength ? 0 : maxTextPacketBodyLength - prefix.size();
        size_t limit    = std::min(capacity, remaining.size());
        limit           = utf8SafeLimit(remaining, limit);
        limit           = formatSafeLimit(remaining, limit);
        if (limit == 0) limit = std::min(remaining.size(), static_cast<size_t>(1));

        size_t newline        = remaining.substr(0, limit).find_last_of('\n');
        bool   splitAtNewline = newline != std::string_view::npos;
        size_t chunkSize      = splitAtNewline ? newline : limit;

        std::string chunk{remaining.substr(0, chunkSize)};
        sender(textType, prefix + chunk);
        state.scan(chunk);
        remaining.remove_prefix(chunkSize + (splitAtNewline ? 1 : 0));
    }
}


void TextPacket::segmentAndSendTo(std::string const& text, TextPacketType textType, Player const& player) {
    segmentAndSend(text, textType, [&player](TextPacketType type, std::string const& segment) {
        TextPacket packet;
        packet.mBody = TextPacketPayload::MessageOnly(type, segment);
        packet.sendTo(player);
    });
}

void TextPacket::segmentAndSendTo(
    std::string const&         text,
    TextPacketType             textType,
    BlockPos const&            pos,
    DimensionType              dimId,
    optional_ref<Player const> except
) {
    segmentAndSend(text, textType, [&pos, &dimId, &except](TextPacketType type, std::string const& segment) {
        TextPacket packet;
        packet.mBody = TextPacketPayload::MessageOnly(type, segment);
        packet.sendTo(pos, dimId, except);
    });
}

void TextPacket::segmentAndSendTo(
    std::string const&         text,
    TextPacketType             textType,
    Actor const&               actor,
    optional_ref<Player const> except
) {
    segmentAndSend(text, textType, [&actor, &except](TextPacketType type, std::string const& segment) {
        TextPacket packet;
        packet.mBody = TextPacketPayload::MessageOnly(type, segment);
        packet.sendTo(actor, except);
    });
}

void TextPacket::segmentAndSendToClient(
    std::string const&       text,
    TextPacketType           textType,
    NetworkIdentifier const& identifier,
    ::SubClientId            clientId
) {
    segmentAndSend(text, textType, [&identifier, &clientId](TextPacketType type, std::string const& segment) {
        TextPacket packet;
        packet.mBody = TextPacketPayload::MessageOnly(type, segment);
        packet.sendToClient(identifier, clientId);
    });
}

void TextPacket::segmentAndSendToClients(std::string const& text, TextPacketType textType) {
    segmentAndSend(text, textType, [](TextPacketType type, std::string const& segment) {
        TextPacket packet;
        packet.mBody = TextPacketPayload::MessageOnly(type, segment);
        packet.sendToClients();
    });
}