#include "ll/api/dimension/CustomDimensionManager.h"

#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"

static bool reg = [] {
    using namespace ll::event;
    EventBus::getInstance().emplaceListener<ServerStartedEvent>([](ServerStartedEvent&) {
        ll::dimension::CustomDimensionManager::getInstance().addDimension("testNewDimension");
    });
    return true;
}();
