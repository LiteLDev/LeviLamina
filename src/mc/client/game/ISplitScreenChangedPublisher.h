#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ISplitScreenChangedPublisher {
public:
    // prevent constructor by default
    ISplitScreenChangedPublisher& operator=(ISplitScreenChangedPublisher const&);
    ISplitScreenChangedPublisher(ISplitScreenChangedPublisher const&);
    ISplitScreenChangedPublisher();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::Bedrock::PubSub::Subscription registerSplitScreenChangedListener(::std::function<void(uchar)>) const = 0;

    // vIndex: 1
    virtual uchar getSplitScreenCount() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
