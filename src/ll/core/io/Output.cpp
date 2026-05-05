#include "ll/core/io/Output.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/io/ConsoleOutputEvent.h"

namespace ll::io {

void defaultOutputImpl(std::string_view);

void defaultOutput(std::string str) {
    auto event = event::ConsoleOutputtingEvent{str};
    event::EventBus::getInstance().publish(event);
    if (event.isCancelled()) return;
    defaultOutputImpl(str);
    event::EventBus::getInstance().publish(event::ConsoleOutputtedEvent{str});
}

} // namespace ll::io
