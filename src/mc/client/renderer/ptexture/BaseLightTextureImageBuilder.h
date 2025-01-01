#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseLightData;
class BlockPos;
class Dimension;
class IClientInstance;
struct BrightnessPair;
// clang-format on

class BaseLightTextureImageBuilder {
public:
    // BaseLightTextureImageBuilder inner types declare
    // clang-format off
    struct DarknessLevels;
    // clang-format on

    // BaseLightTextureImageBuilder inner types define
    struct DarknessLevels {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkcb24a9;
        ::ll::UntypedStorage<4, 4> mUnk759980;
        // NOLINTEND

    public:
        // prevent constructor by default
        DarknessLevels& operator=(DarknessLevels const&);
        DarknessLevels(DarknessLevels const&);
        DarknessLevels();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension const*> mDimension;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseLightTextureImageBuilder() = default;

    // vIndex: 1
    virtual void init(::Dimension*);

    // vIndex: 2
    virtual bool hasBrightnessModifier() const;

    // vIndex: 3
    virtual void getModifiedBlockBrightnessColor(::BlockPos const&, ::BrightnessPair&) const;

    // vIndex: 4
    virtual ::std::unique_ptr<::BaseLightData> createBaseLightTextureData(::IClientInstance*, ::BaseLightData const&);
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
