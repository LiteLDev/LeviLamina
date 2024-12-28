#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class VersionRange; }
// clang-format on

struct BetaItemComponentData {
public:
    // prevent constructor by default
    BetaItemComponentData& operator=(BetaItemComponentData const&);
    BetaItemComponentData(BetaItemComponentData const&);
    BetaItemComponentData();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Puv::VersionRange const& SUPPORTED_VERSIONS();
    // NOLINTEND
};
