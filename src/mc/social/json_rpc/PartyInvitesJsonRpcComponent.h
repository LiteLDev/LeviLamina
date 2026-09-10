#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/IJsonRpcComponent.h"

// auto generated forward declare list
// clang-format off
namespace JsonRpc { class JsonRpcProvider; }
// clang-format on

namespace JsonRpc {

class PartyInvitesJsonRpcComponent : public ::IJsonRpcComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk1f9eef;
    ::ll::UntypedStorage<8, 128> mUnk1b7d61;
    ::ll::UntypedStorage<8, 72>  mUnk52c4e7;
    ::ll::UntypedStorage<8, 8>   mUnka80832;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PartyInvitesJsonRpcComponent& operator=(PartyInvitesJsonRpcComponent const&);
    PartyInvitesJsonRpcComponent(PartyInvitesJsonRpcComponent const&);
    PartyInvitesJsonRpcComponent();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PartyInvitesJsonRpcComponent& operator=(PartyInvitesJsonRpcComponent const&);
    PartyInvitesJsonRpcComponent(PartyInvitesJsonRpcComponent const&);

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyInvitesJsonRpcComponent() /*override*/ = default;

    virtual void initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider> provider) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI PartyInvitesJsonRpcComponent();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider> provider);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace JsonRpc
