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
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawEditorData();

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

    MCFOLD ::std::string const& getFinalBlock() const;

    MCFOLD ::SharedTypes::JigsawJointType const& getJointType() const;

    MCFOLD bool getJointTypeVisible() const;

    MCFOLD ::std::string const& getName() const;

    MCFOLD int getPlacementPriority() const;

    MCFOLD int getSelectionPriority() const;

    MCFOLD ::std::string const& getTarget() const;

    MCFOLD ::std::string const& getTargetPool() const;

    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD ::JigsawEditorData& operator=(::JigsawEditorData&&);

    MCFOLD ::JigsawEditorData& operator=(::JigsawEditorData const&);

    MCAPI void save(::CompoundTag& tag) const;

    MCFOLD void setFinalBlock(::std::string const& finalBlock);

    MCFOLD void setJointType(::SharedTypes::JigsawJointType const& jointType);

    MCAPI void setJointTypeFromName(::std::string const& name);

    MCAPI void setJointTypeVisible(bool visible);

    MCFOLD void setName(::std::string const& name);

#ifdef LL_PLAT_C
    MCFOLD void setPlacementPriority(int priority);

    MCFOLD void setSelectionPriority(int priority);
#endif

    MCFOLD void setTarget(::std::string const& target);

    MCAPI void setTargetPool(::std::string const& targetPool);

    MCAPI ~JigsawEditorData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<int, ::std::string> const& JOINT_TYPE_TO_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCFOLD void* $ctor(::JigsawEditorData const&);

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
