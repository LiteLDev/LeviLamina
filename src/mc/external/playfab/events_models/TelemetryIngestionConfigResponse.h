#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::EventsModels {

struct TelemetryIngestionConfigResponse : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk71b15d;
    ::ll::UntypedStorage<8, 32> mUnkc65c8a;
    ::ll::UntypedStorage<8, 32> mUnk8ca45b;
    ::ll::UntypedStorage<8, 32> mUnkf79d56;
    ::ll::UntypedStorage<8, 32> mUnkb23285;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryIngestionConfigResponse& operator=(TelemetryIngestionConfigResponse const&);
    TelemetryIngestionConfigResponse(TelemetryIngestionConfigResponse const&);
    TelemetryIngestionConfigResponse();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TelemetryIngestionConfigResponse() /*override*/;

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

} // namespace PlayFab::EventsModels
