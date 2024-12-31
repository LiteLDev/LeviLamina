#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class Vec3Option : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk88a07d;
    ::ll::UntypedStorage<4, 12> mUnkfc5e05;
    // NOLINTEND

public:
    // prevent constructor by default
    Vec3Option& operator=(Vec3Option const&);
    Vec3Option(Vec3Option const&);
    Vec3Option();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;

    // vIndex: 4
    virtual void load(::std::string const&) /*override*/;

    // vIndex: 2
    virtual void load(::Json::Value const& valueJson) /*override*/;

    // vIndex: 0
    virtual ~Vec3Option() /*override*/ = default;
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
