#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/legacy/actor/ActorDefinitions.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace SharedTypes::Legacy {

struct ActorDocumentCorrected {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue>                  mDescription;
    ::ll::TypedStorage<8, 56, ::SharedTypes::Legacy::ActorDefinitions> mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SharedTypes::Legacy::ActorDefinitions>>
                                                      mDefinitionGroups;
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDocumentCorrected& operator=(ActorDocumentCorrected const&);
    ActorDocumentCorrected(ActorDocumentCorrected const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDocumentCorrected();

    MCAPI ActorDocumentCorrected(::SharedTypes::Legacy::ActorDocumentCorrected&&);

    MCAPI ~ActorDocumentCorrected();
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

    MCFOLD void* $ctor(::SharedTypes::Legacy::ActorDocumentCorrected&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
