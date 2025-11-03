#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
// clang-format on

class SetVariableDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mType;
    ::ll::TypedStorage<8, 32, ::std::string> mId;
    ::ll::TypedStorage<8, 16, ::Json::Value> mData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~SetVariableDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
