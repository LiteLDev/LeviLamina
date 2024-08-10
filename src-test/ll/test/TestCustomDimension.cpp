// #include "ll/api/dimension/SimpleCustomDimension.h"

// #include "ll/api/event/EventBus.h"
// #include "ll/api/event/server/ServerStartedEvent.h"

// static bool reg = [] {
//     using namespace ll::event;
//     EventBus::getInstance().emplaceListener<ServerStartedEvent>([](ServerStartedEvent&) {
//         ll::dimension::CustomDimensionManager::getInstance().addDimension<ll::dimension::SimpleCustomDimension>(
//             "testNewDimension"
//         );
//         ll::dimension::CustomDimensionManager::getInstance()
//             .addDimension<ll::dimension::SimpleCustomDimension>("testNewVoidDimension", 345, GeneratorType::Void);
//     });
//     return true;
// }();
