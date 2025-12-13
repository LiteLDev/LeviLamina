#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AchievementOfferInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk590584;
    // NOLINTEND

public:
    // prevent constructor by default
    AchievementOfferInfo& operator=(AchievementOfferInfo const&);
    AchievementOfferInfo(AchievementOfferInfo const&);
    AchievementOfferInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AchievementOfferInfo() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C AchievementOfferInfo(::std::string const& productId, ::std::vector<::std::string> const& offerTags);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string const& productId, ::std::vector<::std::string> const& offerTags);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
