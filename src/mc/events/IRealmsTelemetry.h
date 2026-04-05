#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Status; }
namespace Social::Events { class Event; }
// clang-format on

class IRealmsTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRealmsTelemetry() = default;

    virtual void AddGeneralCall(::std::string const& callName, ::Bedrock::Http::Status returnCode) = 0;

    virtual void AddRealmCall(::std::string const& callName, int64 realmId, ::Bedrock::Http::Status returnCode) = 0;

    virtual void PopulateEvent(::Social::Events::Event& event) const = 0;

    virtual bool ShouldSendEvent() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
