/**
 * @file  JigsawEditorData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawEditorData.
 *
 */
class JigsawEditorData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWEDITORDATA
public:
    class JigsawEditorData& operator=(class JigsawEditorData const &) = delete;
    JigsawEditorData(class JigsawEditorData const &) = delete;
#endif

public:
    /**
     * @symbol  ??0JigsawEditorData\@\@QEAA\@XZ
     */
    MCAPI JigsawEditorData();
    /**
     * @symbol  ??0JigsawEditorData\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000W4JigsawJointType\@\@\@Z
     */
    MCAPI JigsawEditorData(std::string const &, std::string const &, std::string const &, std::string const &, enum class JigsawJointType);
    /**
     * @symbol  ??0JigsawEditorData\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI JigsawEditorData(class JigsawEditorData &&);
    /**
     * @symbol  ?getFinalBlock\@JigsawEditorData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getFinalBlock() const;
    /**
     * @symbol  ?getJointType\@JigsawEditorData\@\@QEBAAEBW4JigsawJointType\@\@XZ
     */
    MCAPI enum class JigsawJointType const & getJointType() const;
    /**
     * @symbol  ?getName\@JigsawEditorData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol  ?getTarget\@JigsawEditorData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getTarget() const;
    /**
     * @symbol  ?getTargetPool\@JigsawEditorData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getTargetPool() const;
    /**
     * @symbol  ?load\@JigsawEditorData\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?save\@JigsawEditorData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @symbol  ?setFinalBlock\@JigsawEditorData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setFinalBlock(std::string const &);
    /**
     * @symbol  ?setJointType\@JigsawEditorData\@\@QEAAXAEBW4JigsawJointType\@\@\@Z
     */
    MCAPI void setJointType(enum class JigsawJointType const &);
    /**
     * @symbol  ?setName\@JigsawEditorData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setName(std::string const &);
    /**
     * @symbol  ?setTarget\@JigsawEditorData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setTarget(std::string const &);
    /**
     * @symbol  ?setTargetPool\@JigsawEditorData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setTargetPool(std::string const &);
    /**
     * @symbol  ??1JigsawEditorData\@\@QEAA\@XZ
     */
    MCAPI ~JigsawEditorData();

//private:

private:
    /**
     * @symbol  ?JOINT_TYPE_TO_NAME\@JigsawEditorData\@\@0V?$unordered_map\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@H\@2\@U?$equal_to\@H\@2\@V?$allocator\@U?$pair\@$$CBHV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const JOINT_TYPE_TO_NAME;

};