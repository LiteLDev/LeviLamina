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
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_LIBHTTPCLIENTINSTANCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LibHttpClientInstance();
#endif
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_getSharedInstance\@LibHttpClientInstance\@Http\@Bedrock\@\@CA?AV?$shared_ptr\@VLibHttpClientInstance\@Http\@Bedrock\@\@\@std\@\@XZ
     */
    MCAPI static std::shared_ptr<class Bedrock::Http::LibHttpClientInstance> _getSharedInstance();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?sMutex\@LibHttpClientInstance\@Http\@Bedrock\@\@0Vmutex\@std\@\@A
     */
    MCAPI static std::mutex sMutex;
    /**
     * @symbol
     * ?sWeakInstance\@LibHttpClientInstance\@Http\@Bedrock\@\@0V?$weak_ptr\@VLibHttpClientInstance\@Http\@Bedrock\@\@\@std\@\@A
     */
    MCAPI static std::weak_ptr<class Bedrock::Http::LibHttpClientInstance> sWeakInstance;
    // NOLINTEND
};

}; // namespace Bedrock::Http
