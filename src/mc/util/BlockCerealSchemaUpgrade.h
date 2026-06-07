#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class BlockCerealSchemaUpgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCerealSchemaUpgrade();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockCerealSchemaUpgrade(
        ::SemVersion         targetVersion,
        ::std::string const& mSchemaKey,
        ::std::string const& mJsonMemberName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::SemVersion targetVersion, ::std::string const& mSchemaKey, ::std::string const& mJsonMemberName);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
