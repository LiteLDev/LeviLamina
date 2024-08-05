#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/OwnerPtrFactory.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/dimension/IDimensionFactory.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

class ILevel;
class Scheduler;
class Dimension;

class DimensionFactory : public ::IDimensionFactory {
public:
    // prevent constructor by default
    DimensionFactory& operator=(DimensionFactory const&);
    DimensionFactory(DimensionFactory const&);
    DimensionFactory();

    Bedrock::NotNullNonOwnerPtr<ILevel>             mLevel;
    Bedrock::NotNullNonOwnerPtr<Scheduler>          mScheduler;
    OwnerPtrFactory<Dimension, ILevel&, Scheduler&> mDimensionFactory;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DimensionFactory() = default;

    // vIndex: 1
    virtual class OwnerPtr<class Dimension> create(std::string const&) const;

    // vIndex: 2
    virtual void initializeDimension(class Dimension& dimension) const;

    MCAPI
    DimensionFactory(Bedrock::NotNullNonOwnerPtr<class ILevel>, Bedrock::NotNullNonOwnerPtr<class Scheduler>, class br::worldgen::StructureSetRegistry const&);

    MCAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&>& getDimensionOwnerPtrFactory();

    // NOLINTEND
};
