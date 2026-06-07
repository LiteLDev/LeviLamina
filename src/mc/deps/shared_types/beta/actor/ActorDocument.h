#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/actor/ActorDefinitions.h"
#include "mc/deps/shared_types/v1_26_20/actor/ActorDocument.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct ActorDocument : public ::SharedTypes::v1_26_20::ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SharedTypes::Beta::ActorDefinitions> mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SharedTypes::Beta::ActorDefinitions>>
        mDefinitionGroups;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDocument();

    MCAPI ActorDocument(::SharedTypes::Beta::ActorDocument const&);

    MCAPI ::SharedTypes::Beta::ActorDocument& operator=(::SharedTypes::Beta::ActorDocument const&);

    MCAPI ~ActorDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::Beta::ActorDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta
