#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/util/OwnerPtrFactory.h"
#include "mc/world/level/IDimensionFactory.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class ILevel;
class Scheduler;
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

class ILevel;
class Scheduler;
class Dimension;

class DimensionFactory : public ::IDimensionFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ILevel>>                 mLevel;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Scheduler>>              mScheduler;
    ::ll::TypedStorage<8, 64, ::OwnerPtrFactory<::Dimension, ::ILevel&, ::Scheduler&>> mDimensionFactory;
    ::ll::TypedStorage<8, 8, ::br::worldgen::StructureSetRegistry const&>              mStructureSetRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionFactory& operator=(DimensionFactory const&);
    DimensionFactory(DimensionFactory const&);
    DimensionFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::OwnerPtr<::Dimension> create(::std::string const& dimensionName) const /*override*/;

    // vIndex: 2
    virtual void initializeDimension(::Dimension& dimension) const /*override*/;

    // vIndex: 0
    virtual ~DimensionFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DimensionFactory(
        ::Bedrock::NotNullNonOwnerPtr<::ILevel>     level,
        ::Bedrock::NotNullNonOwnerPtr<::Scheduler>  scheduler,
        ::br::worldgen::StructureSetRegistry const& structureSetRegistry
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ILevel>     level,
        ::Bedrock::NotNullNonOwnerPtr<::Scheduler>  scheduler,
        ::br::worldgen::StructureSetRegistry const& structureSetRegistry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
