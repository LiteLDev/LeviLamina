// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StrongholdStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRONGHOLDSTART
public:
    class StrongholdStart& operator=(class StrongholdStart const &) = delete;
    StrongholdStart(class StrongholdStart const &) = delete;
    StrongholdStart() = delete;
#endif

public:
    /*0*/ virtual ~StrongholdStart();
    /*2*/ virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRONGHOLDSTART
public:
#endif
    MCAPI StrongholdStart(class Dimension &, class Random &, int, int);


//private:
    MCAPI void _initializePieceSet(class Random &);

};