#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/common/bedrock/PrioritizeSharedOwnership.h"

template <typename T>
class ServiceReference {
public:
    std::shared_lock<Bedrock::Threading::PrioritizeSharedOwnership> mLock;
    Bedrock::NonOwnerPointer<T>                                     mService;

    Bedrock::NonOwnerPointer<T> get() const { return mService; }

    explicit operator bool() const { return static_cast<bool>(mService); }

    template <class Fn>
    decltype(auto) doWith(Fn&& fn) {
        return (std::invoke(std::forward<Fn>(fn), *mService));
    }
};
