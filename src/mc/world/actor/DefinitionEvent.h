#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionEventType.h"

// auto generated forward declare list
// clang-format off
class DefinitionTrigger;
class ExpressionNode;
class RenderParams;
struct DefinitionModifier;
struct EventResponseCollection;
// clang-format on

class DefinitionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                             mProbability;
    ::ll::TypedStorage<8, 216, ::ExpressionNode>                mCondition;
    ::ll::TypedStorage<4, 4, ::DefinitionEventType>             mType;
    ::ll::TypedStorage<8, 256, ::DefinitionTrigger>             mTrigger;
    ::ll::TypedStorage<8, 24, ::std::vector<::DefinitionEvent>> mChildren;
    ::ll::TypedStorage<8, 24, ::EventResponseCollection>        mResponses;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DefinitionEvent();

    MCAPI DefinitionEvent(::DefinitionEvent const&);

    MCAPI DefinitionEvent(::DefinitionEvent&&);

    MCAPI void evaluateEvent(::RenderParams& params, ::std::vector<::DefinitionModifier>& modifications) const;

    MCAPI ::DefinitionEvent& operator=(::DefinitionEvent const&);

    MCAPI ~DefinitionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::DefinitionEvent const&);

    MCAPI void* $ctor(::DefinitionEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
