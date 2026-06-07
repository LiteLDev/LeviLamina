#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class OnPlacedTrigger : public ::DefinitionTrigger, public ::IBlockComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnPlacedTrigger() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onEvent(::BlockEvents::BlockPlaceEvent const& eventData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
