#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class BlockType;
struct ActorDefinitionIdentifierComponent;
// clang-format on

namespace CameraAimAssist {

struct PriorityPresetExclusionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkcdaf34;
    ::ll::UntypedStorage<8, 64> mUnka6e6f7;
    ::ll::UntypedStorage<8, 64> mUnk412e66;
    // NOLINTEND

public:
    // prevent constructor by default
    PriorityPresetExclusionData& operator=(PriorityPresetExclusionData const&);
    PriorityPresetExclusionData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PriorityPresetExclusionData(::CameraAimAssist::PriorityPresetExclusionData const&);

    MCNAPI_C bool isExcludedActor(::ActorDefinitionIdentifierComponent const& actorIdentifier) const;

    MCNAPI_C bool isExcludedBlock(::BlockType const& block) const;

    MCNAPI_C ::CameraAimAssist::PriorityPresetExclusionData&
    operator=(::CameraAimAssist::PriorityPresetExclusionData&&);

    MCNAPI ~PriorityPresetExclusionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CameraAimAssist::PriorityPresetExclusionData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CameraAimAssist
