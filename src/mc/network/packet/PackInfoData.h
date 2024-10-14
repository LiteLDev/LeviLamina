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
    uint64          mPackSize;            // this+0x88
    std::string     mContentKey;          // this+0x90
    std::string     mSubpackName;         // this+0xB0
    ContentIdentity mContentIdentity;     // this+0xD0
    bool            mHasScripts;          // this+0xE8
    bool            mIsRayTracingCapable; // this+0xE9
    bool            mHasExceptions;       // this+0xEA

public:
    // NOLINTBEGIN
    MCAPI PackInfoData(
        class mce::UUID const&       guid,
        class SemVersion const&      version,
        uint64                       packSize,
        std::string const&           contentKey,
        std::string const&           subpackName,
        class ContentIdentity const& contentIdentity,
        bool                         hasScripts,
        bool                         isRayTracingCapable
    );

    MCAPI ~PackInfoData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
