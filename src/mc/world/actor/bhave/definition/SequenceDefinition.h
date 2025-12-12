#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/CompositeDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class SequenceDefinition : public ::CompositeDefinition {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    virtual ~SequenceDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::Json::Value value, ::BehaviorFactory const& factory);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
