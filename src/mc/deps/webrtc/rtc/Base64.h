#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class Base64 {
public:
    // prevent constructor by default
    Base64& operator=(Base64 const&);
    Base64(Base64 const&);
    Base64();

public:
    // NOLINTBEGIN
    // symbol:
    // ?DecodeFromArray@Base64@rtc@@SA_NPEBD_KHPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEA_K@Z
    MCAPI static bool DecodeFromArray(char const*, uint64, int, std::string*, uint64*);

    // symbol:
    // ?Encode@Base64@rtc@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@@Z
    MCAPI static std::string Encode(std::string_view);

    // symbol: ?EncodeFromArray@Base64@rtc@@SAXPEBX_KPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void EncodeFromArray(void const*, uint64, std::string*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?GetNextQuantum@Base64@rtc@@CA_KH_NPEBD_KPEA_KQEAEPEA_N@Z
    MCAPI static uint64 GetNextQuantum(int, bool, char const*, uint64, uint64*, uchar* const, bool*);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?Base64Table@Base64@rtc@@0QBDB
    MCAPI static char const Base64Table[];

    // symbol: ?DecodeTable@Base64@rtc@@0QBEB
    MCAPI static uchar const DecodeTable[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $Base64Table() { return Base64Table; }

    static auto& $DecodeTable() { return DecodeTable; }

    // NOLINTEND
};

}; // namespace rtc
