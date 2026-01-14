#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct ActorDefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                             mType;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject>       mTarget;
    ::ll::TypedStorage<8, 328, ::SharedTypes::v1_21_20::FilterGroupData> mFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionTrigger& operator=(ActorDefinitionTrigger const&);
    ActorDefinitionTrigger(ActorDefinitionTrigger const&);
    ActorDefinitionTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_120::ActorDefinitionTrigger&
    operator=(::SharedTypes::v1_21_120::ActorDefinitionTrigger&&);

    MCAPI ~ActorDefinitionTrigger();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
