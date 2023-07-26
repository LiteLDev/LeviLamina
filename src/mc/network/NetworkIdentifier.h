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
    /**
     * @symbol ??0NetworkIdentifier\@\@QEAA\@AEBURakNetGUID\@RakNet\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct RakNet::RakNetGUID const&); // NOLINT
    /**
     * @symbol ??0NetworkIdentifier\@\@QEAA\@_K\@Z
     */
    MCAPI NetworkIdentifier(unsigned __int64); // NOLINT
    /**
     * @symbol ??0NetworkIdentifier\@\@QEAA\@AEBUsockaddr_in6\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in6 const&); // NOLINT
    /**
     * @symbol ??0NetworkIdentifier\@\@QEAA\@AEBUsockaddr_in\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in const&); // NOLINT
    /**
     * @symbol
     * ?getAddress\@NetworkIdentifier\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAddress() const; // NOLINT
    /**
     * @symbol ?getHash\@NetworkIdentifier\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const; // NOLINT
    /**
     * @symbol ?isUnassigned\@NetworkIdentifier\@\@QEBA_NXZ
     */
    MCAPI bool isUnassigned() const; // NOLINT
    /**
     * @symbol ??8NetworkIdentifier\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class NetworkIdentifier const&) const; // NOLINT
    /**
     * @symbol
     * ?toString\@NetworkIdentifier\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const; // NOLINT
    /**
     * @symbol ?INVALID_ID\@NetworkIdentifier\@\@2V1\@A
     */
    MCAPI static class NetworkIdentifier INVALID_ID; // NOLINT

    // private:
    /**
     * @symbol ?equalsTypeData\@NetworkIdentifier\@\@AEBA_NAEBV1\@\@Z
     */
    MCAPI bool equalsTypeData(class NetworkIdentifier const&) const; // NOLINT

private:
};
