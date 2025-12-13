#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ItemStack;
class LabTableReaction;
// clang-format on

class ItemReactionComponent : public ::LabTableReactionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStack>> mItem;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemReactionComponent() /*override*/ = default;

    virtual void _onEnd(::LabTableReaction& owner, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onEnd(::LabTableReaction& owner, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
