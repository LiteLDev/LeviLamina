#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class MoveItemDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3dd586;
    ::ll::UntypedStorage<8, 32> mUnk7b247a;
    ::ll::UntypedStorage<4, 4>  mUnkafd772;
    ::ll::UntypedStorage<8, 32> mUnk152d4e;
    ::ll::UntypedStorage<8, 32> mUnk3eee13;
    ::ll::UntypedStorage<8, 32> mUnk8daa08;
    ::ll::UntypedStorage<4, 4>  mUnk7e5ac2;
    ::ll::UntypedStorage<8, 32> mUnk8e68dc;
    ::ll::UntypedStorage<4, 4>  mUnk24e24c;
    ::ll::UntypedStorage<8, 32> mUnkd92e70;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveItemDefinition& operator=(MoveItemDefinition const&);
    MoveItemDefinition(MoveItemDefinition const&);
    MoveItemDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~MoveItemDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
