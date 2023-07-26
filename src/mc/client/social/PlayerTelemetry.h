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
    /**
     * @symbol ?PopulateEvent\@PlayerTelemetry\@Events\@Social\@\@QEBAXAEAVEvent\@23\@\@Z
     */
    MCAPI void PopulateEvent(class Social::Events::Event&) const; // NOLINT
    /**
     * @symbol ?ShouldSendEvent\@PlayerTelemetry\@Events\@Social\@\@QEBA_NXZ
     */
    MCAPI bool ShouldSendEvent() const; // NOLINT
    /**
     * @symbol ??1PlayerTelemetry\@Events\@Social\@\@QEAA\@XZ
     */
    MCAPI ~PlayerTelemetry(); // NOLINT
};

}; // namespace Social::Events
