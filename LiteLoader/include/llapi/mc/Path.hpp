/**
 * @file  Path.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

enum class NodeType;
enum class PathCompletionType;

#undef BEFORE_EXTRA

/**
 * @brief MC class Path.
 *
 */
class Path {

#define AFTER_EXTRA
// Add Member There
public:
    class Node
    {
        BlockPos mPos;
        enum class NodeType mType;
    };

    std::vector<Node> mNodes;
    size_t mIndex;
    enum class PathCompletionType mCompletionType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATH
public:
    class Path& operator=(class Path const &) = delete;
    Path(class Path const &) = delete;
#endif

public:
    /**
     * @hash   27218897
     * @symbol  ??0Path\@\@QEAA\@XZ
     */
    MCAPI Path();
    /**
     * @hash   -271787932
     * @symbol  ?currentPos\@Path\@\@QEBA?AVVec3\@\@PEBVActor\@\@\@Z
     */
    MCAPI class Vec3 currentPos(class Actor const *) const;
    /**
     * @hash   90273688
     * @symbol  ?currentPos\@Path\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & currentPos() const;
    /**
     * @hash   1096385985
     * @symbol  ?endsInXZ\@Path\@\@QEAA_NAEBVVec3\@\@\@Z
     */
    MCAPI bool endsInXZ(class Vec3 const &);
    /**
     * @hash   1818564368
     * @symbol  ?getCompletionType\@Path\@\@QEBA?AW4PathCompletionType\@\@XZ
     */
    MCAPI enum class PathCompletionType getCompletionType() const;
    /**
     * @hash   367804464
     * @symbol  ?getEndPos\@Path\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getEndPos() const;
    /**
     * @hash   1335903095
     * @symbol  ?getIndex\@Path\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getIndex() const;
    /**
     * @hash   505671602
     * @symbol  ?getLastPos\@Path\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getLastPos() const;
    /**
     * @hash   909255488
     * @symbol  ?getNodePos\@Path\@\@QEBAAEBVBlockPos\@\@_K\@Z
     */
    MCAPI class BlockPos const & getNodePos(unsigned __int64) const;
    /**
     * @hash   -906953256
     * @symbol  ?getNodeType\@Path\@\@QEBA?AW4NodeType\@\@_K\@Z
     */
    MCAPI enum class NodeType getNodeType(unsigned __int64) const;
    /**
     * @hash   1087063326
     * @symbol  ?getPos\@Path\@\@QEBA?AVVec3\@\@PEBVActor\@\@_K\@Z
     */
    MCAPI class Vec3 getPos(class Actor const *, unsigned __int64) const;
    /**
     * @hash   -1770649297
     * @symbol  ?getSize\@Path\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getSize() const;
    /**
     * @hash   -2087616516
     * @symbol  ?isDone\@Path\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @hash   586405194
     * @symbol  ?isValid\@Path\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -1097028166
     * @symbol  ?makeCopy\@Path\@\@QEBA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class Path> makeCopy() const;
    /**
     * @hash   390333685
     * @symbol  ?next\@Path\@\@QEAAXXZ
     */
    MCAPI void next();
    /**
     * @hash   1115948296
     * @symbol  ?sameAs\@Path\@\@QEBA_NPEAV1\@\@Z
     */
    MCAPI bool sameAs(class Path *) const;
    /**
     * @hash   -1891306749
     * @symbol  ?setIndex\@Path\@\@QEAAX_K\@Z
     */
    MCAPI void setIndex(unsigned __int64);
    /**
     * @hash   -214211061
     * @symbol  ?setSize\@Path\@\@QEAAX_K\@Z
     */
    MCAPI void setSize(unsigned __int64);
    /**
     * @hash   -872883905
     * @symbol  ??1Path\@\@QEAA\@XZ
     */
    MCAPI ~Path();

//private:
    /**
     * @hash   641844893
     * @symbol  ?buildFromNodes\@Path\@\@AEAAX$$QEAV?$vector\@VNode\@Path\@\@V?$allocator\@VNode\@Path\@\@\@std\@\@\@std\@\@W4PathCompletionType\@\@\@Z
     */
    MCAPI void buildFromNodes(std::vector<class Path::Node> &&, enum class PathCompletionType);

private:

};