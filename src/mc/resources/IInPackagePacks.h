#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

class IInPackagePacks {
public:
    // IInPackagePacks inner types declare
    // clang-format off
    struct MetaData;
    // clang-format on

    // IInPackagePacks inner types define
    struct MetaData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk43d8b5;
        ::ll::UntypedStorage<1, 1>  mUnk70b4f6;
        ::ll::UntypedStorage<4, 4>  mUnke50a5c;
        ::ll::UntypedStorage<4, 4>  mUnk90ff66;
        // NOLINTEND

    public:
        // prevent constructor by default
        MetaData& operator=(MetaData const&);
        MetaData(MetaData const&);
        MetaData();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInPackagePacks() = default;

    virtual ::std::vector<::IInPackagePacks::MetaData> getPacks(::PackType) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
