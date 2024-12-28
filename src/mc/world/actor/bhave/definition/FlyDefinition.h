#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class FlyDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3d66b9;
    ::ll::UntypedStorage<8, 32> mUnkabca45;
    ::ll::UntypedStorage<1, 1>  mUnk83f7e7;
    ::ll::UntypedStorage<8, 32> mUnkfe353c;
    // NOLINTEND

public:
    // prevent constructor by default
    FlyDefinition& operator=(FlyDefinition const&);
    FlyDefinition(FlyDefinition const&);
    FlyDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~FlyDefinition() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::Json::Value value, ::BehaviorFactory const& factory);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
