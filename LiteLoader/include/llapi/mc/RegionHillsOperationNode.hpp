/**
 * @file  RegionHillsOperationNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RegionHillsOperationNode.
 *
 */
class RegionHillsOperationNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REGIONHILLSOPERATIONNODE
public:
    class RegionHillsOperationNode& operator=(class RegionHillsOperationNode const &) = delete;
    RegionHillsOperationNode(class RegionHillsOperationNode const &) = delete;
    RegionHillsOperationNode() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@OperationNodeBase\@OperationNodeDetails\@\@UEAAX_J\@Z
     */
    virtual void init(__int64);
    /**
     * @vftbl 2
     * @symbol ?_allocateAndFill\@?$MixerOperationNode\@PEAVBiome\@\@VPos2d\@\@PEAV1\@$$V\@\@MEBA?AV?$TransferData\@PEAVBiome\@\@\@OperationNodeDetails\@\@_KAEBVPos2d\@\@1\@Z
     */
    virtual class OperationNodeDetails::TransferData<class Biome *> _allocateAndFill(unsigned __int64, class Pos2d const &, class Pos2d const &) const;
    /**
     * @vftbl 3
     * @symbol ?_fillArea\@RegionHillsOperationNode\@\@MEBAXAEAV?$WorkingData\@PEAVBiome\@\@PEAV1\@\@OperationNodeDetails\@\@AEBVPos2d\@\@1H\@Z
     */
    virtual void _fillArea(class OperationNodeDetails::WorkingData<class Biome *, class Biome *> &, class Pos2d const &, class Pos2d const &, int) const;
    /**
     * @vftbl 4
     * @symbol ?_getAreaRead\@RegionHillsOperationNode\@\@MEBA?AV?$tuple\@VPos2d\@\@V1\@\@std\@\@AEBVPos2d\@\@0\@Z
     */
    virtual class std::tuple<class Pos2d, class Pos2d> _getAreaRead(class Pos2d const &, class Pos2d const &) const;
    /**
     * @symbol ??0RegionHillsOperationNode\@\@QEAA\@IAEAV?$shared_ptr\@V?$OperationNode\@PEAVBiome\@\@VPos2d\@\@\@\@\@std\@\@AEAV?$shared_ptr\@V?$OperationNode\@HVPos2d\@\@\@\@\@2\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI RegionHillsOperationNode(unsigned int, class std::shared_ptr<class OperationNode<class Biome *, class Pos2d>> &, class std::shared_ptr<class OperationNode<int, class Pos2d>> &, class BiomeRegistry const &);

};
