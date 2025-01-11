#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockEventManager; }
// clang-format on

class OnFallOnTrigger : public ::DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka07b73;
    ::ll::UntypedStorage<4, 4>  mUnk9d6684;
    // NOLINTEND

public:
    // prevent constructor by default
    OnFallOnTrigger& operator=(OnFallOnTrigger const&);
    OnFallOnTrigger(OnFallOnTrigger const&);
    OnFallOnTrigger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnFallOnTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent const& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
