#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"

struct Node {
public:
    // Node inner types define
    using NodeCallback = ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)>> mOnEnter;
    ::ll::TypedStorage<8, 64, ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)>> mOnExit;
    // NOLINTEND

public:
    // prevent constructor by default
    Node(Node const&);
    Node();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Node(
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onEnter,
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onExit
    );

    MCAPI ::Node& operator=(::Node const&);

    MCAPI ~Node();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onEnter,
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onExit
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
