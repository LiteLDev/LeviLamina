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
    MCNAPI JigsawEditorData(::JigsawEditorData const&);

    MCNAPI JigsawEditorData(
        ::std::string const&           name,
        ::std::string const&           target,
        ::std::string const&           targetPool,
        ::std::string const&           finalBlockName,
        ::SharedTypes::JigsawJointType jointType,
        int                            placement,
        int                            selection
    );

    MCNAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

#ifdef LL_PLAT_S
    MCNAPI ::JigsawEditorData& operator=(::JigsawEditorData&&);
#endif

    MCNAPI ::JigsawEditorData& operator=(::JigsawEditorData const&);

    MCNAPI void save(::CompoundTag& tag) const;

    MCNAPI ~JigsawEditorData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<int, ::std::string> const& JOINT_TYPE_TO_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JigsawEditorData const&);

    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};
