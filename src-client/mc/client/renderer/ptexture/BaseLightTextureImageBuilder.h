#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class IClientInstance;
class IOptions;
class Player;
struct BaseLightData;
namespace mce { struct Image; }
// clang-format on

class BaseLightTextureImageBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension const*> mDimension;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseLightTextureImageBuilder() = default;

    virtual void init(::Dimension* d);

    virtual bool buildImage(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        float                  ambientBoost,
        bool                   clampToMinimum
    );

    virtual bool buildImageSplit(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        bool                   clampToMinimum
    );

    virtual ::std::unique_ptr<::BaseLightData>
    createBaseLightTextureData(::IClientInstance* client, ::BaseLightData const& currentData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _updateDarknessLightData(::BaseLightData& baseLightData, ::Player const& player, ::IOptions const& options);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::Dimension* d);

    MCNAPI bool $buildImage(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        float                  ambientBoost,
        bool                   clampToMinimum
    );

    MCNAPI bool $buildImageSplit(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        bool                   clampToMinimum
    );

    MCNAPI ::std::unique_ptr<::BaseLightData>
    $createBaseLightTextureData(::IClientInstance* client, ::BaseLightData const& currentData);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
