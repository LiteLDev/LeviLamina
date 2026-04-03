#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/actor/brain/InternalAccessMapDefinition.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryDefinition.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryDefinitionEquality.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryDefinitionHash.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::Brain {

struct BrainDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_set<
            ::SharedTypes::v1_21_130::Brain::MemoryDefinition,
            ::SharedTypes::v1_21_130::Brain::MemoryDefinitionHash,
            ::SharedTypes::v1_21_130::Brain::MemoryDefinitionEquality>>
        mMemories;
    ::ll::TypedStorage<8, 64, ::std::optional<::SharedTypes::v1_21_130::Brain::InternalAccessMapDefinition>>
        mInternalAccessMap;
    // NOLINTEND

public:
    // prevent constructor by default
    BrainDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BrainDefinition(::SharedTypes::v1_21_130::Brain::BrainDefinition&&);

    MCAPI BrainDefinition(::SharedTypes::v1_21_130::Brain::BrainDefinition const&);

    MCAPI ::SharedTypes::v1_21_130::Brain::BrainDefinition&
    operator=(::SharedTypes::v1_21_130::Brain::BrainDefinition&&);

    MCAPI ::SharedTypes::v1_21_130::Brain::BrainDefinition&
    operator=(::SharedTypes::v1_21_130::Brain::BrainDefinition const&);

    MCAPI ~BrainDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_130::Brain::BrainDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_130::Brain::BrainDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Brain
