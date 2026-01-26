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
    ::ll::UntypedStorage<8, 32>  mUnk9b3962;
    ::ll::UntypedStorage<8, 32>  mUnk21e553;
    ::ll::UntypedStorage<8, 32>  mUnk8abf40;
    ::ll::UntypedStorage<8, 32>  mUnk4c9f58;
    ::ll::UntypedStorage<8, 32>  mUnkc2cc32;
    ::ll::UntypedStorage<8, 32>  mUnke95fd1;
    ::ll::UntypedStorage<8, 104> mUnkf21cae;
    ::ll::UntypedStorage<8, 112> mUnk95126a;
    ::ll::UntypedStorage<8, 32>  mUnke37b6c;
    ::ll::UntypedStorage<8, 32>  mUnk838b8f;
    ::ll::UntypedStorage<8, 32>  mUnk75de1f;
    ::ll::UntypedStorage<8, 32>  mUnkab55f5;
    ::ll::UntypedStorage<1, 1>   mUnkff7bc8;
    ::ll::UntypedStorage<1, 1>   mUnk80ef59;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryPopup& operator=(ActiveDirectoryPopup const&);
    ActiveDirectoryPopup(ActiveDirectoryPopup const&);
    ActiveDirectoryPopup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::string getTTSMessageBody() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::ActiveDirectoryPopup
    get(::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity const> identity,
        ::ActiveDirectoryExperience                                    experience);

    MCNAPI_C static ::ActiveDirectoryPopup
    get(::edu::Role, int trialsRemaining, ::ActiveDirectoryExperience experience, ::std::string const& email);

    MCNAPI_C static ::ActiveDirectoryPopup getVerificationInProgressPopup(::std::string const& verificationUri);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::ActiveDirectoryPopup&&);

    MCNAPI_C void* $ctor(::ActiveDirectoryPopup const&);

    MCNAPI_C void* $ctor(
        ::std::string&&             id,
        ::std::string&&             title,
        ::std::string&&             popupText,
        ::std::string&&             hyperlinkIntroText,
        ::std::string&&             hyperlinkLabelText,
        ::std::string&&             hyperlinkUri,
        ::ActiveDirectoryAction     postPopupAction,
        ::ActiveDirectoryExperience experienceType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
