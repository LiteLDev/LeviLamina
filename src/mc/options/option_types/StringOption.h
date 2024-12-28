#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class StringOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbd0c8a;
    ::ll::UntypedStorage<8, 32> mUnk338bfd;
    ::ll::UntypedStorage<8, 64> mUnke8bd90;
    // NOLINTEND

public:
    // prevent constructor by default
    StringOption& operator=(StringOption const&);
    StringOption(StringOption const&);
    StringOption();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;

    // vIndex: 4
    virtual void load(::std::string const&) /*override*/;

    // vIndex: 0
    virtual ~StringOption() /*override*/;
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
