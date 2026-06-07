#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/NetworkType.h"

class ThirdPartyInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8ba434;
    ::ll::UntypedStorage<8, 32> mUnk56c10f;
    ::ll::UntypedStorage<8, 32> mUnk857f57;
    ::ll::UntypedStorage<8, 32> mUnk829f08;
    ::ll::UntypedStorage<1, 1>  mUnkfff32d;
    ::ll::UntypedStorage<8, 32> mUnk1440c1;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ThirdPartyInfo();

    MCNAPI ThirdPartyInfo(::ThirdPartyInfo const&);

#ifdef LL_PLAT_C
    MCNAPI ThirdPartyInfo(
        ::std::unordered_set<::std::string> const& allowListUrls,
        ::std::string                              creatorId,
        ::std::string                              creatorName,
        ::std::string                              storePageId,
        bool                                       requireXBL,
        ::std::string const&                       experienceId
    );

    MCNAPI ::std::string const& getCreatorId() const;

    MCNAPI ::std::string const& getCreatorName() const;

    MCNAPI ::std::string const& getExperienceId() const;

    MCNAPI ::NetworkType getNetworkTypeOverride() const;

    MCNAPI ::std::string const& getReportingType() const;

    MCNAPI ::std::string const& getStorePageId() const;

    MCNAPI bool isEligible(::std::string const& urlToMatch) const;
#endif

    MCNAPI bool isExperience() const;

#ifdef LL_PLAT_C
    MCNAPI bool isValid() const;

    MCNAPI ::ThirdPartyInfo& operator=(::ThirdPartyInfo&&);
#endif

    MCNAPI ::ThirdPartyInfo& operator=(::ThirdPartyInfo const&);

    MCNAPI ~ThirdPartyInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ThirdPartyInfo const&);

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::unordered_set<::std::string> const& allowListUrls,
        ::std::string                              creatorId,
        ::std::string                              creatorName,
        ::std::string                              storePageId,
        bool                                       requireXBL,
        ::std::string const&                       experienceId
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
