#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class PlaceBlockNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk13f3e6;
    ::ll::UntypedStorage<1, 1> mUnk3fd05f;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceBlockNode& operator=(PlaceBlockNode const&);
    PlaceBlockNode(PlaceBlockNode const&);
    PlaceBlockNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor&) /*override*/;

    // vIndex: 0
    virtual ~PlaceBlockNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
