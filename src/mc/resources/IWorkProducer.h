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

    virtual void addAsyncWork(::std::unique_ptr<::IAsyncWorkItem> item, ::AssetLoadWorkKey orderHint) = 0;

    virtual void addSyncWork(::AssetLoadWorkKey const& key, ::std::unique_ptr<::ISyncWorkItem> item) = 0;

    virtual void addFence(::AssetLoadWorkKey const& key, ::std::unique_ptr<::ISyncWorkItem> item) = 0;
    // NOLINTEND
};
