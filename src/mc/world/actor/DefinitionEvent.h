#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/DefinitionEventType.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/response/EventResponseCollection.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct DefinitionModifier;
// clang-format on

class DefinitionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                             mProbability;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                 mCondition;
    ::ll::TypedStorage<4, 4, ::DefinitionEventType>             mType;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger>              mTrigger;
    ::ll::TypedStorage<8, 24, ::std::vector<::DefinitionEvent>> mChildren;
    ::ll::TypedStorage<8, 24, ::EventResponseCollection>        mResponses;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DefinitionEvent(::DefinitionEvent&&);

    MCAPI DefinitionEvent(::DefinitionEvent const&);

    MCAPI void evaluateEvent(::RenderParams& params, ::std::vector<::DefinitionModifier>& modifications) const;

    MCAPI ::DefinitionEvent& operator=(::DefinitionEvent const&);

    MCAPI ~DefinitionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DefinitionEvent&&);

    MCAPI void* $ctor(::DefinitionEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
