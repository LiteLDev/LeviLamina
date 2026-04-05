#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlotData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mCollectionName;
    ::ll::TypedStorage<4, 4, int>            mCollectionIndex;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    SlotData(SlotData const&);
    SlotData();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI bool matches(::SlotData const& other) const;

    MCAPI bool operator!=(::SlotData const& other) const;

    MCFOLD ::SlotData& operator=(::SlotData&&);

    MCFOLD ::SlotData& operator=(::SlotData const&);

    MCAPI void set(::std::string const& collectionName, int collectionIndex);
#endif

    MCAPI ~SlotData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SlotData& UNKNOWN_LOCATION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
