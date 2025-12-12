#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class InteractActionDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkdddbc2;
    ::ll::UntypedStorage<8, 32> mUnk455be2;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractActionDefinition& operator=(InteractActionDefinition const&);
    InteractActionDefinition(InteractActionDefinition const&);
    InteractActionDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    virtual ~InteractActionDefinition() /*override*/ = default;
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
