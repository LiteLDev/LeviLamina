#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PackErrorType.h"

// auto generated inclusion list
#include "mc/resources/PackErrorType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackError {
public:
    PackError() = delete;

    std::vector<std::string> mErrorParameters;
    int                      mErrorValue;
    PackErrorType            mPackErrorType;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackError() = default;

    // vIndex: 1
    virtual std::string getLocErrorMessage() const;

    // vIndex: 2
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const = 0;

    // vIndex: 3
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const = 0;

    MCAPI PackError(::PackErrorType packErrorType, std::vector<std::string> const& errorParam);

    MCAPI std::vector<std::string> const& getErrorParameters() const;

    MCAPI void serialize(class Json::Value& out);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::PackErrorType packErrorType, std::vector<std::string> const& errorParam);

    MCAPI std::string getLocErrorMessage$() const;

    // NOLINTEND
};

using PackErrors = std::vector<std::shared_ptr<PackError>>;
