#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"
#include "mc/resources/PackParseErrorType.h"

class PackDiscoveryError : public ::PackError {
public:
    // prevent constructor by default
    PackDiscoveryError& operator=(PackDiscoveryError const&);
    PackDiscoveryError(PackDiscoveryError const&);
    PackDiscoveryError();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackDiscoveryError();

    // vIndex: 2
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;

    // vIndex: 3
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;

    MCAPI PackDiscoveryError(::PackParseErrorType errorType, std::vector<std::string> const& errorParam);

    // NOLINTEND
};
