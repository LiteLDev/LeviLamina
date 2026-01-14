#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitions.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace SharedTypes::v1_21_120 {

struct ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue>                     mDescription;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_21_120::ActorDefinitions> mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SharedTypes::v1_21_120::ActorDefinitions>>
                                                      mDefinitionGroups;
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDocument& operator=(ActorDocument const&);
    ActorDocument(ActorDocument const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDocument();

    MCAPI ActorDocument(::SharedTypes::v1_21_120::ActorDocument&&);

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
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::SharedTypes::v1_21_120::ActorDocument&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
