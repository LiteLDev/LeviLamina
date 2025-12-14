#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
// clang-format on

class BehaviorData {
public:
    // BehaviorData inner types declare
    // clang-format off
    struct DataProxy;
    template<typename T0> struct Data;
    // clang-format on

    // BehaviorData inner types define
    enum class DataType : uchar {
        BlockPosition = 0,
        Boolean       = 1,
        Float         = 2,
        Int           = 3,
        String        = 4,
        Vector3       = 5,
        VoidPointer   = 6,
    };

    struct DataProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>           mId;
        ::ll::TypedStorage<1, 1, ::BehaviorData::DataType> mType;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~DataProxy() = default;

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

    template <typename T0>
    struct Data {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::BehaviorData::DataProxy>>> mData;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::BehaviorData::DataProxy>>> mDataStack;
    // NOLINTEND

public:
    // prevent constructor by default
    BehaviorData& operator=(BehaviorData const&);
    BehaviorData(BehaviorData const&);
    BehaviorData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BehaviorData& operator=(::BehaviorData&&);

    MCAPI ~BehaviorData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
