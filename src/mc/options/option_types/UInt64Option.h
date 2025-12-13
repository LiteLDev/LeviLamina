#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class UInt64Option : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk491077;
    ::ll::UntypedStorage<8, 8>  mUnk90dda7;
    ::ll::UntypedStorage<8, 8>  mUnk2641da;
    ::ll::UntypedStorage<8, 8>  mUnke2a743;
    ::ll::UntypedStorage<1, 1>  mUnkc22bf8;
    ::ll::UntypedStorage<8, 24> mUnka9b99b;
    ::ll::UntypedStorage<8, 64> mUnkc6a535;
    // NOLINTEND

public:
    // prevent constructor by default
    UInt64Option& operator=(UInt64Option const&);
    UInt64Option(UInt64Option const&);
    UInt64Option();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UInt64Option() /*override*/ = default;

    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;

    virtual void load(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
