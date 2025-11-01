#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct ParticleEffectData; }
namespace SharedTypes::v1_21_100 { struct CameraDocument; }
namespace SharedTypes::v1_21_110 { struct VoxelShapeDocument; }
namespace SharedTypes::v1_21_30 { struct TradeTableData; }
// clang-format on

namespace Bedrock::Resources {

class LoaderRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnk6a1cdf;
    // NOLINTEND

public:
    // prevent constructor by default
    LoaderRegistry& operator=(LoaderRegistry const&);
    LoaderRegistry(LoaderRegistry const&);
    LoaderRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoaderRegistry() = default;

    // vIndex: 1
    virtual ::Puv::Loader<::SharedTypes::v1_20_80::ParticleEffectData> const& getParticleLoader() const = 0;

    // vIndex: 2
    virtual ::Puv::Loader<::SharedTypes::v1_21_100::CameraDocument> const& getCameraLoader() const = 0;

    // vIndex: 3
    virtual ::Puv::Loader<::SharedTypes::v1_21_110::VoxelShapeDocument> const& getVoxelShapeLoader() const = 0;

    // vIndex: 4
    virtual ::Puv::Loader<::SharedTypes::v1_21_30::TradeTableData> const& getTradeTableLoader() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Resources
