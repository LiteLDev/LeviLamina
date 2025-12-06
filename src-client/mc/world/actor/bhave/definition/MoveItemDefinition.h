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
    ::ll::TypedStorage<8, 32, ::std::string> mFromContainer;
    ::ll::TypedStorage<8, 32, ::std::string> mFromContainerId;
    ::ll::TypedStorage<4, 4, int>            mFromSlot;
    ::ll::TypedStorage<8, 32, ::std::string> mFromSlotId;
    ::ll::TypedStorage<8, 32, ::std::string> mToContainer;
    ::ll::TypedStorage<8, 32, ::std::string> mToContainerId;
    ::ll::TypedStorage<4, 4, int>            mToSlot;
    ::ll::TypedStorage<8, 32, ::std::string> mToSlotId;
    ::ll::TypedStorage<4, 4, int>            mItemCount;
    ::ll::TypedStorage<8, 32, ::std::string> mItemCountId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~MoveItemDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
