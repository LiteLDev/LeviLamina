#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/JigsawJointType.h"

class JigsawEditorData {
public:
    // prevent constructor by default
    JigsawEditorData& operator=(JigsawEditorData const&);

public:
    // NOLINTBEGIN
    // symbol: ??0JigsawEditorData@@QEAA@XZ
    MCAPI JigsawEditorData();

    // symbol: ??0JigsawEditorData@@QEAA@$$QEAV0@@Z
    MCAPI JigsawEditorData(class JigsawEditorData&&);

    // symbol: ??0JigsawEditorData@@QEAA@AEBV0@@Z
    MCAPI JigsawEditorData(class JigsawEditorData const&);

    // symbol:
    // ??0JigsawEditorData@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000W4JigsawJointType@@HH@Z
    MCAPI JigsawEditorData(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::JigsawJointType,
        int,
        int
    );

    // symbol: ?getFinalBlock@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getFinalBlock() const;

    // symbol: ?getJointType@JigsawEditorData@@QEBAAEBW4JigsawJointType@@XZ
    MCAPI ::JigsawJointType const& getJointType() const;

    // symbol: ?getName@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getPlacementPriority@JigsawEditorData@@QEBAHXZ
    MCAPI int getPlacementPriority() const;

    // symbol: ?getSelectionPriority@JigsawEditorData@@QEBAHXZ
    MCAPI int getSelectionPriority() const;

    // symbol: ?getTarget@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getTarget() const;

    // symbol: ?getTargetPool@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getTargetPool() const;

    // symbol: ?load@JigsawEditorData@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?save@JigsawEditorData@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void save(class CompoundTag& tag) const;

    // symbol: ?setFinalBlock@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setFinalBlock(std::string const& finalBlock);

    // symbol: ?setJointType@JigsawEditorData@@QEAAXAEBW4JigsawJointType@@@Z
    MCAPI void setJointType(::JigsawJointType const&);

    // symbol: ?setName@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setName(std::string const& name);

    // symbol: ?setTarget@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setTarget(std::string const& target);

    // symbol: ?setTargetPool@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setTargetPool(std::string const& targetPool);

    // symbol: ??1JigsawEditorData@@QEAA@XZ
    MCAPI ~JigsawEditorData();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?JOINT_TYPE_TO_NAME@JigsawEditorData@@0V?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@B
    MCAPI static std::unordered_map<int, std::string> const JOINT_TYPE_TO_NAME;

    // NOLINTEND
};
