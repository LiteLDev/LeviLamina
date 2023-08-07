#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/RakNetGUID.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetGUID; }
// clang-format on

class NetworkIdentifier {

public:
    enum class Type : int {
        RakNet    = 0x0,
        Address   = 0x1,
        Address6  = 0x2,
        NetherNet = 0x3,
        Generic   = 0x4,
    };

    uint64_t             mNetherNetIdValue; // this+0x0
    RakNet::RakNetGUID   mGuid;        // this+0x8
    sockaddr_storage     mSock;        // this+0x18
    Type                 mType;        // this+0x98

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0NetworkIdentifier\@\@QEAA\@AEBURakNetGUID\@RakNet\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct RakNet::RakNetGUID const&);
    /**
     * @symbol ??0NetworkIdentifier\@\@QEAA\@_K\@Z
     */
    MCAPI NetworkIdentifier(uint64_t);
    /**
     * @symbol ??0NetworkIdentifier\@\@QEAA\@AEBUsockaddr_in6\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in6 const&);
    /**
     * @symbol ??0NetworkIdentifier\@\@QEAA\@AEBUsockaddr_in\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in const&);
    /**
     * @symbol
     * ?getAddress\@NetworkIdentifier\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAddress() const;
    /**
     * @symbol ?getHash\@NetworkIdentifier\@\@QEBA_KXZ
     */
    MCAPI uint64_t getHash() const;
    /**
     * @symbol ?isUnassigned\@NetworkIdentifier\@\@QEBA_NXZ
     */
    MCAPI bool isUnassigned() const;
    /**
     * @symbol ??8NetworkIdentifier\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class NetworkIdentifier const&) const;
    /**
     * @symbol
     * ?toString\@NetworkIdentifier\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol ?INVALID_ID\@NetworkIdentifier\@\@2V1\@A
     */
    MCAPI static class NetworkIdentifier INVALID_ID;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?equalsTypeData\@NetworkIdentifier\@\@AEBA_NAEBV1\@\@Z
     */
    MCAPI bool equalsTypeData(class NetworkIdentifier const&) const;
    // NOLINTEND
};
