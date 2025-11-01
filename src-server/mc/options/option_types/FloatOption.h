#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class FloatOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk160d4d;
    ::ll::UntypedStorage<4, 4> mUnkbffafd;
    ::ll::UntypedStorage<4, 4> mUnk2054f2;
    ::ll::UntypedStorage<4, 4> mUnkb0d644;
    ::ll::UntypedStorage<4, 4> mUnk565d6e;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatOption& operator=(FloatOption const&);
    FloatOption(FloatOption const&);
    FloatOption();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;

    // vIndex: 4
    virtual void load(::std::string const&) /*override*/;

    // vIndex: 0
    virtual ~FloatOption() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
