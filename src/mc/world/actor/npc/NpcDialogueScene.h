#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct NpcDialogueScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdfdbda;
    ::ll::UntypedStorage<8, 32> mUnk123520;
    ::ll::UntypedStorage<8, 32> mUnke02416;
    ::ll::UntypedStorage<8, 48> mUnke7eff6;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcDialogueScene& operator=(NpcDialogueScene const&);
    NpcDialogueScene(NpcDialogueScene const&);
    NpcDialogueScene();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::NpcDialogueScene& operator=(::NpcDialogueScene&&);

    MCNAPI ~NpcDialogueScene();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NpcDialogueScene
    parse(::Json::Value const& sceneNode, ::std::string const& fileName, int packCommandVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
