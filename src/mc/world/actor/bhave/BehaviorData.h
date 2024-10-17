#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorData {
public:
    // BehaviorData inner types declare
    // clang-format off
    struct DataProxy;
    // clang-format on

    // BehaviorData inner types define
    enum class DataType {};

    struct DataProxy {
    public:
        // prevent constructor by default
        DataProxy& operator=(DataProxy const&);
        DataProxy(DataProxy const&);
        DataProxy();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~DataProxy();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** vftable();

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BehaviorData& operator=(BehaviorData const&);
    BehaviorData(BehaviorData const&);
    BehaviorData();

public:
    // NOLINTBEGIN
    MCAPI void copyData(std::string const& from, std::string const& to, class BehaviorData& other);

    MCAPI bool hasDataOfType(std::string const& strId, ::BehaviorData::DataType type) const;

    // NOLINTEND
};
