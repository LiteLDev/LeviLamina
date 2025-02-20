#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountReleaseStatus.h"
#include "mc/external/webrtc/StatsObserver.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StatsReport; }
// clang-format on

namespace NetherNet {

class MyStatsObserver : public ::webrtc::StatsObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4e708f;
    ::ll::UntypedStorage<4, 4> mUnk886538;
    // NOLINTEND

public:
    // prevent constructor by default
    MyStatsObserver& operator=(MyStatsObserver const&);
    MyStatsObserver(MyStatsObserver const&);
    MyStatsObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~MyStatsObserver() /*override*/ = default;

    // vIndex: 0
    virtual void AddRef() const /*override*/;

    // vIndex: 1
    virtual ::webrtc::RefCountReleaseStatus Release() const /*override*/;

    // vIndex: 3
    virtual void OnComplete(::std::vector<::webrtc::StatsReport const*> const& reports) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $AddRef() const;

    MCAPI ::webrtc::RefCountReleaseStatus $Release() const;

    MCAPI void $OnComplete(::std::vector<::webrtc::StatsReport const*> const& reports);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
