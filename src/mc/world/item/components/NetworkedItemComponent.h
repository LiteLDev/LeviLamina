#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/components/ItemComponent.h"

template <typename T>
class NetworkedItemComponent : public ItemComponent {
public:
    [[nodiscard]] bool                         isNetworkComponent() const override;
    [[nodiscard]] std::unique_ptr<CompoundTag> buildNetworkTag(const cereal::ReflectionCtx&) const override;
    bool initializeFromNetwork(const CompoundTag&, const cereal::ReflectionCtx&) override;
};