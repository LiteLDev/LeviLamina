#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class Int64Option : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk510608;
    ::ll::UntypedStorage<8, 8>  mUnk29d63f;
    ::ll::UntypedStorage<8, 8>  mUnkbcb0b8;
    ::ll::UntypedStorage<8, 8>  mUnk9d0523;
    ::ll::UntypedStorage<1, 1>  mUnkd62eb8;
    ::ll::UntypedStorage<8, 24> mUnkb7d350;
    ::ll::UntypedStorage<8, 64> mUnk1830cd;
    // NOLINTEND

public:
    // prevent constructor by default
    Int64Option& operator=(Int64Option const&);
    Int64Option(Int64Option const&);
    Int64Option();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Int64Option() /*override*/;

    // vIndex: 1
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;

    // vIndex: 4
    virtual void load(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $save(::std::vector<::std::pair<::std::string, ::std::string>>&);

    MCAPI void $load(::std::string const&);
    // NOLINTEND
};
