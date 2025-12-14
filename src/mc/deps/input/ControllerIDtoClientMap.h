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
    ::ll::TypedStorage<1, 1, bool>                                                 useGameControllerId;
    ::ll::TypedStorage<1, 1, bool>                                                 onScreenAcceptingAllControllerInput;
    ::ll::TypedStorage<1, 1, bool>                                                 acceptInputFromAllControllers;
    ::ll::TypedStorage<1, 1, bool>                                                 inGame;
    ::ll::TypedStorage<4, 4, int>                                                  primaryUserControllerId;
    ::ll::TypedStorage<4, 4, int>                                                  lastInputUserControllerId;
    ::ll::TypedStorage<8, 16, ::std::map<int, ::std::weak_ptr<::IClientInstance>>> controllerIDtoClientMap;
    // NOLINTEND

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
    MCAPI_C void insertClientInstance(int id, ::std::shared_ptr<::IClientInstance> clientInstance);

    MCAPI_C void removeClientInstance(::std::shared_ptr<::IClientInstance> const& clientInstance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
