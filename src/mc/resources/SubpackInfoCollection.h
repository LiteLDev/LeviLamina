#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class ContentTierInfo;
// clang-format on

class SubpackInfoCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf3d8c0;
    // NOLINTEND

public:
    // prevent constructor by default
    SubpackInfoCollection& operator=(SubpackInfoCollection const&);
    SubpackInfoCollection(SubpackInfoCollection const&);
    SubpackInfoCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C int getDefaultSubpackIndex(::ContentTierInfo const& contentInfoTier) const;

    MCNAPI ::std::vector<::std::string> getSubpackNames() const;

    MCNAPI_C ::ContentTierIncompatibleReason isCompatible(::ContentTierInfo const& contentInfoTier) const;

    MCNAPI_C ::ContentTierIncompatibleReason
    isCompatibleSubpack(int index, ::ContentTierInfo const& contentInfoTier) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
