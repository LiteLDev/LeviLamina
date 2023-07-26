#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawEditorData {

public:
    // prevent constructor by default
    JigsawEditorData& operator=(JigsawEditorData const&) = delete;
    JigsawEditorData(JigsawEditorData const&)            = delete;

public:
    /**
     * @symbol ??0JigsawEditorData\@\@QEAA\@XZ
     */
    MCAPI JigsawEditorData(); // NOLINT
    /**
     * @symbol
     * ??0JigsawEditorData\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000W4JigsawJointType\@\@\@Z
     */
    MCAPI JigsawEditorData(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        enum class JigsawJointType
    ); // NOLINT
    /**
     * @symbol ??0JigsawEditorData\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI JigsawEditorData(class JigsawEditorData&&); // NOLINT
    /**
     * @symbol
     * ?getFinalBlock\@JigsawEditorData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getFinalBlock() const; // NOLINT
    /**
     * @symbol ?getJointType\@JigsawEditorData\@\@QEBAAEBW4JigsawJointType\@\@XZ
     */
    MCAPI enum class JigsawJointType const& getJointType() const; // NOLINT
    /**
     * @symbol
     * ?getName\@JigsawEditorData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const; // NOLINT
    /**
     * @symbol
     * ?getTarget\@JigsawEditorData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getTarget() const; // NOLINT
    /**
     * @symbol ?load\@JigsawEditorData\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?save\@JigsawEditorData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?setFinalBlock\@JigsawEditorData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setFinalBlock(std::string const&); // NOLINT
    /**
     * @symbol ?setJointType\@JigsawEditorData\@\@QEAAXAEBW4JigsawJointType\@\@\@Z
     */
    MCAPI void setJointType(enum class JigsawJointType const&); // NOLINT
    /**
     * @symbol
     * ?setName\@JigsawEditorData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setName(std::string const&); // NOLINT
    /**
     * @symbol
     * ?setTarget\@JigsawEditorData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setTarget(std::string const&); // NOLINT
    /**
     * @symbol
     * ?setTargetPool\@JigsawEditorData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setTargetPool(std::string const&); // NOLINT
    /**
     * @symbol ??1JigsawEditorData\@\@QEAA\@XZ
     */
    MCAPI ~JigsawEditorData(); // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?JOINT_TYPE_TO_NAME\@JigsawEditorData\@\@0V?$unordered_map\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@H\@2\@U?$equal_to\@H\@2\@V?$allocator\@U?$pair\@$$CBHV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        int,
        std::string,
        struct std::hash<int>,
        struct std::equal_to<int>,
        class std::allocator<struct std::pair<int const, std::string>>> const JOINT_TYPE_TO_NAME; // NOLINT
};
