#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/FilterSubject.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk7493a2;
    ::ll::UntypedStorage<2, 2>   mUnk3f7da8;
    ::ll::UntypedStorage<8, 216> mUnk801453;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionTrigger(DefinitionTrigger const&);
    DefinitionTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    DefinitionTrigger(::std::string type, ::SharedTypes::Legacy::FilterSubject target, ::ExpressionNode condition);

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string type, ::SharedTypes::Legacy::FilterSubject target, ::ExpressionNode condition);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
