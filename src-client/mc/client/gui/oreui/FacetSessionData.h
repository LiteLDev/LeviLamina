#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct Session; }
// clang-format on

namespace OreUI::RealmsStories {

struct FacetSessionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Realms::Session&> mSession;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetSessionData& operator=(FacetSessionData const&);
    FacetSessionData(FacetSessionData const&);
    FacetSessionData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int64 getLoginTime() const;

    MCAPI int64 getLogoutTime() const;

    MCFOLD ::std::string const& getUserXuid() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND
};

} // namespace OreUI::RealmsStories
