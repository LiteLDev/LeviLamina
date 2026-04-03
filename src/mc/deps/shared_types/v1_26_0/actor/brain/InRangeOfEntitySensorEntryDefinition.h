#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntry.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0::Brain {

struct InRangeOfEntitySensorEntryDefinition : public ::SharedTypes::v1_26_0::Brain::BaseSensorEntry<
                                                  ::SharedTypes::v1_26_0::Brain::InRangeOfEntitySensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRefMemory>>
                                                               mTargetEntityMemory;
    ::ll::TypedStorage<8, 56, ::std::optional<::HashedString>> mInRangeEventName;
    ::ll::TypedStorage<8, 56, ::std::optional<::HashedString>> mOutOfRangeEventName;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mSearchRange;
    // NOLINTEND

public:
    // prevent constructor by default
    InRangeOfEntitySensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    InRangeOfEntitySensorEntryDefinition(::SharedTypes::v1_26_0::Brain::InRangeOfEntitySensorEntryDefinition const&);

    MCAPI ::SharedTypes::v1_26_0::Brain::InRangeOfEntitySensorEntryDefinition&
    operator=(::SharedTypes::v1_26_0::Brain::InRangeOfEntitySensorEntryDefinition&&);

    MCAPI ::SharedTypes::v1_26_0::Brain::InRangeOfEntitySensorEntryDefinition&
    operator=(::SharedTypes::v1_26_0::Brain::InRangeOfEntitySensorEntryDefinition const&);

    MCAPI ~InRangeOfEntitySensorEntryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& IN_RANGE_EVENT_NAME_NAME();

    MCAPI static ::std::string_view const& OUT_OF_RANGE_EVENT_NAME_NAME();

    MCAPI static ::std::string_view const& SEARCH_RANGE_NAME();

    MCAPI static ::std::string_view const& TARGET_ENTITY_MEMORY_NAME();

    MCAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_0::Brain::InRangeOfEntitySensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0::Brain
