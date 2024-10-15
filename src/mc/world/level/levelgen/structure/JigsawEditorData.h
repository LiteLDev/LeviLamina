#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/JigsawJointType.h"

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
        std::string const& name,
        std::string const& target,
        std::string const& targetPool,
        std::string const& finalBlockName,
        ::JigsawJointType  jointType,
        int                placement,
        int                selection
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

    MCAPI void setJointType(::JigsawJointType const& jointType);

    MCAPI void setName(std::string const& name);

    MCAPI void setTarget(std::string const& target);

    MCAPI void setTargetPool(std::string const& targetPool);

    MCAPI ~JigsawEditorData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class JigsawEditorData const&);

    MCAPI void* ctor$(class JigsawEditorData&&);

    MCAPI void* ctor$(
        std::string const& name,
        std::string const& target,
        std::string const& targetPool,
        std::string const& finalBlockName,
        ::JigsawJointType  jointType,
        int                placement,
        int                selection
    );

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static std::unordered_map<int, std::string> const& JOINT_TYPE_TO_NAME();

    // NOLINTEND
};
