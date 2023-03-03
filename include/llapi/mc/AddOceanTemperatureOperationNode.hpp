/**
 * @file  AddOceanTemperatureOperationNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AddOceanTemperatureOperationNode.
 *
 */
class AddOceanTemperatureOperationNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDOCEANTEMPERATUREOPERATIONNODE
public:
    class AddOceanTemperatureOperationNode& operator=(class AddOceanTemperatureOperationNode const &) = delete;
    AddOceanTemperatureOperationNode(class AddOceanTemperatureOperationNode const &) = delete;
    AddOceanTemperatureOperationNode() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AddOceanTemperatureOperationNode();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?_fillArea\@AddOceanTemperatureOperationNode\@\@MEBAXAEAV?$WorkingData\@W4BiomeTemperatureCategory\@\@D\@OperationNodeDetails\@\@AEBVPos2d\@\@1\@Z
     */
    virtual void _fillArea(class OperationNodeDetails::WorkingData<enum class BiomeTemperatureCategory, char> &, class Pos2d const &, class Pos2d const &) const;

};