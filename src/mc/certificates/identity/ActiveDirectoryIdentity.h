#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActiveDirectoryIdentity {

public:
    // prevent constructor by default
    ActiveDirectoryIdentity& operator=(ActiveDirectoryIdentity const&) = delete;
    ActiveDirectoryIdentity(ActiveDirectoryIdentity const&)            = delete;
    ActiveDirectoryIdentity()                                          = delete;

public:
    /**
     * @symbol
     * ?IS_VALID_FIELD\@ActiveDirectoryIdentity\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const IS_VALID_FIELD; // NOLINT
    /**
     * @symbol
     * ?JWT_EXPIRATION_FIELD\@ActiveDirectoryIdentity\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const JWT_EXPIRATION_FIELD; // NOLINT
    /**
     * @symbol
     * ?JWT_REQUEST_ID_FIELD\@ActiveDirectoryIdentity\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const JWT_REQUEST_ID_FIELD; // NOLINT
    /**
     * @symbol
     * ?PAYLOAD_FIELD\@ActiveDirectoryIdentity\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PAYLOAD_FIELD; // NOLINT
    /**
     * @symbol
     * ?PUBLIC_KEY\@ActiveDirectoryIdentity\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PUBLIC_KEY; // NOLINT
    /**
     * @symbol
     * ?REQUEST_ID_FIELD\@ActiveDirectoryIdentity\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const REQUEST_ID_FIELD; // NOLINT
    /**
     * @symbol
     * ?RESPONSE_FIELD\@ActiveDirectoryIdentity\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RESPONSE_FIELD; // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?mCachedServiceEndpoint\@ActiveDirectoryIdentity\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@A
     */
    MCAPI static std::string mCachedServiceEndpoint; // NOLINT
};
