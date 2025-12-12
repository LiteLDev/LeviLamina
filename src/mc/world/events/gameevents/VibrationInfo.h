#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
class GameEvent;
struct GameEventContext;
// clang-format on

class VibrationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk217e58;
    ::ll::UntypedStorage<4, 12> mUnkdf5e59;
    ::ll::UntypedStorage<8, 16> mUnk5edab9;
    ::ll::UntypedStorage<8, 16> mUnkc5439b;
    ::ll::UntypedStorage<8, 8>  mUnk49dc37;
    // NOLINTEND

public:
    // prevent constructor by default
    VibrationInfo& operator=(VibrationInfo const&);
    VibrationInfo(VibrationInfo const&);
    VibrationInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VibrationInfo(::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext, float distance);

    MCNAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void save(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext, float distance);
    // NOLINTEND
};
