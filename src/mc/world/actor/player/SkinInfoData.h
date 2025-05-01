#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SerializedSkin;
namespace mce { struct Image; }
// clang-format on

class SkinInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk104d2d;
    ::ll::UntypedStorage<1, 1>   mUnkbcf085;
    ::ll::UntypedStorage<1, 1>   mUnke33fb1;
    ::ll::UntypedStorage<8, 528> mUnk451ea9;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinInfoData& operator=(SkinInfoData const&);
    SkinInfoData(SkinInfoData const&);
    SkinInfoData();

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
    MCNAPI static bool isValidSize(uint64 skinSize);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
