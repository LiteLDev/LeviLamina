#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class NetworkChangeObserver : public ::Core::Observer<::NetworkChangeObserver, ::Bedrock::Threading::Mutex> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkChangeObserver() /*override*/ = default;

    // vIndex: 2
    virtual void onNetworkConfigurationChanged() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
