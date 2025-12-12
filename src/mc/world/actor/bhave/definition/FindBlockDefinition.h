#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class FindBlockDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9a8a00;
    ::ll::UntypedStorage<8, 32> mUnk827821;
    ::ll::UntypedStorage<4, 4>  mUnkaa033c;
    ::ll::UntypedStorage<8, 32> mUnk54c5d3;
    // NOLINTEND

public:
    // prevent constructor by default
    FindBlockDefinition& operator=(FindBlockDefinition const&);
    FindBlockDefinition(FindBlockDefinition const&);
    FindBlockDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    virtual ~FindBlockDefinition() /*override*/;
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
