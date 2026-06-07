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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CraftableElements& operator=(CraftableElements const&);
    CraftableElements(CraftableElements const&);
    CraftableElements();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftableElements& operator=(CraftableElements const&);
    CraftableElements(CraftableElements const&);

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CraftableElements() = default;
#else // LL_PLAT_C
    virtual ~CraftableElements();
#endif

    virtual void registerElements();

#ifdef LL_PLAT_S
    virtual void _registerElement(int, int, ::ElementType);
#else // LL_PLAT_C
    virtual void _registerElement(int electrons, int neutrons, ::ElementType result);
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI CraftableElements();

    MCNAPI ::ElementType getElement(int protons, int electrons, int neutrons);

    MCNAPI bool particlesFromElement(::ElementType element, int& protons, int& electrons, int& neutrons);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
