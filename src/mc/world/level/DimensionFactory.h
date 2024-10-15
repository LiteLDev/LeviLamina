#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/util/OwnerPtrFactory.h"
#include "mc/world/level/IDimensionFactory.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

class DimensionFactory : public ::IDimensionFactory {
public:
    // prevent constructor by default
    DimensionFactory& operator=(DimensionFactory const&);
    DimensionFactory(DimensionFactory const&);
    DimensionFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DimensionFactory() = default;

    // vIndex: 1
    virtual class OwnerPtr<class Dimension> create(std::string const& dimensionName) const;

    // vIndex: 2
    virtual void initializeDimension(class Dimension& dimension) const;

    MCAPI DimensionFactory(
        Bedrock::NotNullNonOwnerPtr<class ILevel>       level,
        Bedrock::NotNullNonOwnerPtr<class Scheduler>    scheduler,
        class br::worldgen::StructureSetRegistry const& structureSetRegistry
    );

    MCAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&>& getDimensionOwnerPtrFactory();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        Bedrock::NotNullNonOwnerPtr<class ILevel>       level,
        Bedrock::NotNullNonOwnerPtr<class Scheduler>    scheduler,
        class br::worldgen::StructureSetRegistry const& structureSetRegistry
    );

    MCAPI class OwnerPtr<class Dimension> create$(std::string const& dimensionName) const;

    MCAPI void initializeDimension$(class Dimension& dimension) const;

    // NOLINTEND
};
