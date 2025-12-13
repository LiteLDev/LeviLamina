#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

struct ControllerIDtoClientMap : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk13e3ff;
    ::ll::UntypedStorage<1, 1>  mUnk1fa8dc;
    ::ll::UntypedStorage<1, 1>  mUnkb49184;
    ::ll::UntypedStorage<1, 1>  mUnk8688aa;
    ::ll::UntypedStorage<4, 4>  mUnk8808ae;
    ::ll::UntypedStorage<4, 4>  mUnk157027;
    ::ll::UntypedStorage<8, 16> mUnk134e68;
    // NOLINTEND

public:
    // prevent constructor by default
    ControllerIDtoClientMap& operator=(ControllerIDtoClientMap const&);
    ControllerIDtoClientMap(ControllerIDtoClientMap const&);
    ControllerIDtoClientMap();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ControllerIDtoClientMap() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ControllerIDtoClientMap() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void insertClientInstance(int id, ::std::shared_ptr<::IClientInstance> clientInstance);

    MCNAPI_C void removeClientInstance(::std::shared_ptr<::IClientInstance> const& clientInstance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
