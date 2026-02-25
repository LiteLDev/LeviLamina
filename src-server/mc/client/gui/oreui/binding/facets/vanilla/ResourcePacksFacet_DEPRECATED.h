#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class ResourcePacksFacet_DEPRECATED {
public:
    // ResourcePacksFacet_DEPRECATED inner types declare
    // clang-format off
    struct FacetPromptDetails;
    struct PackCollection;
    struct PendingBehaviourPackRemoval;
    struct PackActivationRequest;
    struct PackViewAndItem;
    // clang-format on

    // ResourcePacksFacet_DEPRECATED inner types define
    enum class ResourcePacksFacetStatus : uchar {};

    enum class PromptType : int {};

    enum class PromptActionType : int {};

    struct FacetPromptDetails {};

    struct PackCollection {};

    struct PendingBehaviourPackRemoval {};

    struct PackActivationRequest {};

    struct PackViewAndItem {};
};

} // namespace OreUI
