#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/block_geo_type/GeoType.h"
#include "mc/deps/core/string/HashedString.h"

namespace BlockGeoType {

class GeoTypeResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::BlockGeoType::GeoType>> mGeoTypeMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeoTypeResolver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace BlockGeoType
