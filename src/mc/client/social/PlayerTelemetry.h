#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class PlayerTelemetry {

public:
    // prevent constructor by default
    PlayerTelemetry& operator=(PlayerTelemetry const&) = delete;
    PlayerTelemetry(PlayerTelemetry const&)            = delete;
    PlayerTelemetry()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?PopulateEvent\@PlayerTelemetry\@Events\@Social\@\@QEBAXAEAVEvent\@23\@\@Z
     */
    MCAPI void PopulateEvent(class Social::Events::Event&) const;
    /**
     * @symbol ?ShouldSendEvent\@PlayerTelemetry\@Events\@Social\@\@QEBA_NXZ
     */
    MCAPI bool ShouldSendEvent() const;
    /**
     * @symbol ??1PlayerTelemetry\@Events\@Social\@\@QEAA\@XZ
     */
    MCAPI ~PlayerTelemetry();
    // NOLINTEND
};

}; // namespace Social::Events
