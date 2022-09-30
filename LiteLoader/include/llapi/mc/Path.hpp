/**
 * @file  Path.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -832068863
     * @symbol ??0Path@@QEAA@XZ
     */
    MCAPI Path();
    /**
     * @hash   -1131075692
     * @symbol ?currentPos@Path@@QEBA?AVVec3@@PEBVActor@@@Z
     */
    MCAPI class Vec3 currentPos(class Actor const *) const;
    /**
     * @hash   -769014072
     * @symbol ?currentPos@Path@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & currentPos() const;
    /**
     * @hash   237098225
     * @symbol ?endsInXZ@Path@@QEAA_NAEBVVec3@@@Z
     */
    MCAPI bool endsInXZ(class Vec3 const &);
    /**
     * @hash   1546240032
     * @symbol ?getCompletionType@Path@@QEBA?AW4PathCompletionType@@XZ
     */
    MCAPI enum class PathCompletionType getCompletionType() const;
    /**
     * @hash   -491483296
     * @symbol ?getEndPos@Path@@QEBA?AVVec3@@XZ
     */
    MCAPI class Vec3 getEndPos() const;
    /**
     * @hash   1082506615
     * @symbol ?getIndex@Path@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getIndex() const;
    /**
     * @hash   -353616158
     * @symbol ?getLastPos@Path@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getLastPos() const;
    /**
     * @hash   49967728
     * @symbol ?getNodePos@Path@@QEBAAEBVBlockPos@@_K@Z
     */
    MCAPI class BlockPos const & getNodePos(unsigned __int64) const;
    /**
     * @hash   -1766241016
     * @symbol ?getNodeType@Path@@QEBA?AW4NodeType@@_K@Z
     */
    MCAPI enum class NodeType getNodeType(unsigned __int64) const;
    /**
     * @hash   227775566
     * @symbol ?getPos@Path@@QEBA?AVVec3@@PEBVActor@@_K@Z
     */
    MCAPI class Vec3 getPos(class Actor const *, unsigned __int64) const;
    /**
     * @hash   -818613505
     * @symbol ?getSize@Path@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getSize() const;
    /**
     * @hash   1348063020
     * @symbol ?isDone@Path@@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @hash   -272882566
     * @symbol ?isValid@Path@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -1956315926
     * @symbol ?makeCopy@Path@@QEBA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class Path> makeCopy() const;
    /**
     * @hash   -468954075
     * @symbol ?next@Path@@QEAAXXZ
     */
    MCAPI void next();
    /**
     * @hash   256660536
     * @symbol ?sameAs@Path@@QEBA_NPEAV1@@Z
     */
    MCAPI bool sameAs(class Path *) const;
    /**
     * @hash   1544372787
     * @symbol ?setIndex@Path@@QEAAX_K@Z
     */
    MCAPI void setIndex(unsigned __int64);
    /**
     * @hash   -1073498821
     * @symbol ?setSize@Path@@QEAAX_K@Z
     */
    MCAPI void setSize(unsigned __int64);
    /**
     * @hash   -965678065
     * @symbol ??1Path@@QEAA@XZ
     */
    MCAPI ~Path();

//private:
    /**
     * @hash   -217442867
     * @symbol ?buildFromNodes@Path@@AEAAX$$QEAV?$vector@VNode@Path@@V?$allocator@VNode@Path@@@std@@@std@@W4PathCompletionType@@@Z
     */
    MCAPI void buildFromNodes(std::vector<class Path::Node> &&, enum class PathCompletionType);

private:

};