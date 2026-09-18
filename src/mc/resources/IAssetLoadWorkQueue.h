#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/copyable_function.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/IWorkProducer.h"

// auto generated forward declare list
// clang-format off
class AssetLoadWorkRange;
class TaskResult;
struct AssetLoadWorkLayerKey;
struct AssetLoadWorkOptions;
// clang-format on

class IAssetLoadWorkQueue : public ::IWorkProducer {
public:
    // IAssetLoadWorkQueue inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // IAssetLoadWorkQueue inner types define
    struct Impl {
    public:
        // Impl inner types declare
        // clang-format off
        struct AsyncItem;
        struct WorkMap;
        // clang-format on

        // Impl inner types define
        struct AsyncItem {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 8> mUnka3f0de;
            // NOLINTEND

        public:
            // prevent constructor by default
            AsyncItem& operator=(AsyncItem const&);
            AsyncItem(AsyncItem const&);
            AsyncItem();
        };

        struct WorkMap {
        public:
            // WorkMap inner types declare
            // clang-format off
            struct WorkItem;
            struct LayerData;
            // clang-format on

            // WorkMap inner types define
            struct WorkItem {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 8> mUnkd12179;
                ::ll::UntypedStorage<1, 1> mUnke0835b;
                // NOLINTEND

            public:
                // prevent constructor by default
                WorkItem& operator=(WorkItem const&);
                WorkItem(WorkItem const&);
                WorkItem();
            };

            struct LayerData {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 16> mUnk51a756;
                ::ll::UntypedStorage<4, 12> mUnkff1912;
                ::ll::UntypedStorage<4, 12> mUnkdcf2b6;
                // NOLINTEND

            public:
                // prevent constructor by default
                LayerData& operator=(LayerData const&);
                LayerData(LayerData const&);
                LayerData();
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 136> mUnk8f856d;
            // NOLINTEND

        public:
            // prevent constructor by default
            WorkMap& operator=(WorkMap const&);
            WorkMap(WorkMap const&);
            WorkMap();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnk72b766;
        ::ll::UntypedStorage<8, 64>  mUnk9a9f78;
        ::ll::UntypedStorage<8, 616> mUnkdf7a35;
        ::ll::UntypedStorage<8, 216> mUnkf3fd8e;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint createLayer(::AssetLoadWorkRange) = 0;

    virtual void queueWorkers(
        ::AssetLoadWorkOptions const&,
        ::gsl::not_null<::std::shared_ptr<::IAssetLoadWorkQueue>>,
        ::brstd::move_only_function<
            void(::brstd::move_only_function<::TaskResult()>, ::brstd::copyable_function<void()>)>
    ) = 0;

    virtual ::IAssetLoadWorkQueue::Impl& _getImpl() = 0;
    // NOLINTEND
};
