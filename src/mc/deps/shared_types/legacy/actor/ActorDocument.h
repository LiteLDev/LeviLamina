#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/deps/shared_types/legacy/actor/ActorDefinitions.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {

struct ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue>                  mDescription;
    ::ll::TypedStorage<8, 56, ::SharedTypes::Legacy::ActorDefinitions> mDefinitions;
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string, ::std::variant<::cereal::NullType, ::SharedTypes::Legacy::ActorDefinitions>>>
                                                      mDefinitionGroups;
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDocument& operator=(ActorDocument const&);
    ActorDocument(ActorDocument const&);
    ActorDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDocument(::SharedTypes::Legacy::ActorDocument&&);

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
    MCAPI void* $ctor(::SharedTypes::Legacy::ActorDocument&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
