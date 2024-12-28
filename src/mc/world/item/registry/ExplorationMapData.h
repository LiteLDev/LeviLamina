#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/MapType.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct ExplorationMapData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd397f8;
    ::ll::UntypedStorage<1, 1>  mUnk5ec1c3;
    ::ll::UntypedStorage<8, 32> mUnkdfa1e3;
    ::ll::UntypedStorage<8, 48> mUnk7942a7;
    ::ll::UntypedStorage<1, 1>  mUnkf76ab7;
    ::ll::UntypedStorage<8, 56> mUnkcfce3c;
    // NOLINTEND

public:
    // prevent constructor by default
    ExplorationMapData& operator=(ExplorationMapData const&);
    ExplorationMapData(ExplorationMapData const&);
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
