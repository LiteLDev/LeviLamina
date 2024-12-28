#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PlayFab { class IPlayFabEmitEventRequest; }
// clang-format on

namespace PlayFab {

class IPlayFabEventPipeline {
public:
    // prevent constructor by default
    IPlayFabEventPipeline& operator=(IPlayFabEventPipeline const&);
    IPlayFabEventPipeline(IPlayFabEventPipeline const&);
    IPlayFabEventPipeline();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayFabEventPipeline();

    // vIndex: 1
    virtual void Start();

    // vIndex: 2
    virtual void IntakeEvent(::std::shared_ptr<::PlayFab::IPlayFabEmitEventRequest const>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $Start();
    // NOLINTEND
};

} // namespace PlayFab
