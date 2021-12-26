// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RuinedPortalStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUINEDPORTALSTART
public:
    class RuinedPortalStart& operator=(class RuinedPortalStart const&) = delete;
    RuinedPortalStart(class RuinedPortalStart const&) = delete;
    RuinedPortalStart() = delete;
#endif

public:
    /*0*/ virtual ~RuinedPortalStart();
    /*1*/ virtual bool isValid() const;
    /*2*/ virtual void __unk_vfn_0();
    /*
    inline enum StructureFeatureType getType() const{
        enum StructureFeatureType (RuinedPortalStart::*rv)() const;
        *((void**)&rv) = dlsym("?getType@RuinedPortalStart@@UEBA?AW4StructureFeatureType@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI RuinedPortalStart(class BiomeSource const&, int, int, short, class IPreliminarySurfaceProvider const&);

protected:

private:

};