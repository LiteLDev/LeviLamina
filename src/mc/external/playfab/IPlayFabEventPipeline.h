#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PlayFab { class IPlayFabEmitEventRequest; }
// clang-format on

namespace PlayFab {

class IPlayFabEventPipeline {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayFabEventPipeline() = default;

    // vIndex: 1
    virtual void Start();

    // vIndex: 2
    virtual void IntakeEvent(::std::shared_ptr<::PlayFab::IPlayFabEmitEventRequest const>) = 0;
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

} // namespace PlayFab
