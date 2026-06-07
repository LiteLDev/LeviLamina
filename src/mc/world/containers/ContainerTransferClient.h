#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/IContainerTransfer.h"

// auto generated forward declare list
// clang-format off
class ContainerManagerController;
struct ContainerScreenActionResult;
struct ContainerTransferScope;
// clang-format on

class ContainerTransferClient : public ::IContainerTransfer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContainerManagerController>> mContainerManagerController;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerTransferClient();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerTransferClient() /*override*/ = default;

    virtual ::std::unique_ptr<::ContainerTransferScope> preTransfer() /*override*/;

#ifdef LL_PLAT_S
    virtual void postTransfer(::ContainerTransferScope*, ::ContainerScreenActionResult const&) /*override*/;
#else // LL_PLAT_C
    virtual void
    postTransfer(::ContainerTransferScope* transferScope, ::ContainerScreenActionResult const& result) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit ContainerTransferClient(::std::weak_ptr<::ContainerManagerController> containerManagerController);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::ContainerManagerController> containerManagerController);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::unique_ptr<::ContainerTransferScope> $preTransfer();

    MCNAPI void $postTransfer(::ContainerTransferScope* transferScope, ::ContainerScreenActionResult const& result);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
