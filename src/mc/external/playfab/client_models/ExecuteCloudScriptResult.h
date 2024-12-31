#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct ExecuteCloudScriptResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkeb57a3;
    ::ll::UntypedStorage<8, 112> mUnkd4a63c;
    ::ll::UntypedStorage<8, 8>   mUnk497b0e;
    ::ll::UntypedStorage<8, 32>  mUnk993256;
    ::ll::UntypedStorage<8, 16>  mUnk840315;
    ::ll::UntypedStorage<1, 2>   mUnkfbcace;
    ::ll::UntypedStorage<4, 4>   mUnk2d6d4c;
    ::ll::UntypedStorage<8, 16>  mUnkb749ae;
    ::ll::UntypedStorage<1, 2>   mUnkc944f6;
    ::ll::UntypedStorage<4, 4>   mUnk691bce;
    ::ll::UntypedStorage<8, 8>   mUnk6c1adf;
    ::ll::UntypedStorage<4, 4>   mUnk2bcd98;
    // NOLINTEND

public:
    // prevent constructor by default
    ExecuteCloudScriptResult& operator=(ExecuteCloudScriptResult const&);
    ExecuteCloudScriptResult(ExecuteCloudScriptResult const&);
    ExecuteCloudScriptResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExecuteCloudScriptResult() /*override*/ = default;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab::ClientModels
