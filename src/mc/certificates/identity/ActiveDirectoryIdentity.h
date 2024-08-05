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
    MCAPI static std::string const IS_VALID_FIELD;

    MCAPI static std::string const JWT_EXPIRATION_FIELD;

    MCAPI static std::string const JWT_REQUEST_ID_FIELD;

    MCAPI static std::string const PAYLOAD_FIELD;

    MCAPI static std::string const PUBLIC_KEY;

    MCAPI static std::string const REQUEST_ID_FIELD;

    MCAPI static std::string const RESPONSE_FIELD;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string mCachedServiceEndpoint;

    // NOLINTEND
};
