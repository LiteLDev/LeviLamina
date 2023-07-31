#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class RuinedPortalStart : public ::StructureStart {

public:
    // prevent constructor by default
    RuinedPortalStart& operator=(RuinedPortalStart const&) = delete;
    RuinedPortalStart(RuinedPortalStart const&)            = delete;
    RuinedPortalStart()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol
     * ??0RuinedPortalStart\@\@QEAA\@AEAVBiomeRegistry\@\@AEBVBiomeSource\@\@HHAEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI
    RuinedPortalStart(class BiomeRegistry&, class BiomeSource const&, int, int, class IPreliminarySurfaceProvider const&);
    // NOLINTEND
};
