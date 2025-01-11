#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class ItemCerealSchemaUpgrade : public ::CerealSchemaUpgrade {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemCerealSchemaUpgrade() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemCerealSchemaUpgrade(
        ::SemVersion         targetVersion,
        ::std::string const& mSchemaKey,
        ::std::string const& mJsonMemberName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::SemVersion targetVersion, ::std::string const& mSchemaKey, ::std::string const& mJsonMemberName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
