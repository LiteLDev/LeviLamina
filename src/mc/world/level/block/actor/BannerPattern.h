#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class BannerPattern : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk7631b2;
    ::ll::UntypedStorage<8, 24> mUnke9bbb7;
    ::ll::UntypedStorage<8, 64> mUnkde0685;
    ::ll::UntypedStorage<8, 32> mUnk69db4b;
    ::ll::UntypedStorage<8, 32> mUnkd06989;
    ::ll::UntypedStorage<2, 2>  mUnke8c0fd;
    ::ll::UntypedStorage<1, 1>  mUnk17c315;
    ::ll::UntypedStorage<1, 1>  mUnk294a91;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerPattern& operator=(BannerPattern const&);
    BannerPattern(BannerPattern const&);
    BannerPattern();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BannerPattern() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool matchesPatternItem(::ItemStackBase const& item) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const* const& BASE_NAME();

    MCAPI static char const* const& CREEPER_NAME_ID();

    MCAPI static char const* const& CURLY_BORDER_NAME_ID();

    MCAPI static char const* const& SQUARE_TOP_LEFT_NAME_ID();

    MCAPI static ::std::vector<::BannerPattern> const& mPatterns();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
