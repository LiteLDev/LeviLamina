#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/DeserializeDataSettings.h"

// auto generated forward declare list
// clang-format off
class ActorMigratedDefinitionFactory;
// clang-format on

namespace JsonComponentGlueUtils {

struct CustomUpgradeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::DeserializeDataSettings>                               mDeserializeDataSettings;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorMigratedDefinitionFactory const*>> mFactory;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CustomUpgradeData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace JsonComponentGlueUtils
