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
#ifdef LL_PLAT_S
    virtual ~CraftableElements() = default;
#else // LL_PLAT_C
    virtual ~CraftableElements();
#endif

    virtual void registerElements();

    virtual void _registerElement(int electrons, int neutrons, ::ElementType result);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void
    _registerElementRange(int electrons, int neutronStart, int neutronEnd, int defaultNeutron, ::ElementType result);

    MCNAPI_C void _registerElementRange(
        int                       electrons,
        int                       neutronStart,
        int                       neutronEnd,
        ::std::vector<int> const& additionalNeutrons,
        int                       defaultNeutron,
        ::ElementType             result
    );
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
