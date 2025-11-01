#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/IAsyncInfo.h"

namespace Bedrock::Threading {

template<typename T>
class IAsyncGetResult : public Bedrock::Threading::IAsyncInfo {
public:
    virtual T getResult() const;
};

}
