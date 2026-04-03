#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

    MCNAPI_C bool isEligible(::std::string const& urlToMatch) const;

    MCNAPI_C bool isValid() const;

    MCNAPI ::ThirdPartyInfo& operator=(::ThirdPartyInfo const&);

    MCNAPI ~ThirdPartyInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI_C void* $ctor(::ThirdPartyInfo&&);

    MCNAPI void* $ctor(::ThirdPartyInfo const&);

    MCNAPI_C void* $ctor(
        ::std::unordered_set<::std::string> const& allowListUrls,
        ::std::string                              creatorId,
        ::std::string                              creatorName,
        ::std::string                              storePageId,
        bool                                       requireXBL,
        ::std::string const&                       experienceId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
