#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ElementType.h"

class CraftableElements {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk12f727;
    ::ll::UntypedStorage<8, 64> mUnk34efbf;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftableElements& operator=(CraftableElements const&);
    CraftableElements(CraftableElements const&);
    CraftableElements();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftableElements();

    // vIndex: 1
    virtual void registerElements();

    // vIndex: 2
    virtual void _registerElement(int, int, ::ElementType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $registerElements();

    MCAPI void $_registerElement(int, int, ::ElementType);
    // NOLINTEND
};
