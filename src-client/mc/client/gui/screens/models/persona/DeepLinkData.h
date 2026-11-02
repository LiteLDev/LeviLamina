#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

namespace persona {

class DeepLinkData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                            mDeepLinkOfferId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mDeepLinkOfferIdStr;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mDeepLinkStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                  mDeepLinkExirationTime;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                mOnDeepLinkRequestHanledCallback;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeepLinkData() = default;
    // NOLINTEND
};

} // namespace persona
