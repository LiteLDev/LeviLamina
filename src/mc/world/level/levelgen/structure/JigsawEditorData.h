#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/world/level/levelgen/structure/JigsawJointType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
// clang-format on

class JigsawEditorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mName;
    ::ll::TypedStorage<8, 32, ::std::string>                 mTarget;
    ::ll::TypedStorage<8, 32, ::std::string>                 mTargetPool;
    ::ll::TypedStorage<8, 32, ::std::string>                 mFinalBlock;
    ::ll::TypedStorage<1, 1, ::SharedTypes::JigsawJointType> mJointType;
    ::ll::TypedStorage<4, 4, int>                            mPlacementPriority;
    ::ll::TypedStorage<4, 4, int>                            mSelectionPriority;
    ::ll::TypedStorage<1, 1, bool>                           mJointTypeVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawEditorData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawEditorData(::JigsawEditorData const&);

    MCAPI JigsawEditorData(
        ::std::string const&           name,
        ::std::string const&           target,
        ::std::string const&           targetPool,
        ::std::string const&           finalBlockName,
        ::SharedTypes::JigsawJointType jointType,
        int                            placement,
        int                            selection
    );

    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::JigsawEditorData& operator=(::JigsawEditorData const&);

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI ~JigsawEditorData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::JigsawEditorData const&);

    MCAPI void* $ctor(
        ::std::string const&           name,
        ::std::string const&           target,
        ::std::string const&           targetPool,
        ::std::string const&           finalBlockName,
        ::SharedTypes::JigsawJointType jointType,
        int                            placement,
        int                            selection
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
