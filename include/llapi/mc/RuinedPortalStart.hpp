/**
 * @file  RuinedPortalStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RuinedPortalStart.
 *
 */
class RuinedPortalStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUINEDPORTALSTART
public:
    class RuinedPortalStart& operator=(class RuinedPortalStart const &) = delete;
    RuinedPortalStart(class RuinedPortalStart const &) = delete;
    RuinedPortalStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RuinedPortalStart();
    /**
     * @symbol  ??0RuinedPortalStart\@\@QEAA\@AEAVBiomeRegistry\@\@AEBVBiomeSource\@\@HHAEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI RuinedPortalStart(class BiomeRegistry &, class BiomeSource const &, int, int, class IPreliminarySurfaceProvider const &);

};