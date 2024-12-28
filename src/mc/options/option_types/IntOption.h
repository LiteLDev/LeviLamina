#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class IntOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8af74d;
    ::ll::UntypedStorage<4, 4>  mUnka6e3fa;
    ::ll::UntypedStorage<4, 4>  mUnk5cfa3a;
    ::ll::UntypedStorage<4, 4>  mUnk4c681f;
    ::ll::UntypedStorage<1, 1>  mUnka2bfc3;
    ::ll::UntypedStorage<8, 24> mUnkde8f59;
    ::ll::UntypedStorage<8, 64> mUnkb33603;
    // NOLINTEND

public:
    // prevent constructor by default
    IntOption& operator=(IntOption const&);
    IntOption(IntOption const&);
    IntOption();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IntOption() /*override*/;

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
