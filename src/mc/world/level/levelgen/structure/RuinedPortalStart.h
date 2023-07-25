#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class RuinedPortalStart : public ::StructureStart {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUINEDPORTALSTART
public:
    RuinedPortalStart& operator=(RuinedPortalStart const&) = delete;
    RuinedPortalStart(RuinedPortalStart const&)            = delete;
    RuinedPortalStart()                                    = delete;
#endif

public:
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
};
