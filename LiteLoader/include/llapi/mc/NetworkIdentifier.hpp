/**
 * @file  NetworkIdentifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkIdentifier.
 *
 */
class NetworkIdentifier {

#define AFTER_EXTRA
// Add Member There
    char filler[160];
public:
    LIAPI std::string getIP();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKIDENTIFIER
public:
    class NetworkIdentifier& operator=(class NetworkIdentifier const &) = delete;
    NetworkIdentifier(class NetworkIdentifier const &) = delete;
    NetworkIdentifier() = delete;
#endif

public:
    /**
     * @hash   1106865463
     * @symbol ??0NetworkIdentifier@@QEAA@_K@Z
     */
    MCAPI NetworkIdentifier(unsigned __int64);
    /**
     * @hash   -1538305050
     * @symbol ??0NetworkIdentifier@@QEAA@AEBUsockaddr_in@@@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in const &);
    /**
     * @hash   -207520024
     * @symbol ??0NetworkIdentifier@@QEAA@AEBUsockaddr_in6@@@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in6 const &);
    /**
     * @hash   -1133443188
     * @symbol ??0NetworkIdentifier@@QEAA@AEBURakNetGUID@RakNet@@@Z
     */
    MCAPI NetworkIdentifier(struct RakNet::RakNetGUID const &);
    /**
     * @hash   1622502732
     * @symbol ??0NetworkIdentifier@@QEAA@AEBUNetworkID@NetherNet@@@Z
     */
    MCAPI NetworkIdentifier(struct NetherNet::NetworkID const &);
    /**
     * @hash   -1279444464
     * @symbol ?getAddress@NetworkIdentifier@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getAddress() const;
    /**
     * @hash   296932955
     * @symbol ?getHash@NetworkIdentifier@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @hash   -2082743232
     * @symbol ?getNetherNetIDAsString@NetworkIdentifier@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getNetherNetIDAsString() const;
    /**
     * @hash   -1732898142
     * @symbol ?isUnassigned@NetworkIdentifier@@QEBA_NXZ
     */
    MCAPI bool isUnassigned() const;
    /**
     * @hash   1030968880
     * @symbol ?toString@NetworkIdentifier@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string toString() const;

//private:
    /**
     * @hash   -976426433
     * @symbol ?equalsTypeData@NetworkIdentifier@@AEBA_NAEBV1@@Z
     */
    MCAPI bool equalsTypeData(class NetworkIdentifier const &) const;

private:

};