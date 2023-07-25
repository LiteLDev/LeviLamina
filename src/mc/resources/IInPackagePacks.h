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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IINPACKAGEPACKS_METADATA
    public:
        MetaData& operator=(MetaData const&) = delete;
        MetaData(MetaData const&)            = delete;
        MetaData()                           = delete;
#endif

    public:
        /**
         * @symbol ??0MetaData\@IInPackagePacks\@\@QEAA\@AEBVPath\@Core\@\@_NW4PackCategory\@\@\@Z
         */
        MCAPI MetaData(class Core::Path const&, bool, enum class PackCategory);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IINPACKAGEPACKS
public:
    IInPackagePacks& operator=(IInPackagePacks const&) = delete;
    IInPackagePacks(IInPackagePacks const&)            = delete;
    IInPackagePacks()                                  = delete;
#endif

public:
};
