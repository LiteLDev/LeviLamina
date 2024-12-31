#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class InputModeBoolOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkda6f12;
    ::ll::UntypedStorage<8, 64> mUnk7832c1;
    // NOLINTEND

public:
    // prevent constructor by default
    InputModeBoolOption& operator=(InputModeBoolOption const&);
    InputModeBoolOption(InputModeBoolOption const&);
    InputModeBoolOption();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;

    // vIndex: 4
    virtual void load(::std::string const&) /*override*/;

    // vIndex: 3
    virtual void load(::std::map<::std::string, ::std::string>& propertyMap) /*override*/;

    // vIndex: 0
    virtual ~InputModeBoolOption() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
