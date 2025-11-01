#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/util/OwnerPtrFactory.h"
#include "mc/world/level/DimensionFactoryArguments.h"
#include "mc/world/level/IDimensionFactory.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct DerivedDimensionArguments;
// clang-format on

class ILevel;
class Scheduler;
class Dimension;

class DimensionFactory : public ::IDimensionFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>> mDimensionFactory;
    ::ll::TypedStorage<8, 128, ::DimensionFactoryArguments>                                  mArgs;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::OwnerPtr<::Dimension> create(::std::string const& dimensionName) const /*override*/;

    // vIndex: 2
    virtual void initializeDimension(::Dimension& dimension) const /*override*/;

    // vIndex: 0
    virtual ~DimensionFactory() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::OwnerPtr<::Dimension> $create(::std::string const& dimensionName) const;

    MCNAPI void $initializeDimension(::Dimension& dimension) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
