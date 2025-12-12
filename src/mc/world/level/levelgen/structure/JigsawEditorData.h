#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    JigsawEditorData(JigsawEditorData const&);
    JigsawEditorData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI ::JigsawEditorData& operator=(::JigsawEditorData&&);

    MCNAPI_C ::JigsawEditorData& operator=(::JigsawEditorData const&);

    MCNAPI void save(::CompoundTag& tag) const;

    MCNAPI ~JigsawEditorData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<int, ::std::string> const& JOINT_TYPE_TO_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
