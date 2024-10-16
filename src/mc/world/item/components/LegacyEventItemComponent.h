#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyEventItemComponent : public ::ItemComponent {
public:
    // prevent constructor by default
    LegacyEventItemComponent& operator=(LegacyEventItemComponent const&);
    LegacyEventItemComponent(LegacyEventItemComponent const&);
    LegacyEventItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyEventItemComponent() = default;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void _initializeComponent$();

    // NOLINTEND
};
