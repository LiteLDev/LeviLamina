#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class LookAtBlockDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnka43c13;
    ::ll::UntypedStorage<8, 32> mUnkce98e0;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtBlockDefinition& operator=(LookAtBlockDefinition const&);
    LookAtBlockDefinition(LookAtBlockDefinition const&);
    LookAtBlockDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    virtual ~LookAtBlockDefinition() /*override*/ = default;
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
