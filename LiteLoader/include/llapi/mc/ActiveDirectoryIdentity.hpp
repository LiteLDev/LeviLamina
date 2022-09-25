/**
 * @file  ActiveDirectoryIdentity.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActiveDirectoryIdentity.
 *
 */
class ActiveDirectoryIdentity {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIVEDIRECTORYIDENTITY
public:
    class ActiveDirectoryIdentity& operator=(class ActiveDirectoryIdentity const &) = delete;
    ActiveDirectoryIdentity(class ActiveDirectoryIdentity const &) = delete;
    ActiveDirectoryIdentity() = delete;
#endif

public:
    /**
     * @hash   -600998501
     * @symbol ?IS_VALID_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const IS_VALID_FIELD;
    /**
     * @hash   -101846853
     * @symbol ?JWT_EXPIRATION_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const JWT_EXPIRATION_FIELD;
    /**
     * @hash   -2130610917
     * @symbol ?JWT_REQUEST_ID_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const JWT_REQUEST_ID_FIELD;
    /**
     * @hash   -1430836263
     * @symbol ?PAYLOAD_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const PAYLOAD_FIELD;
    /**
     * @hash   783215995
     * @symbol ?PUBLIC_KEY@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const PUBLIC_KEY;
    /**
     * @hash   -184123269
     * @symbol ?REQUEST_ID_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const REQUEST_ID_FIELD;
    /**
     * @hash   306869179
     * @symbol ?RESPONSE_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RESPONSE_FIELD;

//private:

private:
    /**
     * @hash   1365042124
     * @symbol ?mCachedServiceEndpoint@ActiveDirectoryIdentity@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A
     */
    MCAPI static std::string mCachedServiceEndpoint;

};