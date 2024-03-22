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
    // vIndex: 0, symbol: __gen_??1DimensionFactory@@UEAA@XZ
    virtual ~DimensionFactory() = default;

    // vIndex: 1, symbol:
    // ?create@DimensionFactory@@UEBA?AV?$OwnerPtr@VDimension@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class OwnerPtr<class Dimension> create(std::string const&) const;

    // vIndex: 2, symbol: ?initializeDimension@DimensionFactory@@UEBAXAEAVDimension@@@Z
    virtual void initializeDimension(class Dimension& dimension) const;

    // symbol:
    // ??0DimensionFactory@@QEAA@V?$not_null@V?$NonOwnerPointer@VILevel@@@Bedrock@@@gsl@@V?$not_null@V?$NonOwnerPointer@VScheduler@@@Bedrock@@@2@AEBVStructureSetRegistry@worldgen@br@@@Z
    MCAPI
    DimensionFactory(Bedrock::NotNullNonOwnerPtr<class ILevel>, Bedrock::NotNullNonOwnerPtr<class Scheduler>, class br::worldgen::StructureSetRegistry const&);

    // symbol:
    // ?getDimensionOwnerPtrFactory@DimensionFactory@@QEAAAEAV?$OwnerPtrFactory@VDimension@@AEAVILevel@@AEAVScheduler@@@@XZ
    MCAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&>& getDimensionOwnerPtrFactory();

    // NOLINTEND
};
