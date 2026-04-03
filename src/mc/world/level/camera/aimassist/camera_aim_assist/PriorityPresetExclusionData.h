#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockType;
// clang-format on

namespace CameraAimAssist {

struct PriorityPresetExclusionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkcdaf34;
    ::ll::UntypedStorage<8, 64> mUnka6e6f7;
    ::ll::UntypedStorage<8, 64> mUnk412e66;
    ::ll::UntypedStorage<8, 64> mUnk1689d1;
    // NOLINTEND

public:
    // prevent constructor by default
    PriorityPresetExclusionData& operator=(PriorityPresetExclusionData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PriorityPresetExclusionData();

    MCNAPI PriorityPresetExclusionData(::CameraAimAssist::PriorityPresetExclusionData const&);

    MCNAPI bool isExcludedActor(::Actor const& actor) const;

    MCNAPI_C bool isExcludedBlock(::BlockType const& block) const;

    MCNAPI ::CameraAimAssist::PriorityPresetExclusionData& operator=(::CameraAimAssist::PriorityPresetExclusionData&&);

    MCNAPI ~PriorityPresetExclusionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::CameraAimAssist::PriorityPresetExclusionData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CameraAimAssist
