#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class StringListOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkeb1db8;
    ::ll::UntypedStorage<8, 24> mUnk83fbdf;
    // NOLINTEND

public:
    // prevent constructor by default
    StringListOption& operator=(StringListOption const&);
    StringListOption(StringListOption const&);
    StringListOption();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;

    // vIndex: 4
    virtual void load(::std::string const&) /*override*/;

    // vIndex: 0
    virtual ~StringListOption() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
