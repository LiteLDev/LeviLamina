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
};

} // namespace OreUI::RealmsStories
