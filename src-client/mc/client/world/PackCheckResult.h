#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/DlcCheckResult.h"

namespace World {

struct PackCheckResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DlcCheckResult>                dlcCheckResult;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   missingPackIds;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> missingTemplateId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   brokenPackIds;
    ::ll::TypedStorage<8, 32, ::std::string>                  missingPackSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PackCheckResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
