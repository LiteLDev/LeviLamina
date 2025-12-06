#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                       mType;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mTarget;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                    mCondition;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionTrigger(DefinitionTrigger const&);
    DefinitionTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool canTrigger(::RenderParams& params) const;

    MCAPI ::DefinitionTrigger& operator=(::DefinitionTrigger&&);

    MCAPI ::DefinitionTrigger& operator=(::DefinitionTrigger const&);

    MCAPI ~DefinitionTrigger();
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
