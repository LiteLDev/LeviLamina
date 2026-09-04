#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/BrainDefinition.h"
#include "mc/deps/shared_types/v1_26_30/actor/ActorDefinitions.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace SharedTypes::v1_26_30 {

struct ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue>                                             mDescription;
    ::ll::TypedStorage<8, 136, ::std::optional<::SharedTypes::v1_21_130::Brain::BrainDefinition>> mBrainDefinition;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_30::ActorDefinitions>                          mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SharedTypes::v1_26_30::ActorDefinitions>>
                                                      mDefinitionGroups;
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mEvents;
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mUpgrades;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDocument(::SharedTypes::v1_26_30::ActorDocument const&);

    MCFOLD ::SharedTypes::v1_26_30::ActorDocument& operator=(::SharedTypes::v1_26_30::ActorDocument&&);

    MCFOLD ::SharedTypes::v1_26_30::ActorDocument& operator=(::SharedTypes::v1_26_30::ActorDocument const&);

    MCFOLD bool operator==(::SharedTypes::v1_26_30::ActorDocument const&) const;

    MCAPI ~ActorDocument();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_26_30::ActorDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
