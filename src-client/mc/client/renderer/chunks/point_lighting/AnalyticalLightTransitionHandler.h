#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/ILightLODResourceProvider.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace PointLighting { struct AnalyticLightResources; }
namespace mce { struct PointLightParameters; }
// clang-format on

namespace PointLighting {

class AnalyticalLightTransitionHandler
: public ::PointLighting::ILightLODResourceProvider<::PointLighting::AnalyticLightResources> {
public:
    // virtual functions
    // NOLINTBEGIN
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

    virtual ~AnalyticalLightTransitionHandler() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PointLighting
