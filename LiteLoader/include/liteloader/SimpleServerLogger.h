#pragma once

#include "llapi/EventAPI.h"

namespace ll {
class SimpleServerLogger {
private:
    static bool inited;
    static Event::EventListener<Event::PlayerChatEvent> chatListener;
    static Event::EventListener<Event::PlayerCmdEvent> cmdListener;

public:
    static bool registerSimpleServerLogger();
    static bool unregisterSimpleServerLogger();
};
} // namespace ll
