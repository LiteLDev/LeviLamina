#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/JigsawJointType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
// clang-format on

class JigsawEditorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk14f849;
    ::ll::UntypedStorage<8, 32> mUnk9a047e;
    ::ll::UntypedStorage<8, 32> mUnkefcf5c;
    ::ll::UntypedStorage<8, 32> mUnkaafd6f;
    ::ll::UntypedStorage<1, 1>  mUnke28605;
    ::ll::UntypedStorage<4, 4>  mUnk4bc52b;
    ::ll::UntypedStorage<4, 4>  mUnk16e2c5;
    ::ll::UntypedStorage<1, 1>  mUnk96f87d;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawEditorData& operator=(JigsawEditorData const&);
    JigsawEditorData(JigsawEditorData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawEditorData();

    MCAPI JigsawEditorData(
        ::std::string const&           name,
        ::std::string const&           target,
        ::std::string const&           targetPool,
        ::std::string const&           finalBlockName,
        ::SharedTypes::JigsawJointType jointType,
        int                            placement,
        int                            selection
    );

    MCAPI ::std::string const& getFinalBlock() const;

    MCAPI ::SharedTypes::JigsawJointType const& getJointType() const;

    MCAPI ::std::string const& getName() const;

    MCAPI int getPlacementPriority() const;

    MCAPI int getSelectionPriority() const;

    MCAPI ::std::string const& getTarget() const;

    MCAPI ::std::string const& getTargetPool() const;

    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::JigsawEditorData& operator=(::JigsawEditorData&&);

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI void setFinalBlock(::std::string const& finalBlock);

    MCAPI void setJointType(::SharedTypes::JigsawJointType const& jointType);

    MCAPI void setJointTypeVisible(bool visible);

    MCAPI void setName(::std::string const& name);

    MCAPI void setTarget(::std::string const& target);

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
    MCAPI void $dtor();
    // NOLINTEND
};
