#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetGUID; }
// clang-format on

class NetworkIdentifier {

public:
    // prevent constructor by default
    NetworkIdentifier& operator=(NetworkIdentifier const&) = delete;
    NetworkIdentifier(NetworkIdentifier const&)            = delete;
    NetworkIdentifier()                                    = delete;

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
