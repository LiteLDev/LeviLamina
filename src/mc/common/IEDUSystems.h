#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MessPublicKeyManager;
namespace Identity { class IEduAuth; }
namespace Social { class IEduMultiplayerHeadless; }
// clang-format on

class IEDUSystems : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk48a625;
    // NOLINTEND

public:
    // prevent constructor by default
    IEDUSystems& operator=(IEDUSystems const&);
    IEDUSystems(IEDUSystems const&);
    IEDUSystems();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IEDUSystems() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~IEDUSystems() /*override*/;
#endif

    virtual ::Identity::IEduAuth& getEduAuth() const = 0;

    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Bedrock::NotNullNonOwnerPtr<::MessPublicKeyManager> getMessPublicKeyManager() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
