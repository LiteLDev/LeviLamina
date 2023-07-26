/**
 * @file  NetworkIdentifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
    LLAPI std::string getIP();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKIDENTIFIER
public:
    class NetworkIdentifier& operator=(class NetworkIdentifier const &) = delete;
    NetworkIdentifier(class NetworkIdentifier const &) = delete;
    NetworkIdentifier() = delete;
#endif

public:
    /**
     * @symbol  ??0NetworkIdentifier\@\@QEAA\@_K\@Z
     */
    MCAPI NetworkIdentifier(unsigned __int64);
    /**
     * @symbol  ??0NetworkIdentifier\@\@QEAA\@AEBUsockaddr_in\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in const &);
    /**
     * @symbol  ??0NetworkIdentifier\@\@QEAA\@AEBUsockaddr_in6\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in6 const &);
    /**
     * @symbol  ??0NetworkIdentifier\@\@QEAA\@AEBURakNetGUID\@RakNet\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct RakNet::RakNetGUID const &);
    /**
     * @symbol  ?getAddress\@NetworkIdentifier\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAddress() const;
    /**
     * @symbol  ?getHash\@NetworkIdentifier\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol  ?isUnassigned\@NetworkIdentifier\@\@QEBA_NXZ
     */
    MCAPI bool isUnassigned() const;
    /**
     * @symbol  ?toString\@NetworkIdentifier\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol  ?INVALID_ID\@NetworkIdentifier\@\@2V1\@A
     */
    MCAPI static class NetworkIdentifier INVALID_ID;

//private:
    /**
     * @symbol  ?equalsTypeData\@NetworkIdentifier\@\@AEBA_NAEBV1\@\@Z
     */
    MCAPI bool equalsTypeData(class NetworkIdentifier const &) const;

private:

};