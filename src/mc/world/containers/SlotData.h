#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FullContainerName;
// clang-format on

struct SlotData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mCollectionName;
    ::ll::TypedStorage<4, 4, int>            mCollectionIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SlotData();

#ifdef LL_PLAT_C
    MCAPI SlotData(::FullContainerName const& collectionEnumName, int collectionIndex);

    MCAPI SlotData(::std::string&& collectionName, int collectionIndex);
#endif

    MCAPI SlotData(::std::string const& collectionName, int collectionIndex);

#ifdef LL_PLAT_C
    MCAPI void clear();

    MCAPI bool isActive() const;

    MCAPI bool matches(::SlotData const& other) const;

    MCAPI bool operator!=(::SlotData const& other) const;

    MCAPI bool operator==(::SlotData const& other) const;

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
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::FullContainerName const& collectionEnumName, int collectionIndex);

    MCAPI void* $ctor(::std::string&& collectionName, int collectionIndex);
#endif

    MCFOLD void* $ctor(::std::string const& collectionName, int collectionIndex);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
