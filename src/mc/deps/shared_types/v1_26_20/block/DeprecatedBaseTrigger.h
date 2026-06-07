#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DeprecatedBaseTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                         mType;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode> mCondition;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject>   mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    DeprecatedBaseTrigger& operator=(DeprecatedBaseTrigger const&);
    DeprecatedBaseTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeprecatedBaseTrigger(::SharedTypes::v1_26_20::BlockDefinition::DeprecatedBaseTrigger const&);

    MCAPI ~DeprecatedBaseTrigger();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindAllTriggersType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::DeprecatedBaseTrigger const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
