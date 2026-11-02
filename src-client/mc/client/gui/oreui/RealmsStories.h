#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::RealmsStories { struct FacetCommentData; }
namespace OreUI::RealmsStories { struct FacetPlayerData; }
namespace OreUI::RealmsStories { struct FacetReportData; }
namespace OreUI::RealmsStories { struct FacetSessionData; }
namespace OreUI::RealmsStories { struct FacetStoryData; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::RealmsStories {
// functions
// NOLINTBEGIN
MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::RealmsStories::FacetCommentData* facet);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::RealmsStories::FacetPlayerData* facet);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::RealmsStories::FacetStoryData* facet);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::RealmsStories::FacetReportData* facet);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::RealmsStories::FacetSessionData* facet);
// NOLINTEND

} // namespace OreUI::RealmsStories
