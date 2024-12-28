#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct UnlockContainerInstanceRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7d0a55;
    ::ll::UntypedStorage<8, 32> mUnk51d635;
    ::ll::UntypedStorage<8, 32> mUnk874be0;
    ::ll::UntypedStorage<8, 32> mUnk314ad3;
    // NOLINTEND

public:
    // prevent constructor by default
    UnlockContainerInstanceRequest& operator=(UnlockContainerInstanceRequest const&);
    UnlockContainerInstanceRequest(UnlockContainerInstanceRequest const&);
    UnlockContainerInstanceRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnlockContainerInstanceRequest() /*override*/;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $FromJson(::Json::Value&);

    MCAPI ::Json::Value $ToJson() const;
    // NOLINTEND
};

} // namespace PlayFab::ClientModels
