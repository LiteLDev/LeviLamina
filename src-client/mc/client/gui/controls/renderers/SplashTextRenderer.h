#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/services/catalog/RequirementCategory.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class ResourceLocation;
class ScreenContext;
class UIControl;
class UICustomRenderer;
namespace Json { class Value; }
// clang-format on

class SplashTextRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>      mCurrentSplash;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mSplashStrings;
    ::ll::TypedStorage<8, 8, double>                        mElapsedTime;
    ::ll::TypedStorage<1, 1, bool>                          mLoadedSplashes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SplashTextRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _checkRequirement(
        ::IClientInstance&    client,
        ::Json::Value const&  requirements,
        ::RequirementCategory category
    ) const;

    MCAPI ::std::vector<::std::string> _loadSplashes(::IClientInstance& client, ::ResourceLocation const& file);

    MCAPI void _reloadSplashTexts(::IClientInstance& client);

    MCAPI void _renderSplashText(
        ::std::string const& splashText,
        ::ScreenContext&     screenContext,
        ::IClientInstance&   client,
        ::UIControl&         owner
    );

    MCAPI bool _shouldShowTrialModeSplashes(::IClientInstance& client) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
