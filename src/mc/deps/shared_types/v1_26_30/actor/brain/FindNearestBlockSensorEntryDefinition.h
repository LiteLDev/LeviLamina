#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct FindNearestBlockSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
      ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestBlockSensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::BlockPos>>>
        mSearchBlockPosMemory;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::BlockPos>>
                                                                                     mFoundBlockPosMemory;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mBlockDescriptors;
    ::ll::TypedStorage<4, 4, int>                                                    mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                                    mSearchHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    FindNearestBlockSensorEntryDefinition& operator=(FindNearestBlockSensorEntryDefinition const&);
    FindNearestBlockSensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FindNearestBlockSensorEntryDefinition(
        ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestBlockSensorEntryDefinition const&
    );

    MCAPI ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestBlockSensorEntryDefinition&
    operator=(::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestBlockSensorEntryDefinition&&);

    MCAPI bool
    operator==(::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestBlockSensorEntryDefinition const&) const;

    MCAPI ~FindNearestBlockSensorEntryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestBlockSensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
