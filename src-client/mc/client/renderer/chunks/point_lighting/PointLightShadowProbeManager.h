#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/ILightLODResourceProvider.h"
#include "mc/deps/minecraft_renderer/framebuilder/ShadowProbeDescription.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockSource;
namespace PointLighting { class PointLightShadowProbe; }
namespace PointLighting { struct AnalyticLightResources; }
namespace mce { struct PointLightParameters; }
namespace mce { struct TextureResourceService; }
namespace mce::framebuilder { struct PointLightShadowParameters; }
namespace mce::framebuilder { struct ShadowProbeDescription; }
// clang-format on

namespace PointLighting {

class PointLightShadowProbeManager
: public ::PointLighting::ILightLODResourceProvider<::PointLighting::AnalyticLightResources> {
public:
    // PointLightShadowProbeManager inner types define
    using ShadowProbeIndex = int;

    using ProbeMap = ::std::unordered_map<::BlockPos, ::PointLighting::PointLightShadowProbe>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::PointLighting::PointLightShadowProbe>> mActiveProbes;
    ::ll::TypedStorage<
        8,
        8,
        ::std::_List_iterator<::std::_List_val<
            ::std::_List_simple_types<::std::pair<::BlockPos const, ::PointLighting::PointLightShadowProbe>>>>>
                                                                      mNextToQueue;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                     mFreeShadowTextureIndices;
    ::ll::TypedStorage<2, 2, ushort>                                  mPointLightShadowTextureDimension;
    ::ll::TypedStorage<2, 2, ushort>                                  mPointLightShadowTextureArraySize;
    ::ll::TypedStorage<8, 32, ::std::optional<::mce::ClientTexture>>  mPointLightShadowTextureArray;
    ::ll::TypedStorage<4, 4, uint>                                    mCachedFrameCount;
    ::ll::TypedStorage<1, 1, bool>                                    mGeneratingProbeJobs;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, uint>> mPartialProbeUpdates;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>>                  mBlockRegionChanges;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PointLightShadowProbeManager() /*override*/ = default;

    virtual bool atCapacity() const /*override*/;

    virtual bool canReserve(::BlockPos const&) const /*override*/;

    virtual bool acquired(::BlockPos const&) const /*override*/;

    virtual void reserve(
        ::BlockPos const&,
        ::mce::PointLightParameters const&,
        float const,
        ::PointLighting::AnalyticLightResources&
    ) /*override*/;

    virtual void release(::BlockPos const&, ::PointLighting::AnalyticLightResources&) /*override*/;

    virtual void advance(::BlockPos const&, ::PointLighting::AnalyticLightResources&, float) /*override*/;

    virtual void finalize(::BlockPos const&, ::PointLighting::AnalyticLightResources&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::mce::framebuilder::ShadowProbeDescription::ProbeUpdateWorkItem> _createFrameJobs();

    MCAPI void _createTextureArray(::mce::TextureResourceService& textureResourceService);

    MCAPI ::mce::framebuilder::ShadowProbeDescription getShadowFrameData(
        ::mce::framebuilder::PointLightShadowParameters const& shadowParameters,
        ::glm::vec3                                            worldOrigin
    );

    MCAPI void onBlockChanged(
        ::BlockSource&                                         source,
        ::BlockPos const&                                      blockPos,
        ::Block const&                                         block,
        ::Block const&                                         oldBlock,
        ::mce::framebuilder::PointLightShadowParameters const& shadowParameters
    );

    MCAPI void update(
        bool                                                   pointLightShadowsEnabled,
        ::mce::framebuilder::PointLightShadowParameters const& shadowParameters,
        ::mce::TextureResourceService&                         textureResourceService
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PointLighting
