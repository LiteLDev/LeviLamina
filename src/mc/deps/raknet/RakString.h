#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

namespace RakNet {

class RakString {
public:
    // RakString inner types declare
    // clang-format off
    struct SharedString;
    // clang-format on

    // RakString inner types define
    struct SharedString {
    public:
        // prevent constructor by default
        SharedString& operator=(SharedString const&);
        SharedString(SharedString const&);
        SharedString();
    };

public:
    // NOLINTBEGIN
    // symbol: ?Deserialize@RakString@RakNet@@QEAA_NPEAVBitStream@2@@Z
    MCAPI bool Deserialize(class RakNet::BitStream* bs);

    // symbol: ?GetLength@RakString@RakNet@@QEBA_KXZ
    MCAPI uint64 GetLength() const;

    // symbol: ?IPAddressMatch@RakString@RakNet@@QEAA_NPEBD@Z
    MCAPI bool IPAddressMatch(char const* IP);

    // symbol: ?IsEmpty@RakString@RakNet@@QEBA_NXZ
    MCAPI bool IsEmpty() const;

    // symbol: ??0RakString@RakNet@@QEAA@XZ
    MCAPI RakString();

    // symbol: ??0RakString@RakNet@@QEAA@AEBV01@@Z
    MCAPI RakString(class RakNet::RakString const& rhs);

    // symbol: ??0RakString@RakNet@@QEAA@PEBDZZ
    MCAPI RakString(char const*, ...);

    // symbol: ??4RakString@RakNet@@QEAAAEAV01@PEAD@Z
    MCAPI class RakNet::RakString& operator=(char* str);

    // symbol: ??4RakString@RakNet@@QEAAAEAV01@PEBD@Z
    MCAPI class RakNet::RakString& operator=(char const* str);

    // symbol: ??4RakString@RakNet@@QEAAAEAV01@AEBV01@@Z
    MCAPI class RakNet::RakString& operator=(class RakNet::RakString const& rhs);

    // symbol: ??8RakString@RakNet@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class RakNet::RakString const& rhs) const;

    // symbol: ??1RakString@RakNet@@QEAA@XZ
    MCAPI ~RakString();

    // symbol: ?FreeMemoryNoMutex@RakString@RakNet@@SAXXZ
    MCAPI static void FreeMemoryNoMutex();

    // symbol: ?emptyString@RakString@RakNet@@2USharedString@12@A
    MCAPI static struct RakNet::RakString::SharedString emptyString;

    // symbol: ?freeList@RakString@RakNet@@2V?$List@PEAUSharedString@RakString@RakNet@@@DataStructures@@A
    MCAPI static class DataStructures::List<struct RakNet::RakString::SharedString*> freeList;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?Allocate@RakString@RakNet@@IEAAX_K@Z
    MCAPI void Allocate(uint64 len);

    // symbol: ?Assign@RakString@RakNet@@IEAAXPEBD@Z
    MCAPI void Assign(char const* str);

    // symbol: ?Assign@RakString@RakNet@@IEAAXPEBDPEAD@Z
    MCAPI void Assign(char const*, char*);

    // symbol: ?Free@RakString@RakNet@@IEAAXXZ
    MCAPI void Free();

    // NOLINTEND
};

}; // namespace RakNet
