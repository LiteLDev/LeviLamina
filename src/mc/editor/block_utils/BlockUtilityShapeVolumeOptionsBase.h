#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityShapeVolumeOptionsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkffc123;
    ::ll::UntypedStorage<4, 4> mUnk5987c1;
    ::ll::UntypedStorage<4, 4> mUnkf0960f;
    ::ll::UntypedStorage<4, 4> mUnkfaca9f;
    ::ll::UntypedStorage<4, 4> mUnk417d85;
    ::ll::UntypedStorage<4, 4> mUnkdb3140;
    ::ll::UntypedStorage<1, 1> mUnk4cb530;
    ::ll::UntypedStorage<4, 4> mUnke11046;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityShapeVolumeOptionsBase& operator=(BlockUtilityShapeVolumeOptionsBase const&);
    BlockUtilityShapeVolumeOptionsBase(BlockUtilityShapeVolumeOptionsBase const&);
    BlockUtilityShapeVolumeOptionsBase();
};

} // namespace Editor::BlockUtils::Task
