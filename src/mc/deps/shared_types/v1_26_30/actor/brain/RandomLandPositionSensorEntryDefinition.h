#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/ResultSensorEntryDefinition.h"

// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct RandomLandPositionSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::ResultSensorEntryDefinition<
      ::SharedTypes::v1_26_30::Brain::MemorySensors::RandomLandPositionSensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>
                                  mRandomPosMemory;
    ::ll::TypedStorage<4, 4, int> mSearchRange;
    ::ll::TypedStorage<4, 4, int> mSearchHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomLandPositionSensorEntryDefinition& operator=(RandomLandPositionSensorEntryDefinition const&);
    RandomLandPositionSensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RandomLandPositionSensorEntryDefinition(
        ::SharedTypes::v1_26_30::Brain::MemorySensors::RandomLandPositionSensorEntryDefinition const&
    );
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
    MCAPI void* $ctor(::SharedTypes::v1_26_30::Brain::MemorySensors::RandomLandPositionSensorEntryDefinition const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
