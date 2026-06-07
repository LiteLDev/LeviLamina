#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class OnFallOnTrigger : public ::DefinitionTrigger, public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMinimumFallDistance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnFallOnTrigger() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onEvent(::BlockEvents::BlockEntityFallOnEvent const& eventData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
