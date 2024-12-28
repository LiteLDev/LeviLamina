#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::EventsModels {

struct EventContents : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk228889;
    ::ll::UntypedStorage<8, 32> mUnk4fe3a6;
    ::ll::UntypedStorage<8, 32> mUnk366e26;
    ::ll::UntypedStorage<8, 32> mUnk90366d;
    ::ll::UntypedStorage<8, 16> mUnk38831f;
    ::ll::UntypedStorage<8, 16> mUnke95b4c;
    ::ll::UntypedStorage<8, 32> mUnk61a004;
    // NOLINTEND

public:
    // prevent constructor by default
    EventContents& operator=(EventContents const&);
    EventContents(EventContents const&);
    EventContents();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EventContents() /*override*/;

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
