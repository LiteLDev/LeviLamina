#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class MoveToDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk553ca4;
    ::ll::UntypedStorage<8, 32> mUnk651d18;
    ::ll::UntypedStorage<4, 4>  mUnkf3165b;
    ::ll::UntypedStorage<8, 32> mUnk147777;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToDefinition& operator=(MoveToDefinition const&);
    MoveToDefinition(MoveToDefinition const&);
    MoveToDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~MoveToDefinition() /*override*/ = default;
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
