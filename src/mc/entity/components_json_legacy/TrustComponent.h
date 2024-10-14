#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrustComponent {
public:
    // prevent constructor by default
    TrustComponent& operator=(TrustComponent const&);
    TrustComponent(TrustComponent const&);

public:
    // NOLINTBEGIN
    MCAPI TrustComponent();

    MCAPI TrustComponent(class TrustComponent&&);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void assignTrustedPlayer(struct ActorUniqueID playerID);

    MCAPI std::unordered_set<struct ActorUniqueID> const& getTrustedPlayerIDs() const;

    MCAPI void initFromDefinition(class Actor& owner);

    MCAPI class TrustComponent& operator=(class TrustComponent&&);

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

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
