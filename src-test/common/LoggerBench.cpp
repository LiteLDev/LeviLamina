#include "ll/core/LeviLamina.h"

#include <chrono>

#include "ll/api/event/EventBus.h"

// #include "ll/api/event/server/ServerStartedEvent.h"

// static auto run = ll::event::EventBus::getInstance().emplaceListener<ll::event::ServerStartedEvent>([](auto&) {
//     auto& logger = ll::getLogger();

//     using clock = std::chrono::high_resolution_clock;


//     std::vector<std::thread> threads;

//     size_t howmany      = 1000000;
//     size_t thread_count = 10;

//     size_t msgs_per_thread = howmany / thread_count;

//     auto begin = clock::now();
//     for (size_t t = 0; t < thread_count; ++t) {
//         threads.push_back(std::thread([&] {
//             for (size_t i = 0; i < msgs_per_thread; ++i) {
//                 logger.info("Hello logger: msg number {}", i);
//             }
//         }));
//     }
//     for (auto& t : threads) {
//         t.join();
//     };
//     logger.warn("{}", std::chrono::duration_cast<std::chrono::duration<double>>(clock::now() - begin));

//     //  sync  1 thread 19.7099s
//     //  sync 10 thread 22.6127s
//     // async 10 thread  0.4128s

//     return true;
// });
