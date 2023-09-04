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
    // symbol: ??1LibHttpClientInstance@Http@Bedrock@@UEAA@XZ
    MCVAPI ~LibHttpClientInstance();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getSharedInstance@LibHttpClientInstance@Http@Bedrock@@CA?AV?$shared_ptr@VLibHttpClientInstance@Http@Bedrock@@@std@@XZ
    MCAPI static std::shared_ptr<class Bedrock::Http::LibHttpClientInstance> _getSharedInstance();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?sMutex@LibHttpClientInstance@Http@Bedrock@@0Vmutex@std@@A
    MCAPI static std::mutex sMutex;

    // symbol:
    // ?sWeakInstance@LibHttpClientInstance@Http@Bedrock@@0V?$weak_ptr@VLibHttpClientInstance@Http@Bedrock@@@std@@A
    MCAPI static std::weak_ptr<class Bedrock::Http::LibHttpClientInstance> sWeakInstance;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $sMutex() { return sMutex; }

    inline auto& $sWeakInstance() { return sWeakInstance; }

    // NOLINTEND
};

}; // namespace Bedrock::Http
