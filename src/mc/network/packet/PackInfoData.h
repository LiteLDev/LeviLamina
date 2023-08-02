#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct PackInfoData {

public:
    PackInfoData() = delete;

    PackIdVersion   mPackIdVersion;       // this+0x0
    uint64_t        mPackSize;            // this+0x88
    std::string     mContentKey;          // this+0x90
    std::string     mSubpackName;         // this+0xB0
    ContentIdentity mContentIdentity;     // this+0xD0
    bool            mHasScripts;          // this+0xE8
    bool            mIsRayTracingCapable; // this+0xE9
    bool            mHasExceptions;       // this+0xEA

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0PackInfoData\@\@QEAA\@AEBVUUID\@mce\@\@AEBVSemVersion\@\@_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@3AEBVContentIdentity\@\@_N5\@Z
     */
    MCAPI PackInfoData(
        class mce::UUID const&,
        class SemVersion const&,
        uint64_t,
        std::string const&,
        std::string const&,
        class ContentIdentity const&,
        bool,
        bool
    );
    /**
     * @symbol ??1PackInfoData\@\@QEAA\@XZ
     */
    MCAPI ~PackInfoData();
    // NOLINTEND
};
