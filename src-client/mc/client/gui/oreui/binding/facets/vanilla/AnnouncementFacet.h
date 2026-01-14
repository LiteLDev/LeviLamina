#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct AnnouncementFacet {
public:
    // AnnouncementFacet inner types declare
    // clang-format off
    struct FacetMessage;
    struct FacetMessageList;
    struct FacetMessageListOreUI;
    struct FacetMessageListclass;
    // clang-format on

    // AnnouncementFacet inner types define
    struct FacetMessage {};

    struct FacetMessageList {};

    struct FacetMessageListOreUI {
    public:
        // FacetMessageListOreUI inner types declare
        // clang-format off
        struct AnnouncementFacet;
        // clang-format on

        // FacetMessageListOreUI inner types define
        struct AnnouncementFacet {};
    };

    struct FacetMessageListclass {};
};

} // namespace OreUI
