/**
 * @file  IslandOperationNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IslandOperationNode.
 *
 */
class IslandOperationNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISLANDOPERATIONNODE
public:
    class IslandOperationNode& operator=(class IslandOperationNode const &) = delete;
    IslandOperationNode(class IslandOperationNode const &) = delete;
    IslandOperationNode() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~IslandOperationNode();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?_fillArea\@IslandOperationNode\@\@EEBAXAEAV?$WorkingData\@W4Terrain\@OperationNodeValues\@\@D\@OperationNodeDetails\@\@AEBVPos2d\@\@1\@Z
     */
    virtual void _fillArea(class OperationNodeDetails::WorkingData<enum class OperationNodeValues::Terrain, char> &, class Pos2d const &, class Pos2d const &) const;

};