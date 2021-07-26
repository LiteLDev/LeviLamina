#pragma once

#include <string>

#include "../Core/Packet.h"
#include "../dll.h"

class BookEditPacket : public Packet {
public:
    enum struct Action { REPLACE_PAGE,
                         ADD_PAGE,
                         DELETE_PAGE,
                         SWAP_PAGES,
                         SIGN_BOOK,
                         UNKNOWN = -1 };
    Action      action = Action::UNKNOWN;
    int         slot = 0, page = 0, secondary_page = 0;
    std::string a, b, sign;

    inline ~BookEditPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(BookEditPacket, action) == 48);
static_assert(offsetof(BookEditPacket, slot) == 52);
static_assert(offsetof(BookEditPacket, a) == 64);
static_assert(offsetof(BookEditPacket, b) == 96);
static_assert(offsetof(BookEditPacket, sign) == 128);