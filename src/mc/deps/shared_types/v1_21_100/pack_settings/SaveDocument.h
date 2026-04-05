#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/pack_settings/Document.h"

namespace SharedTypes::v1_21_100::PackSettingsDefinition {

struct SaveDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                              mFormatVersion;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_100::PackSettingsDefinition::Document> mDocument;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~SaveDocument();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::PackSettingsDefinition
