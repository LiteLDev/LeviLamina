#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class SubtreeDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb8ae51;
    ::ll::UntypedStorage<8, 24> mUnkd59133;
    // NOLINTEND

public:
    // prevent constructor by default
    SubtreeDefinition& operator=(SubtreeDefinition const&);
    SubtreeDefinition(SubtreeDefinition const&);
    SubtreeDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~SubtreeDefinition() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
