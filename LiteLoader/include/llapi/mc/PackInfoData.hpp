/**
 * @file  PackInfoData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
#include "ContentIdentity.hpp"
#include "PackIdVersion.hpp"

static_assert(offsetof(PackIdVersion, mUUID) == 0x0);
static_assert(offsetof(PackIdVersion, mVersion) == 0x10);
static_assert(offsetof(PackIdVersion, mType) == 0x80);

#undef BEFORE_EXTRA

/**
 * @brief MC structure PackInfoData.
 *
 */
struct PackInfoData {

#define AFTER_EXTRA
    PackIdVersion mPackIdVersion; // 0
    uint64_t mPackSize;           // 0x88
    std::string mContentKey;      // 0x90
    std::string mSubpackName;
    ContentIdentity mContentIdentity;
    bool mHasScripts;
    bool mForceServerPacks;
    bool isRtxCapable;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKINFODATA
public:
    struct PackInfoData& operator=(struct PackInfoData const &) = delete;
    PackInfoData(struct PackInfoData const &) = delete;
    PackInfoData() = delete;
#endif

public:
    /**
     * @symbol  ??0PackInfoData\@\@QEAA\@AEBVUUID\@mce\@\@AEBVSemVersion\@\@_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@3AEBVContentIdentity\@\@_N5\@Z
     */
    MCAPI PackInfoData(class mce::UUID const &, class SemVersion const &, unsigned __int64, std::string const &, std::string const &, class ContentIdentity const &, bool, bool);
    /**
     * @symbol  ??1PackInfoData\@\@QEAA\@XZ
     */
    MCAPI ~PackInfoData();

};