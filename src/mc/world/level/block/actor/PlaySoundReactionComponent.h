#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class LabTableReaction;
// clang-format on

class PlaySoundReactionComponent : public ::LabTableReactionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSound;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlaySoundReactionComponent() /*override*/ = default;

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
