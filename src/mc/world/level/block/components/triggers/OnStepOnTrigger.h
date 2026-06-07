#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockStepOnEvent; }
// clang-format on

class OnStepOnTrigger : public ::DefinitionTrigger, public ::IBlockComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnStepOnTrigger() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void onEvent(::BlockEvents::BlockStepOnEvent const& eventData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
