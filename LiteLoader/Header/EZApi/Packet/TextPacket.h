#pragma once

#include <string>
#include <vector>

#include <loader/Loader.h>

#include "../Core/Packet.h"
#include "../TextObject/TextObjectLocalizedTextWithParams.h"
#include "../TextObject/TextObjectRoot.h"
#include "../dll.h"

enum class TextPacketType : char {
    Raw           = 0,
    Chat          = 1,
    JukeboxPopup  = 4,
    SystemMessage = 6,
    Whisper       = 7,
    Announcement  = 8,
    TextObject    = 9,
};

class TextPacket : public Packet {
public:
    alignas(8) TextPacketType type; // 48
    std::string              source, content;
    std::vector<std::string> args;
    bool                     translated;
    std::string              xuid;
    std::string              platformId; // 184

    template <TextPacketType type, bool translated = true>
    static inline TextPacket createTextPacket(std::string content) {
        TextPacket pkt;
        pkt.type       = type;
        pkt.translated = translated;
        pkt.content    = content;
        return pkt;
    }
    template <TextPacketType type, bool translated = true>
    static inline TextPacket createTextPacket(std::string source, std::string content) {
        TextPacket pkt;
        pkt.type       = type;
        pkt.translated = translated;
        pkt.source     = source;
        pkt.content    = content;
        return pkt;
    }
    template <TextPacketType type, bool translated = false>
    static inline TextPacket createTextPacket(std::string source, std::string content, std::string xuid) {
        TextPacket pkt;
        pkt.type       = type;
        pkt.translated = translated;
        pkt.source     = source;
        pkt.content    = content;
        pkt.xuid       = xuid;
        return pkt;
    }

    MCAPI static TextPacket createTranslated(std::string const& text, std::vector<std::string> const& args);

    static inline TextPacket createTranslatedMessageWithParams(std::string const& text, std::initializer_list<std::string> args = {}) {
        return createTranslated(text, args);
    }

    inline TextPacket() {
    }
    inline ~TextPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(TextPacket, type) == 48);
static_assert(offsetof(TextPacket, platformId) == 184);
