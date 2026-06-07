#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

class PackSettingsError : public ::PackError {
public:
    // prevent constructor by default
    PackSettingsError();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string getLocErrorMessage() const /*override*/;

    virtual ::std::unordered_map<int, ::std::string> const& getLocErrorMessageMap() const /*override*/;

    virtual ::std::unordered_map<int, ::std::string> const& getEventErrorMessageMap() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PackSettingsError(::std::vector<::std::string> const& errorParam);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::std::string> const& errorParam);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getLocErrorMessage() const;

    MCNAPI ::std::unordered_map<int, ::std::string> const& $getLocErrorMessageMap() const;

    MCNAPI ::std::unordered_map<int, ::std::string> const& $getEventErrorMessageMap() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
