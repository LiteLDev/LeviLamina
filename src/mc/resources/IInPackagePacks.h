#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        // prevent constructor by default
        MetaData& operator=(MetaData const&) = delete;
        MetaData(MetaData const&)            = delete;
        MetaData()                           = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0MetaData\@IInPackagePacks\@\@QEAA\@AEBVPath\@Core\@\@_NW4PackCategory\@\@\@Z
         */
        MCAPI MetaData(class Core::Path const&, bool, enum class PackCategory);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    IInPackagePacks& operator=(IInPackagePacks const&) = delete;
    IInPackagePacks(IInPackagePacks const&)            = delete;
    IInPackagePacks()                                  = delete;
};
