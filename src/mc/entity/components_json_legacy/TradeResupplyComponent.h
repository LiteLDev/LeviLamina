#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TradeResupplyComponent {
public:
    // prevent constructor by default
    TradeResupplyComponent& operator=(TradeResupplyComponent const&);
    TradeResupplyComponent(TradeResupplyComponent const&);

public:
    // NOLINTBEGIN
    MCAPI TradeResupplyComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void initFromDefinition(class Actor&);

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void reloadComponent(class Actor& actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
