// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WeightedRandomFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEIGHTEDRANDOMFEATURE
public:
    class WeightedRandomFeature& operator=(class WeightedRandomFeature const&) = delete;
    WeightedRandomFeature(class WeightedRandomFeature const&) = delete;
#endif

public:
    /*0*/ virtual ~WeightedRandomFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /*2*/ virtual void __unk_vfn_0();
    MCAPI WeightedRandomFeature();

protected:

private:

};