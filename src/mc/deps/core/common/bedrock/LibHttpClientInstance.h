#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class LibHttpClientInstance {

public:
    // prevent constructor by default
    LibHttpClientInstance& operator=(LibHttpClientInstance const&) = delete;
    LibHttpClientInstance(LibHttpClientInstance const&)            = delete;
    LibHttpClientInstance()                                        = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_LIBHTTPCLIENTINSTANCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LibHttpClientInstance(); // NOLINT
#endif

    // private:
    /**
     * @symbol
     * ?_getSharedInstance\@LibHttpClientInstance\@Http\@Bedrock\@\@CA?AV?$shared_ptr\@VLibHttpClientInstance\@Http\@Bedrock\@\@\@std\@\@XZ
     */
    MCAPI static class std::shared_ptr<class Bedrock::Http::LibHttpClientInstance> _getSharedInstance(); // NOLINT

private:
    /**
     * @symbol ?sMutex\@LibHttpClientInstance\@Http\@Bedrock\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sMutex; // NOLINT
    /**
     * @symbol
     * ?sWeakInstance\@LibHttpClientInstance\@Http\@Bedrock\@\@0V?$weak_ptr\@VLibHttpClientInstance\@Http\@Bedrock\@\@\@std\@\@A
     */
    MCAPI static class std::weak_ptr<class Bedrock::Http::LibHttpClientInstance> sWeakInstance; // NOLINT
};

}; // namespace Bedrock::Http
