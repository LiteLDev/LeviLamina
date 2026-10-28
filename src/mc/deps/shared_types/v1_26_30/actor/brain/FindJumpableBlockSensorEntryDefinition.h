#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/ResultSensorEntryDefinition.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct WorldBlockPosition;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct FindJumpableBlockSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::ResultSensorEntryDefinition<
      ::SharedTypes::v1_26_30::Brain::MemorySensors::FindJumpableBlockSensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>
        mTargetBlockPosMemory;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::Vec3>> mJumpVelocityMemory;
    ::ll::TypedStorage<4, 4, int>                                                                  mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                                                  mSearchHeight;
    ::ll::TypedStorage<4, 4, uint>                                                                 mMinDistance;
    ::ll::TypedStorage<4, 4, uint>                                                                 mMinPathLength;
    ::ll::TypedStorage<4, 4, float>                                                                mMaxVelocity;
    ::ll::TypedStorage<4, 4, float>                                                                mScaleFactor;
    // NOLINTEND

public:
    // prevent constructor by default
    FindJumpableBlockSensorEntryDefinition& operator=(FindJumpableBlockSensorEntryDefinition const&);
    FindJumpableBlockSensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FindJumpableBlockSensorEntryDefinition(
        ::SharedTypes::v1_26_30::Brain::MemorySensors::FindJumpableBlockSensorEntryDefinition const&
    );

    MCAPI ~FindJumpableBlockSensorEntryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::Brain::MemorySensors::FindJumpableBlockSensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
