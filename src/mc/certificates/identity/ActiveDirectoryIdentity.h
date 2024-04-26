#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActiveDirectoryIdentity {
public:
    // prevent constructor by default
    ActiveDirectoryIdentity& operator=(ActiveDirectoryIdentity const&);
    ActiveDirectoryIdentity(ActiveDirectoryIdentity const&);
    ActiveDirectoryIdentity();

public:
    // NOLINTBEGIN
    // symbol: ?IS_VALID_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const IS_VALID_FIELD;

    // symbol:
    // ?JWT_EXPIRATION_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const JWT_EXPIRATION_FIELD;

    // symbol:
    // ?JWT_REQUEST_ID_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const JWT_REQUEST_ID_FIELD;

    // symbol: ?PAYLOAD_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const PAYLOAD_FIELD;

    // symbol: ?PUBLIC_KEY@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const PUBLIC_KEY;

    // symbol:
    // ?REQUEST_ID_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const REQUEST_ID_FIELD;

    // symbol: ?RESPONSE_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RESPONSE_FIELD;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mCachedServiceEndpoint@ActiveDirectoryIdentity@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A
    MCAPI static std::string mCachedServiceEndpoint;

    // NOLINTEND
};
