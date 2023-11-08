#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/file/IFileAccess.h"
#include "mc/deps/file/IFileReadAccess.h"

class AndroidPackageFileAccess : public ::IFileAccess {
public:
    // AndroidPackageFileAccess inner types declare
    // clang-format off
    class AndroidPackageFileReadAccess;
    // clang-format on

    // AndroidPackageFileAccess inner types define
    class AndroidPackageFileReadAccess : public ::IFileReadAccess {
    public:
        // prevent constructor by default
        AndroidPackageFileReadAccess& operator=(AndroidPackageFileReadAccess const&);
        AndroidPackageFileReadAccess(AndroidPackageFileReadAccess const&);
        AndroidPackageFileReadAccess();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1AndroidPackageFileReadAccess@AndroidPackageFileAccess@@UEAA@XZ
        virtual ~AndroidPackageFileReadAccess() = default;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AndroidPackageFileAccess& operator=(AndroidPackageFileAccess const&);
    AndroidPackageFileAccess(AndroidPackageFileAccess const&);
    AndroidPackageFileAccess();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AndroidPackageFileAccess@@UEAA@XZ
    virtual ~AndroidPackageFileAccess() = default;

    // NOLINTEND
};
