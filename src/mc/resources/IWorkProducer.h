#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IAsyncWorkItem;
class ISyncWorkItem;
struct AssetLoadWorkKey;
// clang-format on

class IWorkProducer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorkProducer() = default;

    virtual void addAsyncWork(::std::unique_ptr<::IAsyncWorkItem>) = 0;

    virtual void addSyncWork(::AssetLoadWorkKey const&, ::std::unique_ptr<::ISyncWorkItem>) = 0;

    virtual void addFence(::AssetLoadWorkKey const&, ::std::unique_ptr<::ISyncWorkItem>) = 0;
    // NOLINTEND
};
