#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ExpressionNode.h"
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
    ::ll::TypedStorage<8, 216, ::ExpressionNode>                mCondition;
    ::ll::TypedStorage<4, 4, ::DefinitionEventType>             mType;
    ::ll::TypedStorage<8, 256, ::DefinitionTrigger>             mTrigger;
    ::ll::TypedStorage<8, 24, ::std::vector<::DefinitionEvent>> mChildren;
    ::ll::TypedStorage<8, 24, ::EventResponseCollection>        mResponses;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefinitionEvent();

    MCNAPI DefinitionEvent(::DefinitionEvent const&);

    MCNAPI DefinitionEvent(::DefinitionEvent&&);

    MCNAPI void evaluateEvent(::RenderParams& params, ::std::vector<::DefinitionModifier>& modifications) const;

    MCNAPI ::DefinitionEvent& operator=(::DefinitionEvent const&);

    MCNAPI ~DefinitionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::DefinitionEvent const&);

    MCNAPI void* $ctor(::DefinitionEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
