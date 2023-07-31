#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/OperationNodeBase.h"
#include "mc/world/level/newbiome/WorkingData.h"

class AddOceanTemperatureOperationNode : public ::OperationNodeDetails::OperationNodeBase {

public:
    // prevent constructor by default
    AddOceanTemperatureOperationNode& operator=(AddOceanTemperatureOperationNode const&) = delete;
    AddOceanTemperatureOperationNode(AddOceanTemperatureOperationNode const&)            = delete;
    AddOceanTemperatureOperationNode()                                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol
     * ?_fillArea\@AddOceanTemperatureOperationNode\@\@MEBAXAEAV?$WorkingData\@W4BiomeTemperatureCategory\@\@D\@OperationNodeDetails\@\@AEBVPos2d\@\@1\@Z
     */
    virtual void
    _fillArea(class OperationNodeDetails::WorkingData<enum class BiomeTemperatureCategory, char>&, class Pos2d const&, class Pos2d const&)
        const;
    // NOLINTEND
};
