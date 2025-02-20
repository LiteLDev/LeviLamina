#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Status; }
namespace Json { class Value; }
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class RealmsTelemetry {
public:
    // RealmsTelemetry inner types declare
    // clang-format off
    struct CallCount;
    struct RealmsCallCount;
    // clang-format on

    // RealmsTelemetry inner types define
    struct RealmsCallCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk83284f;
        // NOLINTEND

    public:
        // prevent constructor by default
        RealmsCallCount& operator=(RealmsCallCount const&);
        RealmsCallCount(RealmsCallCount const&);
        RealmsCallCount();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void addCall(int64 realmId, ::Bedrock::Http::Status returnCode, int count);

        MCAPI ::Social::Events::RealmsTelemetry::CallCount getTotalCallCount() const;

        MCAPI ::Json::Value toJson() const;

        MCAPI ~RealmsCallCount();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct CallCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk227a28;
        // NOLINTEND

    public:
        // prevent constructor by default
        CallCount& operator=(CallCount const&);
        CallCount(CallCount const&);
        CallCount();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI CallCount(::Social::Events::RealmsTelemetry::CallCount&&);

        MCAPI void addAllCalls(::Social::Events::RealmsTelemetry::CallCount const& other);

        MCAPI ::Json::Value toJson() const;

        MCAPI ~CallCount();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Social::Events::RealmsTelemetry::CallCount&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkc57cff;
    ::ll::UntypedStorage<8, 64> mUnk89e09e;
    ::ll::UntypedStorage<8, 64> mUnkb777c9;
    ::ll::UntypedStorage<8, 8>  mUnk8cb32b;
    ::ll::UntypedStorage<8, 8>  mUnkccb0ef;
    ::ll::UntypedStorage<8, 64> mUnkc58ac4;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsTelemetry& operator=(RealmsTelemetry const&);
    RealmsTelemetry(RealmsTelemetry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddGeneralCall(::std::string const& callName, ::Bedrock::Http::Status returnCode);

    MCAPI void AddRealmCall(::std::string const& callName, int64 realmId, ::Bedrock::Http::Status returnCode);

    MCAPI void PopulateEvent(::Social::Events::Event& event) const;

    MCAPI RealmsTelemetry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace Social::Events
