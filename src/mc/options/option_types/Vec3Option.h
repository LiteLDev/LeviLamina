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
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;

    virtual void load(::std::string const&) /*override*/;

    virtual void load(::Json::Value const& valueJson) /*override*/;

    virtual ~Vec3Option() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
