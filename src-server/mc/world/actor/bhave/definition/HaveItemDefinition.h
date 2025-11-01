#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class HaveItemDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk44be53;
    ::ll::UntypedStorage<4, 4> mUnka0a60a;
    ::ll::UntypedStorage<8, 32> mUnk7d94f7;
    ::ll::UntypedStorage<8, 32> mUnke27783;
    // NOLINTEND

public:
    // prevent constructor by default
    HaveItemDefinition& operator=(HaveItemDefinition const&);
    HaveItemDefinition(HaveItemDefinition const&);
    HaveItemDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~HaveItemDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
