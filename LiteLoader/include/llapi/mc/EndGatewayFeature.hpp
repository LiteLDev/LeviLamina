/**
 * @file  EndGatewayFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EndGatewayFeature.
 *
 */
class EndGatewayFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDGATEWAYFEATURE
public:
    class EndGatewayFeature& operator=(class EndGatewayFeature const &) = delete;
    EndGatewayFeature(class EndGatewayFeature const &) = delete;
    EndGatewayFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EndGatewayFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@EndGatewayFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};