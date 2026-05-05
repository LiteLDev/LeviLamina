#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

namespace ll::event::inline io {

class ConsoleOutputtingEvent final : public Cancellable<Event> {
    std::string& mMessage;

public:
    constexpr explicit ConsoleOutputtingEvent(std::string& message) : mMessage(message) {}

    LLAPI void serialize(CompoundTag&) const override;
    LLAPI void deserialize(CompoundTag const&) override;

    LLNDAPI std::string& message() const;
};

class ConsoleOutputtedEvent final : public Event {
    std::string const& mMessage;
    bool               mIsCancelled;

public:
    constexpr explicit ConsoleOutputtedEvent(std::string const& message, bool isCancelled = false)
    : mMessage(message),
      mIsCancelled(isCancelled) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI std::string const& message() const;
    LLNDAPI bool               isCancelled() const;
};

} // namespace ll::event::inline io
