#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ActiveDirectoryAction.h"
#include "mc/certificates/identity/ActiveDirectoryExperience.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
// clang-format on

class ActiveDirectoryPopup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk803624;
    ::ll::UntypedStorage<8, 32>  mUnk11cf0b;
    ::ll::UntypedStorage<8, 32>  mUnk776762;
    ::ll::UntypedStorage<8, 32>  mUnkcb880a;
    ::ll::UntypedStorage<8, 32>  mUnk9b9552;
    ::ll::UntypedStorage<8, 32>  mUnkddff22;
    ::ll::UntypedStorage<8, 104> mUnkf21cae;
    ::ll::UntypedStorage<8, 112> mUnk95126a;
    ::ll::UntypedStorage<8, 32>  mUnke37b6c;
    ::ll::UntypedStorage<8, 32>  mUnk2ff568;
    ::ll::UntypedStorage<8, 32>  mUnkb95c78;
    ::ll::UntypedStorage<8, 32>  mUnk3cdf1a;
    ::ll::UntypedStorage<1, 1>   mUnkff7bc8;
    ::ll::UntypedStorage<1, 1>   mUnk80ef59;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ActiveDirectoryPopup& operator=(ActiveDirectoryPopup const&);
    ActiveDirectoryPopup(ActiveDirectoryPopup const&);
    ActiveDirectoryPopup();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ActiveDirectoryPopup();

    MCNAPI ActiveDirectoryPopup(::ActiveDirectoryPopup&&);

    MCNAPI ActiveDirectoryPopup(::ActiveDirectoryPopup const&);

    MCNAPI ActiveDirectoryPopup(
        ::std::string&&             id,
        ::std::string&&             title,
        ::std::string&&             popupText,
        ::std::string&&             hyperlinkIntroText,
        ::std::string&&             hyperlinkLabelText,
        ::std::string&&             hyperlinkUri,
        ::ActiveDirectoryAction     postPopupAction,
        ::ActiveDirectoryExperience experienceType
    );

    MCNAPI ::std::string getTTSMessageBody() const;

    MCNAPI ::ActiveDirectoryPopup& operator=(::ActiveDirectoryPopup const&);

    MCNAPI ~ActiveDirectoryPopup();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::ActiveDirectoryPopup
    get(::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity const> identity,
        ::ActiveDirectoryExperience                                    experience);

    MCNAPI static ::ActiveDirectoryPopup
    get(::edu::Role, int trialsRemaining, ::ActiveDirectoryExperience experience, ::std::string const& email);

    MCNAPI static ::ActiveDirectoryPopup getVerificationInProgressPopup(::std::string const& verificationUri);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ActiveDirectoryPopup&&);

    MCNAPI void* $ctor(::ActiveDirectoryPopup const&);

    MCNAPI void* $ctor(
        ::std::string&&             id,
        ::std::string&&             title,
        ::std::string&&             popupText,
        ::std::string&&             hyperlinkIntroText,
        ::std::string&&             hyperlinkLabelText,
        ::std::string&&             hyperlinkUri,
        ::ActiveDirectoryAction     postPopupAction,
        ::ActiveDirectoryExperience experienceType
    );
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
