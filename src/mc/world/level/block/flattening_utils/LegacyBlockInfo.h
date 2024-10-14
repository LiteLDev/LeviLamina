#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace FlatteningUtils { struct BlockNameRefAuxVariant; }
// clang-format on

namespace FlatteningUtils {

struct LegacyBlockInfo {
public:
    // prevent constructor by default
    LegacyBlockInfo& operator=(LegacyBlockInfo const&);
    LegacyBlockInfo(LegacyBlockInfo const&);
    LegacyBlockInfo();

public:
    // NOLINTBEGIN
    MCAPI LegacyBlockInfo(
        int                                                         legacyId_,
        class HashedString                                          legacyFullName_,
        class HashedString                                          legacyRawName_,
        uchar                                                       maxAuxValue_,
        std::vector<struct FlatteningUtils::BlockNameRefAuxVariant> newBlockNameAuxVariants_
    );

    MCAPI ~LegacyBlockInfo();

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

}; // namespace FlatteningUtils
