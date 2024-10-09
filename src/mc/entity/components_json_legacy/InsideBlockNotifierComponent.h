#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideBlockNotifierComponent {
public:
    // prevent constructor by default
    InsideBlockNotifierComponent& operator=(InsideBlockNotifierComponent const&);
    InsideBlockNotifierComponent(InsideBlockNotifierComponent const&);
    InsideBlockNotifierComponent();

public:
    // NOLINTBEGIN
    MCAPI std::vector<class InsideBlockEventMap> const& getBlockList() const;

    MCAPI bool isTrackedBlock(class Block const& block) const;

    MCAPI void resetBlocksInsideState();

    MCAPI void setInsideBlock(class Block const& block, bool isInside);

    // NOLINTEND
};
