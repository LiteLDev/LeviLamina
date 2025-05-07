#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class InputModeFloatOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk2c1e26;
    ::ll::UntypedStorage<4, 4>  mUnk12b75b;
    ::ll::UntypedStorage<8, 64> mUnk8fd07f;
    ::ll::UntypedStorage<8, 64> mUnkac5f60;
    ::ll::UntypedStorage<4, 4>  mUnk356984;
    // NOLINTEND

public:
    // prevent constructor by default
    InputModeFloatOption& operator=(InputModeFloatOption const&);
    InputModeFloatOption(InputModeFloatOption const&);
    InputModeFloatOption();

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
    virtual ~InputModeFloatOption() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
