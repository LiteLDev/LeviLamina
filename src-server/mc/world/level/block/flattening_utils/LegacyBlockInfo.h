#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace FlatteningUtils { struct BlockNameRefAuxVariant; }
// clang-format on

namespace FlatteningUtils {

struct LegacyBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> legacyId;
    ::ll::TypedStorage<8, 48, ::HashedString> legacyFullName;
    ::ll::TypedStorage<8, 48, ::HashedString> legacyRawName;
    ::ll::TypedStorage<1, 1, uchar> maxAuxValue;
    ::ll::TypedStorage<4, 4, int> startVariant;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::HashedString const>>> newBlockFullNamesByAux;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::HashedString const>>> newBlockFullNamesByVariant;
    ::ll::TypedStorage<8, 24, ::std::vector<::FlatteningUtils::BlockNameRefAuxVariant>> newBlockNameAuxVariants;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyBlockInfo(int legacyId_, ::HashedString legacyFullName_, ::HashedString legacyRawName_, uchar maxAuxValue_, ::std::vector<::FlatteningUtils::BlockNameRefAuxVariant> newBlockNameAuxVariants_, int startVariant);

    MCAPI ~LegacyBlockInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int legacyId_, ::HashedString legacyFullName_, ::HashedString legacyRawName_, uchar maxAuxValue_, ::std::vector<::FlatteningUtils::BlockNameRefAuxVariant> newBlockNameAuxVariants_, int startVariant);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};

}
