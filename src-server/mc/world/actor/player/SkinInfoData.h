#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/SerializedSkin.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

class SkinInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>    mDefaultMeshName;
    ::ll::TypedStorage<1, 1, bool>              mIsAlphaTest;
    ::ll::TypedStorage<1, 1, bool>              mIsDirty;
    ::ll::TypedStorage<8, 16, ::SerializedSkin> mSkin;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SkinInfoData() = default;

    // vIndex: 1
    virtual void updateSkin(::SerializedSkin const&, ::mce::Image const*, ::mce::Image const*) = 0;

    // vIndex: 2
    virtual bool hasValidTexture() = 0;

    // vIndex: 3
    virtual bool validateAndResizeSkinData(::mce::Image&, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isValidSize(uint64 skinSize);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
