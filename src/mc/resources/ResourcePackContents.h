#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourcePackContents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mUIJson;
    ::ll::TypedStorage<4, 4, uint> mUITextures;
    ::ll::TypedStorage<4, 4, uint> mSound;
    ::ll::TypedStorage<4, 4, uint> mBlockJson;
    ::ll::TypedStorage<4, 4, uint> mBlockTextures;
    ::ll::TypedStorage<4, 4, uint> mItemTextures;
    ::ll::TypedStorage<4, 4, uint> mEntityTextures;
    ::ll::TypedStorage<4, 4, uint> mModelGeometry;
    ::ll::TypedStorage<4, 4, uint> mAnimations;
    ::ll::TypedStorage<4, 4, uint> mMaterials;
    ::ll::TypedStorage<4, 4, uint> mLanguages;
    // NOLINTEND
};
