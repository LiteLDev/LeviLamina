#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/biome/components/DefaultSurfaceSettings.h"

namespace SharedTypes::v1_21_100::SurfaceBuilder {

struct SwampSurfaceSettings : public ::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7a2a5a;
    // NOLINTEND

public:
    // prevent constructor by default
    SwampSurfaceSettings& operator=(SwampSurfaceSettings const&);
    SwampSurfaceSettings(SwampSurfaceSettings const&);
    SwampSurfaceSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SwampSurfaceSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::SurfaceBuilder
