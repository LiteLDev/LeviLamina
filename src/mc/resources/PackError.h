#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackErrorType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mErrorParameters;
    ::ll::TypedStorage<4, 4, int>                           mErrorValue;
    ::ll::TypedStorage<4, 4, ::PackErrorType>               mPackErrorType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackError() = default;

    // vIndex: 1
    virtual ::std::string getLocErrorMessage() const;

    // vIndex: 2
    virtual ::std::unordered_map<int, ::std::string> const& getLocErrorMessageMap() const = 0;

    // vIndex: 3
    virtual ::std::unordered_map<int, ::std::string> const& getEventErrorMessageMap() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void serialize(::Json::Value& out);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getLocErrorMessage() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
