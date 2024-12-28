#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

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
        // NOLINTEND

    public:
        // prevent constructor by default
        MetaData& operator=(MetaData const&);
        MetaData(MetaData const&);
        MetaData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI MetaData(::Core::Path const& path, bool isHidden, ::PackCategory packCategory);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Core::Path const& path, bool isHidden, ::PackCategory packCategory);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    IInPackagePacks& operator=(IInPackagePacks const&);
    IInPackagePacks(IInPackagePacks const&);
    IInPackagePacks();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IInPackagePacks();

    // vIndex: 1
    virtual ::std::vector<::IInPackagePacks::MetaData> getPacks(::PackType) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
