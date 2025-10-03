#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorData {
public:
    // BehaviorData inner types declare
    // clang-format off
    template<typename T0> struct Data;
    struct DataProxy;
    // clang-format on

    // BehaviorData inner types define
    struct DataProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk4b5161;
        ::ll::UntypedStorage<1, 1>  mUnka1c5c0;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataProxy& operator=(DataProxy const&);
        DataProxy(DataProxy const&);
        DataProxy();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~DataProxy() = default;

        // vIndex: 1
        virtual ::std::unique_ptr<::BehaviorData::DataProxy> copy() = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    enum class DataType : uchar {
        BlockPosition = 0,
        Boolean       = 1,
        Float         = 2,
        Int           = 3,
        String        = 4,
        Vector3       = 5,
        VoidPointer   = 6,
    };

    template <typename T0>
    struct Data {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkdfa4a1;
    ::ll::UntypedStorage<8, 24> mUnke4e167;
    // NOLINTEND

public:
    // prevent constructor by default
    BehaviorData& operator=(BehaviorData const&);
    BehaviorData(BehaviorData const&);
    BehaviorData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BehaviorData& operator=(::BehaviorData&&);

    MCNAPI ~BehaviorData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
