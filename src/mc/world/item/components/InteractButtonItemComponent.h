#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class InteractButtonItemComponent : public ::ItemComponent {
public:
    // prevent constructor by default
    InteractButtonItemComponent(InteractButtonItemComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InteractButtonItemComponent();

    // vIndex: 3
    virtual bool isNetworkComponent() const;

    // vIndex: 4
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI InteractButtonItemComponent();

    MCAPI class InteractButtonItemComponent& operator=(class InteractButtonItemComponent const&);

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
