#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

namespace Bedrock::Http {

class LibHttpClientInstance {
public:
    // prevent constructor by default
    LibHttpClientInstance& operator=(LibHttpClientInstance const&);
    LibHttpClientInstance(LibHttpClientInstance const&);
    LibHttpClientInstance();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LibHttpClientInstance@Http@Bedrock@@UEAA@XZ
    virtual ~LibHttpClientInstance();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getSharedInstance@LibHttpClientInstance@Http@Bedrock@@CA?AV?$shared_ptr@VLibHttpClientInstance@Http@Bedrock@@@std@@XZ
    MCAPI static std::shared_ptr<class Bedrock::Http::LibHttpClientInstance> _getSharedInstance();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?sMutex@LibHttpClientInstance@Http@Bedrock@@0VMutex@Threading@3@A
    MCAPI static class Bedrock::Threading::Mutex sMutex;

    // symbol:
    // ?sWeakInstance@LibHttpClientInstance@Http@Bedrock@@0V?$weak_ptr@VLibHttpClientInstance@Http@Bedrock@@@std@@A
    MCAPI static std::weak_ptr<class Bedrock::Http::LibHttpClientInstance> sWeakInstance;

    // NOLINTEND
};

}; // namespace Bedrock::Http
