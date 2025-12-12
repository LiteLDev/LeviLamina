#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ReplayStateComponent;
// clang-format on

namespace SynchedActorDataSerializer {

struct DeserializeArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                 mActor;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> mTargetFrame;
    ::ll::TypedStorage<8, 8, ::ReplayStateComponent*>  mReplay;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeArgs& operator=(DeserializeArgs const&);
    DeserializeArgs(DeserializeArgs const&);
    DeserializeArgs();
};

} // namespace SynchedActorDataSerializer
