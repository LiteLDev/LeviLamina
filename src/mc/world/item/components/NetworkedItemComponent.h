#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/components/ItemComponent.h"

template <typename T>
class NetworkedItemComponent : public ItemComponent {
public:
    [[nodiscard]] bool                         isNetworkComponent() const override;
    [[nodiscard]] std::unique_ptr<CompoundTag> buildNetworkTag(cereal::ReflectionCtx const&) const override;
    bool initializeFromNetwork(CompoundTag const&, cereal::ReflectionCtx const&) override;
};