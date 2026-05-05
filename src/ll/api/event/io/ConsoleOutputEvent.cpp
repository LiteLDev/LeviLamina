#include "ll/api/event/io/ConsoleOutputEvent.h"

#include "ll/api/event/Emitter.h"
#include "ll/api/event/ListenerBase.h"
#include "mc/deps/nbt/CompoundTag.h"

namespace ll::event::inline io {

void ConsoleOutputtingEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["message"] = message();
}

void ConsoleOutputtingEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
    message() = nbt["message"];
}

void ConsoleOutputtedEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["message"]   = message();
    nbt["cancelled"] = isCancelled();
}

std::string&       ConsoleOutputtingEvent::message() const { return mMessage; }
std::string const& ConsoleOutputtedEvent::message() const { return mMessage; }
bool               ConsoleOutputtedEvent::isCancelled() const { return mIsCancelled; }

class ConsoleOutputEventEmitter
: public Emitter<[](auto&&...) { return nullptr; }, ConsoleOutputtingEvent, ConsoleOutputtedEvent> {};

} // namespace ll::event::inline io
