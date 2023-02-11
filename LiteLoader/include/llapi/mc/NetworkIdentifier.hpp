/**
 * @file  NetworkIdentifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   1211775911
     * @symbol  ??0NetworkIdentifier\@\@QEAA\@_K\@Z
     */
    MCAPI NetworkIdentifier(unsigned __int64);
    /**
     * @hash   -1433394602
     * @symbol  ??0NetworkIdentifier\@\@QEAA\@AEBUsockaddr_in\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in const &);
    /**
     * @hash   -102609576
     * @symbol  ??0NetworkIdentifier\@\@QEAA\@AEBUsockaddr_in6\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in6 const &);
    /**
     * @hash   -1028532740
     * @symbol  ??0NetworkIdentifier\@\@QEAA\@AEBURakNetGUID\@RakNet\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct RakNet::RakNetGUID const &);
    /**
     * @hash   -1174534016
     * @symbol  ?getAddress\@NetworkIdentifier\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAddress() const;
    /**
     * @hash   402074043
     * @symbol  ?getHash\@NetworkIdentifier\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @hash   1828111170
     * @symbol  ?isUnassigned\@NetworkIdentifier\@\@QEBA_NXZ
     */
    MCAPI bool isUnassigned() const;
    /**
     * @hash   1136109968
     * @symbol  ?toString\@NetworkIdentifier\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol  ?INVALID_ID\@NetworkIdentifier\@\@2V1\@A
     */
    MCAPI static class NetworkIdentifier INVALID_ID;

//private:
    /**
     * @hash   -871515985
     * @symbol  ?equalsTypeData\@NetworkIdentifier\@\@AEBA_NAEBV1\@\@Z
     */
    MCAPI bool equalsTypeData(class NetworkIdentifier const &) const;

private:

};