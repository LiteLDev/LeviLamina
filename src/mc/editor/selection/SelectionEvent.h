#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct SelectionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6ba109;
    ::ll::UntypedStorage<8, 16> mUnkbc6416;
    ::ll::UntypedStorage<8, 16> mUnk95b3ad;
    ::ll::UntypedStorage<8, 16> mUnka7de25;
    ::ll::UntypedStorage<4, 16> mUnk2c3425;
    ::ll::UntypedStorage<1, 2>  mUnk8985dd;
    ::ll::UntypedStorage<4, 20> mUnk7ae49e;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionEvent& operator=(SelectionEvent const&);
    SelectionEvent(SelectionEvent const&);
    SelectionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SelectionEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
