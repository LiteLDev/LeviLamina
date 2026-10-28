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
    virtual ~CraftableElements() = default;

    virtual void registerElements();

#ifdef LL_PLAT_S
    virtual void _registerElement(int, int, ::ElementType);
#else // LL_PLAT_C
    virtual void _registerElement(int electrons, int neutrons, ::ElementType result);
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $registerElements();

    MCNAPI void $_registerElement(int electrons, int neutrons, ::ElementType result);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
