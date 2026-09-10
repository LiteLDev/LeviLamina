#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackErrorType.h"

// auto generated forward declare list
// clang-format off
class I18n;
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
    virtual ~PackError() = default;

    virtual ::std::string getLocErrorMessage(::I18n& loc) const;

    virtual ::std::unordered_map<int, ::std::string> const& getLocErrorMessageMap() const = 0;

    virtual ::std::unordered_map<int, ::std::string> const& getEventErrorMessageMap() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getEventErrorMessage() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getLocErrorMessage(::I18n& loc) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
