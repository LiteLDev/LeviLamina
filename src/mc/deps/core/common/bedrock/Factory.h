#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class DispatcherProcess; }
// clang-format on

namespace Bedrock::Http {

class Factory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_FACTORY
public:
    Factory& operator=(Factory const&) = delete;
    Factory(Factory const&)            = delete;
    Factory()                          = delete;
#endif

public:
    /**
     * @symbol
     * ?createDispatcher\@Factory\@Http\@Bedrock\@\@SA?AV?$shared_ptr\@VDispatcherProcess\@Http\@Bedrock\@\@\@std\@\@XZ
     */
    MCAPI static class std::shared_ptr<class Bedrock::Http::DispatcherProcess> createDispatcher();
};

}; // namespace Bedrock::Http
