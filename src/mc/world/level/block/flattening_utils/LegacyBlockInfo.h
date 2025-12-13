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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1723f7;
    ::ll::UntypedStorage<8, 48> mUnkb8fa94;
    ::ll::UntypedStorage<8, 48> mUnk6dcab8;
    ::ll::UntypedStorage<1, 1>  mUnk16d5d5;
    ::ll::UntypedStorage<4, 4>  mUnke432d5;
    ::ll::UntypedStorage<8, 24> mUnk59a7f3;
    ::ll::UntypedStorage<8, 24> mUnk1e6d21;
    ::ll::UntypedStorage<8, 24> mUnk202ce6;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyBlockInfo& operator=(LegacyBlockInfo const&);
    LegacyBlockInfo(LegacyBlockInfo const&);
    LegacyBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyBlockInfo(
        int                                                      legacyId_,
        ::HashedString                                           legacyFullName_,
        ::HashedString                                           legacyRawName_,
        uchar                                                    maxAuxValue_,
        ::std::vector<::FlatteningUtils::BlockNameRefAuxVariant> newBlockNameAuxVariants_,
        int                                                      startVariant
    );

    MCNAPI ~LegacyBlockInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        int                                                      legacyId_,
        ::HashedString                                           legacyFullName_,
        ::HashedString                                           legacyRawName_,
        uchar                                                    maxAuxValue_,
        ::std::vector<::FlatteningUtils::BlockNameRefAuxVariant> newBlockNameAuxVariants_,
        int                                                      startVariant
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace FlatteningUtils
