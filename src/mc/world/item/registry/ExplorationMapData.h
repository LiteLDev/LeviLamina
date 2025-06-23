#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/MapType.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"

struct ExplorationMapData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MapType>                        mMapType;
    ::ll::TypedStorage<1, 1, ::MapDecoration::Type>            mMarkerType;
    ::ll::TypedStorage<8, 32, ::std::string>                   mFeatureName;
    ::ll::TypedStorage<8, 48, ::HashedString>                  mStructureType;
    ::ll::TypedStorage<1, 1, bool>                             mFeatureMustBeInNewChunks;
    ::ll::TypedStorage<8, 56, ::std::optional<::HashedString>> mBiomeTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ExplorationMapData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExplorationMapData(
        ::MapType                              mapType,
        ::MapDecoration::Type                  markerType,
        ::std::string const&                   featureName,
        ::HashedString                         structureType,
        bool                                   featureMustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );

    MCAPI ~ExplorationMapData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::MapType                              mapType,
        ::MapDecoration::Type                  markerType,
        ::std::string const&                   featureName,
        ::HashedString                         structureType,
        bool                                   featureMustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
