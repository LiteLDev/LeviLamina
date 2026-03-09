#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

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
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mPath;
        ::ll::TypedStorage<1, 1, bool>                               mIsHidden;
        ::ll::TypedStorage<4, 4, ::PackCategory>                     mPackCategory;
        ::ll::TypedStorage<4, 4, ::ResourceFileSystem>               mFileSystem;
        // NOLINTEND
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
