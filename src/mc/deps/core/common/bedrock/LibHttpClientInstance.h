#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class LibHttpClientInstance {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_LIBHTTPCLIENTINSTANCE
public:
    LibHttpClientInstance& operator=(LibHttpClientInstance const&) = delete;
    LibHttpClientInstance(LibHttpClientInstance const&)            = delete;
    LibHttpClientInstance()                                        = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_LIBHTTPCLIENTINSTANCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LibHttpClientInstance();
#endif

    // private:
    /**
     * @symbol
     * ?_getSharedInstance\@LibHttpClientInstance\@Http\@Bedrock\@\@CA?AV?$shared_ptr\@VLibHttpClientInstance\@Http\@Bedrock\@\@\@std\@\@XZ
     */
    MCAPI static class std::shared_ptr<class Bedrock::Http::LibHttpClientInstance> _getSharedInstance();

private:
    /**
     * @symbol ?sMutex\@LibHttpClientInstance\@Http\@Bedrock\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sMutex;
    /**
     * @symbol
     * ?sWeakInstance\@LibHttpClientInstance\@Http\@Bedrock\@\@0V?$weak_ptr\@VLibHttpClientInstance\@Http\@Bedrock\@\@\@std\@\@A
     */
    MCAPI static class std::weak_ptr<class Bedrock::Http::LibHttpClientInstance> sWeakInstance;
};

}; // namespace Bedrock::Http
