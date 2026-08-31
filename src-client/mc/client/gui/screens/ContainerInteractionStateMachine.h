#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ButtonEventType.h"
#include "mc/client/gui/screens/Node.h"
#include "mc/client/gui/screens/NodeId.h"

// auto generated forward declare list
// clang-format off
struct ButtonEdge;
struct PointerHeldEdge;
struct PointerHeldScreenEventData;
// clang-format on

class ContainerInteractionStateMachine {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::Node>                                                     mCurrentNode;
    ::ll::TypedStorage<4, 4, ::NodeId>                                                     mCurrentNodeId;
    ::ll::TypedStorage<4, 4, ::NodeId>                                                     mDefaultNodeId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::Node>>                           mNodes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::vector<::ButtonEdge>>>      mButtonEdges;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::vector<::PointerHeldEdge>>> mPointerHeldEdges;
    ::ll::TypedStorage<4, 4, ::NodeId>                                                     mNodeChangeRequest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerInteractionStateMachine();

    MCAPI ::ui::ViewRequest
    _changeState(::NodeId target, uint buttonId, ::std::string const& collectionName, int collectionIndex);

    MCAPI void addEdge(
        ::NodeId                                                                  source,
        ::NodeId                                                                  target,
        ::std::function<bool(uint, ::ButtonEventType, ::std::string const&, int)> requirement,
        int                                                                       priority
    );

    MCAPI void addEdge(
        ::NodeId                                                                              source,
        ::NodeId                                                                              target,
        ::std::function<bool(::PointerHeldScreenEventData const&, ::std::string const&, int)> requirement,
        int                                                                                   priority
    );

    MCAPI void addNode(
        ::NodeId                                                            id,
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onEnter,
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onExit,
        bool                                                                defaultNode
    );

    MCAPI ::ui::ViewRequest receiveEvent(
        ::PointerHeldScreenEventData const& pointerHeldEvent,
        ::std::string const&                collectionName,
        int                                 collectionIndex
    );

    MCAPI ::ui::ViewRequest
    receiveEvent(uint buttonId, ::ButtonEventType buttonType, ::std::string const& collectionName, int collectionIndex);

    MCAPI ~ContainerInteractionStateMachine();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
