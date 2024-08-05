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
    MCAPI JigsawEditorData();

    MCAPI JigsawEditorData(class JigsawEditorData&&);

    MCAPI JigsawEditorData(class JigsawEditorData const&);

    MCAPI JigsawEditorData(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::JigsawJointType,
        int,
        int
    );

    MCAPI std::string const& getFinalBlock() const;

    MCAPI ::JigsawJointType const& getJointType() const;

    MCAPI std::string const& getName() const;

    MCAPI int getPlacementPriority() const;

    MCAPI int getSelectionPriority() const;

    MCAPI std::string const& getTarget() const;

    MCAPI std::string const& getTargetPool() const;

    MCAPI void load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void save(class CompoundTag& tag) const;

    MCAPI void setFinalBlock(std::string const& finalBlock);

    MCAPI void setJointType(::JigsawJointType const&);

    MCAPI void setName(std::string const& name);

    MCAPI void setTarget(std::string const& target);

    MCAPI void setTargetPool(std::string const& targetPool);

    MCAPI ~JigsawEditorData();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::unordered_map<int, std::string> const JOINT_TYPE_TO_NAME;

    // NOLINTEND
};
