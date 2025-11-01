#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::DataStore {

class Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9bf5e3;
    ::ll::UntypedStorage<1, 1> mUnkc169f0;
    ::ll::UntypedStorage<8, 8> mUnkb85ffe;
    // NOLINTEND

public:
    // prevent constructor by default
    Container& operator=(Container const&);
    Container(Container const&);
    Container();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Container() = default;

    // vIndex: 1
    virtual void clear() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
