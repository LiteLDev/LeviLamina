#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct ResourcePacksFacet_DEPRECATED {
public:
    // ResourcePacksFacet_DEPRECATED inner types declare
    // clang-format off
    struct FacetPromptDetails;
    struct PackActivationRequest;
    struct PackCollection;
    struct PackViewAndItem;
    struct PendingBehaviourPackRemoval;
    // clang-format on

    // ResourcePacksFacet_DEPRECATED inner types define
    enum class PromptActionType : int {};

    enum class PromptType : int {};

    enum class ResourcePacksFacetStatus : uchar {};

    struct FacetPromptDetails {};

    struct PackActivationRequest {};

    struct PackCollection {};

    struct PackViewAndItem {};

    struct PendingBehaviourPackRemoval {};
};

} // namespace OreUI
