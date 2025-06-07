#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace flighting {

class ConfigurationToggles : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbe097e;
    ::ll::UntypedStorage<8, 8> mUnk58e77b;
    // NOLINTEND

public:
    // prevent constructor by default
    ConfigurationToggles& operator=(ConfigurationToggles const&);
    ConfigurationToggles(ConfigurationToggles const&);
    ConfigurationToggles();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConfigurationToggles() /*override*/ = default;
    // NOLINTEND
};

} // namespace flighting
