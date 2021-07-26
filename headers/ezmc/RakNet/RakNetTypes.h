#pragma once

#include <string>

#include <WinSock2.h>

#include "../Core/mce.h"
#include "../dll.h"

namespace RakNet {

using UniqueIDType = unsigned char;
using SystemIndex  = unsigned short;
using RPCIndex     = unsigned char;

struct SystemAddress {
public:
    MCAPI SystemAddress();

    unsigned short type;
    char           filler[0x7e];
    unsigned       unk128;

    MCAPI SystemAddress& operator=(SystemAddress const&);
    MCAPI bool           operator==(SystemAddress const&) const;
    MCAPI void           ToString(bool writePort, char* dest, char portDelineator) const;

public:
    inline std::string ToString(bool withPort = true) {
        char buffer[256];
        ToString(withPort, buffer, '|');
        return {buffer};
    }
};

struct MCAPI RakNetGUID {
    RakNetGUID();
    uint64_t    g;
    SystemIndex systemIndex;
};

static_assert(sizeof(RakNetGUID) == 16);

struct Packet {
    SystemAddress  address;
    RakNetGUID     guid;
    unsigned int   length;
    uint32_t       bitSize;
    unsigned char* data;
};

} // namespace RakNet