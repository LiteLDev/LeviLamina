#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace PublisherItemComponent {

class OnUseOn {
public:
    // prevent constructor by default
    OnUseOn& operator=(OnUseOn const&);
    OnUseOn(OnUseOn const&);

public:
    // NOLINTBEGIN
    MCVAPI std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const& ctx) const;

    MCVAPI bool initializeFromNetwork(class CompoundTag const& tag, struct cereal::ReflectionCtx const&);

    MCVAPI bool isNetworkComponent() const;

    MCAPI OnUseOn();

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};

}; // namespace PublisherItemComponent
