#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/world/level/levelgen/structure/JigsawJointType.h"

namespace Editor::Services {

struct JigsawBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc1a03e;
    ::ll::UntypedStorage<8, 32> mUnk3043cd;
    ::ll::UntypedStorage<8, 32> mUnk52ca9c;
    ::ll::UntypedStorage<8, 32> mUnkb5aa11;
    ::ll::UntypedStorage<1, 1>  mUnk58f6f4;
    ::ll::UntypedStorage<4, 4>  mUnk5eef34;
    ::ll::UntypedStorage<4, 4>  mUnk58c9b5;
    ::ll::UntypedStorage<1, 1>  mUnke6ef36;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawBlockData(::Editor::Services::JigsawBlockData const&);

    MCNAPI JigsawBlockData(
        ::std::string const&           name,
        ::std::string const&           target,
        ::std::string const&           targetPool,
        ::std::string const&           finalBlock,
        ::SharedTypes::JigsawJointType jointType,
        int                            placementPriority,
        int                            selectionPriority,
        bool                           jointTypeVisible
    );

    MCNAPI ::Editor::Services::JigsawBlockData& operator=(::Editor::Services::JigsawBlockData&&);

    MCNAPI ::Editor::Services::JigsawBlockData& operator=(::Editor::Services::JigsawBlockData const&);

    MCNAPI ~JigsawBlockData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Services::JigsawBlockData const&);

    MCNAPI void* $ctor(
        ::std::string const&           name,
        ::std::string const&           target,
        ::std::string const&           targetPool,
        ::std::string const&           finalBlock,
        ::SharedTypes::JigsawJointType jointType,
        int                            placementPriority,
        int                            selectionPriority,
        bool                           jointTypeVisible
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
