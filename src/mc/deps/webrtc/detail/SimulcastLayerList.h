#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct SimulcastLayer; }
// clang-format on

namespace cricket {

class SimulcastLayerList {
public:
    // prevent constructor by default
    SimulcastLayerList& operator=(SimulcastLayerList const&);
    SimulcastLayerList();

public:
    // NOLINTBEGIN
    // symbol: ?AddLayer@SimulcastLayerList@cricket@@QEAAXAEBUSimulcastLayer@2@@Z
    MCAPI void AddLayer(struct cricket::SimulcastLayer const&);

    // symbol:
    // ?AddLayerWithAlternatives@SimulcastLayerList@cricket@@QEAAXAEBV?$vector@USimulcastLayer@cricket@@V?$allocator@USimulcastLayer@cricket@@@std@@@std@@@Z
    MCAPI void AddLayerWithAlternatives(std::vector<struct cricket::SimulcastLayer> const&);

    // symbol:
    // ?GetAllLayers@SimulcastLayerList@cricket@@QEBA?AV?$vector@USimulcastLayer@cricket@@V?$allocator@USimulcastLayer@cricket@@@std@@@std@@XZ
    MCAPI std::vector<struct cricket::SimulcastLayer> GetAllLayers() const;

    // symbol: ??0SimulcastLayerList@cricket@@QEAA@AEBV01@@Z
    MCAPI SimulcastLayerList(class cricket::SimulcastLayerList const&);

    // symbol: ??4SimulcastLayerList@cricket@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class cricket::SimulcastLayerList& operator=(class cricket::SimulcastLayerList&&);

    // symbol: ??1SimulcastLayerList@cricket@@QEAA@XZ
    MCAPI ~SimulcastLayerList();

    // NOLINTEND
};

}; // namespace cricket
