#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct PackInfoData {
public:
    // prevent constructor by default
    PackInfoData& operator=(PackInfoData const&);
    PackInfoData(PackInfoData const&);
    PackInfoData();

public:
    // NOLINTBEGIN
    MCAPI PackInfoData(
        class mce::UUID const&       guid,
        class SemVersion const&      version,
        uint64                       packSize,
        std::string const&           contentKey,
        std::string const&           subpackName,
        class ContentIdentity const& contentIdentity,
        bool                         hasScripts,
        bool                         isRayTracingCapable
    );

    MCAPI ~PackInfoData();

    // NOLINTEND
};
