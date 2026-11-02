#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {

struct DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                         mEvent;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject>   mTarget;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode> mCondition;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionTrigger& operator=(DefinitionTrigger const&);
    DefinitionTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefinitionTrigger(::SharedTypes::Legacy::DefinitionTrigger const&);

    MCNAPI bool operator==(::SharedTypes::Legacy::DefinitionTrigger const&) const;

    MCNAPI ~DefinitionTrigger();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::DefinitionTrigger const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
