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
    ::ll::UntypedStorage<8, 24> mUnka263b4;
    // NOLINTEND

public:
    // prevent constructor by default
    SubpackInfoCollection& operator=(SubpackInfoCollection const&);
    SubpackInfoCollection(SubpackInfoCollection const&);
    SubpackInfoCollection();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI int getDefaultSubpackIndex(::ContentTierInfo const& contentInfoTier) const;
#endif

    MCNAPI ::std::vector<::std::string> getSubpackNames() const;

#ifdef LL_PLAT_C
    MCNAPI ::ContentTierIncompatibleReason isCompatible(::ContentTierInfo const& contentInfoTier) const;

    MCNAPI ::ContentTierIncompatibleReason
    isCompatibleSubpack(int index, ::ContentTierInfo const& contentInfoTier) const;

    MCNAPI ~SubpackInfoCollection();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
