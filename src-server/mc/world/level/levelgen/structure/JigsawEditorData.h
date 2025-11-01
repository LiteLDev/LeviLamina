#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/world/level/levelgen/structure/JigsawJointType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
// clang-format on

class JigsawEditorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 32, ::std::string> mTarget;
    ::ll::TypedStorage<8, 32, ::std::string> mTargetPool;
    ::ll::TypedStorage<8, 32, ::std::string> mFinalBlock;
    ::ll::TypedStorage<1, 1, ::SharedTypes::JigsawJointType> mJointType;
    ::ll::TypedStorage<4, 4, int> mPlacementPriority;
    ::ll::TypedStorage<4, 4, int> mSelectionPriority;
    ::ll::TypedStorage<1, 1, bool> mJointTypeVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawEditorData& operator=(JigsawEditorData const&);
    JigsawEditorData(JigsawEditorData const&);
    JigsawEditorData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::JigsawEditorData& operator=(::JigsawEditorData&&);

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI ~JigsawEditorData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<int, ::std::string> const& JOINT_TYPE_TO_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
