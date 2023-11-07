#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/RakNetGUID.h"

class NetworkIdentifier {
public:
    enum class Type : int {
        RakNet    = 0x0,
        Address   = 0x1,
        Address6  = 0x2,
        NetherNet = 0x3,
        Generic   = 0x4,
    };

    uint64             mNetherNetIdValue; // this+0x0
    RakNet::RakNetGUID mGuid;             // this+0x8
    char               mSock[0x80];       // this+0x18
    Type               mType;             // this+0x98

    LLNDAPI std::string getIPAndPort() const;

public:
    // NOLINTBEGIN
    // symbol: ??0NetworkIdentifier@@QEAA@XZ
    MCAPI NetworkIdentifier();

    // symbol: ??0NetworkIdentifier@@QEAA@AEBUsockaddr_in@@@Z
    MCAPI explicit NetworkIdentifier(struct sockaddr_in const&);

    // symbol: ??0NetworkIdentifier@@QEAA@AEBUsockaddr_in6@@@Z
    MCAPI explicit NetworkIdentifier(struct sockaddr_in6 const&);

    // symbol: ?getAddress@NetworkIdentifier@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getAddress() const;

    // symbol:
    // ?getCorrelationId@NetworkIdentifier@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getCorrelationId() const;

    // symbol: ?getHash@NetworkIdentifier@@QEBA_KXZ
    MCAPI uint64 getHash() const;

    // symbol: ?isUnassigned@NetworkIdentifier@@QEBA_NXZ
    MCAPI bool isUnassigned() const;

    // symbol: ??8NetworkIdentifier@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class NetworkIdentifier const&) const;

    // symbol: ?toString@NetworkIdentifier@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // symbol: ?hyphenateId@NetworkIdentifier@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@Z
    MCAPI static std::string hyphenateId(uint64);

    // symbol: ?INVALID_ID@NetworkIdentifier@@2V1@A
    MCAPI static class NetworkIdentifier INVALID_ID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?equalsTypeData@NetworkIdentifier@@AEBA_NAEBV1@@Z
    MCAPI bool equalsTypeData(class NetworkIdentifier const&) const;

    // NOLINTEND
};
