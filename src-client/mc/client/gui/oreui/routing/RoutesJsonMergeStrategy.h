#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/ResourcePackMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
struct PackIdVersion;
struct PackInstanceId;
namespace OreUI { struct RouteData; }
// clang-format on

namespace OreUI {

class RoutesJsonMergeStrategy : public ::ResourcePackMergeStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::vector<::OreUI::RouteData>&>     mRoutes;
    ::ll::TypedStorage<8, 8, ::std::vector<::PackIdVersion>&>        mRoutesMetadata;
    ::ll::TypedStorage<8, 8, ::std::vector<::PackInstanceId> const&> mFullStackMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    RoutesJsonMergeStrategy& operator=(RoutesJsonMergeStrategy const&);
    RoutesJsonMergeStrategy(RoutesJsonMergeStrategy const&);
    RoutesJsonMergeStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void mergeFiles(::std::vector<::LoadedResourceData> const& fileStack) /*override*/;

    virtual ~RoutesJsonMergeStrategy() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _removeRoutes(::OreUI::RouteData const& newRouteData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $mergeFiles(::std::vector<::LoadedResourceData> const& fileStack);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
