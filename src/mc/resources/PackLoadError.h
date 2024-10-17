#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"
#include "mc/resources/PackParseErrorType.h"

class PackLoadError : public ::PackError {
public:
    // prevent constructor by default
    PackLoadError& operator=(PackLoadError const&);
    PackLoadError(PackLoadError const&);
    PackLoadError();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackLoadError();

    // vIndex: 2
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;

    // vIndex: 3
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;

    MCAPI PackLoadError(::PackParseErrorType errorType, std::vector<std::string> const& errorParam);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::PackParseErrorType errorType, std::vector<std::string> const& errorParam);

    MCAPI void dtor$();

    MCAPI std::unordered_map<int, std::string> const& getEventErrorMessageMap$() const;

    MCAPI std::unordered_map<int, std::string> const& getLocErrorMessageMap$() const;

    // NOLINTEND
};
